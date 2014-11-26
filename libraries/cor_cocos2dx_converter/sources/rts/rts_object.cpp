#include "rts_object.h"
#include "rts_object_group.h"
#include "cor_system/sources/logger.h"
#include "CCRefPtr.h"
#include "cocos2d.h"

#include <boost/multi_index_container.hpp>
#include <boost/multi_index/sequenced_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/identity.hpp>
#include <boost/multi_index/member.hpp>

namespace cor
{
    namespace cocos2dx_converter
    {


        RtsObjectAction::RtsObjectAction(RtsObjectSP object, StepCallback on_step)
        {
            this->object = object;
            this->step_callback = on_step;
            this->erased = rfalse;
        }

        RtsObjectAction::~RtsObjectAction()
        {
            
        }

        RBool RtsObjectAction::is_erased()
        {
            return erased;
        }

        void RtsObjectAction::stop()
        {
            erased = rtrue;
        }

        void RtsObjectAction::step()
        {
            if(auto o = object.lock())
            {
                if(step_callback)
                {
                    step_callback(shared_from_this(), o);
                }
            }
        }

        

        struct RtsObjectItnl
        {
            //typedef std::map<RtsObjectActionPtr, RtsObjectActionSP> Actions;
            //typedef std::map<RtsObjectSensorPtr, RtsObjectSensorSP> Sensors;

            typedef std::pair<RtsObjectActionPtr, RtsObjectActionSP> ActionsItem;
            typedef boost::multi_index::multi_index_container<ActionsItem,
                boost::multi_index::indexed_by<
                boost::multi_index::ordered_unique<
                boost::multi_index::member<ActionsItem, RtsObjectActionPtr, &ActionsItem::first> >,
                boost::multi_index::sequenced<>
                > > Actions;

            typedef std::pair<RtsObjectSensorPtr, RtsObjectSensorSP> SensorsItem;
            typedef boost::multi_index::multi_index_container<SensorsItem,
                boost::multi_index::indexed_by<
                boost::multi_index::ordered_unique<
                boost::multi_index::member<SensorsItem, RtsObjectSensorPtr, &SensorsItem::first> >,
                boost::multi_index::sequenced<>
                > > Sensors;

            
            RtsObjectGroupWP object_group;
            Collision2dNodeRef node_ref;
            cocos2d::Node* node;
            cocos2d::RefPtr<cocos2d::Node> node_render;
            cocos2d::RefPtr<cocos2d::Node> node_render_z;
            cocos2d::Vec3 old_render_pos;
            cocos2d::Vec3 new_render_pos;
            type::Vector2F render_offset;
            RInt32 render_time;
            RBool move_warp;
            Actions actions;
            RBool released;
            RBool movable;
            RBool collidable;
            RBool enemy_collidable;
            RBool rotate_animation;
            RBool parabola_animation;
            RtsObject::MovePushBackCallback move_push_back_callback;
            RFloat z_offset;
            RFloat mv_t;
            RFloat old_mv_t;
            RFloat new_mv_t;
            RFloat parabora_h;
            Sensors sensors;
            cocos2d::Vector<cocos2d::Animation*> walks;
            cocos2d::Vector<cocos2d::Animation*> shoots;
            cocos2d::Vector<cocos2d::Animation*> idles;
            cocos2d::Action* animation_action;
            RInt32 past_th;
            RtsObjectActionSP current_move_action;
            
            RtsObjectItnl()
            {
                move_warp = rtrue;
                released = rfalse;
                movable = rtrue;
                collidable = rtrue;
                enemy_collidable = rfalse;
                rotate_animation = rfalse;
                parabola_animation = rfalse;
                node = nullptr;
                node_render = nullptr;
                mv_t = 0.0f;
                parabora_h = 0.0f;
                z_offset = 0.0f;
                past_th = -1000;
                animation_action = nullptr;
            }
        };
        
        RtsObject::RtsObject() : itnl(new RtsObjectItnl())
        {
            itnl->node = nullptr;
        }

        RtsObject::RtsObject(const RtsObjectGroupSP& object_group, const Collision2dNodeRef& node_ref) : itnl(new RtsObjectItnl())
        {
            itnl->object_group = object_group;
            itnl->node_ref = node_ref;
            itnl->node = node_ref.get_node();
        }
        
        RtsObject::~RtsObject()
        {
            release();
        }

