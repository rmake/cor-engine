
#include "rts_object_cost_grid_space.h"

#include <boost/graph/adjacency_list.hpp>
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl_impl.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl_impl.h"
#include "cor_system/sources/cor_time.h"

namespace cor
{
    namespace cocos2dx_converter
    {

        RtsObjectCostGridSpaceCell::RtsObjectCostGridSpaceCell()
        {
            parent = nullptr;
            wall = rfalse;
            min_cost = FloatMax;
        }

        struct RtsObjectCostGridSpaceItnl
        {
            typedef boost::adjacency_list<boost::vecS, boost::listS, boost::undirectedS,
                RtsObjectCostGridSpaceCellPtr, boost::property<boost::edge_weight_t, RFloat> > Graph;
            typedef std::set<RtsObjectSP> RtsObjectSet;
            typedef data_structure::UniformGridTmpl<RtsObjectCostGridSpaceCell, type::Vector2I> Cells;


            Graph g;
            std::map<RtsObjectCostGridSpaceCellPtr, RtsObjectCostGridSpaceItnl::Graph::vertex_descriptor> vd_map;
            RtsObjectSet objects;
            Cells cells;

            RInt32 wall_kind;
            type::Vector2F scale;
            type::Vector2F offset;

            Collision2dNodeSP collision;
            data_structure::CostGridSpaceSP cost_grid_space;
            RtsObjectGroupSP object_group;

            RtsObjectCostGridSpaceItnl()
            {
                wall_kind = -1;
                scale.set(1.0f, 1.0f);
                offset.set(0.0f, 0.0f);
            }
        };
        
        RtsObjectCostGridSpace::RtsObjectCostGridSpace() : itnl(new RtsObjectCostGridSpaceItnl())
        {
            
        }

        RtsObjectCostGridSpace::RtsObjectCostGridSpace(Collision2dNodeSP collision, data_structure::CostGridSpaceSP cost_grid_space, RtsObjectGroupSP object_group) : itnl(new RtsObjectCostGridSpaceItnl())
        {
            itnl->collision = collision;
            itnl->cost_grid_space = cost_grid_space;
            itnl->object_group = object_group;

            auto vsz = itnl->cost_grid_space->get_size();
            itnl->cells.resize(vsz);
            auto& cells = itnl->cells.ref_a();
            RSize ct = 0;
            for(auto& cell : cells)
            {
                cell.position.x = ct % vsz.x;
                cell.position.y = ct / vsz.x;
                cell.a.clear();
                cell.parent = nullptr;
                ct++;
            }
        }
        
        RtsObjectCostGridSpace::~RtsObjectCostGridSpace()
        {
            
        }

        void RtsObjectCostGridSpace::set_wall_kind(RInt32 wall_kind)
        {
            itnl->wall_kind = wall_kind;
        }

        void RtsObjectCostGridSpace::set_index_convert(type::Vector2F scale, type::Vector2F offset)
        {
            itnl->scale = scale;
            itnl->offset = offset;
        }

        void RtsObjectCostGridSpace::add(RtsObjectSP o)
        {
            itnl->objects.insert(o);
        }

        void RtsObjectCostGridSpace::remove(RtsObjectSP o)
        {
            itnl->objects.erase(o);
        }

        void RtsObjectCostGridSpace::each_vertices(std::function<void(RtsObjectCostGridSpaceCellPtr)> callback)
        {
            auto va = boost::vertices(itnl->g);
            for(auto v = va.first; v != va.second; v++)
            {
                callback(itnl->g[*v]);
            }
        }
        
        void RtsObjectCostGridSpace::each_edges(std::function<void(RtsObjectCostGridSpaceCellPtr, RtsObjectCostGridSpaceCellPtr, RFloat)> callback)
        {
            auto ea = boost::edges(itnl->g);
            const auto w = boost::get(boost::edge_weight, itnl->g);
            for(auto e = ea.first; e != ea.second; e++)
            {
                callback(itnl->g[boost::source(*e, itnl->g)], itnl->g[boost::target(*e, itnl->g)], w[*e]);
            }
        }

