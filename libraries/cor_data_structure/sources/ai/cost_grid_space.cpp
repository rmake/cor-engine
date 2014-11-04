#include "cost_grid_space_tmpl_impl.h"
#include "cost_grid_space.h"
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl_impl.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl_impl.h"
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include <math.h>

namespace cor
{
    namespace data_structure
    {
        CostGridSpaceItem::CostGridSpaceItem()
        {
            terminated = rfalse;
            passable = rtrue;
            enter_cost = 1.0f;

            passed = rfalse;
            min_cost = 0.0f;
        }

        typedef UniformGridTmpl<CostGridSpaceItem, type::Vector2I> CostGridSpaceGrid;

        struct CostGridSpaceItnl;

        class CostGridSpaceState
        {
        public:
            typedef std::function<void(const CostGridSpaceState&)> NextStateFunc;

            CostGridSpaceItnl* itnl;
            type::Vector2I position;
            RFloat cost_sum;

            CostGridSpaceState()
            {
                cost_sum = 0.0f;
            }

            ~CostGridSpaceState()
            {
            
            }

            RFloat cost() const;
            void add_next_state(RInt32 x, RInt32 y, RFloat cs, NextStateFunc func) const;
            void next_states(NextStateFunc func) const;

            RBool terminated() const;
        };

        typedef StackDecoderTmpl<RFloat, CostGridSpaceState> CostGridSpaceStackDecoder;
        

        struct CostGridSpaceItnl
        {
            CostGridSpaceNeighborMode::Enum neighbor_mode;
            CostGridSpaceGrid grid;
            CostGridSpaceStackDecoder stack_decoder;
            PassedPositionArray passed_indices;
            RFloat max_cost;

        };

        RFloat CostGridSpaceState::cost() const
        {
            return cost_sum;
        }

        void CostGridSpaceState::add_next_state(RInt32 x, RInt32 y, RFloat cs, NextStateFunc func) const
        {
            CostGridSpaceState next_state;
            auto& c = itnl->grid.ref(position);
            auto size = itnl->grid.get_size();

            next_state.itnl = itnl;
            next_state.cost_sum = cost_sum + c.enter_cost * cs;

            type::Vector2I next_position(position.x + x, position.y + y);

            if(next_position.x < 0 || size.x <= next_position.x ||
                next_position.y < 0 || size.y <= next_position.y)
            {
                return;
            }

            if(abs(x) + abs(y) >= 2)
            {
                {
                    type::Vector2I t_position(position.x + x, position.y);
                    auto& tc = itnl->grid.ref(t_position);
                    if(!tc.passable)
                    {
                        return;
                    }
                }
                {
                    type::Vector2I t_position(position.x, position.y + y);
                    auto& tc = itnl->grid.ref(t_position);
                    if(!tc.passable)
                    {
                        return;
                    }
                }
            }

            if(next_state.cost_sum > itnl->max_cost)
            {
                return;
            }

            auto& nc = itnl->grid.ref(next_position);
            next_state.position = next_position;

            if(!nc.passable)
            {
                return;
            }

            if(!nc.passed)
            {
                nc.passed = rtrue;
                itnl->passed_indices.push_back(next_position);
                nc.min_cost = next_state.cost_sum;
                nc.parent = position;
                func(next_state);
            }
            else if(nc.passed && next_state.cost_sum < nc.min_cost)
            {
                nc.min_cost = next_state.cost_sum;
                nc.parent = position;
                func(next_state);
            }

        }

        void CostGridSpaceState::next_states(NextStateFunc func) const
        {
            const static RFloat sq = sqrtf(2.0f);
            if(itnl->neighbor_mode == CostGridSpaceNeighborMode::L2)
            {
                add_next_state(-1, -1, sq, func);
                add_next_state(1, 1, sq, func);
                add_next_state(-1, 1, sq, func);
                add_next_state(1, -1, sq, func);
            }

            add_next_state(-1, 0, 1, func);
            add_next_state(1, 0, 1, func);
            add_next_state(0, -1, 1, func);
            add_next_state(0, 1, 1, func);
            
        }