        RtsObjectSP RtsObject::create()
        {
            return std::make_shared<RtsObject>();
        }

        RtsObjectSP RtsObject::create(const RtsObjectGroupSP& object_group, const Collision2dNodeRef& node_ref)
        {
            auto o = std::make_shared<RtsObject>(object_group, node_ref);
            return o;
        }

        RtsObjectGroupSP RtsObject::get_object_group() const
        {
            return itnl->object_group.lock();
        }

        const Collision2dNodeRef& RtsObject::get_node_ref() const
        {
            return itnl->node_ref;
        }

        void RtsObject::release()
        {
            itnl->released = rtrue;
        }

        void RtsObject::set_movable(RBool movable)
        {
            itnl->movable = movable;
        }

        RBool RtsObject::get_movable() const
        {
            return itnl->movable;
        }

        void RtsObject::set_collidable(RBool collidable)
        {
            itnl->collidable = collidable;
        }

        RBool RtsObject::get_collidable() const
        {
            return itnl->collidable;
        }

        RBool RtsObject::get_enemy_collidable() const
        {
            return itnl->enemy_collidable;
        }

        void RtsObject::set_rotate_animation(RBool rotate_animation)
        {
            itnl->rotate_animation = rotate_animation;
        }

        RBool RtsObject::get_rotate_animation() const
        {
            return itnl->rotate_animation;
        }

        void RtsObject::set_parabola_animation(RBool parabola_animation)
        {
            itnl->parabola_animation = parabola_animation;
        }

        RBool RtsObject::get_parabola_animation() const
        {
            return itnl->parabola_animation;
        }

        void RtsObject::set_enemy_collidable(RBool enemy_collidable)
        {
            itnl->enemy_collidable = enemy_collidable;
        }

        //RtsObject::Actions& RtsObject::ref_actions()
        //{
        //    return itnl->actions;
        //}
        //
        //RtsObject::Sensors& RtsObject::ref_sensors()
        //{
        //    return itnl->sensors;
        //}

        void RtsObject::set_node_render(cocos2d::Node* node_render)
        {
            itnl->node_render = node_render;
            itnl->node_render->setVisible(false);
        }


        void RtsObject::set_node_render_z(cocos2d::Node* node_render_z)
        {
            itnl->node_render_z = node_render_z;
        }

        cocos2d::Node* RtsObject::get_node_render()
        {
            return itnl->node_render;
        }

        void RtsObject::set_move_push_back_callback(MovePushBackCallback move_push_back_callback)
        {
            itnl->move_push_back_callback = move_push_back_callback;
        }

        void RtsObject::set_z_offset(RFloat z_offset)
        {
            itnl->z_offset = z_offset;
        }

        RFloat RtsObject::get_z_offset()
        {
            return itnl->z_offset;
        }

        void RtsObject::set_walks(const cocos2d::Vector<cocos2d::Animation*>& walks)
        {
            itnl->walks = walks;
        }
        
        cocos2d::Vector<cocos2d::Animation*> RtsObject::get_walks() const
        {
            return itnl->walks;
        }

        void RtsObject::set_shoots(const cocos2d::Vector<cocos2d::Animation*>& shoots)
        {
            itnl->shoots = shoots;
        }

        cocos2d::Vector<cocos2d::Animation*> RtsObject::get_shoots() const
        {
            return itnl->shoots;
        }

        void RtsObject::set_idles(const cocos2d::Vector<cocos2d::Animation*>& idles)
        {
            itnl->idles = idles;
        }

        cocos2d::Vector<cocos2d::Animation*> RtsObject::get_idles() const
        {
            return itnl->idles;
        }

        bool RtsObject::is_valid() const
        {
            return itnl->node_ref.is_valid() && !itnl->released;
        }

        bool RtsObject::is_released() const
        {
            return itnl->released;
        }

        RtsObjectActionSP RtsObject::add_action(StepCallback step_callback)
        {
            auto a = std::make_shared<RtsObjectAction>(shared_from_this(), step_callback);

            //itnl->actions[a.get()] = a;
            itnl->actions.insert(RtsObjectItnl::ActionsItem(a.get(), a));

            return a;
        }

