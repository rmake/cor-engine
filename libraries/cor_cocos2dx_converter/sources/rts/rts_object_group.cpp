
#include "rts_object_group.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl_impl.h"
#include "base/CCRefPtr.h"

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>

namespace cor
{
    namespace cocos2dx_converter
    {
        //typedef std::map<cocos2d::Node*, RtsObjectSP> RtsObjectTable;
        typedef std::pair<cocos2d::Node*, RtsObjectSP> RtsObjectTableItem;
        typedef boost::multi_index::multi_index_container<RtsObjectTableItem,
            boost::multi_index::indexed_by<
            boost::multi_index::ordered_unique<
            boost::multi_index::member<RtsObjectTableItem, cocos2d::Node*, &RtsObjectTableItem::first> >,
            boost::multi_index::sequenced<>
            > > RtsObjectTable;

        struct RtsObjectGroupItnl
        {
            Collision2dNodeSP collision;
            RtsObjectTable object_table;
            RtsObjectTable::nth_index<1>::type::iterator object_table_past_iteration;
            type::Collision2dGroupPairTable contact_group_pair_table;
            RFloat dt;
            type::Matrix4x4F transform_to_render;
            RInt32 state;
            cocos2d::RefPtr<cocos2d::DrawNode> debug_draw_node;

            RtsObjectGroupItnl()
            {
                dt = 1.0f / 30.0f;
                state = 0;
            }
        };

        RtsObjectGroup::RtsObjectGroup() : itnl(new RtsObjectGroupItnl())
        {

        }

        RtsObjectGroup::RtsObjectGroup(Collision2dNodeSP collision) : itnl(new RtsObjectGroupItnl())
        {
            itnl->collision = collision;
        }

        RtsObjectGroup::~RtsObjectGroup()
        {

        }

        RtsObjectGroupSP RtsObjectGroup::create()
        {
            return std::make_shared<RtsObjectGroup>();
        }

        RtsObjectGroupSP RtsObjectGroup::create(Collision2dNodeSP collision)
        {
            return std::make_shared<RtsObjectGroup>(collision);
        }

        RtsObjectSP RtsObjectGroup::create_object(const Collision2dNodeRef& node_ref)
        {
            auto o = RtsObject::create(this->shared_from_this(), node_ref);
            //itnl->object_table[node_ref.get_node()] = o;

            auto node = node_ref.get_node();
            if(itnl->object_table.get<0>().find(node) != itnl->object_table.get<0>().end())
            {
                itnl->object_table.get<0>().replace(itnl->object_table.get<0>().find(node), RtsObjectTableItem(node_ref.get_node(), o));
            }
            else
            {
                itnl->object_table.insert(RtsObjectTableItem(node_ref.get_node(), o));
            }
            return o;
        }

        void RtsObjectGroup::release_object(cocos2d::Node* node)
        {
            itnl->object_table.get<0>().erase(node);
        }

        void RtsObjectGroup::set_dt(RFloat dt)
        {
            itnl->dt = dt;
        }

        RFloat RtsObjectGroup::get_dt()
        {
            return itnl->dt;
        }

        void RtsObjectGroup::set_debug_draw_node(cocos2d::DrawNode* debug_draw_node)
        {
            itnl->debug_draw_node = debug_draw_node;
        }

        cocos2d::DrawNode* RtsObjectGroup::get_debug_draw_node()
        {
            return itnl->debug_draw_node.get();
        }

        RInt32 RtsObjectGroup::get_internal_state()
        {
            return itnl->state;
        }

        RtsObjectSP RtsObjectGroup::search_from_node(cocos2d::Node* node)
        {
            if(itnl->object_table.get<0>().find(node) != itnl->object_table.get<0>().end())
            {
                return itnl->object_table.get<0>().find(node)->second;
            }
            return RtsObjectSP();
        }

        Collision2dNodeSP RtsObjectGroup::get_collision()
        {
            return itnl->collision;
        }

        void RtsObjectGroup::set_transform_to_render(const type::Matrix4x4F& transform_to_render)
        {
            itnl->transform_to_render = transform_to_render;
        }

        const type::Matrix4x4F& RtsObjectGroup::get_transform_to_render()
        {
            return itnl->transform_to_render;
        }

        void RtsObjectGroup::set_contact_pair(RInt32 id0, RInt32 id1, RBool collidable)
        {
            itnl->contact_group_pair_table[id0][id1] = collidable;
            itnl->contact_group_pair_table[id1][id0] = collidable;
        }

        type::Collision2dGroupPairTable& RtsObjectGroup::ref_contact_pair_table()
        {
            return itnl->contact_group_pair_table;
        }

