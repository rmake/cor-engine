
#include "rts_object_cost_grid_space_experimental.h"

#include "cor_type/sources/math/vector2.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl_impl.h"

#include <boost/graph/adjacency_list.hpp>

#include "cocos2d.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceExperimentalItnl
        {
            
        };
        
        RtsObjectCostGridSpaceExperimental::RtsObjectCostGridSpaceExperimental() : itnl(new RtsObjectCostGridSpaceExperimentalItnl())
        {
            
        }
        
        RtsObjectCostGridSpaceExperimental::~RtsObjectCostGridSpaceExperimental()
        {
            
        }

        RString RtsObjectCostGridSpaceExperimental::run1(cocos2d::DrawNode* draw_node)
        {
            typedef boost::adjacency_list<boost::listS, boost::listS, boost::undirectedS,
                type::Vector2F, boost::property<boost::edge_weight_t, RFloat> > Graph;

            Graph g;

            RStringStream s;

            s << "graph run 1\n";
            
            auto va = {
                type::Vector2F(100.0f, 100.0f),
                type::Vector2F(200.0f, 100.0f),
                type::Vector2F(300.0f, 100.0f),
                type::Vector2F(100.0f, 250.0f),
                type::Vector2F(200.0f, 400.0f)
            };

            std::vector<Graph::vertex_descriptor> vda;

            for(auto v: va)
            {
                auto vd = boost::add_vertex(g);

                g[vd] = v;

                vda.push_back(vd);
            }

            typedef std::pair<RInt32, RInt32> Pair;

            auto ea = {
                Pair(0, 1),
                Pair(1, 2),
                Pair(0, 3),
                Pair(1, 3),
                Pair(2, 3),
                Pair(3, 4),
                Pair(2, 4)
            };

            for(auto e : ea)
            {
                auto ed = boost::add_edge(vda[e.first], vda[e.second], g[vda[e.first]].distance(g[vda[e.second]]), g);
            }

            auto w = boost::get(boost::edge_weight, g);

            auto vta = boost::vertices(g);
            for(auto v = vta.first; v != vta.second; v++)
            {
                s << "v " << g[*v].x << ", " << g[*v].y << "\n";
                auto ea = boost::out_edges(*v, g);
                for(auto e = ea.first; e != ea.second; e++)
                {
                    s << "e (" << g[boost::source(*e, g)].x << ", " << g[boost::source(*e, g)].y << "), -> " <<
                        "(" << g[boost::target(*e, g)].x << ", " << g[boost::target(*e, g)].y << ") = " << boost::get(w, *e) << "\n";

                    draw_node->drawSegment(cocos2d::Vec2(g[boost::source(*e, g)].x, g[boost::source(*e, g)].y),
                        cocos2d::Vec2(g[boost::target(*e, g)].x, g[boost::target(*e, g)].y), 1.0f,
                        cocos2d::Color4F(1.0f, 0.0f, 0.0f, 1.0f));
                }
            }

            std::map<Graph::vertex_descriptor, RFloat> vertex_cost_table;
            std::map<Graph::vertex_descriptor, Graph::vertex_descriptor> vertex_parent_table;
            struct State
            {
                Graph::vertex_descriptor vd;
                RFloat cost;

                State()
                {
                    vd = nullptr;
                    cost = 0.0f;
                }
            };

            typedef data_structure::InstantStackDecoderTmpl<RFloat, State> StackDecoder;

            StackDecoder sd;

            s << "searching" << "\n";

            sd.set_func([&](const State& state){
                return state.cost;
            }, [&](const State& state, std::function<void(const State&)> f){
                auto ea = boost::out_edges(state.vd, g);
                auto& src = g[state.vd];
                for(auto e = ea.first; e != ea.second; e++)
                {
                    auto target_vd = boost::target(*e, g);
                    auto& tgt = g[target_vd];
                    auto cost = state.cost + src.distance(tgt);

                    if(vertex_cost_table.find(target_vd) != vertex_cost_table.end())
                    {
                        if(vertex_cost_table[target_vd] <= cost)
                        {
                            continue;
                        }
                    }

                    State st;
                    vertex_cost_table[target_vd] = cost;
                    vertex_parent_table[target_vd] = state.vd;
                    st.vd = target_vd;
                    st.cost = cost;

                    s << "(" << g[target_vd].x << ", " << g[target_vd].y << "), " << cost << "\n";

                    f(st);
                }
            }, [&](const State& state){
                return state.vd == vda[4];
            });


            State first_state;
            first_state.vd = vda[0];
            vertex_cost_table[vda[0]] = 0.0f;
            vertex_parent_table[vda[0]] = nullptr;
            sd.push(first_state);

            s << "path" << "\n";
            sd.search_first_n(1, [&](const State& state){
                Graph::vertex_descriptor vd = state.vd;
                while(vd)
                {
                    s << "(" << g[vd].x << ", " << g[vd].y << ")" << "\n";

                    vd = vertex_parent_table[vd];
                }

                return rtrue;
            });

            
            return s.str();
        }

        RString RtsObjectCostGridSpaceExperimental::run2(cocos2d::Node* root_node, cocos2d::DrawNode* draw_node, Collision2dNodeSP collision, data_structure::CostGridSpaceSP cost_grid_space, RtsObjectGroupSP object_group)
        {
            auto cgs = std::make_shared<RtsObjectCostGridSpace>(collision, cost_grid_space, object_group);
            cgs->set_wall_kind(2);

            cgs->set_index_convert(type::Vector2F(10.0f, 10.0f), type::Vector2F(0.0f, 0.0f));

            struct Character
            {
                type::Vector2F p;
                cocos2d::Color4F c;
                Collision2dNodeRef r;
                RtsObjectSP o;
                cocos2d::Node* n;

                Character(RFloat x, RFloat y, RFloat r, RFloat g, RFloat b, RFloat a)
                {
                    p = type::Vector2F(x, y);
                    c = cocos2d::Color4F(r, g, b, a);
                }
            };

            RStringStream s;

            Character ca[] = {
                Character(50.0f, 50.0f, 1.0f, 0.0f, 0.0f, 1.0f),
                Character(120.0f, 50.0f, 1.0f, 1.0f, 0.0f, 1.0f),
                Character(200.0f, 50.0f, 1.0f, 0.0f, 1.0f, 1.0f),
                Character(50.0f, 100.0f, 0.0f, 1.0f, 0.0f, 1.0f),
                Character(200.0f, 200.0f, 0.0f, 1.0f, 1.0f, 1.0f)
            };

            s << "test run2";

            std::vector<Collision2dNodeRef> refs;

            auto vec_i_to_f = [](type::Vector2I vi){
                return type::Vector2F(vi.x * 10.0f, vi.y * 10.0f);
            };

            auto vec_f_to_i = [](type::Vector2F vf){
                return type::Vector2F(static_cast<RInt32>(vf.x / 10.0f + 0.5f), static_cast<RInt32>(vf.y / 10.0f + 0.5f));
            };

            

            RSize sz = 30;

            for(RSize i = 0; i < 10; i++)
            {
                auto ip = type::Vector2I(10, i + 5);
                auto& cell = cost_grid_space->ref(ip);
                cell.enter_cost = 2.0f;
                //cell.passable = rfalse;
            }

            for(RSize i = 0; i < 7; i++)
            {
                auto ip = type::Vector2I(10 + i, 10);
                auto& cell = cost_grid_space->ref(ip);
                cell.enter_cost = 2.0f;
                //cell.passable = rfalse;
            }

            for(RSize i = 0; i < sz; i++)
            {
                for(RSize j = 0; j < sz; j++)
                {
                    auto ip = type::Vector2I(j, i);
                    auto vp = vec_i_to_f(ip);
                    auto& cell = cost_grid_space->ref(ip);

                    cocos2d::Node* n;
                    if(cell.enter_cost < 1.5f)
                    {
                        //auto l = cocos2d::LayerColor::create(cocos2d::Color4B(127, 127, 127, 64), 10, 10);
                        //l->setPosition(vp.x, vp.y);
                        //
                        //root_node->addChild(l);
                        //
                        //n = l;

                        
                    }
                    else
                    {
                        auto l = cocos2d::LayerColor::create(cocos2d::Color4B(255, 255, 255, 127), 10, 10);
                        l->setPosition(vp.x, vp.y);

                        root_node->addChild(l);

                        n = l;

                        //
                        auto r = collision->add_o_box(n, 0, type::Box2F(0, 0, 10, 10), [=](cocos2d::Node*, cocos2d::Node*){

                        });
                        refs.push_back(r);

                        //
                        auto o = object_group->create_object(r);
                        o->set_kind(2);
                        cgs->add(o);
                    }


                }
            }

            for(auto& c : ca)
            {
                auto n = cocos2d::LayerColor::create(cocos2d::Color4B(c.c), 10, 10);
                n->setPosition(c.p.x, c.p.y);
                c.n = n;
                root_node->addChild(n);

                //
                auto r = collision->add_o_box(n, 0, type::Box2F(0, 0, 10, 10), [=](cocos2d::Node*, cocos2d::Node*){

                });
                c.r = r;
                refs.push_back(r);

                //
                auto o = object_group->create_object(r);
                o->set_kind(1);
                c.o = o;
                cgs->add(o);

                //
                auto ip = vec_f_to_i(c.p);
                auto& cell = cost_grid_space->ref(ip);

                
            }

            cgs->make_graph();

            cgs->each_vertices([&](RtsObjectCostGridSpaceCellPtr cell){
                //s << "v (" << cell->position.x << ", " << cell->position.y << ")" << "\n";
            });

            cgs->each_edges([&](RtsObjectCostGridSpaceCellPtr source, RtsObjectCostGridSpaceCellPtr target, RFloat w){
                //s << "e s (" << source->position.x << ", " << source->position.y << "), " <<
                //    "t(" << target->position.x << ", " << target->position.y << ")" << ", w " << w << "\n";

                auto v0 = vec_i_to_f(source->position);
                auto v1 = vec_i_to_f(target->position);
                auto color = cocos2d::Color4F(1.0f, 0.0f, 0.0f, 1.0f);
                if(source->wall || target->wall)
                {
                    color = cocos2d::Color4F(0.0f, 0.0f, 1.0f, 1.0f);
                }

                draw_node->drawSegment(cocos2d::Vec2(v0.x + 5.0f, v0.y + 5.0f), cocos2d::Vec2(v1.x + 5.0f, v1.y + 5.0f), 1.0f, color);
            });

            //cgs->each_cell([&](RtsObjectCostGridSpaceCellPtr cell){
            //    auto l = static_cast<cocos2d::LayerColor*>(cell->root->a[0]->get_node_ref().get_node());
            //    auto c = l->getColor();
            //    auto a = l->getOpacity();
            //    a /= 2;
            //    auto nl = cocos2d::LayerColor::create(cocos2d::Color4B(c.r, c.g, c.b, a), 5, 5);
            //    auto v0 = vec_i_to_f(cell->position);
            //    nl->setPosition(v0.x, v0.y);

            //    root_node->addChild(nl);
            //});


            return s.str();
        }
    }
}