        RtsObjectSensorSP RtsObject::add_sensor(RInt32 type_id, const type::Vector2F& p, const RFloat& r, CollisionCallback collision_callback)
        {
            auto s = std::make_shared<RtsObjectSensor>(shared_from_this(), type_id, p, r);
            s->set_collision_callback(collision_callback);

            //itnl->sensors[s.get()] = s;
            itnl->sensors.insert(RtsObjectItnl::SensorsItem(s.get(), s));

            return s;
        }

        void RtsObject::step()
        {
            for(auto i = itnl->sensors.get<1>().begin(); i != itnl->sensors.get<1>().end();)
            {
                if(i->second->is_erased())
                {
                    auto ni = i;
                    ni++;
                    itnl->sensors.erase(i->first);
                    i = ni;
                }
                else
                {
                    i++;
                }
            }

            for(auto i = itnl->actions.get<1>().begin(); i != itnl->actions.get<1>().end();)
            {
                if(i->second->is_erased())
                {
                    auto ni = i;
                    ni++;
                    itnl->actions.get<0>().erase(i->first);
                    i = ni;
                }
                else
                {
                    i++;
                }
            }

            for(auto i : itnl->actions.get<1>())
            {
                if(!i.second->is_erased())
                {
                    i.second->step();
                }
                
            }

            if(itnl->node_ref.is_valid() && itnl->node_render)
            {
                
                auto dcv = convert_to_render();
                if(itnl->move_warp)
                {
                    itnl->node_render->setPosition3D(dcv);
                    itnl->old_render_pos = dcv;
                    itnl->new_render_pos = dcv;
                    itnl->old_mv_t = itnl->mv_t;
                    itnl->new_mv_t = itnl->mv_t;
                    itnl->render_time = 0;
                    itnl->move_warp = rfalse;
                }
                else
                {
                    itnl->old_render_pos = itnl->new_render_pos;
                    itnl->new_render_pos = dcv;
                    itnl->old_mv_t = itnl->new_mv_t;
                    itnl->new_mv_t = itnl->mv_t;
                    itnl->render_time = 0;
                }

                itnl->node_render->setVisible(true);
            }
        }

        cocos2d::Vec3 RtsObject::convert_to_render(type::Vector2F av) const
        {
            auto og = itnl->object_group.lock();
            auto& ov = itnl->render_offset;
            type::Vector3F v(av.x, av.y, 0.0f);
            v.xy() += ov;
            auto m = og->get_transform_to_render();
            type::Vector3F dv;
            dv = m.transform(v);
            cocos2d::Vec3 dcv(dv.x, dv.y, dv.z);
            return dcv;
        }

        cocos2d::Vec3 RtsObject::convert_to_render() const
        {
            auto og = itnl->object_group.lock();
            auto cv = itnl->node->getPosition3D();
            auto& ov = itnl->render_offset;
            type::Vector3F v(cv.x, cv.y, cv.z);
            v.xy() += ov;
            auto m = og->get_transform_to_render();
            type::Vector3F dv;
            dv = m.transform(v);
            cocos2d::Vec3 dcv(dv.x, dv.y, dv.z);
            return dcv;
        }

        void RtsObject::render()
        {
            if(itnl->render_time < 3)
            {
                itnl->render_time++;
                auto t = itnl->render_time;
                auto dcv = (itnl->new_render_pos * t + itnl->old_render_pos * (3 - t)) / 3.0f;

                auto z = -10000.0 + 100.0f + dcv.z / 10.0f + itnl->z_offset;
                itnl->node_render_z->setGlobalZOrder(z);

                auto parabora_f = [&]( RFloat t)
                {
                    return (-t * t + t) * itnl->parabora_h;
                };

                if(itnl->parabola_animation)
                {
                    auto at = (itnl->new_mv_t * t + itnl->old_mv_t * (3 - t)) / 3.0f;
                    dcv.y += parabora_f(at);
                }
                itnl->node_render->setPosition3D(dcv);
    
                if(itnl->render_time == 1 && itnl->rotate_animation)
                {
                    auto np = itnl->new_render_pos;
                    auto op = itnl->old_render_pos;
                    if(itnl->parabola_animation)
                    {
                        {
                            auto at = itnl->new_mv_t;
                            np.y += parabora_f(at);
                        }
                        {
                            auto at = itnl->old_mv_t;
                            op.y += parabora_f(at);
                        }
                    }
                    auto d = np - op;

                    if(d.length() > 0.000000001f)
                    {
                        auto theta = atan2f(d.x, d.y);
                        itnl->node_render_z->setRotation(theta * 360.0f / (2.0f * PI));
                    }
                    
                }
            }
        }