        void RtsObjectGroup::solve_contact(RInt32 id0, RInt32 id1,const RtsObjectSP& o0, const RtsObjectSP& o1)
        {
            if(!(o0->get_collidable() && o1->get_collidable() &&
                (o0->get_movable() || o1->get_movable())))
            {
                return;
            }

            auto r0 = o0->get_node_ref();
            auto r1 = o1->get_node_ref();

            auto n0 = r0.get_node();
            auto n1 = r1.get_node();

            auto no0 = r0.get_object();
            auto no1 = r1.get_object();

            if(r0.is_box())
            {
                auto box0 = r0.get_box();
                if(r1.is_box())
                {
                    auto box1 = r1.get_box();
                    if(box0.is_cross(box1))
                    {
                        if((o0->get_enemy_collidable() || o1->get_enemy_collidable()) && id0 == id1)
                        {
                            return;
                        }
                        
                        type::Vector2F n;
                        RFloat d;
                        type::Vector2F p0;
                        type::Vector2F p1;
                        if(box0.get_contact_info(box1, n, d, p0, p1))
                        {
                            auto p0 = n0->getPosition();
                            auto p1 = n1->getPosition();
                            type::Vector2F v0(p0.x, p0.y);
                            type::Vector2F v1(p1.x, p1.y);

                            RFloat sc = 0.5f;
                            d -= 0.01;
                            
                            if(o0->get_movable() && o1->get_movable())
                            {
                                v0 += n * (d * 0.5f * sc);
                                v1 += n * (d * -0.5f * sc);
                            }
                            else if(o0->get_movable())
                            {
                                v0 += n * (d * 1.0f);
                            }
                            else
                            {
                                v1 += n * (d * -1.0f);
                            }

                            n0->setPosition(cocos2d::Point(v0.x, v0.y));
                            n1->setPosition(cocos2d::Point(v1.x, v1.y));
                        }
                    }
                }
                if(r1.is_sphere())
                {
                    auto sphere1 = r1.get_sphere();
                    if(sphere1.is_cross(box0))
                    {
                        
                    }
                }
            }

        }

        void RtsObjectGroup::solve_contact()
        {
            auto& groups = itnl->collision->ref_groups();
            auto ed = groups.rbegin()->first;

            for(RInt32 i = 0; i <= ed; i++)
            {
                for(RInt32 j = 0; j <= ed; j++)
                {
                    if(i <= j)
                    {
                        auto contact = itnl->contact_group_pair_table[i][j];
                        auto collision = itnl->collision->get_collision_group_pair(i, j);
                        if(contact || collision)
                        {
                            itnl->collision->find_pair(i, j, [&](Collision2dNodeRef& r0, Collision2dNodeRef& r1){

                                if(collision)
                                {
                                    auto o0 = r0.get_object();
                                    auto o1 = r1.get_object();

                                    auto cl0 = o0->get_callback();
                                    auto cl1 = o1->get_callback();

                                    auto n0 = r0.get_node();
                                    auto n1 = r1.get_node();

                                    if(cl0)
                                    {
                                        cl0(n0, n1);
                                    }

                                    if(cl1)
                                    {
                                        cl1(n1, n0);
                                    }
                                }

                                if(contact &&
                                    itnl->object_table.find(r0.get_node()) != itnl->object_table.end() &&
                                    itnl->object_table.find(r1.get_node()) != itnl->object_table.end())
                                {
                                    
                                    auto o0 = search_from_node(r0.get_node());
                                    auto o1 = search_from_node(r1.get_node());

                                    solve_contact(i, j, o0, o1);
                                }


                            });
                        }
                    }
                    
                }

            }


            if(false)
            {
                for(auto i : itnl->contact_group_pair_table)
                {
                    for(auto j : itnl->contact_group_pair_table)
                    {
                        if(i.first <= j.first)
                        {
                            itnl->collision->find_pair(i.first, j.first, [&](Collision2dNodeRef& r0, Collision2dNodeRef& r1){

                                if(itnl->object_table.find(r0.get_node()) != itnl->object_table.end() &&
                                    itnl->object_table.find(r1.get_node()) != itnl->object_table.end())
                                {
                                    auto o0 = search_from_node(r0.get_node());
                                    auto o1 = search_from_node(r1.get_node());

                                    solve_contact(i.first, j.first, o0, o1);
                                }


                            });
                        }

                    }

                }

            }                

        }

        void RtsObjectGroup::poll()
        {
            auto& groups = itnl->collision->ref_groups();

            if(itnl->state == 0)
            {
                for(auto& g : groups)
                {
                    auto tp = g.second.get_tree_pool();
                    tp->update_leaf_box();
                    tp->fit();
                }

                for(auto i = itnl->object_table.begin(); i != itnl->object_table.end();)
                {
                    auto ti = i;
                    ti++;
                    if(i->second->is_released())
                    {
                        release_object(i->first);
                    }
                    i = ti;
                }


                {
                    RSize j;
                    RSize jsz = itnl->object_table.size() / 2;
                    auto i = itnl->object_table.get<1>().begin();

                    for(j = 0; i != itnl->object_table.get<1>().end() && j < jsz; j++)
                    {
                        auto ti = i;
                        ti++;
                        if(!i->second->is_released())
                        {
                            i->second->step();
                        }
                        i = ti;
                    }
                    itnl->object_table_past_iteration = i;
                }


                itnl->state = 1;

            }
            else if(itnl->state == 1)
            {
                for(auto i = itnl->object_table_past_iteration; i != itnl->object_table.get<1>().end();)
                {
                    auto ti = i;
                    ti++;
                    if(!i->second->is_released())
                    {
                        i->second->step();
                    }
                    i = ti;
                }

                itnl->collision->update_current_transform();
                auto& groups = itnl->collision->ref_groups();
                for(auto& g : groups)
                {
                    auto tp = g.second.get_tree_pool();
                    if(g.second.get_changed())
                    {
                        tp->update_leaf_box();
                        tp->construct();
                        //tp->fit();
                    }
                }

                itnl->state = 2;
            }
            else if(itnl->state == 2)
            {
                

                solve_contact();

                itnl->state = 0;
            }

            
            for(auto i = itnl->object_table.begin(); i != itnl->object_table.end();)
            {
                auto ti = i;
                ti++;
                if(!i->second->is_released())
                {
                    i->second->render();
                }
                i = ti;
            }

        }

    }
}