        void RtsObjectCostGridSpace::each_cell(std::function<void(RtsObjectCostGridSpaceCellPtr)> callback)
        {
            for(auto& cell : itnl->cells.ref_a())
            {
                callback(&cell);
            }
        }

        void RtsObjectCostGridSpace::make_graph()
        {
            auto vsz = itnl->cost_grid_space->get_size();

            auto& g = itnl->g;

            g.clear();

            auto& cells = itnl->cells.ref_a();
            for(auto& cell : cells)
            {
                cell.wall = rfalse;
                cell.min_cost = FloatMax;
                cell.a.clear();
                cell.parent = nullptr;
                cell.root = &cell;
            }

            auto vec_f_to_i = [=](type::Vector2F p){
                return type::Vector2I(RInt32(p.x / itnl->scale.x - itnl->offset.x), 
                    RInt32(p.y / itnl->scale.y - itnl->offset.y));
            };

            std::set<RtsObjectCostGridSpaceCellPtr> object_cells;

            for(auto o : itnl->objects)
            {
                auto ip = vec_f_to_i(o->get_position());
                auto& cell = itnl->cells.ref(ip);

                if(o->get_kind() == itnl->wall_kind)
                {
                    cell.wall = rtrue;
                }

                object_cells.insert(&cell);

                cell.a.push_back(o);
            }

            itnl->vd_map.clear();

            for(auto& cell : object_cells)
            {
                auto vd = boost::add_vertex(g);
                itnl->g[vd] = &*cell;
                itnl->vd_map[&*cell] = vd;
            }

            struct State
            {
                RFloat cost;
                RtsObjectCostGridSpaceCellPtr cell;
            };

            typedef data_structure::InstantStackDecoderTmpl<RFloat, State> StackDecoder;

            StackDecoder sd;
            const auto w = boost::get(boost::edge_weight, g);

            auto next_state = [&](RInt32 x, RInt32 y, const State& prev_state, std::function<void(const State&)> f){
                type::Vector2I vi = prev_state.cell->position;
                vi.x += x;
                vi.y += y;

                if(vi.x < 0) return;
                if(vi.y < 0) return;
                if(vi.x >= vsz.x) return;
                if(vi.y >= vsz.y) return;
                State next_state;
                next_state.cost = prev_state.cost + sqrtf(RFloat(x * x + y * y));
                next_state.cell = &itnl->cells.ref(vi);
                if(next_state.cost < next_state.cell->min_cost)
                {
                    next_state.cell->min_cost = next_state.cost;
                    next_state.cell->parent = prev_state.cell;
                    next_state.cell->root = prev_state.cell->root;
                    f(next_state);
                }
                else
                {
                    if(prev_state.cell->root && next_state.cell->root && (
                        prev_state.cell->root != next_state.cell->root
                        ))
                    {
                        
                        auto vd0 = itnl->vd_map[prev_state.cell->root];
                        auto vd1 = itnl->vd_map[next_state.cell->root];
                        auto e = boost::edge(vd0, vd1, g);
                        auto cost = prev_state.cell->min_cost + next_state.cell->min_cost;
                        if(!e.second)
                        {
                            auto ed = boost::add_edge(vd0, vd1, 
                                cost, g);
                        }
                        else
                        {
                            if(w[e.first] > cost)
                            {
                                w[e.first] = cost;
                            }
                        }
                    }
                    
                }
            };

            
            sd.set_func([&](const State& state){
                return state.cost;
            }, [&](const State& state, std::function<void(const State&)> f){
                next_state(-1, 0, state, f);
                next_state(1, 0, state, f);
                next_state(0, -1, state, f);
                next_state(0, 1, state, f);

            }, [&](const State& state){
                return rfalse;
            });

            for(auto& cell : object_cells)
            {
                if(!cell->wall)
                {
                    State state;
                    state.cell = &*cell;
                    state.cost = 0.0f;
                    sd.push(state);
                }
                
                cell->min_cost = 0.0f;
            }

            sd.search([&](const State& state){
                return rfalse;
            });

        }

    }
}