        void RtsObject::set_position(const type::Vector2F& p)
        {
            itnl->node->setPosition(cocos2d::Point(p.x, p.y));
        }

        type::Vector2F RtsObject::get_position() const
        {
            auto m = itnl->node_ref.get_transform();
            return m.get_o_vec().xy();
        }

        void RtsObject::set_render_offset(const type::Vector2F& render_offset)
        {
            itnl->render_offset = render_offset;
        }

        type::Vector2F RtsObject::get_render_offset() const
        {
            return itnl->render_offset;
        }

        RtsObjectActionSP RtsObject::move_to_no_arg(const type::Vector2F& p, RFloat velocity, NoArgCallback move_end_callback)
        {
            return move_to(p, velocity, [=](RtsObjectSP o){ move_end_callback(); });
        }

        RtsObjectActionSP RtsObject::move_to(const type::Vector2F& p, RFloat velocity, MoveEndCallback move_end_callback)
        {
            stop_move();
            return move_to_action(p, velocity, move_end_callback);
        }

        RtsObjectActionSP RtsObject::move_to(const type::Vector2F& p, RFloat velocity, PremoveCallback premove_callback, MoveEndCallback move_end_callback)
        {
            stop_move();
            return move_to_action(p, velocity, premove_callback, move_end_callback);
        }

        RtsObjectActionSP RtsObject::move_to_action_no_arg(const type::Vector2F& p, RFloat velocity, NoArgCallback move_end_callback)
        {
            return move_to_action(p, velocity, [=](RtsObjectSP o){ move_end_callback(); });
        }

        RtsObjectActionSP RtsObject::move_to_action(const type::Vector2F& p, RFloat velocity, MoveEndCallback move_end_callback)
        {
            return move_to(p, velocity, [=](RtsObjectActionSP a, RtsObjectSP o, type::Vector2F old_pos, type::Vector2F new_pos){
                if(o->get_collidable() && o->get_movable())
                {
                    auto og = o->get_object_group();
                    auto& contact_pair = og->ref_contact_pair_table();
                    auto collision = og->get_collision();
                    auto m = this->itnl->node_ref.get_transform();
                    m.set_o_vec(type::Vector3F(new_pos));

                    auto r = o->get_node_ref();
                    //auto otr = r.get_ref();
                    //auto &s = otr->data.shape;
                    bool canceled = false;

                    auto id0 = o->get_node_ref().get_type_id();

                    for(auto i : contact_pair[id0])
                    {
                        if(i.second)
                        {
                            if(r.is_box())
                            {
                                auto box = r.get_box();
                                collision->find_o_box(m, i.first, box.box, [&](cocos2d::Node* n1){
                                    auto o1 = og->search_from_node(n1);
                                    if(!o1 || o == o1)
                                    {
                                        return;
                                    }
                                    if(o1->get_collidable())
                                    {
                                        auto id1 = o1->get_node_ref().get_type_id();
                                        if((o->get_enemy_collidable() || o1->get_enemy_collidable()) && id0 == id1)
                                        {
                                            return;
                                        }
                                        

                                        auto r1 = o1->get_node_ref();
                                        if(r1.is_box())
                                        {
                                            auto box1 = r1.get_box();

                                            type::Vector2F n;
                                            RFloat d;
                                            type::Vector2F p0;
                                            type::Vector2F p1;
                                            type::OBox2F box0(m, box.box);
                                            if(box0.get_contact_info(box1, n, d, p0, p1))
                                            {
                                                auto dv = new_pos - old_pos;
                                                auto odv = p - old_pos;
                                                auto ndn = n * d;
                                                auto ndv = dv;
                                                auto ab0 = box0.get_aabb();
                                                auto ab1 = box1.get_aabb();
                                                type::Vector2F ap0;
                                                type::Vector2F ap1;
                                                ndn.normalize();
                                                ndv.normalize();
                                                if(ndv.dot(ndn) < -0.01f)
                                                {
                                                    if(std::abs(n.x) > std::abs(n.y))
                                                    {
                                                        dv.x = 0;

                                                        auto c0 = ab0.get_center();
                                                        auto c1 = ab1.get_center();
                                                        auto w = (ab0.w.x + ab1.w.x) / 2.0f + 4.0f;
                                                        ap0.x = old_pos.x;
                                                        ap0.y = (c1.y > c0.y ? c1.y : c0.y) + w;
                                                        ap1.x = old_pos.x;
                                                        ap1.y = (c1.y < c0.y ? c1.y : c0.y) - w;
                                                    }
                                                    else
                                                    {
                                                        dv.y = 0;

                                                        auto c0 = ab0.get_center();
                                                        auto c1 = ab1.get_center();
                                                        auto w = (ab0.w.y + ab1.w.y) / 2.0f + 4.0f;
                                                        ap0.x = (c1.x > c0.x ? c1.x : c0.x) + w;
                                                        ap0.y = old_pos.y;
                                                        ap1.x = (c1.x < c0.x ? c1.x : c0.x) - w;
                                                        ap1.y = old_pos.y;
                                                    }
                                                    new_pos = old_pos + dv;
                                                    canceled = true;

                                                    if(itnl->move_push_back_callback)
                                                    {
                                                        itnl->move_push_back_callback(o, o1, p, n, odv, ap0, ap1);
                                                    }
                                                }

                                            }
                                        }
                                        
                                    }
                                });
                            }
                        }

                        if(canceled)
                        {
                            return new_pos;
                        }
                        
                    }
                    
                }

                return new_pos;
            }, move_end_callback);
        }

