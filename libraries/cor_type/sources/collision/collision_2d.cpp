#include "collision_2d_tmpl_impl.h"

#include "collision_2d.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl_impl.h"
#include "cor_algorithm/sources/utilities.h"

namespace cor
{
    namespace type
    {
        Collision2dObjectBase::Collision2dObjectBase()
        {
            
        }

        Collision2dObjectBase::~Collision2dObjectBase()
        {
            
        }

        void Collision2dObjectBase::update(Collision2dShapePtr shape)
        {
            
        }

        
        Collision2dShape::Collision2dShape()
        {
            
        }

        Collision2dShape::Collision2dShape(Collision2dObjectBaseSP obj, Collision2dCallback callback, Shape shape)
        {
            this->obj = obj;
            this->callback = callback;
            this->shape = shape;
        }

        Collision2dShape::~Collision2dShape()
        {
            
        }

        Box2F Collision2dShape::get_box()
        {
            this->obj->update(this);
            if(auto b = boost::get<OBox2F>(&shape))
            {
                Box2F tb;
                tb.set_rect(b->m, b->box);
                return tb;
            }
            else if(auto s = boost::get<OSphere2F>(&shape))
            {
                return s->get_box();
            }

            return Box2F();
        }

        RFloat Collision2dShape::get_distance(const Vector2F& p)
        {
            if(auto b = boost::get<OBox2F>(&shape))
            {
                return b->get_distance(p);
            }
            else if(auto s = boost::get<OSphere2F>(&shape))
            {
                return s->get_distance(p);
            }
            return FloatMax;
        }

        Collision2dShape* Collision2dShape::operator->()
        {
            return this;
        }

        Collision2dGroup::Collision2dGroup()
        {
            set_changed();
        }

        Collision2dGroup::~Collision2dGroup()
        {
        
        }

        Collision2dRTreePoolPtr Collision2dGroup::get_tree_pool()
        {
            return &tree_pool;
        }

        void Collision2dGroup::set_type_id(RInt32 type_id)
        {
            this->type_id = type_id;
        }
        
        RInt32 Collision2dGroup::get_type_id()
        {
            return type_id;
        }

        RBool Collision2dGroup::get_changed()
        {
            return changed;
        }

        void Collision2dGroup::set_changed()
        {
            changed = rtrue;
        }

        void Collision2dGroup::set_changed(RBool changed)
        {
            this->changed = changed;
        }


        struct Collision2dItnl
        {
            Collision2dGroupTable groups;
            Collision2dGroupPairTable group_pair_tabel;
        };
        
        Collision2d::Collision2d() : itnl(new Collision2dItnl())
        {
            
        }
        
        Collision2d::~Collision2d()
        {
            
        }

        Collision2dGroupTable& Collision2d::ref_groups()
        {
            return itnl->groups;
        }

        Collision2dGroup& Collision2d::ref_group(RInt32 id)
        {
            return itnl->groups[id];
        }

        Collision2dGroupTable* Collision2d::get_groups()
        {
            return &itnl->groups;
        }

        Collision2dGroupPtr Collision2d::get_group(RInt32 id)
        {
            return &itnl->groups[id];
        }

        void Collision2d::set_collision_group_pair(RInt32 id0, RInt32 id1, RBool collidable)
        {
            itnl->group_pair_tabel[id0][id1] = collidable;
            itnl->group_pair_tabel[id1][id0] = collidable;
        }

        RBool Collision2d::get_collision_group_pair(RInt32 id0, RInt32 id1)
        {
            return itnl->group_pair_tabel[id0][id1];
        }

        Collision2dRef Collision2d::create_o_box(RInt32 id, Collision2dObjectBaseSP obj, Collision2dCallback callback, OBox2F shape)
        {
            Collision2dGroupPtr group = get_group(id);
            Collision2dRef r = group->get_tree_pool()->create(Collision2dShape(obj, callback, shape));
            r->data.group = group;
            group->set_type_id(id);
            group->set_changed();
            return r;
        }

        Collision2dRef Collision2d::create_o_sphere(RInt32 id, Collision2dObjectBaseSP obj, Collision2dCallback callback, OSphere2F shape)
        {
            Collision2dGroupPtr group = get_group(id);
            Collision2dRef r = group->get_tree_pool()->create(Collision2dShape(obj, callback, shape));
            r->data.group = group;
            group->set_type_id(id);
            group->set_changed();
            return r;
        }

