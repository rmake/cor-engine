#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_cocos2dx_converter/sources/cocos2dx_experimental.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "cor_cocos2dx_converter/sources/easy_http_client.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_cost_grid_space.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_cost_grid_space_e.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_effect.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_group.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_sensor.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_system.h"
#include "cor_cocos2dx_converter/sources/step_size_scene.h"
#include "cor_cocos2dx_converter/sources/textured_triangle_node.h"
#include "cor_cocos2dx_converter/sources/type_converter.h"
#include "cor_cocos2dx_converter/sources/type_converter_tmpl.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_experimental.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_array.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_mruby_ref.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_value.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/mruby_script_engine.h"
#include "cor_cocos2dx_mruby_interface/sources/sprite_experimental.h"
#undef RELATIVE
#undef ABSOLUTE
#include "../projects/cor_lib_test_main/cocos2d/cocos/cocos2d.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/ui/UIEditBox/UIEditBox.h"
#include "../projects/cor_lib_test_main/cocos2d/extensions/GUI/CCScrollView/CCScrollView.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/audio/include/SimpleAudioEngine.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        
        void Cocos2dxBind_cocos2d__Action_step_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__Action_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Action_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Action_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Action_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Action_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Action_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Action_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Action_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Action_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Action_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Action_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Action_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Action_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Action_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Action_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Action_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Action_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Action_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Action_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->_scriptObject;
        }

        float Cocos2dxBind_cocos2d__FiniteTimeAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, float a0)
        {

            c->setDuration(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> Cocos2dxBind_cocos2d__FiniteTimeAction_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> Cocos2dxBind_cocos2d__FiniteTimeAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->clone();
        }

        std::string Cocos2dxBind_cocos2d__FiniteTimeAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->description();
        }

        bool Cocos2dxBind_cocos2d__FiniteTimeAction_is_done_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_step_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FiniteTimeAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FiniteTimeAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FiniteTimeAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FiniteTimeAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FiniteTimeAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FiniteTimeAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FiniteTimeAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> Cocos2dxBind_cocos2d__Speed_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::Speed::create(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__Speed_get_speed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getSpeed();
        }

        void Cocos2dxBind_cocos2d__Speed_set_speed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, float a0)
        {

            c->setSpeed(a0);
        }

        void Cocos2dxBind_cocos2d__Speed_set_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            c->setInnerAction(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__Speed_get_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getInnerAction();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> Cocos2dxBind_cocos2d__Speed_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> Cocos2dxBind_cocos2d__Speed_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Speed_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Speed_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Speed_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Speed_is_done(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->isDone();
        }

        bool Cocos2dxBind_cocos2d__Speed_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        std::string Cocos2dxBind_cocos2d__Speed_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Speed_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Speed_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Speed_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Speed_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Speed_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Speed_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Speed_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Speed_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Speed_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Speed_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Speed_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Speed_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Speed_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> Cocos2dxBind_cocos2d__Follow_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cocos2d::Rect a1)
        {

            return cocos2d::Follow::create(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__Follow_is_boundary_set(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->isBoundarySet();
        }

        void Cocos2dxBind_cocos2d__Follow_set_boundary_set(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, bool a0)
        {

            c->setBoundarySet(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> Cocos2dxBind_cocos2d__Follow_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> Cocos2dxBind_cocos2d__Follow_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Follow_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Follow_is_done(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Follow_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__Follow_init_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cocos2d::Rect a1)
        {

            return c->initWithTarget(a0.get(), a1);
        }

        std::string Cocos2dxBind_cocos2d__Follow_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Follow_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Follow_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Follow_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Follow_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Follow_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Follow_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Follow_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Follow_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Follow_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Follow_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Follow_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Follow_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Follow_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Follow_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {

            return c->getReferenceCount();
        }

        float Cocos2dxBind_cocos2d__ActionInterval_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ActionInterval_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ActionInterval_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__ActionInterval_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__ActionInterval_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__ActionInterval_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__ActionInterval_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__ActionInterval_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ActionInterval_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionInterval_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionInterval_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ActionInterval_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ActionInterval_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ActionInterval_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionInterval_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionInterval_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionInterval_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> Cocos2dxBind_cocos2d__Sequence_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0)
        {

            return cocos2d::Sequence::create(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> Cocos2dxBind_cocos2d__Sequence_create_2(MrubyRef a0)
        {

            return cocos2d::Sequence::create(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::FiniteTimeAction>(a0));
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> Cocos2dxBind_cocos2d__Sequence_create_with_two_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return cocos2d::Sequence::createWithTwoActions(a0.get(), a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> Cocos2dxBind_cocos2d__Sequence_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> Cocos2dxBind_cocos2d__Sequence_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Sequence_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sequence_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Sequence_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Sequence_init_with_two_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return c->initWithTwoActions(a0.get(), a1.get());
        }

        float Cocos2dxBind_cocos2d__Sequence_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Sequence_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Sequence_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Sequence_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Sequence_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__Sequence_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Sequence_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sequence_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sequence_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Sequence_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Sequence_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Sequence_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Sequence_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Sequence_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Sequence_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Sequence_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> Cocos2dxBind_cocos2d__Repeat_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, unsigned int a1)
        {

            return cocos2d::Repeat::create(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Repeat_set_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0)
        {

            c->setInnerAction(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> Cocos2dxBind_cocos2d__Repeat_get_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getInnerAction();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> Cocos2dxBind_cocos2d__Repeat_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> Cocos2dxBind_cocos2d__Repeat_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Repeat_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Repeat_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Repeat_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Repeat_is_done(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->isDone();
        }

        bool Cocos2dxBind_cocos2d__Repeat_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, unsigned int a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__Repeat_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Repeat_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Repeat_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Repeat_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__Repeat_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Repeat_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Repeat_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Repeat_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Repeat_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Repeat_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Repeat_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Repeat_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Repeat_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Repeat_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Repeat_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> Cocos2dxBind_cocos2d__RepeatForever_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::RepeatForever::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            c->setInnerAction(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__RepeatForever_get_inner_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getInnerAction();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> Cocos2dxBind_cocos2d__RepeatForever_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> Cocos2dxBind_cocos2d__RepeatForever_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__RepeatForever_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__RepeatForever_is_done(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->isDone();
        }

        bool Cocos2dxBind_cocos2d__RepeatForever_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__RepeatForever_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__RepeatForever_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__RepeatForever_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__RepeatForever_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__RepeatForever_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RepeatForever_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RepeatForever_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__RepeatForever_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__RepeatForever_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__RepeatForever_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__RepeatForever_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RepeatForever_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__RepeatForever_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> Cocos2dxBind_cocos2d__Spawn_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0)
        {

            return cocos2d::Spawn::create(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> Cocos2dxBind_cocos2d__Spawn_create_2(MrubyRef a0)
        {

            return cocos2d::Spawn::create(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::FiniteTimeAction>(a0));
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> Cocos2dxBind_cocos2d__Spawn_create_with_two_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return cocos2d::Spawn::createWithTwoActions(a0.get(), a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> Cocos2dxBind_cocos2d__Spawn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> Cocos2dxBind_cocos2d__Spawn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Spawn_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Spawn_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Spawn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Spawn_init_with_two_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return c->initWithTwoActions(a0.get(), a1.get());
        }

        float Cocos2dxBind_cocos2d__Spawn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Spawn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Spawn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Spawn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Spawn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__Spawn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Spawn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Spawn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Spawn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Spawn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Spawn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Spawn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Spawn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Spawn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Spawn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Spawn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> Cocos2dxBind_cocos2d__RotateTo_create_1(float a0, float a1, float a2)
        {

            return cocos2d::RotateTo::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> Cocos2dxBind_cocos2d__RotateTo_create_2(float a0, float a1)
        {

            return cocos2d::RotateTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> Cocos2dxBind_cocos2d__RotateTo_create_3(float a0, cocos2d::Vec3 a1)
        {

            return cocos2d::RotateTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> Cocos2dxBind_cocos2d__RotateTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> Cocos2dxBind_cocos2d__RotateTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__RotateTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__RotateTo_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__RotateTo_init_with_duration_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__RotateTo_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0, cocos2d::Vec3 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__RotateTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__RotateTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__RotateTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__RotateTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__RotateTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__RotateTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__RotateTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RotateTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RotateTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__RotateTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__RotateTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__RotateTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__RotateTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__RotateTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RotateTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__RotateTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> Cocos2dxBind_cocos2d__RotateBy_create_1(float a0, float a1)
        {

            return cocos2d::RotateBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> Cocos2dxBind_cocos2d__RotateBy_create_2(float a0, float a1, float a2)
        {

            return cocos2d::RotateBy::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> Cocos2dxBind_cocos2d__RotateBy_create_3(float a0, cocos2d::Vec3 a1)
        {

            return cocos2d::RotateBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> Cocos2dxBind_cocos2d__RotateBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> Cocos2dxBind_cocos2d__RotateBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__RotateBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__RotateBy_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__RotateBy_init_with_duration_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0, float a1)
        {

            return c->initWithDuration(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__RotateBy_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__RotateBy_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0, cocos2d::Vec3 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__RotateBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__RotateBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__RotateBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__RotateBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__RotateBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__RotateBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__RotateBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RotateBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RotateBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__RotateBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__RotateBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__RotateBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__RotateBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__RotateBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RotateBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__RotateBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> Cocos2dxBind_cocos2d__MoveBy_create_1(float a0, cocos2d::Vec2 a1)
        {

            return cocos2d::MoveBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> Cocos2dxBind_cocos2d__MoveBy_create_2(float a0, cocos2d::Vec3 a1)
        {

            return cocos2d::MoveBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> Cocos2dxBind_cocos2d__MoveBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> Cocos2dxBind_cocos2d__MoveBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__MoveBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__MoveBy_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__MoveBy_init_with_duration_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0, cocos2d::Vec2 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__MoveBy_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0, cocos2d::Vec3 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__MoveBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__MoveBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__MoveBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__MoveBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__MoveBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__MoveBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__MoveBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MoveBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MoveBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__MoveBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__MoveBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__MoveBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__MoveBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__MoveBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__MoveBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__MoveBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> Cocos2dxBind_cocos2d__MoveTo_create_1(float a0, cocos2d::Vec2 a1)
        {

            return cocos2d::MoveTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> Cocos2dxBind_cocos2d__MoveTo_create_2(float a0, cocos2d::Vec3 a1)
        {

            return cocos2d::MoveTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> Cocos2dxBind_cocos2d__MoveTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> Cocos2dxBind_cocos2d__MoveTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__MoveTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__MoveTo_init_with_duration_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0, cocos2d::Vec2 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__MoveTo_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0, cocos2d::Vec3 a1)
        {

            return c->initWithDuration(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MoveTo_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__MoveTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__MoveTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__MoveTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__MoveTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__MoveTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__MoveTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__MoveTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MoveTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MoveTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__MoveTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__MoveTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__MoveTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__MoveTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__MoveTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__MoveTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__MoveTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> Cocos2dxBind_cocos2d__SkewTo_create(float a0, float a1, float a2)
        {

            return cocos2d::SkewTo::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> Cocos2dxBind_cocos2d__SkewTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> Cocos2dxBind_cocos2d__SkewTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__SkewTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__SkewTo_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__SkewTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        float Cocos2dxBind_cocos2d__SkewTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__SkewTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__SkewTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__SkewTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__SkewTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__SkewTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__SkewTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SkewTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SkewTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__SkewTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__SkewTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__SkewTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__SkewTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__SkewTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__SkewTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__SkewTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> Cocos2dxBind_cocos2d__SkewBy_create(float a0, float a1, float a2)
        {

            return cocos2d::SkewBy::create(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__SkewBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> Cocos2dxBind_cocos2d__SkewBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> Cocos2dxBind_cocos2d__SkewBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__SkewBy_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__SkewBy_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__SkewBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__SkewBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__SkewBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__SkewBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__SkewBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__SkewBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__SkewBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SkewBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SkewBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__SkewBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__SkewBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__SkewBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__SkewBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__SkewBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__SkewBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__SkewBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> Cocos2dxBind_cocos2d__JumpBy_create(float a0, cocos2d::Vec2 a1, float a2, int a3)
        {

            return cocos2d::JumpBy::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> Cocos2dxBind_cocos2d__JumpBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> Cocos2dxBind_cocos2d__JumpBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__JumpBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__JumpBy_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__JumpBy_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, float a0, cocos2d::Vec2 a1, float a2, int a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__JumpBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__JumpBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__JumpBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__JumpBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__JumpBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__JumpBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__JumpBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__JumpBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__JumpBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__JumpBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__JumpBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__JumpBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__JumpBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__JumpBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__JumpBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__JumpBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> Cocos2dxBind_cocos2d__JumpTo_create(float a0, cocos2d::Vec2 a1, float a2, int a3)
        {

            return cocos2d::JumpTo::create(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__JumpTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> Cocos2dxBind_cocos2d__JumpTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> Cocos2dxBind_cocos2d__JumpTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__JumpTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, float a0, cocos2d::Vec2 a1, float a2, int a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__JumpTo_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__JumpTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__JumpTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__JumpTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__JumpTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__JumpTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__JumpTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__JumpTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__JumpTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__JumpTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__JumpTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__JumpTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__JumpTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__JumpTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__JumpTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__JumpTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__JumpTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> Cocos2dxBind_cocos2d__BezierBy_create(float a0, cocos2d::_ccBezierConfig a1)
        {

            return cocos2d::BezierBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> Cocos2dxBind_cocos2d__BezierBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> Cocos2dxBind_cocos2d__BezierBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__BezierBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__BezierBy_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__BezierBy_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, float a0, cocos2d::_ccBezierConfig a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__BezierBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__BezierBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__BezierBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__BezierBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__BezierBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__BezierBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__BezierBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BezierBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BezierBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__BezierBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__BezierBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__BezierBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__BezierBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__BezierBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__BezierBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__BezierBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> Cocos2dxBind_cocos2d__BezierTo_create(float a0, cocos2d::_ccBezierConfig a1)
        {

            return cocos2d::BezierTo::create(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BezierTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> Cocos2dxBind_cocos2d__BezierTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> Cocos2dxBind_cocos2d__BezierTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__BezierTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, float a0, cocos2d::_ccBezierConfig a1)
        {

            return c->initWithDuration(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BezierTo_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__BezierTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__BezierTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__BezierTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__BezierTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__BezierTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__BezierTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__BezierTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BezierTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BezierTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__BezierTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__BezierTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__BezierTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__BezierTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__BezierTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__BezierTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__BezierTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> Cocos2dxBind_cocos2d__ScaleTo_create_1(float a0, float a1)
        {

            return cocos2d::ScaleTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> Cocos2dxBind_cocos2d__ScaleTo_create_2(float a0, float a1, float a2)
        {

            return cocos2d::ScaleTo::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> Cocos2dxBind_cocos2d__ScaleTo_create_3(float a0, float a1, float a2, float a3)
        {

            return cocos2d::ScaleTo::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> Cocos2dxBind_cocos2d__ScaleTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> Cocos2dxBind_cocos2d__ScaleTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ScaleTo_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0, float a1)
        {

            return c->initWithDuration(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_6(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0, float a1, float a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__ScaleTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ScaleTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ScaleTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ScaleTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ScaleTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ScaleTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ScaleTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ScaleTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ScaleTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ScaleTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ScaleTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ScaleTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ScaleTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> Cocos2dxBind_cocos2d__ScaleBy_create_1(float a0, float a1)
        {

            return cocos2d::ScaleBy::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> Cocos2dxBind_cocos2d__ScaleBy_create_2(float a0, float a1, float a2)
        {

            return cocos2d::ScaleBy::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> Cocos2dxBind_cocos2d__ScaleBy_create_3(float a0, float a1, float a2, float a3)
        {

            return cocos2d::ScaleBy::create(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__ScaleBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> Cocos2dxBind_cocos2d__ScaleBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> Cocos2dxBind_cocos2d__ScaleBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0, float a1)
        {

            return c->initWithDuration(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_6(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0, float a1, float a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__ScaleBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ScaleBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ScaleBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ScaleBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ScaleBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ScaleBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ScaleBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ScaleBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ScaleBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ScaleBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ScaleBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ScaleBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ScaleBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> Cocos2dxBind_cocos2d__Blink_create(float a0, int a1)
        {

            return cocos2d::Blink::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> Cocos2dxBind_cocos2d__Blink_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> Cocos2dxBind_cocos2d__Blink_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Blink_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Blink_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Blink_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__Blink_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, float a0, int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Blink_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Blink_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Blink_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Blink_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Blink_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Blink_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Blink_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Blink_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Blink_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Blink_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Blink_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Blink_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Blink_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Blink_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Blink_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Blink_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Blink_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Blink_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Blink_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Blink_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> Cocos2dxBind_cocos2d__FadeTo_create(float a0, int a1)
        {

            return cocos2d::FadeTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> Cocos2dxBind_cocos2d__FadeTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> Cocos2dxBind_cocos2d__FadeTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__FadeTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__FadeTo_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__FadeTo_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, float a0, int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__FadeTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__FadeTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__FadeTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FadeTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FadeTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FadeTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FadeTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FadeTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FadeTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FadeTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FadeTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FadeTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FadeTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FadeTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> Cocos2dxBind_cocos2d__FadeIn_create(float a0)
        {

            return cocos2d::FadeIn::create(a0);
        }

        void Cocos2dxBind_cocos2d__FadeIn_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> Cocos2dxBind_cocos2d__FadeIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> Cocos2dxBind_cocos2d__FadeIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_reverse_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> a0)
        {

            c->setReverseAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__FadeIn_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__FadeIn_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, float a0, int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__FadeIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__FadeIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__FadeIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FadeIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FadeIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FadeIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FadeIn_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FadeIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FadeIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FadeIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FadeIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FadeIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FadeIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FadeIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> Cocos2dxBind_cocos2d__FadeOut_create(float a0)
        {

            return cocos2d::FadeOut::create(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOut_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> Cocos2dxBind_cocos2d__FadeOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> Cocos2dxBind_cocos2d__FadeOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_reverse_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> a0)
        {

            c->setReverseAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__FadeOut_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__FadeOut_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, float a0, int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__FadeOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__FadeOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__FadeOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FadeOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FadeOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FadeOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FadeOut_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FadeOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FadeOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FadeOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FadeOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FadeOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FadeOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FadeOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> Cocos2dxBind_cocos2d__TintTo_create_1(float a0, int a1, int a2, int a3)
        {

            return cocos2d::TintTo::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> Cocos2dxBind_cocos2d__TintTo_create_2(float a0, cocos2d::Color3B a1)
        {

            return cocos2d::TintTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> Cocos2dxBind_cocos2d__TintTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> Cocos2dxBind_cocos2d__TintTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__TintTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__TintTo_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__TintTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, float a0, int a1, int a2, int a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__TintTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__TintTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__TintTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__TintTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__TintTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__TintTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__TintTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TintTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TintTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__TintTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__TintTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__TintTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__TintTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TintTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TintTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TintTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> Cocos2dxBind_cocos2d__TintBy_create(float a0, int a1, int a2, int a3)
        {

            return cocos2d::TintBy::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> Cocos2dxBind_cocos2d__TintBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> Cocos2dxBind_cocos2d__TintBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__TintBy_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__TintBy_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__TintBy_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, float a0, int a1, int a2, int a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__TintBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__TintBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__TintBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__TintBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__TintBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__TintBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__TintBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TintBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TintBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__TintBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__TintBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__TintBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__TintBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TintBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TintBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TintBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> Cocos2dxBind_cocos2d__DelayTime_create(float a0)
        {

            return cocos2d::DelayTime::create(a0);
        }

        void Cocos2dxBind_cocos2d__DelayTime_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> Cocos2dxBind_cocos2d__DelayTime_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> Cocos2dxBind_cocos2d__DelayTime_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->clone();
        }

        float Cocos2dxBind_cocos2d__DelayTime_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__DelayTime_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__DelayTime_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__DelayTime_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__DelayTime_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__DelayTime_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__DelayTime_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__DelayTime_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__DelayTime_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DelayTime_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DelayTime_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__DelayTime_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__DelayTime_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__DelayTime_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__DelayTime_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__DelayTime_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DelayTime_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__DelayTime_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> Cocos2dxBind_cocos2d__ReverseTime_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0)
        {

            return cocos2d::ReverseTime::create(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> Cocos2dxBind_cocos2d__ReverseTime_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> Cocos2dxBind_cocos2d__ReverseTime_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ReverseTime_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ReverseTime_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__ReverseTime_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ReverseTime_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ReverseTime_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__ReverseTime_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__ReverseTime_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ReverseTime_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ReverseTime_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }



        
        bool Cocos2dxBind_Collision2dNode_valid_question(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> Cocos2dxBind_Collision2dNode_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::cocos2dx_converter::Collision2dNode>());
        }
        bool Cocos2dxBind_EasyHttpClient_valid_question(std::weak_ptr<cor::cocos2dx_converter::EasyHttpClient> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_RtsObjectSensor_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
        {
            return !c.expired();
        }
        cocos2d::Value Cocos2dxBind_Value_create_0()
        {
            return cocos2d::Value();
        }
        cocos2d::Value Cocos2dxBind_Value_create_1(int a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_2(int a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_3(float a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_4(double a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_5(bool a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_6(const char * a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_7(std::string a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_8(std::vector<cocos2d::Value, std::allocator<cocos2d::Value> > a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_10(std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_12(std::unordered_map<int, cocos2d::Value, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, cocos2d::Value> > > a0)
        {
            return cocos2d::Value(a0);
        }
        cocos2d::Value Cocos2dxBind_Value_create_14(cocos2d::Value a0)
        {
            return cocos2d::Value(a0);
        }
        bool Cocos2dxBind_SpriteFrame_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AnimationFrame_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Animation_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Action_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FiniteTimeAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Speed_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Follow_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionInterval_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Sequence_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Repeat_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RepeatForever_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_1(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> >("Cocos2d", "EaseExponentialOut");
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "valid?", Cocos2dxBind_EaseExponentialOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> >("Cocos2d", "EaseExponentialInOut");
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "valid?", Cocos2dxBind_EaseExponentialInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> >("Cocos2d", "EaseSineIn");
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "valid?", Cocos2dxBind_EaseSineIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> >("Cocos2d", "EaseSineOut");
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "valid?", Cocos2dxBind_EaseSineOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> >("Cocos2d", "EaseSineInOut");
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "valid?", Cocos2dxBind_EaseSineInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> >("Cocos2d", "EaseElastic");
            binder.bind_custom_method("Cocos2d", "EaseElastic", "valid?", Cocos2dxBind_EaseElastic_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> >("Cocos2d", "EaseElasticIn");
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "valid?", Cocos2dxBind_EaseElasticIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> >("Cocos2d", "EaseElasticOut");
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "valid?", Cocos2dxBind_EaseElasticOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> >("Cocos2d", "EaseElasticInOut");
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "valid?", Cocos2dxBind_EaseElasticInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> >("Cocos2d", "EaseBounce");
            binder.bind_custom_method("Cocos2d", "EaseBounce", "valid?", Cocos2dxBind_EaseBounce_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> >("Cocos2d", "EaseBounceIn");
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "valid?", Cocos2dxBind_EaseBounceIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> >("Cocos2d", "EaseBounceOut");
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "valid?", Cocos2dxBind_EaseBounceOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> >("Cocos2d", "EaseBounceInOut");
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "valid?", Cocos2dxBind_EaseBounceInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> >("Cocos2d", "EaseBackIn");
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "valid?", Cocos2dxBind_EaseBackIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> >("Cocos2d", "EaseBackOut");
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "valid?", Cocos2dxBind_EaseBackOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> >("Cocos2d", "EaseBackInOut");
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "valid?", Cocos2dxBind_EaseBackInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> >("Cocos2d", "EaseBezierAction");
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "valid?", Cocos2dxBind_EaseBezierAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> >("Cocos2d", "EaseQuadraticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "valid?", Cocos2dxBind_EaseQuadraticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> >("Cocos2d", "EaseQuadraticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "valid?", Cocos2dxBind_EaseQuadraticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> >("Cocos2d", "EaseQuadraticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "valid?", Cocos2dxBind_EaseQuadraticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> >("Cocos2d", "EaseQuarticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "valid?", Cocos2dxBind_EaseQuarticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> >("Cocos2d", "EaseQuarticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "valid?", Cocos2dxBind_EaseQuarticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> >("Cocos2d", "EaseQuarticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "valid?", Cocos2dxBind_EaseQuarticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> >("Cocos2d", "EaseQuinticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "valid?", Cocos2dxBind_EaseQuinticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> >("Cocos2d", "EaseQuinticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "valid?", Cocos2dxBind_EaseQuinticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> >("Cocos2d", "EaseQuinticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "valid?", Cocos2dxBind_EaseQuinticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> >("Cocos2d", "EaseCircleActionIn");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "valid?", Cocos2dxBind_EaseCircleActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> >("Cocos2d", "EaseCircleActionOut");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "valid?", Cocos2dxBind_EaseCircleActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> >("Cocos2d", "EaseCircleActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "valid?", Cocos2dxBind_EaseCircleActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> >("Cocos2d", "EaseCubicActionIn");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "valid?", Cocos2dxBind_EaseCubicActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> >("Cocos2d", "EaseCubicActionOut");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "valid?", Cocos2dxBind_EaseCubicActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> >("Cocos2d", "EaseCubicActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "valid?", Cocos2dxBind_EaseCubicActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> >("Cocos2d", "ActionInstant");
            binder.bind_custom_method("Cocos2d", "ActionInstant", "valid?", Cocos2dxBind_ActionInstant_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> >("Cocos2d", "Show");
            binder.bind_custom_method("Cocos2d", "Show", "valid?", Cocos2dxBind_Show_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> >("Cocos2d", "Hide");
            binder.bind_custom_method("Cocos2d", "Hide", "valid?", Cocos2dxBind_Hide_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> >("Cocos2d", "ToggleVisibility");
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "valid?", Cocos2dxBind_ToggleVisibility_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> >("Cocos2d", "RemoveSelf");
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "valid?", Cocos2dxBind_RemoveSelf_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> >("Cocos2d", "FlipX");
            binder.bind_custom_method("Cocos2d", "FlipX", "valid?", Cocos2dxBind_FlipX_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> >("Cocos2d", "FlipY");
            binder.bind_custom_method("Cocos2d", "FlipY", "valid?", Cocos2dxBind_FlipY_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> >("Cocos2d", "Place");
            binder.bind_custom_method("Cocos2d", "Place", "valid?", Cocos2dxBind_Place_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> >("Cocos2d", "CallFunc");
            binder.bind_custom_method("Cocos2d", "CallFunc", "valid?", Cocos2dxBind_CallFunc_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> >("Cocos2d", "CallFuncN");
            binder.bind_custom_method("Cocos2d", "CallFuncN", "valid?", Cocos2dxBind_CallFuncN_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> >("Cocos2d", "GridAction");
            binder.bind_custom_method("Cocos2d", "GridAction", "valid?", Cocos2dxBind_GridAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> >("Cocos2d", "Grid3DAction");
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "valid?", Cocos2dxBind_Grid3DAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> >("Cocos2d", "AccelDeccelAmplitude");
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "valid?", Cocos2dxBind_AccelDeccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> >("Cocos2d", "AccelAmplitude");
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "valid?", Cocos2dxBind_AccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> >("Cocos2d", "DeccelAmplitude");
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "valid?", Cocos2dxBind_DeccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> >("Cocos2d", "StopGrid");
            binder.bind_custom_method("Cocos2d", "StopGrid", "valid?", Cocos2dxBind_StopGrid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> >("Cocos2d", "ReuseGrid");
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "valid?", Cocos2dxBind_ReuseGrid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> >("Cocos2d", "Waves3D");
            binder.bind_custom_method("Cocos2d", "Waves3D", "valid?", Cocos2dxBind_Waves3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> >("Cocos2d", "FlipX3D");
            binder.bind_custom_method("Cocos2d", "FlipX3D", "valid?", Cocos2dxBind_FlipX3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> >("Cocos2d", "FlipY3D");
            binder.bind_custom_method("Cocos2d", "FlipY3D", "valid?", Cocos2dxBind_FlipY3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> >("Cocos2d", "Lens3D");
            binder.bind_custom_method("Cocos2d", "Lens3D", "valid?", Cocos2dxBind_Lens3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> >("Cocos2d", "Ripple3D");
            binder.bind_custom_method("Cocos2d", "Ripple3D", "valid?", Cocos2dxBind_Ripple3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> >("Cocos2d", "Shaky3D");
            binder.bind_custom_method("Cocos2d", "Shaky3D", "valid?", Cocos2dxBind_Shaky3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> >("Cocos2d", "Liquid");
            binder.bind_custom_method("Cocos2d", "Liquid", "valid?", Cocos2dxBind_Liquid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> >("Cocos2d", "Waves");
            binder.bind_custom_method("Cocos2d", "Waves", "valid?", Cocos2dxBind_Waves_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> >("Cocos2d", "Twirl");
            binder.bind_custom_method("Cocos2d", "Twirl", "valid?", Cocos2dxBind_Twirl_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> >("Cocos2d", "ActionManager");
            binder.bind_custom_method("Cocos2d", "ActionManager", "valid?", Cocos2dxBind_ActionManager_valid_question);
            binder.bind_static_method("Cocos2d", "ActionManager", "create", Cocos2dxBind_ActionManager_create);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> >("Cocos2d", "PageTurn3D");
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "valid?", Cocos2dxBind_PageTurn3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> >("Cocos2d", "ProgressTo");
            binder.bind_custom_method("Cocos2d", "ProgressTo", "valid?", Cocos2dxBind_ProgressTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> >("Cocos2d", "ProgressFromTo");
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "valid?", Cocos2dxBind_ProgressFromTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> >("Cocos2d", "ShakyTiles3D");
            binder.bind_custom_method("Cocos2d", "ShakyTiles3D", "valid?", Cocos2dxBind_ShakyTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> >("Cocos2d", "ShatteredTiles3D");
            binder.bind_custom_method("Cocos2d", "ShatteredTiles3D", "valid?", Cocos2dxBind_ShatteredTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> >("Cocos2d", "ShuffleTiles");
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "valid?", Cocos2dxBind_ShuffleTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> >("Cocos2d", "FadeOutTRTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "valid?", Cocos2dxBind_FadeOutTRTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> >("Cocos2d", "FadeOutBLTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "valid?", Cocos2dxBind_FadeOutBLTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> >("Cocos2d", "FadeOutUpTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "valid?", Cocos2dxBind_FadeOutUpTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> >("Cocos2d", "FadeOutDownTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "valid?", Cocos2dxBind_FadeOutDownTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> >("Cocos2d", "TurnOffTiles");
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "valid?", Cocos2dxBind_TurnOffTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> >("Cocos2d", "WavesTiles3D");
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "valid?", Cocos2dxBind_WavesTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> >("Cocos2d", "JumpTiles3D");
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "valid?", Cocos2dxBind_JumpTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> >("Cocos2d", "SplitRows");
            binder.bind_custom_method("Cocos2d", "SplitRows", "valid?", Cocos2dxBind_SplitRows_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> >("Cocos2d", "SplitCols");
            binder.bind_custom_method("Cocos2d", "SplitCols", "valid?", Cocos2dxBind_SplitCols_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> >("Cocos2d", "AtlasNode");
            binder.bind_custom_method("Cocos2d", "AtlasNode", "valid?", Cocos2dxBind_AtlasNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> >("Cocos2d", "ClippingNode");
            binder.bind_custom_method("Cocos2d", "ClippingNode", "valid?", Cocos2dxBind_ClippingNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> >("Cocos2d", "LabelAtlas");
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "valid?", Cocos2dxBind_LabelAtlas_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> >("Cocos2d", "MotionStreak");
            binder.bind_custom_method("Cocos2d", "MotionStreak", "valid?", Cocos2dxBind_MotionStreak_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> >("Cocos2d", "ParticleSystem");
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "valid?", Cocos2dxBind_ParticleSystem_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> >("Cocos2d", "ParticleSystemQuad");
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "valid?", Cocos2dxBind_ParticleSystemQuad_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> >("Cocos2d", "ProtectedNode");
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "valid?", Cocos2dxBind_ProtectedNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> >("Cocos2d", "RenderTexture");
            binder.bind_custom_method("Cocos2d", "RenderTexture", "valid?", Cocos2dxBind_RenderTexture_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> >("Cocos2d", "Camera");
            binder.bind_custom_method("Cocos2d", "Camera", "valid?", Cocos2dxBind_Camera_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> >("Cocos2d", "BaseLight");
            binder.bind_custom_method("Cocos2d", "BaseLight", "valid?", Cocos2dxBind_BaseLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> >("Cocos2d", "DirectionLight");
            binder.bind_custom_method("Cocos2d", "DirectionLight", "valid?", Cocos2dxBind_DirectionLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> >("Cocos2d", "AmbientLight");
            binder.bind_custom_method("Cocos2d", "AmbientLight", "valid?", Cocos2dxBind_AmbientLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> >("Cocos2d", "TextureCache");
            binder.bind_custom_method("Cocos2d", "TextureCache", "valid?", Cocos2dxBind_TextureCache_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> >("Cocos2d", "PhysicsShape");
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "valid?", Cocos2dxBind_PhysicsShape_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> >("Cocos2d", "PhysicsShapeCircle");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "valid?", Cocos2dxBind_PhysicsShapeCircle_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> >("Cocos2d", "PhysicsShapePolygon");
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "valid?", Cocos2dxBind_PhysicsShapePolygon_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> >("Cocos2d", "PhysicsShapeBox");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "valid?", Cocos2dxBind_PhysicsShapeBox_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> >("Cocos2d", "PhysicsShapeEdgeSegment");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "valid?", Cocos2dxBind_PhysicsShapeEdgeSegment_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> >("Cocos2d", "PhysicsShapeEdgePolygon");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "valid?", Cocos2dxBind_PhysicsShapeEdgePolygon_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> >("Cocos2d", "PhysicsShapeEdgeBox");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "valid?", Cocos2dxBind_PhysicsShapeEdgeBox_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> >("Cocos2d", "PhysicsShapeEdgeChain");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "valid?", Cocos2dxBind_PhysicsShapeEdgeChain_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> >("Cocos2d", "PhysicsBody");
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "valid?", Cocos2dxBind_PhysicsBody_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> >("Cocos2d", "PhysicsContact");
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "valid?", Cocos2dxBind_PhysicsContact_valid_question);

          }

    }
}
