#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_H_

#include "cor_cocos2dx_converter/sources/collision_2d_node.h"

#include "cor_cocos2dx_converter/sources/rts/rts_object_sensor.h"

#include "CCVector.h"
#include "CCAnimation.h"
#include "CCActionInterval.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectItnl;
    
        class RtsObjectAction;
        typedef RtsObjectAction* RtsObjectActionPtr;
        typedef std::shared_ptr<RtsObjectAction> RtsObjectActionSP;

        class RtsObjectAction : public std::enable_shared_from_this<RtsObjectAction>
        {
        public:
            typedef std::function<void(RtsObjectActionSP, RtsObjectSP)> StepCallback;
        private:
            StepCallback step_callback;
            RtsObjectWP object;
            RBool erased;

        public:
            RtsObjectAction(RtsObjectSP object, StepCallback on_step);
            virtual ~RtsObjectAction();
            RBool is_erased();
            void stop();
            void step();
        };

        class RtsObject : public std::enable_shared_from_this<RtsObject>
        {
            std::unique_ptr<RtsObjectItnl> itnl;
        
        public:
            typedef std::function<void()> NoArgCallback;
            typedef std::function<void(RtsObjectSP)> ObjectCallback;
            typedef std::function<void(RtsObjectSP)> MoveEndCallback;
            typedef std::function<void(RtsObjectSP, RtsObjectSP, type::Vector2F, type::Vector2F, type::Vector2F, type::Vector2F, type::Vector2F)> MovePushBackCallback;
            typedef std::function<void(RtsObjectActionSP, RtsObjectSP)> StepCallback;
            typedef std::function<type::Vector2F(RtsObjectActionSP, RtsObjectSP, type::Vector2F, type::Vector2F)> PremoveCallback;
            typedef Collision2dNode::CollisionCallback CollisionCallback;


            RtsObject();
            RtsObject(const RtsObjectGroupSP& object_group, const Collision2dNodeRef& node_ref);
            virtual ~RtsObject();

            static RtsObjectSP create();
            static RtsObjectSP create(const RtsObjectGroupSP& object_group, const Collision2dNodeRef& node_ref);
            
            RtsObjectGroupSP get_object_group() const;

            const Collision2dNodeRef& get_node_ref() const;
            void set_kind(RInt32 kind);
            RInt32 get_kind() const;
            void set_movable(RBool movable);
            RBool get_movable() const;
            void set_collidable(RBool collidable);
            RBool get_collidable() const;
            void set_enemy_collidable(RBool enemy_collidable);
            RBool get_enemy_collidable() const;
            void set_rotate_animation(RBool rotate_animation);
            RBool get_rotate_animation() const;
            void set_parabola_animation(RBool parabola_animation);
            RBool get_parabola_animation() const;
            //Actions& ref_actions();
            //Sensors& ref_sensors();
            void set_node_render(cocos2d::Node* node_render);
            void set_node_render_z(cocos2d::Node* node_render_z);
            cocos2d::Node* get_node_render();
            void set_move_push_back_callback(MovePushBackCallback move_push_back_callback);
            void set_z_offset(RFloat z_offset);
            RFloat get_z_offset();
            void set_walks(const cocos2d::Vector<cocos2d::Animation*>& walks);
            cocos2d::Vector<cocos2d::Animation*> get_walks() const;
            void set_shoots(const cocos2d::Vector<cocos2d::Animation*>& shoots);
            cocos2d::Vector<cocos2d::Animation*> get_shoots() const;
            void set_idles(const cocos2d::Vector<cocos2d::Animation*>& idles);
            cocos2d::Vector<cocos2d::Animation*> get_idles() const;


            bool is_valid() const;
            bool is_released() const;
            void release();

            cocos2d::Vec3 convert_to_render(type::Vector2F av) const;
            cocos2d::Vec3 convert_to_render() const;
            void step();
            void render();
            RtsObjectActionSP add_action(StepCallback step_callback);
            RtsObjectSensorSP add_sensor(RInt32 type_id, const type::Vector2F& p, const RFloat& r, CollisionCallback collision_callback);
            
            void set_position(const type::Vector2F& p);
            type::Vector2F get_position() const;
            void set_render_offset(const type::Vector2F& render_offset);
            type::Vector2F get_render_offset() const;

            RtsObjectActionSP move_to_no_arg(const type::Vector2F& p, RFloat velocity, NoArgCallback move_end_callback);
            RtsObjectActionSP move_to(const type::Vector2F& p, RFloat velocity, MoveEndCallback move_end_callback);
            RtsObjectActionSP move_to(const type::Vector2F& p, RFloat velocity, PremoveCallback premove_callback, MoveEndCallback move_end_callback);
            RtsObjectActionSP move_to_action_no_arg(const type::Vector2F& p, RFloat velocity, NoArgCallback move_end_callback);
            RtsObjectActionSP move_to_action(const type::Vector2F& p, RFloat velocity, MoveEndCallback move_end_callback);
            RtsObjectActionSP move_to_action(const type::Vector2F& p, RFloat velocity, PremoveCallback premove_callback, MoveEndCallback move_end_callback);

            RtsObjectActionSP trace_to(RtsObjectSP target, RFloat velocity, MoveEndCallback target_lost_callback);
            RtsObjectActionSP delay_call_no_arg(RFloat interval, NoArgCallback end_callback);
            RtsObjectActionSP delay_call(RFloat interval, ObjectCallback end_callback);
            RtsObjectActionSP interval_call_no_arg(RFloat interval, NoArgCallback interval_callback);
            RtsObjectActionSP interval_call(RFloat interval, ObjectCallback interval_callback);
            void stop_move();

            void stop_animation();
            cocos2d::Action* start_animation(cocos2d::Animate* animate);
        };
    }
}

#endif