        RtsObjectActionSP RtsObject::move_to_action(const type::Vector2F& p, RFloat velocity, PremoveCallback premove_callback, MoveEndCallback move_end_callback)
        {
            if(!itnl->node_ref.is_valid())
            {
                return RtsObjectActionSP();
            }

            auto tp = p;
            velocity *= 3.0f;
            struct Tmp
            {
                RInt32 ct;
                RBool move_ended;
                RBool first;

                Tmp()
                {
                    ct = 0;
                    move_ended = rfalse;
                    first = rtrue;
                }
            };
            auto st_cp = get_position();
            auto dp = tp - st_cp;
            itnl->parabora_h = (dp).get_magnitude() * 0.75f;
            std::shared_ptr<Tmp> tmp = std::make_shared<Tmp>();

            if(itnl->walks.size() > 0 && dp.get_magnitude() > 0.0f)
            {
                RFloat tha = atan2f(dp.y, -dp.x);
                auto th = (static_cast<int>((tha + PI * 1.5f) * 8 / (2 * PI) + 0.5f) + 1) % 8;
                if(itnl->past_th != th)
                {
                    start_animation(cocos2d::Animate::create(itnl->walks.at(th)));
                    itnl->past_th = th;
                }

            }

            if(itnl->move_warp)
            {
                auto dcv = convert_to_render();
                itnl->old_render_pos = dcv;
                itnl->new_render_pos = dcv;
                itnl->move_warp = false;
            }
            auto a = add_action([=](RtsObjectActionSP a, RtsObjectSP o){

                if(tmp->first)
                {
                    itnl->new_render_pos = convert_to_render(get_position() - dp * 0.0001f);
                    itnl->mv_t = 0.0f;
                    itnl->new_mv_t = -0.0001f;
                    tmp->first = rfalse;
                    return;

                }

                if(tmp->move_ended)
                {

                    stop_move();

                    if(itnl->idles.size() > 0)
                    {
                        if(itnl->past_th >= 0)
                        {
                            start_animation(cocos2d::Animate::create(itnl->idles.at(itnl->past_th)));

                        }
                        else
                        {
                            RFloat tha = atan2f(dp.y, -dp.x);
                            auto th = (static_cast<int>((tha + PI * 1.5f) * 8 / (2 * PI) + 0.5f) + 1) % 8;

                            start_animation(cocos2d::Animate::create(itnl->idles.at(th)));
                        }

                    }
                    
                    move_end_callback(o);
                    return;
                }

                if(auto og = itnl->object_group.lock())
                {
                    auto p = tp;
                    auto cp = get_position();
                    auto dp = p - cp;
                    auto d = dp.get_magnitude();
                    auto n = dp;
                    n.normalize();
                    auto dv = (velocity * og->get_dt());
                    auto mv = n * dv;

                    auto np = mv + cp;
                    if(mv.get_magnitude() < d)
                    {
                        auto nnp = premove_callback(a, o, cp, np);
                        if((nnp - np).get_magnitude() < dv)
                        {
                            set_position(nnp);
                        }
                        else
                        {
                            tmp->ct++;
                            if(tmp->ct > 3)
                            {
                                tmp->move_ended = rtrue;
                            }

                        }

                        np = nnp;
                    }
                    else
                    {
                        auto nnp = premove_callback(a, o, cp, p);
                        if((nnp - p).get_magnitude() < dv)
                        {
                            set_position(nnp);

                            tmp->move_ended = rtrue;
                        }
                        else
                        {
                            tmp->ct++;
                            if(tmp->ct > 3)
                            {
                                tmp->move_ended = rtrue;
                            }
                        }
                        np = nnp;

                    }
                    itnl->mv_t = (np - st_cp).get_magnitude() / (tp - st_cp).get_magnitude();
                }
                
            });
            itnl->current_move_action = a;
            return a;
        }