        RBool Collision2d::leaf_collision_check(Collision2dRef& r0, Collision2dRef& r1)
        {
            if(auto box0 = boost::get<OBox2F>(&r0->data.shape))
            {
                if(auto box1 = boost::get<OBox2F>(&r1->data.shape))
                {
                    if(box0->is_cross(*box1))
                    {
                        return rtrue;
                    }
                }
                if(auto sphere1 = boost::get<OSphere2F>(&r1->data.shape))
                {
                    if(sphere1->is_cross(*box0))
                    {
                        return rtrue;
                    }
                }
            }
            if(auto sphere0 = boost::get<OSphere2F>(&r0->data.shape))
            {
                if(auto box1 = boost::get<OBox2F>(&r1->data.shape))
                {
                    if(sphere0->is_cross(*box1))
                    {
                        return rtrue;
                    }
                }
                if(auto sphere1 = boost::get<OSphere2F>(&r1->data.shape))
                {
                    if(sphere0->is_cross(*sphere1))
                    {
                        return rtrue;
                    }
                }
            }

            return rfalse;
        }

        RBool Collision2d::leaf_collision_check(Shape& s0, Shape& s1)
        {
            if(auto box0 = boost::get<OBox2F>(&s0))
            {
                if(auto box1 = boost::get<OBox2F>(&s1))
                {
                    if(box0->is_cross(*box1))
                    {
                        return rtrue;
                    }
                }
                if(auto sphere1 = boost::get<OSphere2F>(&s1))
                {
                    if(sphere1->is_cross(*box0))
                    {
                        return rtrue;
                    }
                }
            }
            if(auto sphere0 = boost::get<OSphere2F>(&s0))
            {
                if(auto box1 = boost::get<OBox2F>(&s1))
                {
                    if(sphere0->is_cross(*box1))
                    {
                        return rtrue;
                    }
                }
                if(auto sphere1 = boost::get<OSphere2F>(&s1))
                {
                    if(sphere0->is_cross(*sphere1))
                    {
                        return rtrue;
                    }
                }
            }

            return rfalse;
        }

        void Collision2d::find_pair(Collision2dGroupPtr g0, Collision2dGroupPtr g1, std::function<void(Collision2dRef&, Collision2dRef&)> f)
        {
            auto tp0 = g0->get_tree_pool();
            if(g0->get_changed())
            {
                tp0->update_leaf_box();
                tp0->construct();
                g0->set_changed(rfalse);
            }

            auto tp1 = g1->get_tree_pool();
            if(g1->get_changed())
            {
                tp1->update_leaf_box();
                tp1->construct();
                g1->set_changed(rfalse);
            }

            tp0->find_pair(*tp1, [&](Collision2dRef& r0, Collision2dRef& r1){
                if(leaf_collision_check(r0, r1))
                {
                    f(r0, r1);
                }
            });
        }

        void Collision2d::find_pair(RInt32 id0, RInt32 id1, std::function<void(Collision2dRef&, Collision2dRef&)> f)
        {
            auto g0 = get_group(id0);
            auto g1 = get_group(id1);
            find_pair(g0, g1, f);
        }

        void Collision2d::all_find_pair(std::function<void(Collision2dRef&, Collision2dRef&)> f)
        {
            for(auto& p : itnl->groups)
            {
                const auto& id0 = p.first;
                auto& g0 = p.second;

                for(auto& p : itnl->groups)
                {
                    const auto& id1 = p.first;
                    auto& g1 = p.second;

                    if(id0 <= id1 && get_collision_group_pair(id0, id1))
                    {
                        find_pair(&g0, &g1, f);
                    }
                }
            }
        }

        void Collision2d::all_pair_call()
        {
            for(auto& p : itnl->groups)
            {
                const auto& id0 = p.first;
                auto& g0 = p.second;

                for(auto& p : itnl->groups)
                {
                    const auto& id1 = p.first;
                    auto& g1 = p.second;

                    if(id0 <= id1 && get_collision_group_pair(id0, id1))
                    {
                        find_pair(&g0, &g1, [&](Collision2dRef& r0, Collision2dRef& r1){

                            {
                                Collision2dCrossInfo cross;
                                cross.s0 = r0;
                                cross.s1 = r1;
                                r0->data.callback(cross);
                            }

                            {
                                Collision2dCrossInfo cross;
                                cross.s0 = r1;
                                cross.s1 = r0;
                                r1->data.callback(cross);
                            }

                        });
                    }
                }
            }

        }

        void Collision2d::find_near(Collision2dGroupPtr g, const Vector2F& p, std::function<RBool(const RFloat&, Collision2dRef&)> func)
        {
            g->get_tree_pool()->find_near(p, func);
        }
    }
}
