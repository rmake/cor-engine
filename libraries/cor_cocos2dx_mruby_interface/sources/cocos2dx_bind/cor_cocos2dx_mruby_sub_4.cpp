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
        
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> Cocos2dxBind_cocos2d__EaseCircleActionIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> Cocos2dxBind_cocos2d__EaseCircleActionIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCircleActionIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCircleActionIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCircleActionIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCircleActionIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> Cocos2dxBind_cocos2d__EaseCircleActionOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCircleActionOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> Cocos2dxBind_cocos2d__EaseCircleActionOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> Cocos2dxBind_cocos2d__EaseCircleActionOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCircleActionOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCircleActionOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCircleActionOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCircleActionOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> Cocos2dxBind_cocos2d__EaseCircleActionInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCircleActionInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> Cocos2dxBind_cocos2d__EaseCircleActionInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> Cocos2dxBind_cocos2d__EaseCircleActionInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCircleActionInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCircleActionInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCircleActionInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCircleActionInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> Cocos2dxBind_cocos2d__EaseCubicActionIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCubicActionIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> Cocos2dxBind_cocos2d__EaseCubicActionIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> Cocos2dxBind_cocos2d__EaseCubicActionIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCubicActionIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCubicActionIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCubicActionIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCubicActionIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> Cocos2dxBind_cocos2d__EaseCubicActionOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCubicActionOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> Cocos2dxBind_cocos2d__EaseCubicActionOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> Cocos2dxBind_cocos2d__EaseCubicActionOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCubicActionOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCubicActionOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCubicActionOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCubicActionOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> Cocos2dxBind_cocos2d__EaseCubicActionInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCubicActionInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> Cocos2dxBind_cocos2d__EaseCubicActionInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> Cocos2dxBind_cocos2d__EaseCubicActionInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseCubicActionInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseCubicActionInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseCubicActionInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseCubicActionInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> Cocos2dxBind_cocos2d__ActionInstant_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> Cocos2dxBind_cocos2d__ActionInstant_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__ActionInstant_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__ActionInstant_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__ActionInstant_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ActionInstant_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionInstant_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionInstant_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionInstant_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ActionInstant_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ActionInstant_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ActionInstant_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionInstant_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionInstant_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionInstant_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> Cocos2dxBind_cocos2d__Show_create()
        {

            return cocos2d::Show::create();
        }

        void Cocos2dxBind_cocos2d__Show_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> Cocos2dxBind_cocos2d__Show_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> Cocos2dxBind_cocos2d__Show_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__Show_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Show_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Show_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Show_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Show_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Show_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Show_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Show_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Show_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Show_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Show_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Show_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Show_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Show_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Show_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Show_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Show_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Show_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Show_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> Cocos2dxBind_cocos2d__Hide_create()
        {

            return cocos2d::Hide::create();
        }

        void Cocos2dxBind_cocos2d__Hide_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> Cocos2dxBind_cocos2d__Hide_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> Cocos2dxBind_cocos2d__Hide_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__Hide_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Hide_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Hide_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Hide_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Hide_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Hide_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Hide_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Hide_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Hide_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Hide_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Hide_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Hide_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Hide_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Hide_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Hide_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Hide_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Hide_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Hide_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Hide_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> Cocos2dxBind_cocos2d__ToggleVisibility_create()
        {

            return cocos2d::ToggleVisibility::create();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> Cocos2dxBind_cocos2d__ToggleVisibility_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> Cocos2dxBind_cocos2d__ToggleVisibility_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__ToggleVisibility_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ToggleVisibility_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ToggleVisibility_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ToggleVisibility_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ToggleVisibility_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ToggleVisibility_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ToggleVisibility_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ToggleVisibility_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ToggleVisibility_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ToggleVisibility_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> Cocos2dxBind_cocos2d__RemoveSelf_create(bool a0)
        {

            return cocos2d::RemoveSelf::create(a0);
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> Cocos2dxBind_cocos2d__RemoveSelf_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> Cocos2dxBind_cocos2d__RemoveSelf_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__RemoveSelf_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, bool a0)
        {

            return c->init(a0);
        }

        bool Cocos2dxBind_cocos2d__RemoveSelf_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__RemoveSelf_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__RemoveSelf_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RemoveSelf_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RemoveSelf_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__RemoveSelf_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__RemoveSelf_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__RemoveSelf_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RemoveSelf_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__RemoveSelf_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> Cocos2dxBind_cocos2d__FlipX_create(bool a0)
        {

            return cocos2d::FlipX::create(a0);
        }

        void Cocos2dxBind_cocos2d__FlipX_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> Cocos2dxBind_cocos2d__FlipX_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> Cocos2dxBind_cocos2d__FlipX_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__FlipX_init_with_flip_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, bool a0)
        {

            return c->initWithFlipX(a0);
        }

        bool Cocos2dxBind_cocos2d__FlipX_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FlipX_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FlipX_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FlipX_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FlipX_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FlipX_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__FlipX_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipX_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FlipX_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipX_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FlipX_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FlipX_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FlipX_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FlipX_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FlipX_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FlipX_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FlipX_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FlipX_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FlipX_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> Cocos2dxBind_cocos2d__FlipY_create(bool a0)
        {

            return cocos2d::FlipY::create(a0);
        }

        void Cocos2dxBind_cocos2d__FlipY_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> Cocos2dxBind_cocos2d__FlipY_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> Cocos2dxBind_cocos2d__FlipY_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__FlipY_init_with_flip_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, bool a0)
        {

            return c->initWithFlipY(a0);
        }

        bool Cocos2dxBind_cocos2d__FlipY_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FlipY_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FlipY_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FlipY_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FlipY_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FlipY_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__FlipY_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipY_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FlipY_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipY_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FlipY_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FlipY_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FlipY_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FlipY_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FlipY_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FlipY_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FlipY_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FlipY_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FlipY_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> Cocos2dxBind_cocos2d__Place_create(cocos2d::Vec2 a0)
        {

            return cocos2d::Place::create(a0);
        }

        void Cocos2dxBind_cocos2d__Place_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> Cocos2dxBind_cocos2d__Place_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> Cocos2dxBind_cocos2d__Place_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__Place_init_with_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, cocos2d::Vec2 a0)
        {

            return c->initWithPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Place_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Place_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Place_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Place_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Place_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Place_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__Place_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Place_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Place_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Place_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Place_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Place_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Place_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Place_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Place_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Place_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Place_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Place_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Place_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> Cocos2dxBind_cocos2d__CallFunc_create(mrubybind::FuncPtr<void ()> a0)
        {

            return cocos2d::CallFunc::create(
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

        void Cocos2dxBind_cocos2d__CallFunc_execute(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            c->execute();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CallFunc_get_target_callback_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getTargetCallback();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_target_callback_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setTargetCallback(a0.get());
        }

        void Cocos2dxBind_cocos2d__CallFunc_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> Cocos2dxBind_cocos2d__CallFunc_reverse_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> Cocos2dxBind_cocos2d__CallFunc_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__CallFunc_init_with_function(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, mrubybind::FuncPtr<void ()> a0)
        {

            return c->initWithFunction(
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

        bool Cocos2dxBind_cocos2d__CallFunc_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CallFunc_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CallFunc_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CallFunc_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CallFunc_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__CallFunc_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CallFunc_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CallFunc_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CallFunc_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CallFunc_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CallFunc_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CallFunc_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CallFunc_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CallFunc_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CallFunc_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> Cocos2dxBind_cocos2d__CallFuncN_create(mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a0)
        {

            return cocos2d::CallFuncN::create(
              [=](cocos2d::Node * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> Cocos2dxBind_cocos2d__CallFuncN_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_execute(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            c->execute();
        }

        bool Cocos2dxBind_cocos2d__CallFuncN_init_with_function(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a0)
        {

            return c->initWithFunction(
              [=](cocos2d::Node * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CallFuncN_get_target_callback_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getTargetCallback();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_target_callback_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setTargetCallback(a0.get());
        }

        void Cocos2dxBind_cocos2d__CallFuncN_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> Cocos2dxBind_cocos2d__CallFuncN_reverse_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__CallFuncN_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CallFuncN_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CallFuncN_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_start_with_target_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__CallFuncN_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CallFuncN_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CallFuncN_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CallFuncN_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CallFuncN_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CallFuncN_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CallFuncN_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CallFuncN_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CallFuncN_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {

            return c->getReferenceCount();
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__GridAction_get_grid(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getGrid();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__GridAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__GridAction_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__GridAction_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__GridAction_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, float a0, cocos2d::Size a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__GridAction_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__GridAction_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__GridAction_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__GridAction_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__GridAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__GridAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__GridAction_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__GridAction_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__GridAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__GridAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__GridAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__GridAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__GridAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__GridAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__GridAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__GridAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__GridAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {

            return c->getReferenceCount();
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Grid3DAction_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Grid3DAction_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Grid3DAction_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> Cocos2dxBind_cocos2d__Grid3DAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->clone();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Grid3DAction_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Grid3DAction_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Grid3DAction_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, float a0, cocos2d::Size a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Grid3DAction_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Grid3DAction_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Grid3DAction_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Grid3DAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Grid3DAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Grid3DAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Grid3DAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Grid3DAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Grid3DAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Grid3DAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Grid3DAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Grid3DAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return cocos2d::AccelDeccelAmplitude::create(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getRate();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            c->setRate(a0);
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__AccelDeccelAmplitude_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__AccelDeccelAmplitude_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__AccelDeccelAmplitude_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__AccelDeccelAmplitude_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AccelDeccelAmplitude_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AccelDeccelAmplitude_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> Cocos2dxBind_cocos2d__AccelAmplitude_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return cocos2d::AccelAmplitude::create(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__AccelAmplitude_get_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getRate();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            c->setRate(a0);
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> Cocos2dxBind_cocos2d__AccelAmplitude_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> Cocos2dxBind_cocos2d__AccelAmplitude_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__AccelAmplitude_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__AccelAmplitude_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__AccelAmplitude_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__AccelAmplitude_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__AccelAmplitude_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__AccelAmplitude_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__AccelAmplitude_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AccelAmplitude_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AccelAmplitude_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__AccelAmplitude_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__AccelAmplitude_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AccelAmplitude_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AccelAmplitude_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AccelAmplitude_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> Cocos2dxBind_cocos2d__DeccelAmplitude_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return cocos2d::DeccelAmplitude::create(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__DeccelAmplitude_get_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getRate();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            c->setRate(a0);
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> Cocos2dxBind_cocos2d__DeccelAmplitude_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> Cocos2dxBind_cocos2d__DeccelAmplitude_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__DeccelAmplitude_init_with_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        float Cocos2dxBind_cocos2d__DeccelAmplitude_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__DeccelAmplitude_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__DeccelAmplitude_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__DeccelAmplitude_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__DeccelAmplitude_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__DeccelAmplitude_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DeccelAmplitude_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DeccelAmplitude_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__DeccelAmplitude_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__DeccelAmplitude_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__DeccelAmplitude_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DeccelAmplitude_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__DeccelAmplitude_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> Cocos2dxBind_cocos2d__StopGrid_create()
        {

            return cocos2d::StopGrid::create();
        }

        void Cocos2dxBind_cocos2d__StopGrid_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> Cocos2dxBind_cocos2d__StopGrid_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> Cocos2dxBind_cocos2d__StopGrid_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__StopGrid_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__StopGrid_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__StopGrid_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__StopGrid_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__StopGrid_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__StopGrid_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__StopGrid_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__StopGrid_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__StopGrid_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__StopGrid_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__StopGrid_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__StopGrid_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__StopGrid_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__StopGrid_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__StopGrid_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__StopGrid_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__StopGrid_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__StopGrid_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__StopGrid_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> Cocos2dxBind_cocos2d__ReuseGrid_create(int a0)
        {

            return cocos2d::ReuseGrid::create(a0);
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> Cocos2dxBind_cocos2d__ReuseGrid_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> Cocos2dxBind_cocos2d__ReuseGrid_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__ReuseGrid_init_with_times(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, int a0)
        {

            return c->initWithTimes(a0);
        }

        bool Cocos2dxBind_cocos2d__ReuseGrid_is_done_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_step_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_update_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__ReuseGrid_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ReuseGrid_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ReuseGrid_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ReuseGrid_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ReuseGrid_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ReuseGrid_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ReuseGrid_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ReuseGrid_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ReuseGrid_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> Cocos2dxBind_cocos2d__Waves3D_create(float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return cocos2d::Waves3D::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__Waves3D_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__Waves3D_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> Cocos2dxBind_cocos2d__Waves3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Waves3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Waves3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Waves3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Waves3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Waves3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Waves3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Waves3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Waves3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Waves3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getElapsed();
        }

        bool Cocos2dxBind_cocos2d__Waves3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Waves3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Waves3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Waves3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Waves3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Waves3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Waves3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Waves3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Waves3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Waves3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Waves3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Waves3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Waves3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Waves3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> Cocos2dxBind_cocos2d__FlipX3D_create(float a0)
        {

            return cocos2d::FlipX3D::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> Cocos2dxBind_cocos2d__FlipX3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__FlipX3D_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        bool Cocos2dxBind_cocos2d__FlipX3D_init_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cocos2d::Size a0, float a1)
        {

            return c->initWithSize(a0, a1);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__FlipX3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__FlipX3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__FlipX3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__FlipX3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__FlipX3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__FlipX3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__FlipX3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__FlipX3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FlipX3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FlipX3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipX3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipX3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FlipX3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FlipX3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FlipX3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FlipX3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FlipX3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FlipX3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> Cocos2dxBind_cocos2d__FlipY3D_create(float a0)
        {

            return cocos2d::FlipY3D::create(a0);
        }

        void Cocos2dxBind_cocos2d__FlipY3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> Cocos2dxBind_cocos2d__FlipY3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__FlipY3D_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        bool Cocos2dxBind_cocos2d__FlipY3D_init_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cocos2d::Size a0, float a1)
        {

            return c->initWithSize(a0, a1);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__FlipY3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__FlipY3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__FlipY3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__FlipY3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__FlipY3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__FlipY3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__FlipY3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__FlipY3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__FlipY3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__FlipY3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipY3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__FlipY3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__FlipY3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__FlipY3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__FlipY3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__FlipY3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__FlipY3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__FlipY3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> Cocos2dxBind_cocos2d__Lens3D_create(float a0, cocos2d::Size a1, cocos2d::Vec2 a2, float a3)
        {

            return cocos2d::Lens3D::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__Lens3D_get_lens_effect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getLensEffect();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_lens_effect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0)
        {

            c->setLensEffect(a0);
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_concave(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, bool a0)
        {

            c->setConcave(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Lens3D_get_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getPosition();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> Cocos2dxBind_cocos2d__Lens3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Lens3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Lens3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0, cocos2d::Size a1, cocos2d::Vec2 a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Lens3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Lens3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Lens3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Lens3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Lens3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Lens3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Lens3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Lens3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Lens3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Lens3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Lens3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Lens3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Lens3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Lens3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Lens3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Lens3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Lens3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Lens3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Lens3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Lens3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Lens3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Lens3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> Cocos2dxBind_cocos2d__Ripple3D_create(float a0, cocos2d::Size a1, cocos2d::Vec2 a2, float a3, unsigned int a4, float a5)
        {

            return cocos2d::Ripple3D::create(a0, a1, a2, a3, a4, a5);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Ripple3D_get_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getPosition();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        float Cocos2dxBind_cocos2d__Ripple3D_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__Ripple3D_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> Cocos2dxBind_cocos2d__Ripple3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Ripple3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0, cocos2d::Size a1, cocos2d::Vec2 a2, float a3, unsigned int a4, float a5)
        {

            return c->initWithDuration(a0, a1, a2, a3, a4, a5);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Ripple3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Ripple3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Ripple3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Ripple3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Ripple3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Ripple3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getElapsed();
        }

        bool Cocos2dxBind_cocos2d__Ripple3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Ripple3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Ripple3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Ripple3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Ripple3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Ripple3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Ripple3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Ripple3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Ripple3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Ripple3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Ripple3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> Cocos2dxBind_cocos2d__Shaky3D_create(float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return cocos2d::Shaky3D::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> Cocos2dxBind_cocos2d__Shaky3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Shaky3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Shaky3D_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Shaky3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Shaky3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }



        
        bool Cocos2dxBind_EaseExponentialIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseExponentialOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseExponentialInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseSineIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseSineOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseSineInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseElastic_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseElasticIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseElasticOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseElasticInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBounce_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBounceIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBounceOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBounceInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBackIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBackOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_6(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("Cocos2d", "EaseExponentialOut", "create", Cocos2dxBind_cocos2d__EaseExponentialOut_create);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "update", Cocos2dxBind_cocos2d__EaseExponentialOut_update);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "clone", Cocos2dxBind_cocos2d__EaseExponentialOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "reverse", Cocos2dxBind_cocos2d__EaseExponentialOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseExponentialOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseExponentialOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "stop_38", Cocos2dxBind_cocos2d__EaseExponentialOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseExponentialOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseExponentialOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "is_done_87", Cocos2dxBind_cocos2d__EaseExponentialOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "step_88", Cocos2dxBind_cocos2d__EaseExponentialOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseExponentialOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseExponentialOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseExponentialOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "description_106", Cocos2dxBind_cocos2d__EaseExponentialOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_target_106", Cocos2dxBind_cocos2d__EaseExponentialOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_target_106", Cocos2dxBind_cocos2d__EaseExponentialOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseExponentialOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseExponentialOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseExponentialOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseExponentialOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "retain_176", Cocos2dxBind_cocos2d__EaseExponentialOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "release_176", Cocos2dxBind_cocos2d__EaseExponentialOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseExponentialOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseExponentialOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseExponentialInOut", "create", Cocos2dxBind_cocos2d__EaseExponentialInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "update", Cocos2dxBind_cocos2d__EaseExponentialInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "clone", Cocos2dxBind_cocos2d__EaseExponentialInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "reverse", Cocos2dxBind_cocos2d__EaseExponentialInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseExponentialInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "stop_38", Cocos2dxBind_cocos2d__EaseExponentialInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseExponentialInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseExponentialInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "step_88", Cocos2dxBind_cocos2d__EaseExponentialInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseExponentialInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "description_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseExponentialInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "retain_176", Cocos2dxBind_cocos2d__EaseExponentialInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "release_176", Cocos2dxBind_cocos2d__EaseExponentialInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseExponentialInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseExponentialInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseSineIn", "create", Cocos2dxBind_cocos2d__EaseSineIn_create);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "update", Cocos2dxBind_cocos2d__EaseSineIn_update);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "clone", Cocos2dxBind_cocos2d__EaseSineIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "reverse", Cocos2dxBind_cocos2d__EaseSineIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseSineIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseSineIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "stop_38", Cocos2dxBind_cocos2d__EaseSineIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseSineIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseSineIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "is_done_87", Cocos2dxBind_cocos2d__EaseSineIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "step_88", Cocos2dxBind_cocos2d__EaseSineIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseSineIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseSineIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseSineIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "description_106", Cocos2dxBind_cocos2d__EaseSineIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_target_106", Cocos2dxBind_cocos2d__EaseSineIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_target_106", Cocos2dxBind_cocos2d__EaseSineIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseSineIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseSineIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseSineIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseSineIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseSineIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseSineIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "retain_176", Cocos2dxBind_cocos2d__EaseSineIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "release_176", Cocos2dxBind_cocos2d__EaseSineIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseSineIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseSineIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseSineOut", "create", Cocos2dxBind_cocos2d__EaseSineOut_create);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "update", Cocos2dxBind_cocos2d__EaseSineOut_update);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "clone", Cocos2dxBind_cocos2d__EaseSineOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "reverse", Cocos2dxBind_cocos2d__EaseSineOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseSineOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseSineOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "stop_38", Cocos2dxBind_cocos2d__EaseSineOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseSineOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseSineOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "is_done_87", Cocos2dxBind_cocos2d__EaseSineOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "step_88", Cocos2dxBind_cocos2d__EaseSineOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseSineOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseSineOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseSineOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "description_106", Cocos2dxBind_cocos2d__EaseSineOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_target_106", Cocos2dxBind_cocos2d__EaseSineOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_target_106", Cocos2dxBind_cocos2d__EaseSineOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseSineOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseSineOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseSineOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseSineOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseSineOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseSineOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "retain_176", Cocos2dxBind_cocos2d__EaseSineOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "release_176", Cocos2dxBind_cocos2d__EaseSineOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseSineOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseSineOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseSineInOut", "create", Cocos2dxBind_cocos2d__EaseSineInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "update", Cocos2dxBind_cocos2d__EaseSineInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "clone", Cocos2dxBind_cocos2d__EaseSineInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "reverse", Cocos2dxBind_cocos2d__EaseSineInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseSineInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseSineInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "stop_38", Cocos2dxBind_cocos2d__EaseSineInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseSineInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseSineInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseSineInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseSineInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "step_88", Cocos2dxBind_cocos2d__EaseSineInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseSineInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseSineInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseSineInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "description_106", Cocos2dxBind_cocos2d__EaseSineInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseSineInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseSineInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseSineInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseSineInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseSineInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseSineInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseSineInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseSineInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "retain_176", Cocos2dxBind_cocos2d__EaseSineInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "release_176", Cocos2dxBind_cocos2d__EaseSineInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseSineInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseSineInOut_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_period_4", Cocos2dxBind_cocos2d__EaseElastic_get_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_period_4", Cocos2dxBind_cocos2d__EaseElastic_set_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "clone", Cocos2dxBind_cocos2d__EaseElastic_clone);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "reverse", Cocos2dxBind_cocos2d__EaseElastic_reverse);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "init_with_action_4", Cocos2dxBind_cocos2d__EaseElastic_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseElastic_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "start_with_target_38", Cocos2dxBind_cocos2d__EaseElastic_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "stop_38", Cocos2dxBind_cocos2d__EaseElastic_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "update_4", Cocos2dxBind_cocos2d__EaseElastic_update_4);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseElastic_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElastic_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElastic_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "is_done_87", Cocos2dxBind_cocos2d__EaseElastic_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "step_88", Cocos2dxBind_cocos2d__EaseElastic_step_88);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseElastic_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_duration_103", Cocos2dxBind_cocos2d__EaseElastic_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_duration_103", Cocos2dxBind_cocos2d__EaseElastic_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "description_106", Cocos2dxBind_cocos2d__EaseElastic_description_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_target_106", Cocos2dxBind_cocos2d__EaseElastic_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_target_106", Cocos2dxBind_cocos2d__EaseElastic_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_original_target_106", Cocos2dxBind_cocos2d__EaseElastic_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_original_target_106", Cocos2dxBind_cocos2d__EaseElastic_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_tag_106", Cocos2dxBind_cocos2d__EaseElastic_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_tag_106", Cocos2dxBind_cocos2d__EaseElastic_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_flags_106", Cocos2dxBind_cocos2d__EaseElastic_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "set_flags_106", Cocos2dxBind_cocos2d__EaseElastic_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "retain_176", Cocos2dxBind_cocos2d__EaseElastic_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "release_176", Cocos2dxBind_cocos2d__EaseElastic_release_176);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "autorelease_176", Cocos2dxBind_cocos2d__EaseElastic_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseElastic", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseElastic_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseElasticIn", "create_1", Cocos2dxBind_cocos2d__EaseElasticIn_create_1);
            binder.bind_static_method("Cocos2d", "EaseElasticIn", "create_2", Cocos2dxBind_cocos2d__EaseElasticIn_create_2);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "update", Cocos2dxBind_cocos2d__EaseElasticIn_update);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "clone", Cocos2dxBind_cocos2d__EaseElasticIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "reverse", Cocos2dxBind_cocos2d__EaseElasticIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_period_4", Cocos2dxBind_cocos2d__EaseElasticIn_get_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_period_4", Cocos2dxBind_cocos2d__EaseElasticIn_set_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "init_with_action_4", Cocos2dxBind_cocos2d__EaseElasticIn_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseElasticIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseElasticIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "stop_38", Cocos2dxBind_cocos2d__EaseElasticIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseElasticIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "is_done_87", Cocos2dxBind_cocos2d__EaseElasticIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "step_88", Cocos2dxBind_cocos2d__EaseElasticIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseElasticIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseElasticIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseElasticIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "description_106", Cocos2dxBind_cocos2d__EaseElasticIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_target_106", Cocos2dxBind_cocos2d__EaseElasticIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_target_106", Cocos2dxBind_cocos2d__EaseElasticIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseElasticIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseElasticIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseElasticIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseElasticIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseElasticIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseElasticIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "retain_176", Cocos2dxBind_cocos2d__EaseElasticIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "release_176", Cocos2dxBind_cocos2d__EaseElasticIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseElasticIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseElasticIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseElasticOut", "create_1", Cocos2dxBind_cocos2d__EaseElasticOut_create_1);
            binder.bind_static_method("Cocos2d", "EaseElasticOut", "create_2", Cocos2dxBind_cocos2d__EaseElasticOut_create_2);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "update", Cocos2dxBind_cocos2d__EaseElasticOut_update);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "clone", Cocos2dxBind_cocos2d__EaseElasticOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "reverse", Cocos2dxBind_cocos2d__EaseElasticOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_period_4", Cocos2dxBind_cocos2d__EaseElasticOut_get_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_period_4", Cocos2dxBind_cocos2d__EaseElasticOut_set_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "init_with_action_4", Cocos2dxBind_cocos2d__EaseElasticOut_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseElasticOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseElasticOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "stop_38", Cocos2dxBind_cocos2d__EaseElasticOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseElasticOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "is_done_87", Cocos2dxBind_cocos2d__EaseElasticOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "step_88", Cocos2dxBind_cocos2d__EaseElasticOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseElasticOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseElasticOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseElasticOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "description_106", Cocos2dxBind_cocos2d__EaseElasticOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_target_106", Cocos2dxBind_cocos2d__EaseElasticOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_target_106", Cocos2dxBind_cocos2d__EaseElasticOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseElasticOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseElasticOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseElasticOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseElasticOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseElasticOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseElasticOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "retain_176", Cocos2dxBind_cocos2d__EaseElasticOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "release_176", Cocos2dxBind_cocos2d__EaseElasticOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseElasticOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseElasticOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseElasticInOut", "create_1", Cocos2dxBind_cocos2d__EaseElasticInOut_create_1);
            binder.bind_static_method("Cocos2d", "EaseElasticInOut", "create_2", Cocos2dxBind_cocos2d__EaseElasticInOut_create_2);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "update", Cocos2dxBind_cocos2d__EaseElasticInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "clone", Cocos2dxBind_cocos2d__EaseElasticInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "reverse", Cocos2dxBind_cocos2d__EaseElasticInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_period_4", Cocos2dxBind_cocos2d__EaseElasticInOut_get_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_period_4", Cocos2dxBind_cocos2d__EaseElasticInOut_set_period_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "init_with_action_4", Cocos2dxBind_cocos2d__EaseElasticInOut_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseElasticInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseElasticInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "stop_38", Cocos2dxBind_cocos2d__EaseElasticInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseElasticInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseElasticInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseElasticInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "step_88", Cocos2dxBind_cocos2d__EaseElasticInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseElasticInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseElasticInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseElasticInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "description_106", Cocos2dxBind_cocos2d__EaseElasticInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseElasticInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseElasticInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseElasticInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseElasticInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseElasticInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseElasticInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseElasticInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseElasticInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "retain_176", Cocos2dxBind_cocos2d__EaseElasticInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "release_176", Cocos2dxBind_cocos2d__EaseElasticInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseElasticInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseElasticInOut_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "clone", Cocos2dxBind_cocos2d__EaseBounce_clone);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "reverse", Cocos2dxBind_cocos2d__EaseBounce_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBounce_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBounce_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "stop_38", Cocos2dxBind_cocos2d__EaseBounce_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "update_4", Cocos2dxBind_cocos2d__EaseBounce_update_4);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBounce_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBounce_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounce_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounce_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "is_done_87", Cocos2dxBind_cocos2d__EaseBounce_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "step_88", Cocos2dxBind_cocos2d__EaseBounce_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBounce_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_duration_103", Cocos2dxBind_cocos2d__EaseBounce_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_duration_103", Cocos2dxBind_cocos2d__EaseBounce_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "description_106", Cocos2dxBind_cocos2d__EaseBounce_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_target_106", Cocos2dxBind_cocos2d__EaseBounce_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_target_106", Cocos2dxBind_cocos2d__EaseBounce_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBounce_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBounce_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_tag_106", Cocos2dxBind_cocos2d__EaseBounce_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_tag_106", Cocos2dxBind_cocos2d__EaseBounce_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_flags_106", Cocos2dxBind_cocos2d__EaseBounce_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "set_flags_106", Cocos2dxBind_cocos2d__EaseBounce_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "retain_176", Cocos2dxBind_cocos2d__EaseBounce_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "release_176", Cocos2dxBind_cocos2d__EaseBounce_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "autorelease_176", Cocos2dxBind_cocos2d__EaseBounce_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBounce", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBounce_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBounceIn", "create", Cocos2dxBind_cocos2d__EaseBounceIn_create);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "update", Cocos2dxBind_cocos2d__EaseBounceIn_update);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "clone", Cocos2dxBind_cocos2d__EaseBounceIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "reverse", Cocos2dxBind_cocos2d__EaseBounceIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBounceIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBounceIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "stop_38", Cocos2dxBind_cocos2d__EaseBounceIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBounceIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBounceIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "is_done_87", Cocos2dxBind_cocos2d__EaseBounceIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "step_88", Cocos2dxBind_cocos2d__EaseBounceIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBounceIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseBounceIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseBounceIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "description_106", Cocos2dxBind_cocos2d__EaseBounceIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_target_106", Cocos2dxBind_cocos2d__EaseBounceIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_target_106", Cocos2dxBind_cocos2d__EaseBounceIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBounceIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBounceIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseBounceIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseBounceIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseBounceIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseBounceIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "retain_176", Cocos2dxBind_cocos2d__EaseBounceIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "release_176", Cocos2dxBind_cocos2d__EaseBounceIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseBounceIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBounceIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBounceOut", "create", Cocos2dxBind_cocos2d__EaseBounceOut_create);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "update", Cocos2dxBind_cocos2d__EaseBounceOut_update);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "clone", Cocos2dxBind_cocos2d__EaseBounceOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "reverse", Cocos2dxBind_cocos2d__EaseBounceOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBounceOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBounceOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "stop_38", Cocos2dxBind_cocos2d__EaseBounceOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBounceOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBounceOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "is_done_87", Cocos2dxBind_cocos2d__EaseBounceOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "step_88", Cocos2dxBind_cocos2d__EaseBounceOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBounceOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseBounceOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseBounceOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "description_106", Cocos2dxBind_cocos2d__EaseBounceOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_target_106", Cocos2dxBind_cocos2d__EaseBounceOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_target_106", Cocos2dxBind_cocos2d__EaseBounceOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBounceOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBounceOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseBounceOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseBounceOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseBounceOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseBounceOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "retain_176", Cocos2dxBind_cocos2d__EaseBounceOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "release_176", Cocos2dxBind_cocos2d__EaseBounceOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseBounceOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBounceOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBounceInOut", "create", Cocos2dxBind_cocos2d__EaseBounceInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "update", Cocos2dxBind_cocos2d__EaseBounceInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "clone", Cocos2dxBind_cocos2d__EaseBounceInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "reverse", Cocos2dxBind_cocos2d__EaseBounceInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBounceInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBounceInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "stop_38", Cocos2dxBind_cocos2d__EaseBounceInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBounceInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBounceInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBounceInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseBounceInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "step_88", Cocos2dxBind_cocos2d__EaseBounceInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBounceInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseBounceInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseBounceInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "description_106", Cocos2dxBind_cocos2d__EaseBounceInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseBounceInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseBounceInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBounceInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBounceInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseBounceInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseBounceInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseBounceInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseBounceInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "retain_176", Cocos2dxBind_cocos2d__EaseBounceInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "release_176", Cocos2dxBind_cocos2d__EaseBounceInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseBounceInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBounceInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBackIn", "create", Cocos2dxBind_cocos2d__EaseBackIn_create);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "update", Cocos2dxBind_cocos2d__EaseBackIn_update);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "clone", Cocos2dxBind_cocos2d__EaseBackIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "reverse", Cocos2dxBind_cocos2d__EaseBackIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBackIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBackIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "stop_38", Cocos2dxBind_cocos2d__EaseBackIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBackIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBackIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "is_done_87", Cocos2dxBind_cocos2d__EaseBackIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "step_88", Cocos2dxBind_cocos2d__EaseBackIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBackIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseBackIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseBackIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "description_106", Cocos2dxBind_cocos2d__EaseBackIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_target_106", Cocos2dxBind_cocos2d__EaseBackIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_target_106", Cocos2dxBind_cocos2d__EaseBackIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBackIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBackIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseBackIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseBackIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseBackIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseBackIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "retain_176", Cocos2dxBind_cocos2d__EaseBackIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "release_176", Cocos2dxBind_cocos2d__EaseBackIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseBackIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBackIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBackOut", "create", Cocos2dxBind_cocos2d__EaseBackOut_create);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "update", Cocos2dxBind_cocos2d__EaseBackOut_update);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "clone", Cocos2dxBind_cocos2d__EaseBackOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "reverse", Cocos2dxBind_cocos2d__EaseBackOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBackOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBackOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "stop_38", Cocos2dxBind_cocos2d__EaseBackOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBackOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBackOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "is_done_87", Cocos2dxBind_cocos2d__EaseBackOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "step_88", Cocos2dxBind_cocos2d__EaseBackOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBackOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseBackOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseBackOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "description_106", Cocos2dxBind_cocos2d__EaseBackOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_target_106", Cocos2dxBind_cocos2d__EaseBackOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_target_106", Cocos2dxBind_cocos2d__EaseBackOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBackOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBackOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseBackOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseBackOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseBackOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseBackOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "retain_176", Cocos2dxBind_cocos2d__EaseBackOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "release_176", Cocos2dxBind_cocos2d__EaseBackOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseBackOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBackOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBackInOut", "create", Cocos2dxBind_cocos2d__EaseBackInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "update", Cocos2dxBind_cocos2d__EaseBackInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "clone", Cocos2dxBind_cocos2d__EaseBackInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "reverse", Cocos2dxBind_cocos2d__EaseBackInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBackInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBackInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "stop_38", Cocos2dxBind_cocos2d__EaseBackInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBackInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBackInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBackInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseBackInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "step_88", Cocos2dxBind_cocos2d__EaseBackInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBackInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseBackInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseBackInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "description_106", Cocos2dxBind_cocos2d__EaseBackInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseBackInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseBackInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBackInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBackInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseBackInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseBackInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseBackInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseBackInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "retain_176", Cocos2dxBind_cocos2d__EaseBackInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "release_176", Cocos2dxBind_cocos2d__EaseBackInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseBackInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBackInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseBezierAction", "create", Cocos2dxBind_cocos2d__EaseBezierAction_create);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "update", Cocos2dxBind_cocos2d__EaseBezierAction_update);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "clone", Cocos2dxBind_cocos2d__EaseBezierAction_clone);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "reverse", Cocos2dxBind_cocos2d__EaseBezierAction_reverse);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_bezier_paramer", Cocos2dxBind_cocos2d__EaseBezierAction_set_bezier_paramer);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseBezierAction_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "start_with_target_38", Cocos2dxBind_cocos2d__EaseBezierAction_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "stop_38", Cocos2dxBind_cocos2d__EaseBezierAction_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "init_with_action_30", Cocos2dxBind_cocos2d__EaseBezierAction_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseBezierAction_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBezierAction_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseBezierAction_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "is_done_87", Cocos2dxBind_cocos2d__EaseBezierAction_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "step_88", Cocos2dxBind_cocos2d__EaseBezierAction_step_88);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseBezierAction_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_duration_103", Cocos2dxBind_cocos2d__EaseBezierAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_duration_103", Cocos2dxBind_cocos2d__EaseBezierAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "description_106", Cocos2dxBind_cocos2d__EaseBezierAction_description_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_target_106", Cocos2dxBind_cocos2d__EaseBezierAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_target_106", Cocos2dxBind_cocos2d__EaseBezierAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_original_target_106", Cocos2dxBind_cocos2d__EaseBezierAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_original_target_106", Cocos2dxBind_cocos2d__EaseBezierAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_tag_106", Cocos2dxBind_cocos2d__EaseBezierAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_tag_106", Cocos2dxBind_cocos2d__EaseBezierAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_flags_106", Cocos2dxBind_cocos2d__EaseBezierAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "set_flags_106", Cocos2dxBind_cocos2d__EaseBezierAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "retain_176", Cocos2dxBind_cocos2d__EaseBezierAction_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "release_176", Cocos2dxBind_cocos2d__EaseBezierAction_release_176);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "autorelease_176", Cocos2dxBind_cocos2d__EaseBezierAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseBezierAction_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuadraticActionIn", "create", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_create);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "update", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_update);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "clone", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "reverse", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "stop_38", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "is_done_87", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "step_88", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "description_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "retain_176", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "release_176", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuadraticActionOut", "create", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "update", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "clone", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "reverse", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "step_88", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "description_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "release_176", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuadraticActionInOut", "create", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "update", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "clone", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "reverse", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "step_88", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "description_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "release_176", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuarticActionIn", "create", Cocos2dxBind_cocos2d__EaseQuarticActionIn_create);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "update", Cocos2dxBind_cocos2d__EaseQuarticActionIn_update);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "clone", Cocos2dxBind_cocos2d__EaseQuarticActionIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "reverse", Cocos2dxBind_cocos2d__EaseQuarticActionIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuarticActionIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "stop_38", Cocos2dxBind_cocos2d__EaseQuarticActionIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuarticActionIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "is_done_87", Cocos2dxBind_cocos2d__EaseQuarticActionIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "step_88", Cocos2dxBind_cocos2d__EaseQuarticActionIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuarticActionIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "description_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "retain_176", Cocos2dxBind_cocos2d__EaseQuarticActionIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "release_176", Cocos2dxBind_cocos2d__EaseQuarticActionIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuarticActionIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuarticActionOut", "create", Cocos2dxBind_cocos2d__EaseQuarticActionOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "update", Cocos2dxBind_cocos2d__EaseQuarticActionOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "clone", Cocos2dxBind_cocos2d__EaseQuarticActionOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "reverse", Cocos2dxBind_cocos2d__EaseQuarticActionOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuarticActionOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuarticActionOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuarticActionOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuarticActionOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "step_88", Cocos2dxBind_cocos2d__EaseQuarticActionOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuarticActionOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "description_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuarticActionOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "release_176", Cocos2dxBind_cocos2d__EaseQuarticActionOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuarticActionOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuarticActionInOut", "create", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "update", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "clone", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "reverse", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "step_88", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "description_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "release_176", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuinticActionIn", "create", Cocos2dxBind_cocos2d__EaseQuinticActionIn_create);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "update", Cocos2dxBind_cocos2d__EaseQuinticActionIn_update);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "clone", Cocos2dxBind_cocos2d__EaseQuinticActionIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "reverse", Cocos2dxBind_cocos2d__EaseQuinticActionIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuinticActionIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "stop_38", Cocos2dxBind_cocos2d__EaseQuinticActionIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuinticActionIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "is_done_87", Cocos2dxBind_cocos2d__EaseQuinticActionIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "step_88", Cocos2dxBind_cocos2d__EaseQuinticActionIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuinticActionIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "description_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "retain_176", Cocos2dxBind_cocos2d__EaseQuinticActionIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "release_176", Cocos2dxBind_cocos2d__EaseQuinticActionIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuinticActionIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuinticActionOut", "create", Cocos2dxBind_cocos2d__EaseQuinticActionOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "update", Cocos2dxBind_cocos2d__EaseQuinticActionOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "clone", Cocos2dxBind_cocos2d__EaseQuinticActionOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "reverse", Cocos2dxBind_cocos2d__EaseQuinticActionOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuinticActionOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuinticActionOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuinticActionOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuinticActionOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "step_88", Cocos2dxBind_cocos2d__EaseQuinticActionOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuinticActionOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "description_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuinticActionOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "release_176", Cocos2dxBind_cocos2d__EaseQuinticActionOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuinticActionOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseQuinticActionInOut", "create", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "update", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "clone", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "reverse", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "stop_38", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "step_88", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "description_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "retain_176", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "release_176", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCircleActionIn", "create", Cocos2dxBind_cocos2d__EaseCircleActionIn_create);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "update", Cocos2dxBind_cocos2d__EaseCircleActionIn_update);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "clone", Cocos2dxBind_cocos2d__EaseCircleActionIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "reverse", Cocos2dxBind_cocos2d__EaseCircleActionIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCircleActionIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "stop_38", Cocos2dxBind_cocos2d__EaseCircleActionIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCircleActionIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "is_done_87", Cocos2dxBind_cocos2d__EaseCircleActionIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "step_88", Cocos2dxBind_cocos2d__EaseCircleActionIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCircleActionIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "description_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_target_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_target_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "retain_176", Cocos2dxBind_cocos2d__EaseCircleActionIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "release_176", Cocos2dxBind_cocos2d__EaseCircleActionIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseCircleActionIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCircleActionIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCircleActionOut", "create", Cocos2dxBind_cocos2d__EaseCircleActionOut_create);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "update", Cocos2dxBind_cocos2d__EaseCircleActionOut_update);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "clone", Cocos2dxBind_cocos2d__EaseCircleActionOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "reverse", Cocos2dxBind_cocos2d__EaseCircleActionOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCircleActionOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "stop_38", Cocos2dxBind_cocos2d__EaseCircleActionOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCircleActionOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "is_done_87", Cocos2dxBind_cocos2d__EaseCircleActionOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "step_88", Cocos2dxBind_cocos2d__EaseCircleActionOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCircleActionOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "description_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_target_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_target_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "retain_176", Cocos2dxBind_cocos2d__EaseCircleActionOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "release_176", Cocos2dxBind_cocos2d__EaseCircleActionOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseCircleActionOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCircleActionOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCircleActionInOut", "create", Cocos2dxBind_cocos2d__EaseCircleActionInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "update", Cocos2dxBind_cocos2d__EaseCircleActionInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "clone", Cocos2dxBind_cocos2d__EaseCircleActionInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "reverse", Cocos2dxBind_cocos2d__EaseCircleActionInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCircleActionInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "stop_38", Cocos2dxBind_cocos2d__EaseCircleActionInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCircleActionInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseCircleActionInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "step_88", Cocos2dxBind_cocos2d__EaseCircleActionInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCircleActionInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "description_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseCircleActionInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "retain_176", Cocos2dxBind_cocos2d__EaseCircleActionInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "release_176", Cocos2dxBind_cocos2d__EaseCircleActionInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseCircleActionInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCircleActionInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCubicActionIn", "create", Cocos2dxBind_cocos2d__EaseCubicActionIn_create);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "update", Cocos2dxBind_cocos2d__EaseCubicActionIn_update);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "clone", Cocos2dxBind_cocos2d__EaseCubicActionIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "reverse", Cocos2dxBind_cocos2d__EaseCubicActionIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCubicActionIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "stop_38", Cocos2dxBind_cocos2d__EaseCubicActionIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCubicActionIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "is_done_87", Cocos2dxBind_cocos2d__EaseCubicActionIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "step_88", Cocos2dxBind_cocos2d__EaseCubicActionIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCubicActionIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "description_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_target_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_target_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "retain_176", Cocos2dxBind_cocos2d__EaseCubicActionIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "release_176", Cocos2dxBind_cocos2d__EaseCubicActionIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseCubicActionIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCubicActionIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCubicActionOut", "create", Cocos2dxBind_cocos2d__EaseCubicActionOut_create);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "update", Cocos2dxBind_cocos2d__EaseCubicActionOut_update);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "clone", Cocos2dxBind_cocos2d__EaseCubicActionOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "reverse", Cocos2dxBind_cocos2d__EaseCubicActionOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCubicActionOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "stop_38", Cocos2dxBind_cocos2d__EaseCubicActionOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCubicActionOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "is_done_87", Cocos2dxBind_cocos2d__EaseCubicActionOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "step_88", Cocos2dxBind_cocos2d__EaseCubicActionOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCubicActionOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "description_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_target_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_target_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "retain_176", Cocos2dxBind_cocos2d__EaseCubicActionOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "release_176", Cocos2dxBind_cocos2d__EaseCubicActionOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseCubicActionOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCubicActionOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseCubicActionInOut", "create", Cocos2dxBind_cocos2d__EaseCubicActionInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "update", Cocos2dxBind_cocos2d__EaseCubicActionInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "clone", Cocos2dxBind_cocos2d__EaseCubicActionInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "reverse", Cocos2dxBind_cocos2d__EaseCubicActionInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseCubicActionInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "stop_38", Cocos2dxBind_cocos2d__EaseCubicActionInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "init_with_action_30", Cocos2dxBind_cocos2d__EaseCubicActionInOut_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseCubicActionInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "step_88", Cocos2dxBind_cocos2d__EaseCubicActionInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseCubicActionInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "description_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseCubicActionInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "retain_176", Cocos2dxBind_cocos2d__EaseCubicActionInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "release_176", Cocos2dxBind_cocos2d__EaseCubicActionInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseCubicActionInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseCubicActionInOut_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "clone", Cocos2dxBind_cocos2d__ActionInstant_clone);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "reverse", Cocos2dxBind_cocos2d__ActionInstant_reverse);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "is_done_12", Cocos2dxBind_cocos2d__ActionInstant_is_done_12);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "step_12", Cocos2dxBind_cocos2d__ActionInstant_step_12);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "update_3", Cocos2dxBind_cocos2d__ActionInstant_update_3);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_duration_103", Cocos2dxBind_cocos2d__ActionInstant_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "set_duration_103", Cocos2dxBind_cocos2d__ActionInstant_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "description_106", Cocos2dxBind_cocos2d__ActionInstant_description_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "start_with_target_13", Cocos2dxBind_cocos2d__ActionInstant_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "stop_58", Cocos2dxBind_cocos2d__ActionInstant_stop_58);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_target_106", Cocos2dxBind_cocos2d__ActionInstant_get_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "set_target_106", Cocos2dxBind_cocos2d__ActionInstant_set_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_original_target_106", Cocos2dxBind_cocos2d__ActionInstant_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "set_original_target_106", Cocos2dxBind_cocos2d__ActionInstant_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_tag_106", Cocos2dxBind_cocos2d__ActionInstant_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "set_tag_106", Cocos2dxBind_cocos2d__ActionInstant_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_flags_106", Cocos2dxBind_cocos2d__ActionInstant_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "set_flags_106", Cocos2dxBind_cocos2d__ActionInstant_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "retain_176", Cocos2dxBind_cocos2d__ActionInstant_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "release_176", Cocos2dxBind_cocos2d__ActionInstant_release_176);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "autorelease_176", Cocos2dxBind_cocos2d__ActionInstant_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionInstant", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionInstant_get_reference_count_176);

          }

    }
}