        RtsObjectActionSP RtsObject::trace_to(RtsObjectSP target, RFloat velocity, MoveEndCallback target_lost_callback)
        {
            // depricated?
            velocity *= 3.0f;
            return add_action([=](RtsObjectActionSP a, RtsObjectSP o){
                if(auto og = itnl->object_group.lock())
                {
                    if(!target->is_valid())
                    {
                        target_lost_callback(o);
                        a->stop();
                        return;
                    }
                    auto tp = target->get_position();
                    auto p = tp;
                    auto cp = get_position();
                    auto dp = p - cp;
                    auto d = dp.get_magnitude();
                    auto n = dp;
                    n.normalize();
                    auto mv = n * (velocity * og->get_dt());
                    if(mv.get_magnitude() < d)
                    {
                        set_position(mv + cp);
                    }
                    else
                    {
                        set_position(p);
                    }
                }
            });
        }

        RtsObjectActionSP RtsObject::delay_call_no_arg(RFloat interval, NoArgCallback end_callback)
        {
            return delay_call(interval, [=](RtsObjectSP o){
                end_callback();
            });
        }

        RtsObjectActionSP RtsObject::delay_call(RFloat interval, ObjectCallback end_callback)
        {
            if(!itnl->node_ref.is_valid())
            {
                return RtsObjectActionSP();
            }
            struct Tmp
            {
                RInt32 ct;

            };
            auto tmp = std::make_shared<Tmp>();
            tmp->ct = std::max(static_cast<RInt32>(interval / 0.1), 0) + 1;
            auto a = add_action([=](RtsObjectActionSP a, RtsObjectSP o){
                if(tmp->ct <= 0)
                {
                    stop_move();
                    end_callback(o);
                    
                }
                tmp->ct--;
            });
            itnl->current_move_action = a;
            return a;
        }

        RtsObjectActionSP RtsObject::interval_call_no_arg(RFloat interval, NoArgCallback interval_callback)
        {
            return interval_call(interval, [=](RtsObjectSP o){
                interval_callback();
            });
        }

        RtsObjectActionSP RtsObject::interval_call(RFloat interval, ObjectCallback interval_callback)
        {
            if(!itnl->node_ref.is_valid())
            {
                return RtsObjectActionSP();
            }
            struct Tmp
            {
                RInt32 ct;

            };
            auto tmp = std::make_shared<Tmp>();
            tmp->ct = std::max(static_cast<RInt32>(interval / 0.1), 0) + 1;
            auto a = add_action([=](RtsObjectActionSP a, RtsObjectSP o){
                if(tmp->ct <= 0)
                {
                    interval_callback(o);

                }
                tmp->ct--;
            });
            itnl->current_move_action = a;
            return a;
        }

        void RtsObject::stop_move()
        {
            if(itnl->current_move_action)
            {
                itnl->current_move_action->stop();
                itnl->current_move_action.reset();
            }
        }

        void RtsObject::stop_animation()
        {
            if(itnl->animation_action)
            {
                itnl->node_render_z->stopAction(itnl->animation_action);
                itnl->animation_action = nullptr;
            }

            itnl->past_th = -1000;
        }

        cocos2d::Action* RtsObject::start_animation(cocos2d::Animate* animate)
        {
            stop_animation();

            itnl->animation_action = itnl->node_render_z->runAction(animate);

            return itnl->animation_action;
        }

    }
}
