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
        
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ReverseTime_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ReverseTime_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ReverseTime_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ReverseTime_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ReverseTime_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ReverseTime_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ReverseTime_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> Cocos2dxBind_cocos2d__Animate_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> a0)
        {

            return cocos2d::Animate::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__Animate_set_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> a0)
        {

            c->setAnimation(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__Animate_get_animation_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getAnimation();
        }

        const cocos2d::Animation* Cocos2dxBind_cocos2d__Animate_get_animation_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return const_cast<const cocos2d::Animation* >(c->getAnimation());
        }

        int Cocos2dxBind_cocos2d__Animate_get_current_frame_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getCurrentFrameIndex();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> Cocos2dxBind_cocos2d__Animate_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> Cocos2dxBind_cocos2d__Animate_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Animate_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Animate_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Animate_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Animate_init_with_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> a0)
        {

            return c->initWithAnimation(a0.get());
        }

        float Cocos2dxBind_cocos2d__Animate_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Animate_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Animate_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Animate_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Animate_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__Animate_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__Animate_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Animate_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Animate_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Animate_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Animate_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Animate_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Animate_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Animate_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Animate_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Animate_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Animate_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Animate_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Animate_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Animate_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Animate_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> Cocos2dxBind_cocos2d__TargetedAction_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return cocos2d::TargetedAction::create(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_forced_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setForcedTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TargetedAction_get_forced_target_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getForcedTarget();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__TargetedAction_get_forced_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return const_cast<const cocos2d::Node* >(c->getForcedTarget());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> Cocos2dxBind_cocos2d__TargetedAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> Cocos2dxBind_cocos2d__TargetedAction_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__TargetedAction_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__TargetedAction_is_done(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->isDone();
        }

        bool Cocos2dxBind_cocos2d__TargetedAction_init_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> a1)
        {

            return c->initWithTarget(a0.get(), a1.get());
        }

        float Cocos2dxBind_cocos2d__TargetedAction_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__TargetedAction_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__TargetedAction_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__TargetedAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__TargetedAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TargetedAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TargetedAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__TargetedAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__TargetedAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__TargetedAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TargetedAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TargetedAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TargetedAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {

            return c->getReferenceCount();
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_is_erased(std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_erased();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_stop(std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->stop();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_step(std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->step();
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObject> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::cocos2dx_converter::RtsObject::create());
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObject> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_create_2(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> a0, cor::cocos2dx_converter::Collision2dNodeRef a1)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::cocos2dx_converter::RtsObject::create(a0.lock(), a1));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_object_group(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->get_object_group());
        }

        cor::cocos2dx_converter::Collision2dNodeRef Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_node_ref(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_node_ref();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_kind(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_kind(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_kind(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_kind();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_movable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_movable(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_movable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_movable();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_collidable(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_collidable();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_enemy_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_enemy_collidable(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_enemy_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_enemy_collidable();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_rotate_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_rotate_animation(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_rotate_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_rotate_animation();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_parabola_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_parabola_animation(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_parabola_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_parabola_animation();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_flip_mode(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_flip_mode(a0);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_flip_mode(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_flip_mode();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_node_render(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_node_render(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_node_render_z(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_node_render_z(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_node_render(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_node_render();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_push_back_callback(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>, std::weak_ptr<cor::cocos2dx_converter::RtsObject>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_move_push_back_callback(
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0, std::shared_ptr<cor::cocos2dx_converter::RtsObject> b1, cor::type::Vector2Tmpl<float> b2, cor::type::Vector2Tmpl<float> b3, cor::type::Vector2Tmpl<float> b4, cor::type::Vector2Tmpl<float> b5, cor::type::Vector2Tmpl<float> b6){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1, b2, b3, b4, b5, b6);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_first_callback(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>, cor::type::Vector2Tmpl<float>)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_move_first_callback(
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0, cor::type::Vector2Tmpl<float> b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_target_filter_callback(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, mrubybind::FuncPtr<cor::type::Vector2Tmpl<float> (std::weak_ptr<cor::cocos2dx_converter::RtsObject>, cor::type::Vector2Tmpl<float>)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_move_target_filter_callback(
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0, cor::type::Vector2Tmpl<float> b1){
                  cor::type::Vector2Tmpl<float>  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          r = a0.func()(b0, b1);
                      }
                  }, [&]() {
                      r = cor::type::Vector2Tmpl<float> ();
                  });
                  return r;
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_z_offset(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_z_offset(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_z_offset(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_z_offset();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_walks(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, MrubyRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_walks(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::Animation>(a0));
        }

        MrubyRef Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_walks(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(tmp_c->get_walks());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_shoots(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, MrubyRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_shoots(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::Animation>(a0));
        }

        MrubyRef Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_shoots(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(tmp_c->get_shoots());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_idles(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, MrubyRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_idles(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::Animation>(a0));
        }

        MrubyRef Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_idles(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(tmp_c->get_idles());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_past_th(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_past_th(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_past_animation_direction(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_past_animation_direction();
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_is_valid(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_valid();
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__RtsObject_is_released(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_released();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_release(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->release();
        }

        cocos2d::Vec3 Cocos2dxBind_cor__cocos2dx_converter__RtsObject_convert_to_render_1(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->convert_to_render(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cor__cocos2dx_converter__RtsObject_convert_to_render_2(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->convert_to_render();
        }

        float Cocos2dxBind_cor__cocos2dx_converter__RtsObject_z_order_correct(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->z_order_correct(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_step(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->step();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_render(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->render();
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_add_action(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction>, std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->add_action(
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObjectAction> b0, std::shared_ptr<cor::cocos2dx_converter::RtsObject> b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_add_sensor(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0, cor::type::Vector2Tmpl<float> a1, float a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->add_sensor(a0, a1, a2, 
              [=](cocos2d::Node * b0, cocos2d::Node * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b1));
                      }
                  }, [&]() {

                  });
              }
));
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_position(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_position(a0);
        }

        cor::type::Vector2Tmpl<float> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_position(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_position();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_render_offset(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_render_offset(a0);
        }

        cor::type::Vector2Tmpl<float> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_render_offset(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_render_offset();
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_no_arg(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<void ()> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to_no_arg(a0, a1, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()();
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_1(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to(a0, a1, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_2(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<cor::type::Vector2Tmpl<float> (std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction>, std::weak_ptr<cor::cocos2dx_converter::RtsObject>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>)> a2, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to(a0, a1, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObjectAction> b0, std::shared_ptr<cor::cocos2dx_converter::RtsObject> b1, cor::type::Vector2Tmpl<float> b2, cor::type::Vector2Tmpl<float> b3){
                  cor::type::Vector2Tmpl<float>  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          r = a2.func()(b0, b1, b2, b3);
                      }
                  }, [&]() {
                      r = cor::type::Vector2Tmpl<float> ();
                  });
                  return r;
              }
, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_no_arg(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<void ()> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to_action_no_arg(a0, a1, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()();
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_1(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to_action(a0, a1, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_2(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::type::Vector2Tmpl<float> a0, float a1, mrubybind::FuncPtr<cor::type::Vector2Tmpl<float> (std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction>, std::weak_ptr<cor::cocos2dx_converter::RtsObject>, cor::type::Vector2Tmpl<float>, cor::type::Vector2Tmpl<float>)> a2, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->move_to_action(a0, a1, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObjectAction> b0, std::shared_ptr<cor::cocos2dx_converter::RtsObject> b1, cor::type::Vector2Tmpl<float> b2, cor::type::Vector2Tmpl<float> b3){
                  cor::type::Vector2Tmpl<float>  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          r = a2.func()(b0, b1, b2, b3);
                      }
                  }, [&]() {
                      r = cor::type::Vector2Tmpl<float> ();
                  });
                  return r;
              }
, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_trace_to(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, std::weak_ptr<cor::cocos2dx_converter::RtsObject> a0, float a1, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->trace_to(a0.lock(), a1, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_delay_call_no_arg(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0, mrubybind::FuncPtr<void ()> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->delay_call_no_arg(a0, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()();
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_delay_call(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->delay_call(a0, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_interval_call_no_arg(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0, mrubybind::FuncPtr<void ()> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->interval_call_no_arg(a0, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()();
                      }
                  }, [&]() {

                  });
              }
));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_interval_call(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0, mrubybind::FuncPtr<void (std::weak_ptr<cor::cocos2dx_converter::RtsObject>)> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->interval_call(a0, 
              [=](std::shared_ptr<cor::cocos2dx_converter::RtsObject> b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(b0);
                      }
                  }, [&]() {

                  });
              }
));
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_stop_move(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->stop_move();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_up_spacing_move(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_up_spacing_move();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_flip_on_right(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->flip_on_right(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObject_stop_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->stop_animation();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->start_animation(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_shoot_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, float a0, float a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->start_shoot_animation(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_idle_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->start_idle_animation(a0);
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::cocos2dx_converter::RtsObjectGroup::create());
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_2(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> a0)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::cocos2dx_converter::RtsObjectGroup::create(a0.lock()));
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObject> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_object(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, cor::cocos2dx_converter::Collision2dNodeRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->create_object(a0));
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_release_object(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->release_object(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_dt(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, float a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_dt(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_dt(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_dt();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_debug_draw_node(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_debug_draw_node(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_debug_draw_node(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_debug_draw_node();
        }

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_internal_state(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_internal_state();
        }

        std::weak_ptr<cor::cocos2dx_converter::RtsObject> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_search_from_node(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->search_from_node(a0.get()));
        }

        std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_collision(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->get_collision());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_transform_to_render(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, cor::type::Matrix4x4Tmpl<float> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_transform_to_render(a0);
        }

        cor::type::Matrix4x4Tmpl<float> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_transform_to_render(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_transform_to_render();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_contact_pair(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, int a0, int a1, int a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_contact_pair(a0, a1, a2);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_solve_contact_1(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, int a0, int a1, std::weak_ptr<cor::cocos2dx_converter::RtsObject> a2, std::weak_ptr<cor::cocos2dx_converter::RtsObject> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->solve_contact(a0, a1, a2.lock(), a3.lock());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_solve_contact_2(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->solve_contact();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_delay_call(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c, float a0, mrubybind::FuncPtr<void ()> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->delay_call(a0, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_poll_delay_call(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->poll_delay_call();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_poll(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->poll();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_set_wall_kind(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_wall_kind(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_set_index_convert(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, cor::type::Vector2Tmpl<float> a0, cor::type::Vector2Tmpl<float> a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_index_convert(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_add(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, std::weak_ptr<cor::cocos2dx_converter::RtsObject> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->add(a0.lock());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_remove(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, std::weak_ptr<cor::cocos2dx_converter::RtsObject> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->remove(a0.lock());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_vertices(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, mrubybind::FuncPtr<void (cor::cocos2dx_converter::RtsObjectCostGridSpaceCell *)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->each_vertices(
              [=](cor::cocos2dx_converter::RtsObjectCostGridSpaceCell * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_edges(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, mrubybind::FuncPtr<void (cor::cocos2dx_converter::RtsObjectCostGridSpaceCell *, cor::cocos2dx_converter::RtsObjectCostGridSpaceCell *, float)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->each_edges(
              [=](cor::cocos2dx_converter::RtsObjectCostGridSpaceCell * b0, cor::cocos2dx_converter::RtsObjectCostGridSpaceCell * b1, float b2){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1, b2);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_cell(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c, mrubybind::FuncPtr<void (cor::cocos2dx_converter::RtsObjectCostGridSpaceCell *)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->each_cell(
              [=](cor::cocos2dx_converter::RtsObjectCostGridSpaceCell * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_make_graph(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->make_graph();
        }

        RString Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a0)
        {

            return cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental::run1(a0.get());
        }

        RString Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a1, std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> a2, std::weak_ptr<cor::data_structure::CostGridSpace> a3, std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> a4)
        {

            return cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental::run2(a0.get(), a1.get(), a2.lock(), a3.lock(), a4.lock());
        }

        RString Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_thread_run()
        {

            return cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental::thread_run();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_create_1()
        {

            return cor::cocos2dx_converter::TexturedTriangleNode::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            return cor::cocos2dx_converter::TexturedTriangleNode::create(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_texuter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->set_texuter(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->get_texture();
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_clear(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->clear();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_ensure_capacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->ensure_capacity(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_triangle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0, cocos2d::Color4B a1, cocos2d::Tex2F a2, cocos2d::Vec2 a3, cocos2d::Color4B a4, cocos2d::Tex2F a5, cocos2d::Vec2 a6, cocos2d::Color4B a7, cocos2d::Tex2F a8)
        {

            c->add_triangle(a0, a1, a2, a3, a4, a5, a6, a7, a8);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        std::string Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectEffect_create_layser(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a2, float a3)
        {

            return cor::cocos2dx_converter::RtsObjectEffect::create_layser(a0.get(), a1.get(), a2.get(), a3);
        }

        bool Cocos2dxBind_cocos2d__Image_init_with_image_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, std::string a0)
        {

            return c->initWithImageFile(a0);
        }

        bool Cocos2dxBind_cocos2d__Image_init_with_image_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, const unsigned char * a0, long long a1)
        {

            return c->initWithImageData(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Image_init_with_raw_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, const unsigned char * a0, long long a1, int a2, int a3, int a4, bool a5)
        {

            return c->initWithRawData(a0, a1, a2, a3, a4, a5);
        }

        unsigned char* Cocos2dxBind_cocos2d__Image_get_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getData();
        }

        ssize_t Cocos2dxBind_cocos2d__Image_get_data_len(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getDataLen();
        }

        cocos2d::Image::Format Cocos2dxBind_cocos2d__Image_get_file_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getFileType();
        }

        cocos2d::Texture2D::PixelFormat Cocos2dxBind_cocos2d__Image_get_render_format(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getRenderFormat();
        }

        int Cocos2dxBind_cocos2d__Image_get_width(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getWidth();
        }

        int Cocos2dxBind_cocos2d__Image_get_height(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getHeight();
        }

        int Cocos2dxBind_cocos2d__Image_get_number_of_mipmaps(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getNumberOfMipmaps();
        }

        cocos2d::_MipmapInfo* Cocos2dxBind_cocos2d__Image_get_mipmaps(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getMipmaps();
        }

        bool Cocos2dxBind_cocos2d__Image_has_premultiplied_alpha(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->hasPremultipliedAlpha();
        }

        int Cocos2dxBind_cocos2d__Image_get_bit_per_pixel(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getBitPerPixel();
        }

        bool Cocos2dxBind_cocos2d__Image_has_alpha(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->hasAlpha();
        }

        bool Cocos2dxBind_cocos2d__Image_is_compressed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->isCompressed();
        }

        bool Cocos2dxBind_cocos2d__Image_save_to_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, std::string a0, bool a1)
        {

            return c->saveToFile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Image_set_pvr_images_have_premultiplied_alpha(bool a0)
        {

            cocos2d::Image::setPVRImagesHavePremultipliedAlpha(a0);
        }

        void Cocos2dxBind_cocos2d__Image_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Image_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Image_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Image_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Image_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Image_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Image_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Image_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Image_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Image_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_1()
        {

            return cocos2d::Sprite::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_2(std::string a0)
        {

            return cocos2d::Sprite::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_3(cocos2d::PolygonInfo a0)
        {

            return cocos2d::Sprite::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_4(std::string a0, cocos2d::Rect a1)
        {

            return cocos2d::Sprite::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_with_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            return cocos2d::Sprite::createWithTexture(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1, bool a2)
        {

            return cocos2d::Sprite::createWithTexture(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_with_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            return cocos2d::Sprite::createWithSpriteFrame(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Sprite_create_with_sprite_frame_name(std::string a0)
        {

            return cocos2d::Sprite::createWithSpriteFrameName(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_update_transform(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->updateTransform();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> Cocos2dxBind_cocos2d__Sprite_get_batch_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getBatchNode();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_batch_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> a0)
        {

            c->setBatchNode(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_set_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            c->setTexture(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__Sprite_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_texture_rect_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Rect a0)
        {

            c->setTextureRect(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_texture_rect_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Rect a0, bool a1, cocos2d::Size a2)
        {

            c->setTextureRect(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_vertex_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Rect a0)
        {

            c->setVertexRect(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_sprite_frame_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            c->setSpriteFrame(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_sprite_frame_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            c->setSpriteFrame(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_frame_displayed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            return c->isFrameDisplayed(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__Sprite_get_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getSpriteFrame();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_display_frame_with_animation_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0, long long a1)
        {

            c->setDisplayFrameWithAnimationName(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_dirty(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isDirty();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_dirty(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setDirty(a0);
        }

        cocos2d::V3F_C4B_T2F_Quad Cocos2dxBind_cocos2d__Sprite_get_quad(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getQuad();
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_texture_rect_rotated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isTextureRectRotated();
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite_get_atlas_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getAtlasIndex();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_atlas_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, long long a0)
        {

            c->setAtlasIndex(a0);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Sprite_get_texture_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getTextureRect();
        }

        cocos2d::TextureAtlas* Cocos2dxBind_cocos2d__Sprite_get_texture_atlas(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getTextureAtlas();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_texture_atlas(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::TextureAtlas * a0)
        {

            c->setTextureAtlas(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_get_offset_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getOffsetPosition();
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_flipped_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isFlippedX();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_flipped_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setFlippedX(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_flipped_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isFlippedY();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_flipped_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setFlippedY(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__Sprite_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getBlendFunc();
        }

        std::string Cocos2dxBind_cocos2d__Sprite_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scale_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scale_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setScaleY(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scale_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_rotation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setRotation(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_rotation_skew_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_rotation_skew_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_skew_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setSkewX(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_skew_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setSkewY(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_child(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_all_children_with_cleanup(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_reorder_child(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_sort_all_children(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->sortAllChildren();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position_z(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setPositionZ(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_anchor_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_ignore_anchor_point_for_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_visible(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setVisible(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_opacity_modify_rgb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_opacity_modify_rgb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isOpacityModifyRGB();
        }

        bool Cocos2dxBind_cocos2d__Sprite_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            return c->initWithTexture(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_polygon(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::PolygonInfo a0)
        {

            return c->initWithPolygon(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1)
        {

            return c->initWithTexture(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_texture_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1, bool a2)
        {

            return c->initWithTexture(a0.get(), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            return c->initWithSpriteFrame(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_sprite_frame_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->initWithSpriteFrameName(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_file_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->initWithFile(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0, cocos2d::Rect a1)
        {

            return c->initWithFile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_debug_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->debugDraw(a0);
        }

        cocos2d::PolygonInfo Cocos2dxBind_cocos2d__Sprite_get_polygon_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPolygonInfo();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_polygon_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::PolygonInfo a0)
        {

            c->setPolygonInfo(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Sprite_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getGlobalZOrder();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScaleZ();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Sprite_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Sprite_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPosition3D();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPositionZ();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getSkewX();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getSkewY();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Sprite_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getContentSize();
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isVisible();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Sprite_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Sprite_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getRotationQuat();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getRotationSkewX();
        }

        float Cocos2dxBind_cocos2d__Sprite_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Sprite_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getOrderOfArrival();
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__Sprite_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Sprite_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->removeAllChildren();
        }

        int Cocos2dxBind_cocos2d__Sprite_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Sprite_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Sprite_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Sprite_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Sprite_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Sprite_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Sprite_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Sprite_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Sprite_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Sprite_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Sprite_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Sprite_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Sprite_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Sprite_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__Sprite_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Sprite_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Sprite_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Sprite_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Sprite_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Sprite_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Sprite_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Sprite_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Sprite_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Sprite_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Sprite_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__Sprite_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Sprite_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Sprite_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Sprite_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, float a0)
        {

            c->update(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Sprite_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Sprite_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Sprite_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Sprite_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Sprite_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Sprite_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Sprite_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Sprite_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__Sprite_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Sprite_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Sprite_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Sprite_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_add_letter_definition(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, char16_t a0, cocos2d::FontLetterDefinition a1)
        {

            c->addLetterDefinition(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__FontAtlas_prepare_letter_definitions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, std::basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t> > a0)
        {

            return c->prepareLetterDefinitions(a0);
        }

        int Cocos2dxBind_cocos2d__FontAtlas_get_textures(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->getTextures();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_add_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1)
        {

            c->addTexture(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__FontAtlas_get_line_height(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->getLineHeight();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_set_line_height(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, float a0)
        {

            c->setLineHeight(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__FontAtlas_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, int a0)
        {

            return c->getTexture(a0);
        }

        const cocos2d::Font* Cocos2dxBind_cocos2d__FontAtlas_get_font(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return const_cast<const cocos2d::Font* >(c->getFont());
        }

        void Cocos2dxBind_cocos2d__FontAtlas_listen_renderer_recreated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> a0)
        {

            c->listenRendererRecreated(a0.get());
        }

        void Cocos2dxBind_cocos2d__FontAtlas_purge_textures_atlas(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            c->purgeTexturesAtlas();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_set_anti_alias_tex_parameters(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            c->setAntiAliasTexParameters();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_set_alias_tex_parameters(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            c->setAliasTexParameters();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FontAtlas_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FontAtlas_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__FontAtlas_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__FontAtlas_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__FontAtlas_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__FontAtlas_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__FontAtlas_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__FontAtlas_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_2()
        {

            return cocos2d::Label::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_system_font_2(std::string a0, std::string a1, float a2, cocos2d::Size a3, int a4, int a5)
        {

            return cocos2d::Label::createWithSystemFont(a0, a1, a2, a3, (cocos2d::TextHAlignment)a4, (cocos2d::TextVAlignment)a5);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_ttf_3(std::string a0, std::string a1, float a2, cocos2d::Size a3, int a4, int a5)
        {

            return cocos2d::Label::createWithTTF(a0, a1, a2, a3, (cocos2d::TextHAlignment)a4, (cocos2d::TextVAlignment)a5);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_ttf_4(cocos2d::_ttfConfig a0, std::string a1, int a2, int a3)
        {

            return cocos2d::Label::createWithTTF(a0, a1, (cocos2d::TextHAlignment)a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_bm_font_2(std::string a0, std::string a1, int a2, int a3, cocos2d::Vec2 a4)
        {

            return cocos2d::Label::createWithBMFont(a0, a1, (cocos2d::TextHAlignment)a2, a3, a4);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_char_map_4(std::string a0, int a1, int a2, int a3)
        {

            return cocos2d::Label::createWithCharMap(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_char_map_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1, int a2, int a3)
        {

            return cocos2d::Label::createWithCharMap(a0.get(), a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> Cocos2dxBind_cocos2d__Label_create_with_char_map_6(std::string a0)
        {

            return cocos2d::Label::createWithCharMap(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_set_ttf_config_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::_ttfConfig a0)
        {

            return c->setTTFConfig(a0);
        }

        cocos2d::_ttfConfig Cocos2dxBind_cocos2d__Label_get_ttf_config_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getTTFConfig();
        }

        bool Cocos2dxBind_cocos2d__Label_set_bm_font_file_path_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0, cocos2d::Vec2 a1)
        {

            return c->setBMFontFilePath(a0, a1);
        }

        std::string Cocos2dxBind_cocos2d__Label_get_bm_font_file_path_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getBMFontFilePath();
        }

        bool Cocos2dxBind_cocos2d__Label_set_char_map_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0, int a1, int a2, int a3)
        {

            return c->setCharMap(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__Label_set_char_map_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1, int a2, int a3)
        {

            return c->setCharMap(a0.get(), a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__Label_set_char_map_6(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            return c->setCharMap(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_system_font_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            c->setSystemFontName(a0);
        }

        std::string Cocos2dxBind_cocos2d__Label_get_system_font_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getSystemFontName();
        }

        void Cocos2dxBind_cocos2d__Label_set_system_font_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setSystemFontSize(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_system_font_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getSystemFontSize();
        }

        void Cocos2dxBind_cocos2d__Label_request_system_font_refresh_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->requestSystemFontRefresh();
        }

        void Cocos2dxBind_cocos2d__Label_set_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            c->setString(a0);
        }

        std::string Cocos2dxBind_cocos2d__Label_get_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getString();
        }

        int Cocos2dxBind_cocos2d__Label_get_string_num_lines_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getStringNumLines();
        }

        int Cocos2dxBind_cocos2d__Label_get_string_length_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getStringLength();
        }

        void Cocos2dxBind_cocos2d__Label_set_text_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color4B a0)
        {

            c->setTextColor(a0);
        }

        cocos2d::Color4B Cocos2dxBind_cocos2d__Label_get_text_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getTextColor();
        }

        void Cocos2dxBind_cocos2d__Label_enable_shadow_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color4B a0, cocos2d::Size a1, int a2)
        {

            c->enableShadow(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Label_enable_outline_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color4B a0, int a1)
        {

            c->enableOutline(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_enable_glow_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color4B a0)
        {

            c->enableGlow(a0);
        }

        void Cocos2dxBind_cocos2d__Label_disable_effect_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->disableEffect();
        }

        void Cocos2dxBind_cocos2d__Label_disable_effect_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->disableEffect((cocos2d::LabelEffect)a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_alignment_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setAlignment((cocos2d::TextHAlignment)a0);
        }

        cocos2d::TextHAlignment Cocos2dxBind_cocos2d__Label_get_text_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getTextAlignment();
        }

        void Cocos2dxBind_cocos2d__Label_set_alignment_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0, int a1)
        {

            c->setAlignment((cocos2d::TextHAlignment)a0, (cocos2d::TextVAlignment)a1);
        }

        void Cocos2dxBind_cocos2d__Label_set_horizontal_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setHorizontalAlignment((cocos2d::TextHAlignment)a0);
        }

        cocos2d::TextHAlignment Cocos2dxBind_cocos2d__Label_get_horizontal_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getHorizontalAlignment();
        }

        void Cocos2dxBind_cocos2d__Label_set_vertical_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setVerticalAlignment((cocos2d::TextVAlignment)a0);
        }

        cocos2d::TextVAlignment Cocos2dxBind_cocos2d__Label_get_vertical_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getVerticalAlignment();
        }

        void Cocos2dxBind_cocos2d__Label_set_line_break_without_space_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setLineBreakWithoutSpace(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_max_line_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setMaxLineWidth(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_max_line_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getMaxLineWidth();
        }

        void Cocos2dxBind_cocos2d__Label_set_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setWidth(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getWidth();
        }

        void Cocos2dxBind_cocos2d__Label_set_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setHeight(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getHeight();
        }

        void Cocos2dxBind_cocos2d__Label_set_dimensions_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0, float a1)
        {

            c->setDimensions(a0, a1);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Label_get_dimensions_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getDimensions();
        }

        void Cocos2dxBind_cocos2d__Label_update_content_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->updateContent();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__Label_get_letter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            return c->getLetter(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_clip_margin_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setClipMarginEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_clip_margin_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isClipMarginEnabled();
        }

        void Cocos2dxBind_cocos2d__Label_set_line_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setLineHeight(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_line_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getLineHeight();
        }

        void Cocos2dxBind_cocos2d__Label_set_additional_kerning_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setAdditionalKerning(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_additional_kerning_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getAdditionalKerning();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> Cocos2dxBind_cocos2d__Label_get_font_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getFontAtlas();
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__Label_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__Label_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Label_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        void Cocos2dxBind_cocos2d__Label_update_displayed_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__Label_update_displayed_opacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        std::string Cocos2dxBind_cocos2d__Label_get_description_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getDescription();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Label_get_content_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getContentSize();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Label_get_bounding_box_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Label_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Label_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Label_set_camera_mask_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_remove_all_children_with_cleanup_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Label_remove_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Label_set_global_z_order_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Label_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getLocalZOrder();
        }

        float Cocos2dxBind_cocos2d__Label_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Label_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Label_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Label_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Label_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Label_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Label_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Label_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Label_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Label_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Label_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Label_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Label_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Label_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Label_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Label_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Label_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Label_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Label_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Label_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Label_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Label_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Label_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Label_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Label_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Label_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Label_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Label_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Label_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Label_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Label_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Label_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Label_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__Label_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Label_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Label_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Label_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Label_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Label_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Label_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Label_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__Label_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Label_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Label_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Label_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Label_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Label_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Label_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Label_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Label_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Label_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Label_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }



        
        bool Cocos2dxBind_Spawn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RotateTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RotateBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_MoveBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_MoveTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_SkewTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_SkewBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_JumpBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_JumpTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_BezierBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_BezierTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ScaleTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ScaleBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Blink_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_2(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cocos2d::PhysicsContactPreSolve* >("Cocos2d", "PhysicsContactPreSolve");
            binder.bind_class<cocos2d::PhysicsContactPostSolve* >("Cocos2d", "PhysicsContactPostSolve");
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> >("Cocos2d", "EventListenerPhysicsContact");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "valid?", Cocos2dxBind_EventListenerPhysicsContact_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> >("Cocos2d", "EventListenerPhysicsContactWithBodies");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithBodies_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> >("Cocos2d", "EventListenerPhysicsContactWithShapes");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithShapes_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> >("Cocos2d", "EventListenerPhysicsContactWithGroup");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithGroup_valid_question);
            binder.bind_class<cocos2d::PhysicsJoint* >("Cocos2d", "PhysicsJoint");
            binder.bind_class<cocos2d::PhysicsJointFixed* >("Cocos2d", "PhysicsJointFixed");
            binder.bind_class<cocos2d::PhysicsWorld* >("Cocos2d", "PhysicsWorld");
            binder.bind_class<cocos2d::FileUtils* >("Cocos2d", "FileUtils");
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> >("Cocos2d", "AnimationCache");
            binder.bind_custom_method("Cocos2d", "AnimationCache", "valid?", Cocos2dxBind_AnimationCache_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> >("Cocos2d", "SpriteBatchNode");
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "valid?", Cocos2dxBind_SpriteBatchNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> >("Cocos2d", "TextFieldTTF");
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "valid?", Cocos2dxBind_TextFieldTTF_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> >("Cocos2d", "TMXObjectGroup");
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "valid?", Cocos2dxBind_TMXObjectGroup_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> >("Cocos2d", "TMXLayer");
            binder.bind_custom_method("Cocos2d", "TMXLayer", "valid?", Cocos2dxBind_TMXLayer_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> >("Cocos2d", "TMXTiledMap");
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "valid?", Cocos2dxBind_TMXTiledMap_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> >("Cocos2d", "Mesh");
            binder.bind_custom_method("Cocos2d", "Mesh", "valid?", Cocos2dxBind_Mesh_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> >("Cocos2d", "Sprite3D");
            binder.bind_custom_method("Cocos2d", "Sprite3D", "valid?", Cocos2dxBind_Sprite3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> >("Cocos2dUi", "Widget");
            binder.bind_custom_method("Cocos2dUi", "Widget", "valid?", Cocos2dxBind_Widget_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> >("Cocos2dUi", "Scale9Sprite");
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "valid?", Cocos2dxBind_Scale9Sprite_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> >("Cocos2dUi", "EditBox");
            binder.bind_custom_method("Cocos2dUi", "EditBox", "valid?", Cocos2dxBind_EditBox_valid_question);
            binder.bind_class<CocosDenshion::SimpleAudioEngine* >("Cocosdenshion", "SimpleAudioEngine");
            binder.bind_class<cocos2d::Color4B >("Cocos2d", "Color4B");
            binder.bind_static_method("Cocos2d", "Color4B", "create_0", Cocos2dxBind_Color4B_create_0);
            binder.bind_static_method("Cocos2d", "Color4B", "create_1", Cocos2dxBind_Color4B_create_1);
            binder.bind_static_method("Cocos2d", "Color4B", "create_2", Cocos2dxBind_Color4B_create_2);
            binder.bind_static_method("Cocos2d", "Color4B", "create_3", Cocos2dxBind_Color4B_create_3);
            binder.bind_static_method("Cocos2d", "Color4B", "create_4", Cocos2dxBind_Color4B_create_4);
            binder.bind_class<cocos2d::Tex2F >("Cocos2d", "Tex2F");
            binder.bind_static_method("Cocos2d", "Tex2F", "create_0", Cocos2dxBind_Tex2F_create_0);
            binder.bind_static_method("Cocos2d", "Tex2F", "create_1", Cocos2dxBind_Tex2F_create_1);
            binder.bind_static_method("Cocos2d", "Tex2F", "create_2", Cocos2dxBind_Tex2F_create_2);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> >("Cocos2d", "EventKeyboard");
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "valid?", Cocos2dxBind_EventKeyboard_valid_question);
            binder.bind_class<cocos2d::_ttfConfig >("Cocos2d", "_ttfConfig");
            binder.bind_class<cocos2d::PhysicsMaterial >("Cocos2d", "PhysicsMaterial");
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_0", Cocos2dxBind_PhysicsMaterial_create_0);
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_1", Cocos2dxBind_PhysicsMaterial_create_1);
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_2", Cocos2dxBind_PhysicsMaterial_create_2);
            binder.bind_class<cocos2d::PhysicsContactData* >("Cocos2d", "PhysicsContactData");
            binder.bind_class<cocos2d::PhysicsRayCastInfo >("Cocos2d", "PhysicsRayCastInfo");
            binder.bind_static_method("Cocos2d", "PhysicsRayCastInfo", "create", Cocos2dxBind_PhysicsRayCastInfo_create);

          }

    }
}
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
        cocos2d::Value Cocos2dxBind_Value_create_8(MrubyRef a0)
        {
            return cocos2d::Value(cor::cocos2dx_mruby_interface::CocosValue::convert_to_cocos_value_vec(a0));
        }
        cocos2d::Value Cocos2dxBind_Value_create_10(cocos2d::Value a0)
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
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        
        void Cocos2dxBind_cocos2d__Ref_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Ref_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Ref_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Ref_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Ref_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Ref_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Ref_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Ref_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Ref_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Ref_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {

            return c->_scriptObject;
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_zero(cocos2d::Vec2& c)
        {

            return c.isZero();
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_one(cocos2d::Vec2& c)
        {

            return c.isOne();
        }

        float Cocos2dxBind_cocos2d__Vec2_angle(cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            return cocos2d::Vec2::angle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec2_add(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            c.add(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_clamp(cocos2d::Vec2& c, cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            c.clamp(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec2_distance(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.distance(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_distance_squared(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.distanceSquared(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_dot(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.dot(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_dot_2(cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            return cocos2d::Vec2::dot(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec2_length(cocos2d::Vec2& c)
        {

            return c.length();
        }

        float Cocos2dxBind_cocos2d__Vec2_length_squared(cocos2d::Vec2& c)
        {

            return c.lengthSquared();
        }

        void Cocos2dxBind_cocos2d__Vec2_negate(cocos2d::Vec2& c)
        {

            c.negate();
        }

        void Cocos2dxBind_cocos2d__Vec2_normalize(cocos2d::Vec2& c)
        {

            c.normalize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_normalized(cocos2d::Vec2& c)
        {

            return c.getNormalized();
        }

        void Cocos2dxBind_cocos2d__Vec2_scale_1(cocos2d::Vec2& c, float a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_scale_2(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_rotate(cocos2d::Vec2& c, cocos2d::Vec2 a0, float a1)
        {

            c.rotate(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_1(cocos2d::Vec2& c, float a0, float a1)
        {

            c.set(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_2(cocos2d::Vec2& c, const float * a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_3(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_4(cocos2d::Vec2& c, cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            c.set(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_zero(cocos2d::Vec2& c)
        {

            c.setZero();
        }

        void Cocos2dxBind_cocos2d__Vec2_subtract(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            c.subtract(a0);
        }

        void Cocos2dxBind_cocos2d__Vec2_smooth(cocos2d::Vec2& c, cocos2d::Vec2 a0, float a1, float a2)
        {

            c.smooth(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Vec2_set_point(cocos2d::Vec2& c, float a0, float a1)
        {

            c.setPoint(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Vec2_equals(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.equals(a0);
        }

        bool Cocos2dxBind_cocos2d__Vec2_fuzzy_equals(cocos2d::Vec2& c, cocos2d::Vec2 a0, float a1)
        {

            return c.fuzzyEquals(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec2_get_length(cocos2d::Vec2& c)
        {

            return c.getLength();
        }

        float Cocos2dxBind_cocos2d__Vec2_get_length_sq(cocos2d::Vec2& c)
        {

            return c.getLengthSq();
        }

        float Cocos2dxBind_cocos2d__Vec2_get_distance_sq(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.getDistanceSq(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_get_distance(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.getDistance(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_get_angle(cocos2d::Vec2& c)
        {

            return c.getAngle();
        }

        float Cocos2dxBind_cocos2d__Vec2_get_angle_2(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.getAngle(a0);
        }

        float Cocos2dxBind_cocos2d__Vec2_cross(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.cross(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_perp(cocos2d::Vec2& c)
        {

            return c.getPerp();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_midpoint(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.getMidpoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_clamp_point(cocos2d::Vec2& c, cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            return c.getClampPoint(a0, a1);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_comp_op(cocos2d::Vec2& c, mrubybind::FuncPtr<float (float)> a0)
        {

            return c.compOp(
              [=](float b0){
                  float  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          r = a0.func()(b0);
                      }
                  }, [&]() {
                      r = float ();
                  });
                  return r;
              }
);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_r_perp(cocos2d::Vec2& c)
        {

            return c.getRPerp();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_project(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.project(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_rotate_2(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.rotate(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_unrotate(cocos2d::Vec2& c, cocos2d::Vec2 a0)
        {

            return c.unrotate(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_lerp(cocos2d::Vec2& c, cocos2d::Vec2 a0, float a1)
        {

            return c.lerp(a0, a1);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_rotate_by_angle(cocos2d::Vec2& c, cocos2d::Vec2 a0, float a1)
        {

            return c.rotateByAngle(a0, a1);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_for_angle(const float a0)
        {

            return cocos2d::Vec2::forAngle(a0);
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_line_intersect(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3, float * a4, float * a5)
        {

            return cocos2d::Vec2::isLineIntersect(a0, a1, a2, a3, a4, a5);
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_line_overlap(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3)
        {

            return cocos2d::Vec2::isLineOverlap(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_line_parallel(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3)
        {

            return cocos2d::Vec2::isLineParallel(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__Vec2_is_segment_intersect(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3)
        {

            return cocos2d::Vec2::isSegmentIntersect(a0, a1, a2, a3);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_get_intersect_point(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3)
        {

            return cocos2d::Vec2::getIntersectPoint(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__Vec2_accessor_set_x(cocos2d::Vec2& c, float a)
        {

            c.x = a;
        }

        float Cocos2dxBind_cocos2d__Vec2_accessor_get_x(cocos2d::Vec2& c)
        {

            return c.x;
        }

        void Cocos2dxBind_cocos2d__Vec2_accessor_set_y(cocos2d::Vec2& c, float a)
        {

            c.y = a;
        }

        float Cocos2dxBind_cocos2d__Vec2_accessor_get_y(cocos2d::Vec2& c)
        {

            return c.y;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_operator__asterisk__0(cocos2d::Vec2 & a0, float a1)
        {
            return a0*a1;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_operator__plus__0(cocos2d::Vec2 & a0, cocos2d::Vec2 a1)
        {
            return a0+a1;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_operator__minus__0(cocos2d::Vec2 & a0, cocos2d::Vec2 a1)
        {
            return a0-a1;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Vec2_operator__minus_self__0(cocos2d::Vec2 & a0)
        {
            return -a0;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_from_color(unsigned int a0)
        {

            return cocos2d::Vec3::fromColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Vec3_is_zero(cocos2d::Vec3& c)
        {

            return c.isZero();
        }

        bool Cocos2dxBind_cocos2d__Vec3_is_one(cocos2d::Vec3& c)
        {

            return c.isOne();
        }

        float Cocos2dxBind_cocos2d__Vec3_angle(cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {

            return cocos2d::Vec3::angle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec3_add_1(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            c.add(a0);
        }

        void Cocos2dxBind_cocos2d__Vec3_add_2(cocos2d::Vec3& c, float a0, float a1, float a2)
        {

            c.add(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Vec3_clamp(cocos2d::Vec3& c, cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {

            c.clamp(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec3_cross(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            c.cross(a0);
        }

        float Cocos2dxBind_cocos2d__Vec3_distance(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            return c.distance(a0);
        }

        float Cocos2dxBind_cocos2d__Vec3_distance_squared(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            return c.distanceSquared(a0);
        }

        float Cocos2dxBind_cocos2d__Vec3_dot(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            return c.dot(a0);
        }

        float Cocos2dxBind_cocos2d__Vec3_dot_2(cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {

            return cocos2d::Vec3::dot(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec3_length(cocos2d::Vec3& c)
        {

            return c.length();
        }

        float Cocos2dxBind_cocos2d__Vec3_length_squared(cocos2d::Vec3& c)
        {

            return c.lengthSquared();
        }

        void Cocos2dxBind_cocos2d__Vec3_negate(cocos2d::Vec3& c)
        {

            c.negate();
        }

        void Cocos2dxBind_cocos2d__Vec3_normalize(cocos2d::Vec3& c)
        {

            c.normalize();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_get_normalized(cocos2d::Vec3& c)
        {

            return c.getNormalized();
        }

        void Cocos2dxBind_cocos2d__Vec3_scale(cocos2d::Vec3& c, float a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Vec3_set_1(cocos2d::Vec3& c, float a0, float a1, float a2)
        {

            c.set(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Vec3_set_2(cocos2d::Vec3& c, const float * a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec3_set_3(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec3_set_4(cocos2d::Vec3& c, cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {

            c.set(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec3_set_zero(cocos2d::Vec3& c)
        {

            c.setZero();
        }

        void Cocos2dxBind_cocos2d__Vec3_subtract(cocos2d::Vec3& c, cocos2d::Vec3 a0)
        {

            c.subtract(a0);
        }

        void Cocos2dxBind_cocos2d__Vec3_smooth(cocos2d::Vec3& c, cocos2d::Vec3 a0, float a1, float a2)
        {

            c.smooth(a0, a1, a2);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_lerp(cocos2d::Vec3& c, cocos2d::Vec3 a0, float a1)
        {

            return c.lerp(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec3_accessor_set_x(cocos2d::Vec3& c, float a)
        {

            c.x = a;
        }

        float Cocos2dxBind_cocos2d__Vec3_accessor_get_x(cocos2d::Vec3& c)
        {

            return c.x;
        }

        void Cocos2dxBind_cocos2d__Vec3_accessor_set_y(cocos2d::Vec3& c, float a)
        {

            c.y = a;
        }

        float Cocos2dxBind_cocos2d__Vec3_accessor_get_y(cocos2d::Vec3& c)
        {

            return c.y;
        }

        void Cocos2dxBind_cocos2d__Vec3_accessor_set_z(cocos2d::Vec3& c, float a)
        {

            c.z = a;
        }

        float Cocos2dxBind_cocos2d__Vec3_accessor_get_z(cocos2d::Vec3& c)
        {

            return c.z;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_operator__asterisk__0(cocos2d::Vec3 & a0, float a1)
        {
            return a0*a1;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_operator__plus__0(cocos2d::Vec3 & a0, cocos2d::Vec3 a1)
        {
            return a0+a1;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_operator__minus__0(cocos2d::Vec3 & a0, cocos2d::Vec3 a1)
        {
            return a0-a1;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Vec3_operator__minus_self__0(cocos2d::Vec3 & a0)
        {
            return -a0;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_from_color(unsigned int a0)
        {

            return cocos2d::Vec4::fromColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Vec4_is_zero(cocos2d::Vec4& c)
        {

            return c.isZero();
        }

        bool Cocos2dxBind_cocos2d__Vec4_is_one(cocos2d::Vec4& c)
        {

            return c.isOne();
        }

        float Cocos2dxBind_cocos2d__Vec4_angle(cocos2d::Vec4 a0, cocos2d::Vec4 a1)
        {

            return cocos2d::Vec4::angle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec4_add(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            c.add(a0);
        }

        void Cocos2dxBind_cocos2d__Vec4_clamp(cocos2d::Vec4& c, cocos2d::Vec4 a0, cocos2d::Vec4 a1)
        {

            c.clamp(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec4_distance(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            return c.distance(a0);
        }

        float Cocos2dxBind_cocos2d__Vec4_distance_squared(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            return c.distanceSquared(a0);
        }

        float Cocos2dxBind_cocos2d__Vec4_dot(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            return c.dot(a0);
        }

        float Cocos2dxBind_cocos2d__Vec4_dot_2(cocos2d::Vec4 a0, cocos2d::Vec4 a1)
        {

            return cocos2d::Vec4::dot(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Vec4_length(cocos2d::Vec4& c)
        {

            return c.length();
        }

        float Cocos2dxBind_cocos2d__Vec4_length_squared(cocos2d::Vec4& c)
        {

            return c.lengthSquared();
        }

        void Cocos2dxBind_cocos2d__Vec4_negate(cocos2d::Vec4& c)
        {

            c.negate();
        }

        void Cocos2dxBind_cocos2d__Vec4_normalize(cocos2d::Vec4& c)
        {

            c.normalize();
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_get_normalized(cocos2d::Vec4& c)
        {

            return c.getNormalized();
        }

        void Cocos2dxBind_cocos2d__Vec4_scale(cocos2d::Vec4& c, float a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Vec4_set_1(cocos2d::Vec4& c, float a0, float a1, float a2, float a3)
        {

            c.set(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__Vec4_set_2(cocos2d::Vec4& c, const float * a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec4_set_3(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Vec4_set_4(cocos2d::Vec4& c, cocos2d::Vec4 a0, cocos2d::Vec4 a1)
        {

            c.set(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Vec4_subtract(cocos2d::Vec4& c, cocos2d::Vec4 a0)
        {

            c.subtract(a0);
        }

        void Cocos2dxBind_cocos2d__Vec4_accessor_set_x(cocos2d::Vec4& c, float a)
        {

            c.x = a;
        }

        float Cocos2dxBind_cocos2d__Vec4_accessor_get_x(cocos2d::Vec4& c)
        {

            return c.x;
        }

        void Cocos2dxBind_cocos2d__Vec4_accessor_set_y(cocos2d::Vec4& c, float a)
        {

            c.y = a;
        }

        float Cocos2dxBind_cocos2d__Vec4_accessor_get_y(cocos2d::Vec4& c)
        {

            return c.y;
        }

        void Cocos2dxBind_cocos2d__Vec4_accessor_set_z(cocos2d::Vec4& c, float a)
        {

            c.z = a;
        }

        float Cocos2dxBind_cocos2d__Vec4_accessor_get_z(cocos2d::Vec4& c)
        {

            return c.z;
        }

        void Cocos2dxBind_cocos2d__Vec4_accessor_set_w(cocos2d::Vec4& c, float a)
        {

            c.w = a;
        }

        float Cocos2dxBind_cocos2d__Vec4_accessor_get_w(cocos2d::Vec4& c)
        {

            return c.w;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_operator__asterisk__0(cocos2d::Vec4 & a0, float a1)
        {
            return a0*a1;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_operator__plus__0(cocos2d::Vec4 & a0, cocos2d::Vec4 a1)
        {
            return a0+a1;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_operator__minus__0(cocos2d::Vec4 & a0, cocos2d::Vec4 a1)
        {
            return a0-a1;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Vec4_operator__minus_self__0(cocos2d::Vec4 & a0)
        {
            return -a0;
        }

        void Cocos2dxBind_cocos2d__Mat4_add_1(cocos2d::Mat4& c, float a0)
        {

            c.add(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_add_3(cocos2d::Mat4& c, cocos2d::Mat4 a0)
        {

            c.add(a0);
        }

        float Cocos2dxBind_cocos2d__Mat4_determinant(cocos2d::Mat4& c)
        {

            return c.determinant();
        }

        bool Cocos2dxBind_cocos2d__Mat4_get_rotation(cocos2d::Mat4& c, cocos2d::Quaternion * a0)
        {

            return c.getRotation(a0);
        }

        bool Cocos2dxBind_cocos2d__Mat4_inverse(cocos2d::Mat4& c)
        {

            return c.inverse();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_get_inversed(cocos2d::Mat4& c)
        {

            return c.getInversed();
        }

        bool Cocos2dxBind_cocos2d__Mat4_is_identity(cocos2d::Mat4& c)
        {

            return c.isIdentity();
        }

        void Cocos2dxBind_cocos2d__Mat4_multiply_1(cocos2d::Mat4& c, float a0)
        {

            c.multiply(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_multiply_4(cocos2d::Mat4& c, cocos2d::Mat4 a0)
        {

            c.multiply(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_negate(cocos2d::Mat4& c)
        {

            c.negate();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_get_negated(cocos2d::Mat4& c)
        {

            return c.getNegated();
        }

        void Cocos2dxBind_cocos2d__Mat4_rotate_1(cocos2d::Mat4& c, cocos2d::Quaternion a0)
        {

            c.rotate(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_rotate_3(cocos2d::Mat4& c, cocos2d::Vec3 a0, float a1)
        {

            c.rotate(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Mat4_rotate_x_1(cocos2d::Mat4& c, float a0)
        {

            c.rotateX(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_rotate_y_1(cocos2d::Mat4& c, float a0)
        {

            c.rotateY(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_rotate_z_1(cocos2d::Mat4& c, float a0)
        {

            c.rotateZ(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_scale_1(cocos2d::Mat4& c, float a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_scale_3(cocos2d::Mat4& c, float a0, float a1, float a2)
        {

            c.scale(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Mat4_scale_5(cocos2d::Mat4& c, cocos2d::Vec3 a0)
        {

            c.scale(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_set_1(cocos2d::Mat4& c, float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
        {

            c.set(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        }

        void Cocos2dxBind_cocos2d__Mat4_set_2(cocos2d::Mat4& c, const float * a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_set_3(cocos2d::Mat4& c, cocos2d::Mat4 a0)
        {

            c.set(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_set_identity(cocos2d::Mat4& c)
        {

            c.setIdentity();
        }

        void Cocos2dxBind_cocos2d__Mat4_set_zero(cocos2d::Mat4& c)
        {

            c.setZero();
        }

        void Cocos2dxBind_cocos2d__Mat4_subtract(cocos2d::Mat4& c, cocos2d::Mat4 a0)
        {

            c.subtract(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_translate_1(cocos2d::Mat4& c, float a0, float a1, float a2)
        {

            c.translate(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Mat4_translate_3(cocos2d::Mat4& c, cocos2d::Vec3 a0)
        {

            c.translate(a0);
        }

        void Cocos2dxBind_cocos2d__Mat4_transpose(cocos2d::Mat4& c)
        {

            c.transpose();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_get_transposed(cocos2d::Mat4& c)
        {

            return c.getTransposed();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_operator__asterisk__0(cocos2d::Mat4 & a0, cocos2d::Mat4 a1)
        {
            return a0*a1;
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Mat4_operator__asterisk__1(cocos2d::Mat4 & a0, cocos2d::Vec3 a1)
        {
            return a0*a1;
        }

        cocos2d::Vec4 Cocos2dxBind_cocos2d__Mat4_operator__asterisk__2(cocos2d::Mat4 & a0, cocos2d::Vec4 a1)
        {
            return a0*a1;
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_operator__plus__0(cocos2d::Mat4 & a0, cocos2d::Mat4 a1)
        {
            return a0+a1;
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_operator__minus__0(cocos2d::Mat4 & a0, cocos2d::Mat4 a1)
        {
            return a0-a1;
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Mat4_operator__minus_self__0(cocos2d::Mat4 & a0)
        {
            return -a0;
        }

        void Cocos2dxBind_cocos2d__Size_set_size(cocos2d::Size& c, float a0, float a1)
        {

            c.setSize(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Size_equals(cocos2d::Size& c, cocos2d::Size a0)
        {

            return c.equals(a0);
        }

        void Cocos2dxBind_cocos2d__Size_accessor_set_width(cocos2d::Size& c, float a)
        {

            c.width = a;
        }

        float Cocos2dxBind_cocos2d__Size_accessor_get_width(cocos2d::Size& c)
        {

            return c.width;
        }

        void Cocos2dxBind_cocos2d__Size_accessor_set_height(cocos2d::Size& c, float a)
        {

            c.height = a;
        }

        float Cocos2dxBind_cocos2d__Size_accessor_get_height(cocos2d::Size& c)
        {

            return c.height;
        }

        void Cocos2dxBind_cocos2d__Rect_set_rect(cocos2d::Rect& c, float a0, float a1, float a2, float a3)
        {

            c.setRect(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__Rect_get_min_x(cocos2d::Rect& c)
        {

            return c.getMinX();
        }

        float Cocos2dxBind_cocos2d__Rect_get_mid_x(cocos2d::Rect& c)
        {

            return c.getMidX();
        }

        float Cocos2dxBind_cocos2d__Rect_get_max_x(cocos2d::Rect& c)
        {

            return c.getMaxX();
        }

        float Cocos2dxBind_cocos2d__Rect_get_min_y(cocos2d::Rect& c)
        {

            return c.getMinY();
        }

        float Cocos2dxBind_cocos2d__Rect_get_mid_y(cocos2d::Rect& c)
        {

            return c.getMidY();
        }

        float Cocos2dxBind_cocos2d__Rect_get_max_y(cocos2d::Rect& c)
        {

            return c.getMaxY();
        }

        bool Cocos2dxBind_cocos2d__Rect_equals(cocos2d::Rect& c, cocos2d::Rect a0)
        {

            return c.equals(a0);
        }

        bool Cocos2dxBind_cocos2d__Rect_contains_point(cocos2d::Rect& c, cocos2d::Vec2 a0)
        {

            return c.containsPoint(a0);
        }

        bool Cocos2dxBind_cocos2d__Rect_intersects_rect(cocos2d::Rect& c, cocos2d::Rect a0)
        {

            return c.intersectsRect(a0);
        }

        bool Cocos2dxBind_cocos2d__Rect_intersects_circle(cocos2d::Rect& c, cocos2d::Vec2 a0, float a1)
        {

            return c.intersectsCircle(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Rect_union_with_rect(cocos2d::Rect& c, cocos2d::Rect a0)
        {

            return c.unionWithRect(a0);
        }

        void Cocos2dxBind_cocos2d__Rect_merge(cocos2d::Rect& c, cocos2d::Rect a0)
        {

            c.merge(a0);
        }

        void Cocos2dxBind_cocos2d__Rect_accessor_set_origin(cocos2d::Rect& c, cocos2d::Vec2 a)
        {

            c.origin = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Rect_accessor_get_origin(cocos2d::Rect& c)
        {

            return c.origin;
        }

        void Cocos2dxBind_cocos2d__Rect_accessor_set_size(cocos2d::Rect& c, cocos2d::Size a)
        {

            c.size = a;
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Rect_accessor_get_size(cocos2d::Rect& c)
        {

            return c.size;
        }

        bool Cocos2dxBind_cocos2d__Color3B_equals(cocos2d::Color3B& c, cocos2d::Color3B a0)
        {

            return c.equals(a0);
        }

        void Cocos2dxBind_cocos2d__Color3B_accessor_set_r(cocos2d::Color3B& c, int a)
        {

            c.r = a;
        }

        int Cocos2dxBind_cocos2d__Color3B_accessor_get_r(cocos2d::Color3B& c)
        {

            return c.r;
        }

        void Cocos2dxBind_cocos2d__Color3B_accessor_set_g(cocos2d::Color3B& c, int a)
        {

            c.g = a;
        }

        int Cocos2dxBind_cocos2d__Color3B_accessor_get_g(cocos2d::Color3B& c)
        {

            return c.g;
        }

        void Cocos2dxBind_cocos2d__Color3B_accessor_set_b(cocos2d::Color3B& c, int a)
        {

            c.b = a;
        }

        int Cocos2dxBind_cocos2d__Color3B_accessor_get_b(cocos2d::Color3B& c)
        {

            return c.b;
        }

        bool Cocos2dxBind_cocos2d__Color4F_equals(cocos2d::Color4F& c, cocos2d::Color4F a0)
        {

            return c.equals(a0);
        }

        void Cocos2dxBind_cocos2d__Color4F_accessor_set_r(cocos2d::Color4F& c, float a)
        {

            c.r = a;
        }

        float Cocos2dxBind_cocos2d__Color4F_accessor_get_r(cocos2d::Color4F& c)
        {

            return c.r;
        }

        void Cocos2dxBind_cocos2d__Color4F_accessor_set_g(cocos2d::Color4F& c, float a)
        {

            c.g = a;
        }

        float Cocos2dxBind_cocos2d__Color4F_accessor_get_g(cocos2d::Color4F& c)
        {

            return c.g;
        }

        void Cocos2dxBind_cocos2d__Color4F_accessor_set_b(cocos2d::Color4F& c, float a)
        {

            c.b = a;
        }

        float Cocos2dxBind_cocos2d__Color4F_accessor_get_b(cocos2d::Color4F& c)
        {

            return c.b;
        }

        void Cocos2dxBind_cocos2d__Color4F_accessor_set_a(cocos2d::Color4F& c, float a)
        {

            c.a = a;
        }

        float Cocos2dxBind_cocos2d__Color4F_accessor_get_a(cocos2d::Color4F& c)
        {

            return c.a;
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_default_alpha_pixel_format(int a0)
        {

            cocos2d::Texture2D::setDefaultAlphaPixelFormat((cocos2d::Texture2D::PixelFormat)a0);
        }

        cocos2d::Texture2D::PixelFormat Cocos2dxBind_cocos2d__Texture2D_get_default_alpha_pixel_format()
        {

            return cocos2d::Texture2D::getDefaultAlphaPixelFormat();
        }

        std::string Cocos2dxBind_cocos2d__Texture2D_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__Texture2D_release_gl_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->releaseGLTexture();
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, const void * a0, long long a1, int a2, int a3, int a4, cocos2d::Size a5)
        {

            return c->initWithData(a0, a1, (cocos2d::Texture2D::PixelFormat)a2, a3, a4, a5);
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_mipmaps(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cocos2d::_MipmapInfo * a0, int a1, int a2, int a3, int a4)
        {

            return c->initWithMipmaps(a0, a1, (cocos2d::Texture2D::PixelFormat)a2, a3, a4);
        }

        bool Cocos2dxBind_cocos2d__Texture2D_update_with_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, const void * a0, int a1, int a2, int a3, int a4)
        {

            return c->updateWithData(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__Texture2D_draw_at_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cocos2d::Vec2 a0)
        {

            c->drawAtPoint(a0);
        }

        void Cocos2dxBind_cocos2d__Texture2D_draw_in_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cocos2d::Rect a0)
        {

            c->drawInRect(a0);
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_image_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> a0)
        {

            return c->initWithImage(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_image_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> a0, int a1)
        {

            return c->initWithImage(a0.get(), (cocos2d::Texture2D::PixelFormat)a1);
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_string_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, const char * a0, std::string a1, float a2, cocos2d::Size a3, int a4, int a5)
        {

            return c->initWithString(a0, a1, a2, a3, (cocos2d::TextHAlignment)a4, (cocos2d::TextVAlignment)a5);
        }

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_string_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, const char * a0, cocos2d::FontDefinition a1)
        {

            return c->initWithString(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_tex_parameters(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cocos2d::Texture2D::_TexParams a0)
        {

            c->setTexParameters(a0);
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_anti_alias_tex_parameters(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->setAntiAliasTexParameters();
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_alias_tex_parameters(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->setAliasTexParameters();
        }

        void Cocos2dxBind_cocos2d__Texture2D_generate_mipmap(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->generateMipmap();
        }

        const char* Cocos2dxBind_cocos2d__Texture2D_get_string_for_format(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return const_cast<const char* >(c->getStringForFormat());
        }

        unsigned int Cocos2dxBind_cocos2d__Texture2D_get_bits_per_pixel_for_format_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getBitsPerPixelForFormat();
        }

        unsigned int Cocos2dxBind_cocos2d__Texture2D_get_bits_per_pixel_for_format_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, int a0)
        {

            return c->getBitsPerPixelForFormat((cocos2d::Texture2D::PixelFormat)a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Texture2D_get_content_size_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getContentSizeInPixels();
        }

        bool Cocos2dxBind_cocos2d__Texture2D_has_premultiplied_alpha(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->hasPremultipliedAlpha();
        }

        bool Cocos2dxBind_cocos2d__Texture2D_has_mipmaps(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->hasMipmaps();
        }

        cocos2d::Texture2D::PixelFormat Cocos2dxBind_cocos2d__Texture2D_get_pixel_format(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getPixelFormat();
        }

        int Cocos2dxBind_cocos2d__Texture2D_get_pixels_wide(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getPixelsWide();
        }

        int Cocos2dxBind_cocos2d__Texture2D_get_pixels_high(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getPixelsHigh();
        }

        unsigned int Cocos2dxBind_cocos2d__Texture2D_get_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getName();
        }

        float Cocos2dxBind_cocos2d__Texture2D_get_max_s(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getMaxS();
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_max_s(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, float a0)
        {

            c->setMaxS(a0);
        }

        float Cocos2dxBind_cocos2d__Texture2D_get_max_t(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getMaxT();
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_max_t(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, float a0)
        {

            c->setMaxT(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Texture2D_get_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Texture2D_set_gl_program(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Texture2D_get_gl_program(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Texture2D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Texture2D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Texture2D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Texture2D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Texture2D_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Texture2D_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Texture2D_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Texture2D_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Texture2D_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Texture2D_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {

            return c->_scriptObject;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_location(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getLocation();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_previous_location(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getPreviousLocation();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_start_location(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getStartLocation();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_delta(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getDelta();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_location_in_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getLocationInView();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_previous_location_in_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getPreviousLocationInView();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Touch_get_start_location_in_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getStartLocationInView();
        }

        void Cocos2dxBind_cocos2d__Touch_set_touch_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c, int a0, float a1, float a2)
        {

            c->setTouchInfo(a0, a1, a2);
        }

        int Cocos2dxBind_cocos2d__Touch_get_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getID();
        }

        void Cocos2dxBind_cocos2d__Touch_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Touch_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Touch_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Touch_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Touch_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Touch_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Touch_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Touch_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Touch_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Touch_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {

            return c->_scriptObject;
        }

        cocos2d::Event::Type Cocos2dxBind_cocos2d__Event_get_type_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->getType();
        }

        void Cocos2dxBind_cocos2d__Event_stop_propagation_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            c->stopPropagation();
        }

        bool Cocos2dxBind_cocos2d__Event_is_stopped_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->isStopped();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Event_get_current_target_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->getCurrentTarget();
        }

        void Cocos2dxBind_cocos2d__Event_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Event_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Event_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Event_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Event_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Event_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Event_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Event_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Event_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Event_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {

            return c->_scriptObject;
        }

        cocos2d::EventTouch::EventCode Cocos2dxBind_cocos2d__EventTouch_get_event_code(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->getEventCode();
        }

        int Cocos2dxBind_cocos2d__EventTouch_get_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->getTouches();
        }

        void Cocos2dxBind_cocos2d__EventTouch_set_event_code(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c, int a0)
        {

            c->setEventCode((cocos2d::EventTouch::EventCode)a0);
        }

        void Cocos2dxBind_cocos2d__EventTouch_set_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c, int a0)
        {

            c->setTouches(a0);
        }

        cocos2d::Event::Type Cocos2dxBind_cocos2d__EventTouch_get_type_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->getType();
        }

        void Cocos2dxBind_cocos2d__EventTouch_stop_propagation_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            c->stopPropagation();
        }

        bool Cocos2dxBind_cocos2d__EventTouch_is_stopped_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->isStopped();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EventTouch_get_current_target_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->getCurrentTarget();
        }

        void Cocos2dxBind_cocos2d__EventTouch_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventTouch_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventTouch_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventTouch_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Node_create_2()
        {

            return cocos2d::Node::create();
        }

        std::string Cocos2dxBind_cocos2d__Node_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__Node_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Node_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Node_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Node_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Node_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Node_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Node_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Node_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Node_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Node_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Node_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Node_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Node_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Node_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Node_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Node_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Node_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Node_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Node_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Node_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Node_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Node_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Node_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Node_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Node_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Node_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Node_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Node_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Node_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Node_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Node_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Node_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Node_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Node_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Node_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Node_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Node_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Node_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__Node_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Node_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Node_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Node_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Node_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Node_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Node_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Node_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Node_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__Node_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Node_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Node_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Node_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Node_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Node_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Node_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Node_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Node_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Node_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Node_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Node_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Node_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Node_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Node_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Node_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Node_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Node_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Node_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Node_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Node_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Node_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__Node_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Node_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__Node_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Node_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Node_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Node_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Node_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Node_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Node_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Node_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Node_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Node_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Node_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Node_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Node_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Node_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Node_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Node_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Node_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Node_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Node_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Node_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Node_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Node_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Node_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Node_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Node_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Node_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__Node_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Node_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__Node_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Node_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Node_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Node_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Node_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Node_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Node_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Node_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Node_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Node_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Node_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Node_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Node_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Node_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Node_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Node_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Node_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Node_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Node_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Node_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Node_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Node_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Node_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Node_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Node_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Node_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Node_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Node_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Node_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Node_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Node_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Node_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Node_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Node_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Node_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Node_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Node_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Node_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Node_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Node_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Node_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Node_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__Node_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Node_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Node_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__Node_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Node_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Node_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Node_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Node_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Node_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Node_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Node_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Node_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Node_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__Cocos2dxExperimental_set_on_enter_callback_create()
        {

            return cor::cocos2dx_converter::Cocos2dxExperimental::set_on_enter_callback_create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> Cocos2dxBind_cocos2d__DrawNode_create()
        {

            return cocos2d::DrawNode::create();
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, const float a1, cocos2d::Color4F a2)
        {

            c->drawPoint(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_points_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, const cocos2d::Vec2 * a0, unsigned int a1, cocos2d::Color4F a2)
        {

            c->drawPoints(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_points_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, const cocos2d::Vec2 * a0, unsigned int a1, const float a2, cocos2d::Color4F a3)
        {

            c->drawPoints(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_line(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Color4F a2)
        {

            c->drawLine(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_rect_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Color4F a2)
        {

            c->drawRect(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_poly(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, const cocos2d::Vec2 * a0, unsigned int a1, bool a2, cocos2d::Color4F a3)
        {

            c->drawPoly(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_circle_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, float a1, float a2, unsigned int a3, bool a4, float a5, float a6, cocos2d::Color4F a7)
        {

            c->drawCircle(a0, a1, a2, a3, a4, a5, a6, a7);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_circle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, float a1, float a2, unsigned int a3, bool a4, cocos2d::Color4F a5)
        {

            c->drawCircle(a0, a1, a2, a3, a4, a5);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_quad_bezier(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, unsigned int a3, cocos2d::Color4F a4)
        {

            c->drawQuadBezier(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_cubic_bezier(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3, unsigned int a4, cocos2d::Color4F a5)
        {

            c->drawCubicBezier(a0, a1, a2, a3, a4, a5);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_cardinal_spline(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0, float a1, unsigned int a2, cocos2d::Color4F a3)
        {

            c->drawCardinalSpline(a0.get(), a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_catmull_rom(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0, unsigned int a1, cocos2d::Color4F a2)
        {

            c->drawCatmullRom(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_dot(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, float a1, cocos2d::Color4F a2)
        {

            c->drawDot(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_rect_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Vec2 a3, cocos2d::Color4F a4)
        {

            c->drawRect(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_solid_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Color4F a2)
        {

            c->drawSolidRect(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_solid_poly(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, const cocos2d::Vec2 * a0, unsigned int a1, cocos2d::Color4F a2)
        {

            c->drawSolidPoly(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_solid_circle_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, float a1, float a2, unsigned int a3, float a4, float a5, cocos2d::Color4F a6)
        {

            c->drawSolidCircle(a0, a1, a2, a3, a4, a5, a6);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_solid_circle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, float a1, float a2, unsigned int a3, cocos2d::Color4F a4)
        {

            c->drawSolidCircle(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_segment(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, float a2, cocos2d::Color4F a3)
        {

            c->drawSegment(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_polygon(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, const cocos2d::Vec2 * a0, int a1, cocos2d::Color4F a2, float a3, cocos2d::Color4F a4)
        {

            c->drawPolygon(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw_triangle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, cocos2d::Color4F a3)
        {

            c->drawTriangle(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__DrawNode_clear(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->clear();
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__DrawNode_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->onDraw(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_draw_gl_line(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->onDrawGLLine(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_draw_gl_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->onDrawGLPoint(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_line_width(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->setLineWidth(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->init();
        }

        std::string Cocos2dxBind_cocos2d__DrawNode_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DrawNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__DrawNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DrawNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__DrawNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__DrawNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__DrawNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__DrawNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__DrawNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DrawNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DrawNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__DrawNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__DrawNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DrawNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__DrawNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__DrawNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__DrawNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__DrawNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DrawNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__DrawNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__DrawNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__DrawNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__DrawNode_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__DrawNode_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__DrawNode_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__DrawNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__DrawNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__DrawNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__DrawNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__DrawNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__DrawNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__DrawNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__DrawNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__DrawNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__DrawNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__DrawNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__DrawNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__DrawNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DrawNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__DrawNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__DrawNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__DrawNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DrawNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DrawNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DrawNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DrawNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DrawNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DrawNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DrawNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__DrawNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__DrawNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__DrawNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__DrawNode_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__DrawNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__DrawNode_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__DrawNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__DrawNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__DrawNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__DrawNode_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DrawNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__DrawNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DrawNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__DrawNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_release(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            c.release();
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_valid(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.is_valid();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_node(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_node();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_set_tag(cor::cocos2dx_converter::Collision2dNodeRef& c, int a0)
        {

            c.set_tag(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_tag(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_tag();
        }

        float Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_distance(cor::cocos2dx_converter::Collision2dNodeRef& c, cor::type::Vector2Tmpl<float> a0)
        {

            return c.get_distance(a0);
        }

        int Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_type_id(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_type_id();
        }

        unsigned int Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_index(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_index();
        }

        cor::type::Matrix4x4Tmpl<float> Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_transform(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_transform();
        }

        std::shared_ptr<cor::cocos2dx_converter::Collision2dNodeObject> Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_object(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(c.get_object());
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_box(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.is_box();
        }

        cor::type::OBoxTmpl<float, cor::type::Vector2Tmpl<float> > Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_box(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_box();
        }

        bool Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_sphere(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.is_sphere();
        }

        cor::type::OSphereTmpl<float, cor::type::Vector2Tmpl<float> > Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_sphere(cor::cocos2dx_converter::Collision2dNodeRef& c)
        {

            return c.get_sphere();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_transform_to(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_transform_to(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_transform_to(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_transform_to();
        }

        cocos2d::Mat4 Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_current_transform(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_current_transform();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_update_current_transform(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->update_current_transform();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_transform_to_render(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::type::Matrix4x4Tmpl<float> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_transform_to_render(a0);
        }

        cor::type::Matrix4x4Tmpl<float> Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_transform_to_render(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_transform_to_render();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_collision_group_pair(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, int a1, int a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_collision_group_pair(a0, a1, a2);
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_collision_group_pair(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, int a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_collision_group_pair(a0, a1);
        }

        cor::cocos2dx_converter::Collision2dNodeRef Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_add_o_box(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, cor::type::BoxTmpl<float, cor::type::Vector2Tmpl<float>> a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->add_o_box(a0.get(), a1, a2, 
              [=](cocos2d::Node * b0, cocos2d::Node * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b1));
                      }
                  }, [&]() {

                  });
              }
);
        }

        cor::cocos2dx_converter::Collision2dNodeRef Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_add_o_sphere(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, cor::type::SphereTmpl<float, cor::type::Vector2Tmpl<float>> a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->add_o_sphere(a0.get(), a1, a2, 
              [=](cocos2d::Node * b0, cocos2d::Node * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b1));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_o_box_1(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, cor::type::BoxTmpl<float, cor::type::Vector2Tmpl<float>> a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->find_o_box(a0.get(), a1, a2, 
              [=](cocos2d::Node * b0, cocos2d::Node * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b1));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_o_box_2(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::type::Matrix4x4Tmpl<float> a0, int a1, cor::type::BoxTmpl<float, cor::type::Vector2Tmpl<float>> a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->find_o_box(a0, a1, a2, 
              [=](cocos2d::Node * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_pair(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, int a1, mrubybind::FuncPtr<void (cor::cocos2dx_converter::Collision2dNodeRef, cor::cocos2dx_converter::Collision2dNodeRef)> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->find_pair(a0, a1, 
              [=](cor::cocos2dx_converter::Collision2dNodeRef & b0, cor::cocos2dx_converter::Collision2dNodeRef & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_all_find_pair(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, mrubybind::FuncPtr<void (cor::cocos2dx_converter::Collision2dNodeRef, cor::cocos2dx_converter::Collision2dNodeRef)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->all_find_pair(
              [=](cor::cocos2dx_converter::Collision2dNodeRef & b0, cor::cocos2dx_converter::Collision2dNodeRef & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_all_pair_call(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->all_pair_call();
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_nearest(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, cor::type::Vector2Tmpl<float> a1, int a2, mrubybind::FuncPtr<void (float, cor::cocos2dx_converter::Collision2dNodeRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->find_nearest(a0, a1, a2, 
              [=](float b0, cor::cocos2dx_converter::Collision2dNodeRef b1, cocos2d::Node * b2){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(b0, b1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b2));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_fit(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->fit(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_changed(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_changed(a0);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_render_to_draw_node(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->render_to_draw_node(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_render_to_draw_node_o_box(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::type::BoxTmpl<float, cor::type::Vector2Tmpl<float>> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->render_to_draw_node_o_box(a0.get(), a1, a2.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__EasyHttpClient_get_text(std::string a0, mrubybind::FuncPtr<void (std::string, std::string)> a1)
        {

            cor::cocos2dx_converter::EasyHttpClient::get_text(a0, 
              [=](std::string b0, std::string b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_get_node(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_node();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_set_collision_callback(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_collision_callback(
              [=](cocos2d::Node * b0, cocos2d::Node * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b1));
                      }
                  }, [&]() {

                  });
              }
);
        }

        unsigned int Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_get_index(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_index();
        }

        RBool Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_is_erased(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_erased();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_remove(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->remove();
        }

        int Cocos2dxBind_cocos2d__Value_as_byte(cocos2d::Value c)
        {

            return c.asByte();
        }

        int Cocos2dxBind_cocos2d__Value_as_int(cocos2d::Value c)
        {

            return c.asInt();
        }

        float Cocos2dxBind_cocos2d__Value_as_float(cocos2d::Value c)
        {

            return c.asFloat();
        }

        double Cocos2dxBind_cocos2d__Value_as_double(cocos2d::Value c)
        {

            return c.asDouble();
        }

        bool Cocos2dxBind_cocos2d__Value_as_bool(cocos2d::Value c)
        {

            return c.asBool();
        }

        std::string Cocos2dxBind_cocos2d__Value_as_string(cocos2d::Value c)
        {

            return c.asString();
        }

        MrubyRef Cocos2dxBind_cocos2d__Value_as_value_vector_2(cocos2d::Value c)
        {

            return cor::cocos2dx_mruby_interface::CocosValue::convert_from_cocos_value_vec(c.asValueVector());
        }

        cocos2d::ValueMap Cocos2dxBind_cocos2d__Value_as_value_map_2(cocos2d::Value c)
        {

            return c.asValueMap();
        }

        cocos2d::ValueMapIntKey Cocos2dxBind_cocos2d__Value_as_int_key_map_2(cocos2d::Value c)
        {

            return c.asIntKeyMap();
        }

        bool Cocos2dxBind_cocos2d__Value_is_null(cocos2d::Value c)
        {

            return c.isNull();
        }

        cocos2d::Value::Type Cocos2dxBind_cocos2d__Value_get_type(cocos2d::Value c)
        {

            return c.getType();
        }

        std::string Cocos2dxBind_cocos2d__Value_get_description(cocos2d::Value c)
        {

            return c.getDescription();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__SpriteFrame_create_1(std::string a0, cocos2d::Rect a1)
        {

            return cocos2d::SpriteFrame::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__SpriteFrame_create_2(std::string a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4)
        {

            return cocos2d::SpriteFrame::create(a0, a1, a2, a3, a4);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__SpriteFrame_create_with_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1)
        {

            return cocos2d::SpriteFrame::createWithTexture(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__SpriteFrame_create_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4)
        {

            return cocos2d::SpriteFrame::createWithTexture(a0.get(), a1, a2, a3, a4);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__SpriteFrame_get_rect_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getRectInPixels();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_rect_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Rect a0)
        {

            c->setRectInPixels(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteFrame_is_rotated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->isRotated();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_rotated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, bool a0)
        {

            c->setRotated(a0);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__SpriteFrame_get_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getRect();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Rect a0)
        {

            c->setRect(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteFrame_get_offset_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getOffsetInPixels();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_offset_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Vec2 a0)
        {

            c->setOffsetInPixels(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__SpriteFrame_get_original_size_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getOriginalSizeInPixels();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_original_size_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Size a0)
        {

            c->setOriginalSizeInPixels(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__SpriteFrame_get_original_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getOriginalSize();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_original_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Size a0)
        {

            c->setOriginalSize(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__SpriteFrame_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteFrame_get_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getOffset();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_set_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cocos2d::Vec2 a0)
        {

            c->setOffset(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__SpriteFrame_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1)
        {

            return c->initWithTexture(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_filename_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, std::string a0, cocos2d::Rect a1)
        {

            return c->initWithTextureFilename(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4)
        {

            return c->initWithTexture(a0.get(), a1, a2, a3, a4);
        }

        bool Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_filename_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, std::string a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4)
        {

            return c->initWithTextureFilename(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__SpriteFrame_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__SpriteFrame_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> Cocos2dxBind_cocos2d__AnimationFrame_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, float a1, cocos2d::ValueMap a2)
        {

            return cocos2d::AnimationFrame::create(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> Cocos2dxBind_cocos2d__AnimationFrame_get_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->getSpriteFrame();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_set_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            c->setSpriteFrame(a0.get());
        }

        float Cocos2dxBind_cocos2d__AnimationFrame_get_delay_units(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->getDelayUnits();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_set_delay_units(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, float a0)
        {

            c->setDelayUnits(a0);
        }

        cocos2d::ValueMap Cocos2dxBind_cocos2d__AnimationFrame_get_user_info_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->getUserInfo();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_set_user_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, cocos2d::ValueMap a0)
        {

            c->setUserInfo(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> Cocos2dxBind_cocos2d__AnimationFrame_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__AnimationFrame_init_with_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, float a1, cocos2d::ValueMap a2)
        {

            return c->initWithSpriteFrame(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AnimationFrame_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AnimationFrame_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__Animation_create_1()
        {

            return cocos2d::Animation::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__Animation_create_with_sprite_frames(MrubyRef a0, float a1, unsigned int a2)
        {

            return cocos2d::Animation::createWithSpriteFrames(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::SpriteFrame>(a0), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__Animation_create_2(MrubyRef a0, float a1, unsigned int a2)
        {

            return cocos2d::Animation::create(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::AnimationFrame>(a0), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Animation_add_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            c->addSpriteFrame(a0.get());
        }

        void Cocos2dxBind_cocos2d__Animation_add_sprite_frame_with_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, std::string a0)
        {

            c->addSpriteFrameWithFile(a0);
        }

        void Cocos2dxBind_cocos2d__Animation_add_sprite_frame_with_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1)
        {

            c->addSpriteFrameWithTexture(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__Animation_get_total_delay_units(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getTotalDelayUnits();
        }

        void Cocos2dxBind_cocos2d__Animation_set_delay_per_unit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, float a0)
        {

            c->setDelayPerUnit(a0);
        }

        float Cocos2dxBind_cocos2d__Animation_get_delay_per_unit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getDelayPerUnit();
        }

        float Cocos2dxBind_cocos2d__Animation_get_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getDuration();
        }

        MrubyRef Cocos2dxBind_cocos2d__Animation_get_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getFrames());
        }

        void Cocos2dxBind_cocos2d__Animation_set_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, MrubyRef a0)
        {

            c->setFrames(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::AnimationFrame>(a0));
        }

        bool Cocos2dxBind_cocos2d__Animation_get_restore_original_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getRestoreOriginalFrame();
        }

        void Cocos2dxBind_cocos2d__Animation_set_restore_original_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, bool a0)
        {

            c->setRestoreOriginalFrame(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Animation_get_loops(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getLoops();
        }

        void Cocos2dxBind_cocos2d__Animation_set_loops(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, unsigned int a0)
        {

            c->setLoops(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__Animation_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__Animation_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__Animation_init_with_sprite_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, MrubyRef a0, float a1, unsigned int a2)
        {

            return c->initWithSpriteFrames(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::SpriteFrame>(a0), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__Animation_init_with_animation_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, MrubyRef a0, float a1, unsigned int a2)
        {

            return c->initWithAnimationFrames(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::AnimationFrame>(a0), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Animation_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Animation_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Animation_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Animation_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Animation_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Animation_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Animation_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Animation_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Animation_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Animation_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> c)
        {

            return c->_scriptObject;
        }

        std::string Cocos2dxBind_cocos2d__Action_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Action_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Action_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__Action_is_done_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Action_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Action_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> c)
        {

            c->stop();
        }



        
        bool Cocos2dxBind_Ref_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> c)
        {
            return c.is_valid();
        }
        cocos2d::Vec2 Cocos2dxBind_Vec2_create_0()
        {
            return cocos2d::Vec2();
        }
        cocos2d::Vec2 Cocos2dxBind_Vec2_create_1(float a0, float a1)
        {
            return cocos2d::Vec2(a0, a1);
        }
        cocos2d::Vec2 Cocos2dxBind_Vec2_create_2(const float * a0)
        {
            return cocos2d::Vec2(a0);
        }
        cocos2d::Vec2 Cocos2dxBind_Vec2_create_3(cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {
            return cocos2d::Vec2(a0, a1);
        }
        cocos2d::Vec2 Cocos2dxBind_Vec2_create_4(cocos2d::Vec2 a0)
        {
            return cocos2d::Vec2(a0);
        }
        cocos2d::Vec3 Cocos2dxBind_Vec3_create_0()
        {
            return cocos2d::Vec3();
        }
        cocos2d::Vec3 Cocos2dxBind_Vec3_create_1(float a0, float a1, float a2)
        {
            return cocos2d::Vec3(a0, a1, a2);
        }
        cocos2d::Vec3 Cocos2dxBind_Vec3_create_2(const float * a0)
        {
            return cocos2d::Vec3(a0);
        }
        cocos2d::Vec3 Cocos2dxBind_Vec3_create_3(cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {
            return cocos2d::Vec3(a0, a1);
        }
        cocos2d::Vec3 Cocos2dxBind_Vec3_create_4(cocos2d::Vec3 a0)
        {
            return cocos2d::Vec3(a0);
        }
        cocos2d::Vec4 Cocos2dxBind_Vec4_create_0()
        {
            return cocos2d::Vec4();
        }
        cocos2d::Vec4 Cocos2dxBind_Vec4_create_1(float a0, float a1, float a2, float a3)
        {
            return cocos2d::Vec4(a0, a1, a2, a3);
        }
        cocos2d::Vec4 Cocos2dxBind_Vec4_create_2(const float * a0)
        {
            return cocos2d::Vec4(a0);
        }
        cocos2d::Vec4 Cocos2dxBind_Vec4_create_3(cocos2d::Vec4 a0, cocos2d::Vec4 a1)
        {
            return cocos2d::Vec4(a0, a1);
        }
        cocos2d::Vec4 Cocos2dxBind_Vec4_create_4(cocos2d::Vec4 a0)
        {
            return cocos2d::Vec4(a0);
        }
        cocos2d::Mat4 Cocos2dxBind_Mat4_create_0()
        {
            return cocos2d::Mat4();
        }
        cocos2d::Mat4 Cocos2dxBind_Mat4_create_1(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
        {
            return cocos2d::Mat4(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        }
        cocos2d::Mat4 Cocos2dxBind_Mat4_create_2(const float * a0)
        {
            return cocos2d::Mat4(a0);
        }
        cocos2d::Mat4 Cocos2dxBind_Mat4_create_3(cocos2d::Mat4 a0)
        {
            return cocos2d::Mat4(a0);
        }
        cocos2d::Size Cocos2dxBind_Size_create_0()
        {
            return cocos2d::Size();
        }
        cocos2d::Size Cocos2dxBind_Size_create_1(float a0, float a1)
        {
            return cocos2d::Size(a0, a1);
        }
        cocos2d::Size Cocos2dxBind_Size_create_2(cocos2d::Size a0)
        {
            return cocos2d::Size(a0);
        }
        cocos2d::Size Cocos2dxBind_Size_create_3(cocos2d::Vec2 a0)
        {
            return cocos2d::Size(a0);
        }
        cocos2d::Rect Cocos2dxBind_Rect_create_0()
        {
            return cocos2d::Rect();
        }
        cocos2d::Rect Cocos2dxBind_Rect_create_1(float a0, float a1, float a2, float a3)
        {
            return cocos2d::Rect(a0, a1, a2, a3);
        }
        cocos2d::Rect Cocos2dxBind_Rect_create_2(cocos2d::Vec2 a0, cocos2d::Size a1)
        {
            return cocos2d::Rect(a0, a1);
        }
        cocos2d::Rect Cocos2dxBind_Rect_create_3(cocos2d::Rect a0)
        {
            return cocos2d::Rect(a0);
        }
        cocos2d::Color3B Cocos2dxBind_Color3B_create_0()
        {
            return cocos2d::Color3B();
        }
        cocos2d::Color3B Cocos2dxBind_Color3B_create_1(int a0, int a1, int a2)
        {
            return cocos2d::Color3B(a0, a1, a2);
        }
        cocos2d::Color3B Cocos2dxBind_Color3B_create_2(cocos2d::Color4B a0)
        {
            return cocos2d::Color3B(a0);
        }
        cocos2d::Color3B Cocos2dxBind_Color3B_create_3(cocos2d::Color4F a0)
        {
            return cocos2d::Color3B(a0);
        }
        cocos2d::Color3B Cocos2dxBind_Color3B_create_4(cocos2d::Color3B a0)
        {
            return cocos2d::Color3B(a0);
        }
        cocos2d::Color4F Cocos2dxBind_Color4F_create_0()
        {
            return cocos2d::Color4F();
        }
        cocos2d::Color4F Cocos2dxBind_Color4F_create_1(float a0, float a1, float a2, float a3)
        {
            return cocos2d::Color4F(a0, a1, a2, a3);
        }
        cocos2d::Color4F Cocos2dxBind_Color4F_create_2(cocos2d::Color3B a0)
        {
            return cocos2d::Color4F(a0);
        }
        cocos2d::Color4F Cocos2dxBind_Color4F_create_3(cocos2d::Color4B a0)
        {
            return cocos2d::Color4F(a0);
        }
        cocos2d::Color4F Cocos2dxBind_Color4F_create_4(cocos2d::Color4F a0)
        {
            return cocos2d::Color4F(a0);
        }
        bool Cocos2dxBind_Texture2D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c)
        {
            return c.is_valid();
        }
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_Texture2D_create()
        {
            return new cocos2d::Texture2D();
        }
        bool Cocos2dxBind_Touch_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Event_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventTouch_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Node_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Cocos2dxExperimental_valid_question(std::weak_ptr<cor::cocos2dx_converter::Cocos2dxExperimental> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_DrawNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_0(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> >("Cocos2d", "Ref");
            binder.bind_custom_method("Cocos2d", "Ref", "valid?", Cocos2dxBind_Ref_valid_question);
            binder.bind_class<cocos2d::Vec2 >("Cocos2d", "Vec2");
            binder.bind_static_method("Cocos2d", "Vec2", "create_0", Cocos2dxBind_Vec2_create_0);
            binder.bind_static_method("Cocos2d", "Vec2", "create_1", Cocos2dxBind_Vec2_create_1);
            binder.bind_static_method("Cocos2d", "Vec2", "create_2", Cocos2dxBind_Vec2_create_2);
            binder.bind_static_method("Cocos2d", "Vec2", "create_3", Cocos2dxBind_Vec2_create_3);
            binder.bind_static_method("Cocos2d", "Vec2", "create_4", Cocos2dxBind_Vec2_create_4);
            binder.bind_class<cocos2d::Vec3 >("Cocos2d", "Vec3");
            binder.bind_static_method("Cocos2d", "Vec3", "create_0", Cocos2dxBind_Vec3_create_0);
            binder.bind_static_method("Cocos2d", "Vec3", "create_1", Cocos2dxBind_Vec3_create_1);
            binder.bind_static_method("Cocos2d", "Vec3", "create_2", Cocos2dxBind_Vec3_create_2);
            binder.bind_static_method("Cocos2d", "Vec3", "create_3", Cocos2dxBind_Vec3_create_3);
            binder.bind_static_method("Cocos2d", "Vec3", "create_4", Cocos2dxBind_Vec3_create_4);
            binder.bind_class<cocos2d::Vec4 >("Cocos2d", "Vec4");
            binder.bind_static_method("Cocos2d", "Vec4", "create_0", Cocos2dxBind_Vec4_create_0);
            binder.bind_static_method("Cocos2d", "Vec4", "create_1", Cocos2dxBind_Vec4_create_1);
            binder.bind_static_method("Cocos2d", "Vec4", "create_2", Cocos2dxBind_Vec4_create_2);
            binder.bind_static_method("Cocos2d", "Vec4", "create_3", Cocos2dxBind_Vec4_create_3);
            binder.bind_static_method("Cocos2d", "Vec4", "create_4", Cocos2dxBind_Vec4_create_4);
            binder.bind_class<cocos2d::Mat4 >("Cocos2d", "Mat4");
            binder.bind_static_method("Cocos2d", "Mat4", "create_0", Cocos2dxBind_Mat4_create_0);
            binder.bind_static_method("Cocos2d", "Mat4", "create_1", Cocos2dxBind_Mat4_create_1);
            binder.bind_static_method("Cocos2d", "Mat4", "create_2", Cocos2dxBind_Mat4_create_2);
            binder.bind_static_method("Cocos2d", "Mat4", "create_3", Cocos2dxBind_Mat4_create_3);
            binder.bind_class<cocos2d::Size >("Cocos2d", "Size");
            binder.bind_static_method("Cocos2d", "Size", "create_0", Cocos2dxBind_Size_create_0);
            binder.bind_static_method("Cocos2d", "Size", "create_1", Cocos2dxBind_Size_create_1);
            binder.bind_static_method("Cocos2d", "Size", "create_2", Cocos2dxBind_Size_create_2);
            binder.bind_static_method("Cocos2d", "Size", "create_3", Cocos2dxBind_Size_create_3);
            binder.bind_class<cocos2d::Rect >("Cocos2d", "Rect");
            binder.bind_static_method("Cocos2d", "Rect", "create_0", Cocos2dxBind_Rect_create_0);
            binder.bind_static_method("Cocos2d", "Rect", "create_1", Cocos2dxBind_Rect_create_1);
            binder.bind_static_method("Cocos2d", "Rect", "create_2", Cocos2dxBind_Rect_create_2);
            binder.bind_static_method("Cocos2d", "Rect", "create_3", Cocos2dxBind_Rect_create_3);
            binder.bind_class<cocos2d::Color3B >("Cocos2d", "Color3B");
            binder.bind_static_method("Cocos2d", "Color3B", "create_0", Cocos2dxBind_Color3B_create_0);
            binder.bind_static_method("Cocos2d", "Color3B", "create_1", Cocos2dxBind_Color3B_create_1);
            binder.bind_static_method("Cocos2d", "Color3B", "create_2", Cocos2dxBind_Color3B_create_2);
            binder.bind_static_method("Cocos2d", "Color3B", "create_3", Cocos2dxBind_Color3B_create_3);
            binder.bind_static_method("Cocos2d", "Color3B", "create_4", Cocos2dxBind_Color3B_create_4);
            binder.bind_class<cocos2d::Color4F >("Cocos2d", "Color4F");
            binder.bind_static_method("Cocos2d", "Color4F", "create_0", Cocos2dxBind_Color4F_create_0);
            binder.bind_static_method("Cocos2d", "Color4F", "create_1", Cocos2dxBind_Color4F_create_1);
            binder.bind_static_method("Cocos2d", "Color4F", "create_2", Cocos2dxBind_Color4F_create_2);
            binder.bind_static_method("Cocos2d", "Color4F", "create_3", Cocos2dxBind_Color4F_create_3);
            binder.bind_static_method("Cocos2d", "Color4F", "create_4", Cocos2dxBind_Color4F_create_4);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> >("Cocos2d", "Texture2D");
            binder.bind_custom_method("Cocos2d", "Texture2D", "valid?", Cocos2dxBind_Texture2D_valid_question);
            binder.bind_static_method("Cocos2d", "Texture2D", "create", Cocos2dxBind_Texture2D_create);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> >("Cocos2d", "Touch");
            binder.bind_custom_method("Cocos2d", "Touch", "valid?", Cocos2dxBind_Touch_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> >("Cocos2d", "Event");
            binder.bind_custom_method("Cocos2d", "Event", "valid?", Cocos2dxBind_Event_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> >("Cocos2d", "EventTouch");
            binder.bind_custom_method("Cocos2d", "EventTouch", "valid?", Cocos2dxBind_EventTouch_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> >("Cocos2d", "Node");
            binder.bind_custom_method("Cocos2d", "Node", "valid?", Cocos2dxBind_Node_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::Cocos2dxExperimental> >("CorCocos2dxConverter", "Cocos2dxExperimental");
            binder.bind_custom_method("CorCocos2dxConverter", "Cocos2dxExperimental", "valid?", Cocos2dxBind_Cocos2dxExperimental_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> >("Cocos2d", "DrawNode");
            binder.bind_custom_method("Cocos2d", "DrawNode", "valid?", Cocos2dxBind_DrawNode_valid_question);
            binder.bind_class<cor::cocos2dx_converter::Collision2dNodeRef >("CorCocos2dxConverter", "Collision2dNodeRef");
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> >("CorCocos2dxConverter", "Collision2dNode");
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "valid?", Cocos2dxBind_Collision2dNode_valid_question);
            binder.bind_static_method("CorCocos2dxConverter", "Collision2dNode", "create", Cocos2dxBind_Collision2dNode_create);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::EasyHttpClient> >("CorCocos2dxConverter", "EasyHttpClient");
            binder.bind_custom_method("CorCocos2dxConverter", "EasyHttpClient", "valid?", Cocos2dxBind_EasyHttpClient_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> >("CorCocos2dxConverter", "RtsObjectSensor");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "valid?", Cocos2dxBind_RtsObjectSensor_valid_question);
            binder.bind_class<cocos2d::Value >("Cocos2d", "Value");
            binder.bind_static_method("Cocos2d", "Value", "create_0", Cocos2dxBind_Value_create_0);
            binder.bind_static_method("Cocos2d", "Value", "create_1", Cocos2dxBind_Value_create_1);
            binder.bind_static_method("Cocos2d", "Value", "create_2", Cocos2dxBind_Value_create_2);
            binder.bind_static_method("Cocos2d", "Value", "create_3", Cocos2dxBind_Value_create_3);
            binder.bind_static_method("Cocos2d", "Value", "create_4", Cocos2dxBind_Value_create_4);
            binder.bind_static_method("Cocos2d", "Value", "create_5", Cocos2dxBind_Value_create_5);
            binder.bind_static_method("Cocos2d", "Value", "create_6", Cocos2dxBind_Value_create_6);
            binder.bind_static_method("Cocos2d", "Value", "create_7", Cocos2dxBind_Value_create_7);
            binder.bind_static_method("Cocos2d", "Value", "create_8", Cocos2dxBind_Value_create_8);
            binder.bind_static_method("Cocos2d", "Value", "create_10", Cocos2dxBind_Value_create_10);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> >("Cocos2d", "SpriteFrame");
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "valid?", Cocos2dxBind_SpriteFrame_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> >("Cocos2d", "AnimationFrame");
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "valid?", Cocos2dxBind_AnimationFrame_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> >("Cocos2d", "Animation");
            binder.bind_custom_method("Cocos2d", "Animation", "valid?", Cocos2dxBind_Animation_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> >("Cocos2d", "Action");
            binder.bind_custom_method("Cocos2d", "Action", "valid?", Cocos2dxBind_Action_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FiniteTimeAction> >("Cocos2d", "FiniteTimeAction");
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "valid?", Cocos2dxBind_FiniteTimeAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Speed> >("Cocos2d", "Speed");
            binder.bind_custom_method("Cocos2d", "Speed", "valid?", Cocos2dxBind_Speed_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Follow> >("Cocos2d", "Follow");
            binder.bind_custom_method("Cocos2d", "Follow", "valid?", Cocos2dxBind_Follow_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> >("Cocos2d", "ActionInterval");
            binder.bind_custom_method("Cocos2d", "ActionInterval", "valid?", Cocos2dxBind_ActionInterval_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sequence> >("Cocos2d", "Sequence");
            binder.bind_custom_method("Cocos2d", "Sequence", "valid?", Cocos2dxBind_Sequence_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Repeat> >("Cocos2d", "Repeat");
            binder.bind_custom_method("Cocos2d", "Repeat", "valid?", Cocos2dxBind_Repeat_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RepeatForever> >("Cocos2d", "RepeatForever");
            binder.bind_custom_method("Cocos2d", "RepeatForever", "valid?", Cocos2dxBind_RepeatForever_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Spawn> >("Cocos2d", "Spawn");
            binder.bind_custom_method("Cocos2d", "Spawn", "valid?", Cocos2dxBind_Spawn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateTo> >("Cocos2d", "RotateTo");
            binder.bind_custom_method("Cocos2d", "RotateTo", "valid?", Cocos2dxBind_RotateTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RotateBy> >("Cocos2d", "RotateBy");
            binder.bind_custom_method("Cocos2d", "RotateBy", "valid?", Cocos2dxBind_RotateBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveBy> >("Cocos2d", "MoveBy");
            binder.bind_custom_method("Cocos2d", "MoveBy", "valid?", Cocos2dxBind_MoveBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MoveTo> >("Cocos2d", "MoveTo");
            binder.bind_custom_method("Cocos2d", "MoveTo", "valid?", Cocos2dxBind_MoveTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewTo> >("Cocos2d", "SkewTo");
            binder.bind_custom_method("Cocos2d", "SkewTo", "valid?", Cocos2dxBind_SkewTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SkewBy> >("Cocos2d", "SkewBy");
            binder.bind_custom_method("Cocos2d", "SkewBy", "valid?", Cocos2dxBind_SkewBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpBy> >("Cocos2d", "JumpBy");
            binder.bind_custom_method("Cocos2d", "JumpBy", "valid?", Cocos2dxBind_JumpBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTo> >("Cocos2d", "JumpTo");
            binder.bind_custom_method("Cocos2d", "JumpTo", "valid?", Cocos2dxBind_JumpTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierBy> >("Cocos2d", "BezierBy");
            binder.bind_custom_method("Cocos2d", "BezierBy", "valid?", Cocos2dxBind_BezierBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BezierTo> >("Cocos2d", "BezierTo");
            binder.bind_custom_method("Cocos2d", "BezierTo", "valid?", Cocos2dxBind_BezierTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleTo> >("Cocos2d", "ScaleTo");
            binder.bind_custom_method("Cocos2d", "ScaleTo", "valid?", Cocos2dxBind_ScaleTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ScaleBy> >("Cocos2d", "ScaleBy");
            binder.bind_custom_method("Cocos2d", "ScaleBy", "valid?", Cocos2dxBind_ScaleBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Blink> >("Cocos2d", "Blink");
            binder.bind_custom_method("Cocos2d", "Blink", "valid?", Cocos2dxBind_Blink_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeTo> >("Cocos2d", "FadeTo");
            binder.bind_custom_method("Cocos2d", "FadeTo", "valid?", Cocos2dxBind_FadeTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeIn> >("Cocos2d", "FadeIn");
            binder.bind_custom_method("Cocos2d", "FadeIn", "valid?", Cocos2dxBind_FadeIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> >("Cocos2d", "FadeOut");
            binder.bind_custom_method("Cocos2d", "FadeOut", "valid?", Cocos2dxBind_FadeOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> >("Cocos2d", "TintTo");
            binder.bind_custom_method("Cocos2d", "TintTo", "valid?", Cocos2dxBind_TintTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> >("Cocos2d", "TintBy");
            binder.bind_custom_method("Cocos2d", "TintBy", "valid?", Cocos2dxBind_TintBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> >("Cocos2d", "DelayTime");
            binder.bind_custom_method("Cocos2d", "DelayTime", "valid?", Cocos2dxBind_DelayTime_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> >("Cocos2d", "ReverseTime");
            binder.bind_custom_method("Cocos2d", "ReverseTime", "valid?", Cocos2dxBind_ReverseTime_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> >("Cocos2d", "Animate");
            binder.bind_custom_method("Cocos2d", "Animate", "valid?", Cocos2dxBind_Animate_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> >("Cocos2d", "TargetedAction");
            binder.bind_custom_method("Cocos2d", "TargetedAction", "valid?", Cocos2dxBind_TargetedAction_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> >("CorCocos2dxConverter", "RtsObjectAction");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectAction", "valid?", Cocos2dxBind_RtsObjectAction_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObject> >("CorCocos2dxConverter", "RtsObject");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "valid?", Cocos2dxBind_RtsObject_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> >("CorCocos2dxConverter", "RtsObjectGroup");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "valid?", Cocos2dxBind_RtsObjectGroup_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> >("CorCocos2dxConverter", "RtsObjectCostGridSpace");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "valid?", Cocos2dxBind_RtsObjectCostGridSpace_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental> >("CorCocos2dxConverter", "RtsObjectCostGridSpaceExperimental");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpaceExperimental", "valid?", Cocos2dxBind_RtsObjectCostGridSpaceExperimental_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> >("CorCocos2dxConverter", "TexturedTriangleNode");
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "valid?", Cocos2dxBind_TexturedTriangleNode_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectEffect> >("CorCocos2dxConverter", "RtsObjectEffect");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectEffect", "valid?", Cocos2dxBind_RtsObjectEffect_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> >("Cocos2d", "Image");
            binder.bind_custom_method("Cocos2d", "Image", "valid?", Cocos2dxBind_Image_valid_question);
            binder.bind_static_method("Cocos2d", "Image", "create", Cocos2dxBind_Image_create);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> >("Cocos2d", "Sprite");
            binder.bind_custom_method("Cocos2d", "Sprite", "valid?", Cocos2dxBind_Sprite_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> >("Cocos2d", "FontAtlas");
            binder.bind_custom_method("Cocos2d", "FontAtlas", "valid?", Cocos2dxBind_FontAtlas_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> >("Cocos2d", "Label");
            binder.bind_custom_method("Cocos2d", "Label", "valid?", Cocos2dxBind_Label_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> >("Cocos2d", "Layer");
            binder.bind_custom_method("Cocos2d", "Layer", "valid?", Cocos2dxBind_Layer_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> >("Cocos2d", "LayerColor");
            binder.bind_custom_method("Cocos2d", "LayerColor", "valid?", Cocos2dxBind_LayerColor_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> >("Cocos2d", "EventListener");
            binder.bind_custom_method("Cocos2d", "EventListener", "valid?", Cocos2dxBind_EventListener_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> >("Cocos2d", "EventListenerTouchOneByOne");
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "valid?", Cocos2dxBind_EventListenerTouchOneByOne_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> >("Cocos2d", "EventListenerTouchAllAtOnce");
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "valid?", Cocos2dxBind_EventListenerTouchAllAtOnce_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> >("Cocos2d", "ActionTween");
            binder.bind_custom_method("Cocos2d", "ActionTween", "valid?", Cocos2dxBind_ActionTween_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> >("Cocos2dExtension", "ScrollView");
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "valid?", Cocos2dxBind_ScrollView_valid_question);
            binder.bind_class<std::weak_ptr<cor::cocos2dx_converter::RtsObjectSystem> >("CorCocos2dxConverter", "RtsObjectSystem");
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSystem", "valid?", Cocos2dxBind_RtsObjectSystem_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> >("Cocos2d", "Scene");
            binder.bind_custom_method("Cocos2d", "Scene", "valid?", Cocos2dxBind_Scene_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> >("CorCocos2dxMrubyInterface", "CocosMrubyRef");
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "valid?", Cocos2dxBind_CocosMrubyRef_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> >("Cocos2d", "Director");
            binder.bind_custom_method("Cocos2d", "Director", "valid?", Cocos2dxBind_Director_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> >("Cocos2d", "Animation3D");
            binder.bind_custom_method("Cocos2d", "Animation3D", "valid?", Cocos2dxBind_Animation3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> >("Cocos2d", "Animate3D");
            binder.bind_custom_method("Cocos2d", "Animate3D", "valid?", Cocos2dxBind_Animate3D_valid_question);
            binder.bind_class<cocos2d::Data >("Cocos2d", "Data");
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> >("Cocos2d", "EventCustom");
            binder.bind_custom_method("Cocos2d", "EventCustom", "valid?", Cocos2dxBind_EventCustom_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> >("Cocos2d", "EventDispatcher");
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "valid?", Cocos2dxBind_EventDispatcher_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> >("Cocos2d", "EventListenerCustom");
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "valid?", Cocos2dxBind_EventListenerCustom_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> >("Cocos2d", "EventListenerKeyboard");
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "valid?", Cocos2dxBind_EventListenerKeyboard_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> >("Cocos2d", "ActionCamera");
            binder.bind_custom_method("Cocos2d", "ActionCamera", "valid?", Cocos2dxBind_ActionCamera_valid_question);
            binder.bind_static_method("Cocos2d", "ActionCamera", "create", Cocos2dxBind_ActionCamera_create);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> >("Cocos2d", "OrbitCamera");
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "valid?", Cocos2dxBind_OrbitCamera_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> >("Cocos2d", "PointArray");
            binder.bind_custom_method("Cocos2d", "PointArray", "valid?", Cocos2dxBind_PointArray_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> >("Cocos2d", "CardinalSplineTo");
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "valid?", Cocos2dxBind_CardinalSplineTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> >("Cocos2d", "CardinalSplineBy");
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "valid?", Cocos2dxBind_CardinalSplineBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> >("Cocos2d", "CatmullRomTo");
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "valid?", Cocos2dxBind_CatmullRomTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> >("Cocos2d", "CatmullRomBy");
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "valid?", Cocos2dxBind_CatmullRomBy_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> >("Cocos2d", "ActionEase");
            binder.bind_custom_method("Cocos2d", "ActionEase", "valid?", Cocos2dxBind_ActionEase_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> >("Cocos2d", "EaseRateAction");
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "valid?", Cocos2dxBind_EaseRateAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> >("Cocos2d", "EaseIn");
            binder.bind_custom_method("Cocos2d", "EaseIn", "valid?", Cocos2dxBind_EaseIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> >("Cocos2d", "EaseOut");
            binder.bind_custom_method("Cocos2d", "EaseOut", "valid?", Cocos2dxBind_EaseOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> >("Cocos2d", "EaseInOut");
            binder.bind_custom_method("Cocos2d", "EaseInOut", "valid?", Cocos2dxBind_EaseInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> >("Cocos2d", "EaseExponentialIn");
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "valid?", Cocos2dxBind_EaseExponentialIn_valid_question);

          }

    }
}