        RBool CostGridSpaceState::terminated() const
        {
            auto& nc = itnl->grid.ref(position);
            return nc.terminated;
        }

        
        CostGridSpace::CostGridSpace() : itnl(new CostGridSpaceItnl())
        {
            itnl->max_cost = 1.0e10;
            itnl->neighbor_mode = CostGridSpaceNeighborMode::L1;
        }
        
        CostGridSpace::~CostGridSpace()
        {
            
        }

        void CostGridSpace::set_max_cost(RFloat max_cost)
        {
            itnl->max_cost = max_cost;
        }

        void CostGridSpace::set_neighbor_mode(CostGridSpaceNeighborMode::Enum neighbor_mode)
        {
            itnl->neighbor_mode = neighbor_mode;
        }

        CostGridSpaceNeighborMode::Enum CostGridSpace::get_neighbor_mode()
        {
            return itnl->neighbor_mode;
        }

        void CostGridSpace::resize(const type::Vector2I& size)
        {
            itnl->grid.resize(size);
        }

        void CostGridSpace::resize(RInt32 w, RInt32 h)
        {
            itnl->grid.resize(type::Vector2I(w, h));
        }

        type::Vector2I CostGridSpace::get_size()
        {
            return itnl->grid.get_size();
        }

        RInt32 CostGridSpace::get_width()
        {
            return itnl->grid.get_size().x;
        }

        RInt32 CostGridSpace::get_height()
        {
            return itnl->grid.get_size().y;
        }

        bool CostGridSpace::is_valid(const type::Vector2I& position)
        {
            return itnl->grid.valid(position);
        }

        CostGridSpaceItem& CostGridSpace::ref(const type::Vector2I& position)
        {
            return itnl->grid.ref(position);
        }

        void CostGridSpace::set(const type::Vector2I& position, const CostGridSpaceItem& v)
        {
            itnl->grid.set(position, v);
        }

        const CostGridSpaceItem& CostGridSpace::get(const type::Vector2I& position) const
        {
            return itnl->grid.get(position);
        }

        CostGridSpacePath CostGridSpace::search_nearest_path(const type::Vector2I& position)
        {
            itnl->stack_decoder.clear();
            itnl->passed_indices.clear();

            CostGridSpaceState first_state;
            first_state.itnl = itnl.get();
            first_state.cost_sum = 0.0f;
            first_state.position = position;
            itnl->stack_decoder.push(first_state);

            auto& nc = itnl->grid.ref(position);
            nc.passed = rtrue;
            itnl->passed_indices.push_back(position);
            nc.min_cost = first_state.cost_sum;
            nc.parent = position;

            CostGridSpacePath path;

            itnl->stack_decoder.search_first_n(1, [&](const CostGridSpaceState& state){
            
                path.cost = state.cost();

                auto pos = state.position;
                while(pos.x != position.x || pos.y != position.y)
                {
                    path.path.push_back(pos);

                    auto& nc = itnl->grid.ref(pos);
                    pos = nc.parent;
                }

                path.path.push_back(pos);

                return rfalse;
            });

            for(auto v : itnl->passed_indices)
            {
                itnl->grid.ref(v).passed = rfalse;
            }


            return path;
        }

        type::Vector2I CostGridSpace::get_first_corner(const CostGridSpacePath& path)
        {
            auto rp = path.path;
            std::reverse(rp.begin(), rp.end());

            if(rp.size() <= 0)
            {
                return type::Vector2I(-1, -1);
            }
            if(rp.size() <= 1)
            {
                return rp.front();
            }
            auto iv = rp.begin();
            auto ed = rp.end();
            auto first = *iv;
            iv++;
            auto second = *iv;
            auto r = second;
            iv++;
            auto d = second - first;
            while(iv != ed)
            {
                auto td = *iv - first;
                auto cp = d.cross(td);

                if(abs(cp) > 0.01)
                {
                    break;
                }

                {
                    bool terminated = false;
                    auto a = { type::Vector2I(1, 0), type::Vector2I(-1, 0), type::Vector2I(0, 1), type::Vector2I(0, -1) };
                    for(auto v : a)
                    {
                        auto& c = this->ref(*iv + v);
                        if(!c.passable)
                        {
                            terminated = true;
                            break;
                        }
                    }
                    if(terminated)
                    {
                        break;
                    }
                    
                }

                r = *iv;

                iv++;
            }
            return r;
        }


    }
}
