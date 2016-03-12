#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/import/external_code_importer.h"
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_is_erased(std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_movable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_enemy_collidable(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_rotate_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_parabola_animation(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_flip_mode(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
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

        std::string Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a0)
        {

            return cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental::run1(a0.get());
        }

        std::string Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DrawNode> a1, std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> a2, std::weak_ptr<cor::data_structure::CostGridSpace> a3, std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> a4)
        {

            return cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental::run2(a0.get(), a1.get(), a2.lock(), a3.lock(), a4.lock());
        }

        std::string Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_thread_run()
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

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
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

        int Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
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

        bool Cocos2dxBind_cocos2d__Image_init_with_image_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, const unsigned char * a0, int a1)
        {

            return c->initWithImageData(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Image_init_with_raw_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c, const unsigned char * a0, int a1, int a2, int a3, int a4, bool a5)
        {

            return c->initWithRawData(a0, a1, a2, a3, a4, a5);
        }

        unsigned char* Cocos2dxBind_cocos2d__Image_get_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {

            return c->getData();
        }

        int Cocos2dxBind_cocos2d__Image_get_data_len(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
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

        void Cocos2dxBind_cocos2d__Sprite_set_display_frame_with_animation_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, std::string a0, int a1)
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

        int Cocos2dxBind_cocos2d__Sprite_get_atlas_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {

            return c->getAtlasIndex();
        }

        void Cocos2dxBind_cocos2d__Sprite_set_atlas_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c, int a0)
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

        int Cocos2dxBind_cocos2d__Sprite_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
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

        int Cocos2dxBind_cocos2d__Sprite_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
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

        void Cocos2dxBind_cocos2d__FontAtlas_add_letter_definition(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, int a0, cocos2d::FontLetterDefinition a1)
        {

            c->addLetterDefinition(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__FontAtlas_prepare_letter_definitions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c, int a0)
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

        int Cocos2dxBind_cocos2d__Label_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
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
