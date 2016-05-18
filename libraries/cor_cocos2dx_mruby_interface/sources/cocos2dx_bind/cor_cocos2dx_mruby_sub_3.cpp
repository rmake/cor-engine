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
        
        void Cocos2dxBind_cocos2d__EaseExponentialIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseExponentialIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseExponentialIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseExponentialIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseExponentialIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> Cocos2dxBind_cocos2d__EaseExponentialOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseExponentialOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> Cocos2dxBind_cocos2d__EaseExponentialOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseExponentialOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseExponentialOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseExponentialOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseExponentialOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseExponentialOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseExponentialOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> Cocos2dxBind_cocos2d__EaseExponentialInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseExponentialInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> Cocos2dxBind_cocos2d__EaseExponentialInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> Cocos2dxBind_cocos2d__EaseExponentialInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseExponentialInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseExponentialInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseExponentialInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseExponentialInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseExponentialInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseExponentialInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseExponentialInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseExponentialInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseExponentialInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> Cocos2dxBind_cocos2d__EaseSineIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseSineIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> Cocos2dxBind_cocos2d__EaseSineIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseSineIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseSineIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseSineIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseSineIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseSineIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseSineIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseSineIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseSineIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseSineIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseSineIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> Cocos2dxBind_cocos2d__EaseSineOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseSineOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> Cocos2dxBind_cocos2d__EaseSineOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseSineOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseSineOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseSineOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseSineOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseSineOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseSineOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseSineOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseSineOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseSineOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseSineOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> Cocos2dxBind_cocos2d__EaseSineInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseSineInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> Cocos2dxBind_cocos2d__EaseSineInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> Cocos2dxBind_cocos2d__EaseSineInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseSineInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseSineInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseSineInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseSineInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseSineInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseSineInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseSineInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseSineInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseSineInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseSineInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseSineInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseSineInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> c)
        {

            return c->getReferenceCount();
        }

        float Cocos2dxBind_cocos2d__EaseElastic_get_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getPeriod();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            c->setPeriod(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> Cocos2dxBind_cocos2d__EaseElastic_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> Cocos2dxBind_cocos2d__EaseElastic_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__EaseElastic_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseElastic_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElastic_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElastic_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElastic_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseElastic_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElastic_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElastic_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseElastic_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElastic_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElastic_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseElastic_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElastic_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseElastic_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseElastic_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseElastic_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElastic_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> Cocos2dxBind_cocos2d__EaseElasticIn_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseElasticIn::create(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> Cocos2dxBind_cocos2d__EaseElasticIn_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseElasticIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> Cocos2dxBind_cocos2d__EaseElasticIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> Cocos2dxBind_cocos2d__EaseElasticIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->reverse();
        }

        float Cocos2dxBind_cocos2d__EaseElasticIn_get_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getPeriod();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            c->setPeriod(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticIn_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseElasticIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseElasticIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseElasticIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseElasticIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseElasticIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseElasticIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseElasticIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> Cocos2dxBind_cocos2d__EaseElasticOut_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseElasticOut::create(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> Cocos2dxBind_cocos2d__EaseElasticOut_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseElasticOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> Cocos2dxBind_cocos2d__EaseElasticOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> Cocos2dxBind_cocos2d__EaseElasticOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->reverse();
        }

        float Cocos2dxBind_cocos2d__EaseElasticOut_get_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getPeriod();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            c->setPeriod(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticOut_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseElasticOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseElasticOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseElasticOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseElasticOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseElasticOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseElasticOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseElasticOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> Cocos2dxBind_cocos2d__EaseElasticInOut_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseElasticInOut::create(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> Cocos2dxBind_cocos2d__EaseElasticInOut_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseElasticInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> Cocos2dxBind_cocos2d__EaseElasticInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> Cocos2dxBind_cocos2d__EaseElasticInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->reverse();
        }

        float Cocos2dxBind_cocos2d__EaseElasticInOut_get_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getPeriod();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_period_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            c->setPeriod(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticInOut_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseElasticInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseElasticInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseElasticInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseElasticInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseElasticInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseElasticInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseElasticInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseElasticInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseElasticInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseElasticInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseElasticInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> Cocos2dxBind_cocos2d__EaseBounce_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> Cocos2dxBind_cocos2d__EaseBounce_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBounce_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounce_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBounce_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBounce_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounce_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBounce_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBounce_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounce_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBounce_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounce_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounce_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBounce_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounce_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBounce_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBounce_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBounce_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounce_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> Cocos2dxBind_cocos2d__EaseBounceIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBounceIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> Cocos2dxBind_cocos2d__EaseBounceIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> Cocos2dxBind_cocos2d__EaseBounceIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBounceIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBounceIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBounceIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBounceIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBounceIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBounceIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBounceIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> Cocos2dxBind_cocos2d__EaseBounceOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBounceOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> Cocos2dxBind_cocos2d__EaseBounceOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> Cocos2dxBind_cocos2d__EaseBounceOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBounceOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBounceOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBounceOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBounceOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBounceOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBounceOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBounceOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> Cocos2dxBind_cocos2d__EaseBounceInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBounceInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> Cocos2dxBind_cocos2d__EaseBounceInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> Cocos2dxBind_cocos2d__EaseBounceInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBounceInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBounceInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBounceInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBounceInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBounceInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBounceInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBounceInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBounceInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBounceInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBounceInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBounceInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> Cocos2dxBind_cocos2d__EaseBackIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBackIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> Cocos2dxBind_cocos2d__EaseBackIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseBackIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBackIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBackIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBackIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBackIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBackIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBackIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBackIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBackIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBackIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> Cocos2dxBind_cocos2d__EaseBackOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBackOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> Cocos2dxBind_cocos2d__EaseBackOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseBackOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBackOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBackOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBackOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBackOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBackOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBackOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBackOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBackOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBackOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> Cocos2dxBind_cocos2d__EaseBackInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBackInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> Cocos2dxBind_cocos2d__EaseBackInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> Cocos2dxBind_cocos2d__EaseBackInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBackInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBackInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBackInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBackInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBackInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBackInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBackInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBackInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBackInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBackInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBackInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBackInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> Cocos2dxBind_cocos2d__EaseBezierAction_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseBezierAction::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> Cocos2dxBind_cocos2d__EaseBezierAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> Cocos2dxBind_cocos2d__EaseBezierAction_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_bezier_paramer(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0, float a1, float a2, float a3)
        {

            c->setBezierParamer(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseBezierAction_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseBezierAction_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseBezierAction_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBezierAction_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseBezierAction_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseBezierAction_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseBezierAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseBezierAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBezierAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseBezierAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseBezierAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBezierAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseBezierAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseBezierAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseBezierAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuadraticActionIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuadraticActionIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuadraticActionIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuadraticActionOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuadraticActionOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuadraticActionOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuadraticActionInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuadraticActionInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> Cocos2dxBind_cocos2d__EaseQuarticActionIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuarticActionIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> Cocos2dxBind_cocos2d__EaseQuarticActionIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> Cocos2dxBind_cocos2d__EaseQuarticActionIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuarticActionIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuarticActionIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> Cocos2dxBind_cocos2d__EaseQuarticActionOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuarticActionOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> Cocos2dxBind_cocos2d__EaseQuarticActionOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> Cocos2dxBind_cocos2d__EaseQuarticActionOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuarticActionOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuarticActionOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuarticActionInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuarticActionInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuarticActionInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuarticActionInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuarticActionInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuarticActionInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> Cocos2dxBind_cocos2d__EaseQuinticActionIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuinticActionIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> Cocos2dxBind_cocos2d__EaseQuinticActionIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> Cocos2dxBind_cocos2d__EaseQuinticActionIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionIn_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuinticActionIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuinticActionIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> Cocos2dxBind_cocos2d__EaseQuinticActionOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuinticActionOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> Cocos2dxBind_cocos2d__EaseQuinticActionOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> Cocos2dxBind_cocos2d__EaseQuinticActionOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuinticActionOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuinticActionOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseQuinticActionInOut::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            c->stop();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionInOut_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseQuinticActionInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseQuinticActionInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseQuinticActionInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseQuinticActionInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseQuinticActionInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> Cocos2dxBind_cocos2d__EaseCircleActionIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseCircleActionIn::create(a0.get());
        }



        
        bool Cocos2dxBind_EventCustom_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventDispatcher_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerCustom_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerKeyboard_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionCamera_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {
            return c.is_valid();
        }
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> Cocos2dxBind_ActionCamera_create()
        {
            return new cocos2d::ActionCamera();
        }
        bool Cocos2dxBind_OrbitCamera_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PointArray_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CardinalSplineTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CardinalSplineBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CatmullRomTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CatmullRomBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionEase_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseRateAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_5(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("Cocos2d", "Label", "create_2", Cocos2dxBind_cocos2d__Label_create_2);
            binder.bind_static_method("Cocos2d", "Label", "create_with_system_font_2", Cocos2dxBind_cocos2d__Label_create_with_system_font_2);
            binder.bind_static_method("Cocos2d", "Label", "create_with_ttf_3", Cocos2dxBind_cocos2d__Label_create_with_ttf_3);
            binder.bind_static_method("Cocos2d", "Label", "create_with_ttf_4", Cocos2dxBind_cocos2d__Label_create_with_ttf_4);
            binder.bind_static_method("Cocos2d", "Label", "create_with_bm_font_2", Cocos2dxBind_cocos2d__Label_create_with_bm_font_2);
            binder.bind_static_method("Cocos2d", "Label", "create_with_char_map_4", Cocos2dxBind_cocos2d__Label_create_with_char_map_4);
            binder.bind_static_method("Cocos2d", "Label", "create_with_char_map_5", Cocos2dxBind_cocos2d__Label_create_with_char_map_5);
            binder.bind_static_method("Cocos2d", "Label", "create_with_char_map_6", Cocos2dxBind_cocos2d__Label_create_with_char_map_6);
            binder.bind_custom_method("Cocos2d", "Label", "set_ttf_config_2", Cocos2dxBind_cocos2d__Label_set_ttf_config_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_ttf_config_2", Cocos2dxBind_cocos2d__Label_get_ttf_config_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_bm_font_file_path_2", Cocos2dxBind_cocos2d__Label_set_bm_font_file_path_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_bm_font_file_path_2", Cocos2dxBind_cocos2d__Label_get_bm_font_file_path_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_char_map_4", Cocos2dxBind_cocos2d__Label_set_char_map_4);
            binder.bind_custom_method("Cocos2d", "Label", "set_char_map_5", Cocos2dxBind_cocos2d__Label_set_char_map_5);
            binder.bind_custom_method("Cocos2d", "Label", "set_char_map_6", Cocos2dxBind_cocos2d__Label_set_char_map_6);
            binder.bind_custom_method("Cocos2d", "Label", "set_system_font_name_2", Cocos2dxBind_cocos2d__Label_set_system_font_name_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_system_font_name_2", Cocos2dxBind_cocos2d__Label_get_system_font_name_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_system_font_size_2", Cocos2dxBind_cocos2d__Label_set_system_font_size_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_system_font_size_2", Cocos2dxBind_cocos2d__Label_get_system_font_size_2);
            binder.bind_custom_method("Cocos2d", "Label", "request_system_font_refresh_2", Cocos2dxBind_cocos2d__Label_request_system_font_refresh_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_string", Cocos2dxBind_cocos2d__Label_set_string);
            binder.bind_custom_method("Cocos2d", "Label", "get_string", Cocos2dxBind_cocos2d__Label_get_string);
            binder.bind_custom_method("Cocos2d", "Label", "get_string_num_lines_2", Cocos2dxBind_cocos2d__Label_get_string_num_lines_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_string_length_2", Cocos2dxBind_cocos2d__Label_get_string_length_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_text_color", Cocos2dxBind_cocos2d__Label_set_text_color);
            binder.bind_custom_method("Cocos2d", "Label", "get_text_color_2", Cocos2dxBind_cocos2d__Label_get_text_color_2);
            binder.bind_custom_method("Cocos2d", "Label", "enable_shadow_2", Cocos2dxBind_cocos2d__Label_enable_shadow_2);
            binder.bind_custom_method("Cocos2d", "Label", "enable_outline_2", Cocos2dxBind_cocos2d__Label_enable_outline_2);
            binder.bind_custom_method("Cocos2d", "Label", "enable_glow_2", Cocos2dxBind_cocos2d__Label_enable_glow_2);
            binder.bind_custom_method("Cocos2d", "Label", "disable_effect_3", Cocos2dxBind_cocos2d__Label_disable_effect_3);
            binder.bind_custom_method("Cocos2d", "Label", "disable_effect_4", Cocos2dxBind_cocos2d__Label_disable_effect_4);
            binder.bind_custom_method("Cocos2d", "Label", "set_alignment_3", Cocos2dxBind_cocos2d__Label_set_alignment_3);
            binder.bind_custom_method("Cocos2d", "Label", "get_text_alignment_2", Cocos2dxBind_cocos2d__Label_get_text_alignment_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_alignment_4", Cocos2dxBind_cocos2d__Label_set_alignment_4);
            binder.bind_custom_method("Cocos2d", "Label", "set_horizontal_alignment_2", Cocos2dxBind_cocos2d__Label_set_horizontal_alignment_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_horizontal_alignment_2", Cocos2dxBind_cocos2d__Label_get_horizontal_alignment_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_vertical_alignment_2", Cocos2dxBind_cocos2d__Label_set_vertical_alignment_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_vertical_alignment_2", Cocos2dxBind_cocos2d__Label_get_vertical_alignment_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_line_break_without_space_2", Cocos2dxBind_cocos2d__Label_set_line_break_without_space_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_max_line_width_2", Cocos2dxBind_cocos2d__Label_set_max_line_width_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_max_line_width_2", Cocos2dxBind_cocos2d__Label_get_max_line_width_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_width_2", Cocos2dxBind_cocos2d__Label_set_width_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_width_2", Cocos2dxBind_cocos2d__Label_get_width_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_height_2", Cocos2dxBind_cocos2d__Label_set_height_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_height_2", Cocos2dxBind_cocos2d__Label_get_height_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_dimensions_2", Cocos2dxBind_cocos2d__Label_set_dimensions_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_dimensions_2", Cocos2dxBind_cocos2d__Label_get_dimensions_2);
            binder.bind_custom_method("Cocos2d", "Label", "update_content_2", Cocos2dxBind_cocos2d__Label_update_content_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_letter_2", Cocos2dxBind_cocos2d__Label_get_letter_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_clip_margin_enabled_2", Cocos2dxBind_cocos2d__Label_set_clip_margin_enabled_2);
            binder.bind_custom_method("Cocos2d", "Label", "is_clip_margin_enabled_2", Cocos2dxBind_cocos2d__Label_is_clip_margin_enabled_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_line_height_2", Cocos2dxBind_cocos2d__Label_set_line_height_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_line_height_2", Cocos2dxBind_cocos2d__Label_get_line_height_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_additional_kerning_2", Cocos2dxBind_cocos2d__Label_set_additional_kerning_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_additional_kerning_2", Cocos2dxBind_cocos2d__Label_get_additional_kerning_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_font_atlas_2", Cocos2dxBind_cocos2d__Label_get_font_atlas_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_blend_func_2", Cocos2dxBind_cocos2d__Label_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_blend_func_2", Cocos2dxBind_cocos2d__Label_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "Label", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__Label_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__Label_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "Label", "update_displayed_color_2", Cocos2dxBind_cocos2d__Label_update_displayed_color_2);
            binder.bind_custom_method("Cocos2d", "Label", "update_displayed_opacity_2", Cocos2dxBind_cocos2d__Label_update_displayed_opacity_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_description_2", Cocos2dxBind_cocos2d__Label_get_description_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_content_size_2", Cocos2dxBind_cocos2d__Label_get_content_size_2);
            binder.bind_custom_method("Cocos2d", "Label", "get_bounding_box_2", Cocos2dxBind_cocos2d__Label_get_bounding_box_2);
            binder.bind_custom_method("Cocos2d", "Label", "visit", Cocos2dxBind_cocos2d__Label_visit);
            binder.bind_custom_method("Cocos2d", "Label", "draw_2", Cocos2dxBind_cocos2d__Label_draw_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_camera_mask_2", Cocos2dxBind_cocos2d__Label_set_camera_mask_2);
            binder.bind_custom_method("Cocos2d", "Label", "remove_all_children_with_cleanup_2", Cocos2dxBind_cocos2d__Label_remove_all_children_with_cleanup_2);
            binder.bind_custom_method("Cocos2d", "Label", "remove_child_2", Cocos2dxBind_cocos2d__Label_remove_child_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_global_z_order_2", Cocos2dxBind_cocos2d__Label_set_global_z_order_2);
            binder.bind_custom_method("Cocos2d", "Label", "set_local_z_order_29", Cocos2dxBind_cocos2d__Label_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_local_z_order_29", Cocos2dxBind_cocos2d__Label_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_global_z_order_29", Cocos2dxBind_cocos2d__Label_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_scale_x_23", Cocos2dxBind_cocos2d__Label_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Label", "get_scale_x_26", Cocos2dxBind_cocos2d__Label_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Label", "set_scale_y_23", Cocos2dxBind_cocos2d__Label_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Label", "get_scale_y_26", Cocos2dxBind_cocos2d__Label_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Label", "set_scale_z_29", Cocos2dxBind_cocos2d__Label_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_scale_z_29", Cocos2dxBind_cocos2d__Label_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_scale_45", Cocos2dxBind_cocos2d__Label_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Label", "get_scale_26", Cocos2dxBind_cocos2d__Label_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Label", "set_scale_46", Cocos2dxBind_cocos2d__Label_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Label", "set_position_49", Cocos2dxBind_cocos2d__Label_set_position_49);
            binder.bind_custom_method("Cocos2d", "Label", "set_normalized_position_29", Cocos2dxBind_cocos2d__Label_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_position_55", Cocos2dxBind_cocos2d__Label_get_position_55);
            binder.bind_custom_method("Cocos2d", "Label", "get_normalized_position_29", Cocos2dxBind_cocos2d__Label_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_position_50", Cocos2dxBind_cocos2d__Label_set_position_50);
            binder.bind_custom_method("Cocos2d", "Label", "get_position_56", Cocos2dxBind_cocos2d__Label_get_position_56);
            binder.bind_custom_method("Cocos2d", "Label", "set_position_x_28", Cocos2dxBind_cocos2d__Label_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_position_x_28", Cocos2dxBind_cocos2d__Label_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Label", "set_position_y_28", Cocos2dxBind_cocos2d__Label_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_position_y_28", Cocos2dxBind_cocos2d__Label_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Label", "set_position3_d_29", Cocos2dxBind_cocos2d__Label_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_position3_d_28", Cocos2dxBind_cocos2d__Label_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Label", "set_position_z_28", Cocos2dxBind_cocos2d__Label_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_position_z_29", Cocos2dxBind_cocos2d__Label_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_skew_x_28", Cocos2dxBind_cocos2d__Label_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_skew_x_29", Cocos2dxBind_cocos2d__Label_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_skew_y_28", Cocos2dxBind_cocos2d__Label_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_skew_y_29", Cocos2dxBind_cocos2d__Label_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_anchor_point_26", Cocos2dxBind_cocos2d__Label_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Label", "get_anchor_point_29", Cocos2dxBind_cocos2d__Label_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Label_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_content_size_24", Cocos2dxBind_cocos2d__Label_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Label", "set_visible_27", Cocos2dxBind_cocos2d__Label_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Label", "is_visible_29", Cocos2dxBind_cocos2d__Label_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_rotation_26", Cocos2dxBind_cocos2d__Label_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Label", "get_rotation_29", Cocos2dxBind_cocos2d__Label_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Label_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Label_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Label_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Label_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Label_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Label_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Label_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Label_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Label_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Label_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Label", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Label_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Label", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Label_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Label", "add_child_113", Cocos2dxBind_cocos2d__Label_add_child_113);
            binder.bind_custom_method("Cocos2d", "Label", "add_child_114", Cocos2dxBind_cocos2d__Label_add_child_114);
            binder.bind_custom_method("Cocos2d", "Label", "add_child_115", Cocos2dxBind_cocos2d__Label_add_child_115);
            binder.bind_custom_method("Cocos2d", "Label", "add_child_116", Cocos2dxBind_cocos2d__Label_add_child_116);
            binder.bind_custom_method("Cocos2d", "Label", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Label_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_child_by_name_29", Cocos2dxBind_cocos2d__Label_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Label", "enumerate_children_29", Cocos2dxBind_cocos2d__Label_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_children_58", Cocos2dxBind_cocos2d__Label_get_children_58);
            binder.bind_custom_method("Cocos2d", "Label", "get_children_count_29", Cocos2dxBind_cocos2d__Label_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_parent_29", Cocos2dxBind_cocos2d__Label_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_parent_57", Cocos2dxBind_cocos2d__Label_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_parent_58", Cocos2dxBind_cocos2d__Label_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Label", "remove_from_parent_29", Cocos2dxBind_cocos2d__Label_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Label_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Label_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Label_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_all_children_28", Cocos2dxBind_cocos2d__Label_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Label", "reorder_child_26", Cocos2dxBind_cocos2d__Label_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Label", "sort_all_children_26", Cocos2dxBind_cocos2d__Label_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Label", "get_tag_29", Cocos2dxBind_cocos2d__Label_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_tag_29", Cocos2dxBind_cocos2d__Label_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_name_29", Cocos2dxBind_cocos2d__Label_get_name_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_name_29", Cocos2dxBind_cocos2d__Label_set_name_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_user_data_57", Cocos2dxBind_cocos2d__Label_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_user_data_58", Cocos2dxBind_cocos2d__Label_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Label", "set_user_data_29", Cocos2dxBind_cocos2d__Label_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_user_object_57", Cocos2dxBind_cocos2d__Label_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_user_object_58", Cocos2dxBind_cocos2d__Label_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Label", "set_user_object_29", Cocos2dxBind_cocos2d__Label_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_gl_program_29", Cocos2dxBind_cocos2d__Label_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_gl_program_28", Cocos2dxBind_cocos2d__Label_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Label_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Label_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Label", "is_running_29", Cocos2dxBind_cocos2d__Label_is_running_29);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Label_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Label", "on_enter_18", Cocos2dxBind_cocos2d__Label_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Label", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Label_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Label", "on_exit_18", Cocos2dxBind_cocos2d__Label_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Label", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Label_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Label", "cleanup_25", Cocos2dxBind_cocos2d__Label_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Label", "get_scene_29", Cocos2dxBind_cocos2d__Label_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Label_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Label_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_action_manager_29", Cocos2dxBind_cocos2d__Label_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_action_manager_57", Cocos2dxBind_cocos2d__Label_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_action_manager_58", Cocos2dxBind_cocos2d__Label_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Label", "run_action_28", Cocos2dxBind_cocos2d__Label_run_action_28);
            binder.bind_custom_method("Cocos2d", "Label", "stop_all_actions_29", Cocos2dxBind_cocos2d__Label_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Label", "stop_action_29", Cocos2dxBind_cocos2d__Label_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Label", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Label_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Label_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Label_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Label_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Label_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_scheduler_29", Cocos2dxBind_cocos2d__Label_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_scheduler_57", Cocos2dxBind_cocos2d__Label_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_scheduler_58", Cocos2dxBind_cocos2d__Label_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Label", "is_scheduled_58", Cocos2dxBind_cocos2d__Label_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_update_29", Cocos2dxBind_cocos2d__Label_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Label_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Label", "unschedule_update_29", Cocos2dxBind_cocos2d__Label_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_once_58", Cocos2dxBind_cocos2d__Label_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_172", Cocos2dxBind_cocos2d__Label_schedule_172);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_173", Cocos2dxBind_cocos2d__Label_schedule_173);
            binder.bind_custom_method("Cocos2d", "Label", "schedule_174", Cocos2dxBind_cocos2d__Label_schedule_174);
            binder.bind_custom_method("Cocos2d", "Label", "unschedule_58", Cocos2dxBind_cocos2d__Label_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Label", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Label_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Label", "resume_29", Cocos2dxBind_cocos2d__Label_resume_29);
            binder.bind_custom_method("Cocos2d", "Label", "pause_29", Cocos2dxBind_cocos2d__Label_pause_29);
            binder.bind_custom_method("Cocos2d", "Label", "update_26", Cocos2dxBind_cocos2d__Label_update_26);
            binder.bind_custom_method("Cocos2d", "Label", "update_transform_28", Cocos2dxBind_cocos2d__Label_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Label_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Label_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Label_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Label_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Label", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Label_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Label_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Label_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Label_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Label_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Label_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Label_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Label_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Label_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Label_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Label_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Label_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Label", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Label_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_additional_transform_58", Cocos2dxBind_cocos2d__Label_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Label", "get_component_29", Cocos2dxBind_cocos2d__Label_get_component_29);
            binder.bind_custom_method("Cocos2d", "Label", "add_component_29", Cocos2dxBind_cocos2d__Label_add_component_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_component_57", Cocos2dxBind_cocos2d__Label_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Label", "remove_component_58", Cocos2dxBind_cocos2d__Label_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Label", "remove_all_components_29", Cocos2dxBind_cocos2d__Label_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_physics_body_29", Cocos2dxBind_cocos2d__Label_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_physics_body_29", Cocos2dxBind_cocos2d__Label_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Label", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Label_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Label", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Label_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Label", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Label_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_opacity_28", Cocos2dxBind_cocos2d__Label_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Label", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Label_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_opacity_26", Cocos2dxBind_cocos2d__Label_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Label", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Label_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Label_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_color_27", Cocos2dxBind_cocos2d__Label_get_color_27);
            binder.bind_custom_method("Cocos2d", "Label", "get_displayed_color_29", Cocos2dxBind_cocos2d__Label_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_color_27", Cocos2dxBind_cocos2d__Label_set_color_27);
            binder.bind_custom_method("Cocos2d", "Label", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Label_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Label_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Label_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Label", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Label_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Label", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Label_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Label", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Label_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Label", "get_camera_mask_29", Cocos2dxBind_cocos2d__Label_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Label", "init_13", Cocos2dxBind_cocos2d__Label_init_13);
            binder.bind_custom_method("Cocos2d", "Label", "retain_176", Cocos2dxBind_cocos2d__Label_retain_176);
            binder.bind_custom_method("Cocos2d", "Label", "release_176", Cocos2dxBind_cocos2d__Label_release_176);
            binder.bind_custom_method("Cocos2d", "Label", "autorelease_176", Cocos2dxBind_cocos2d__Label_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Label", "get_reference_count_176", Cocos2dxBind_cocos2d__Label_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Layer", "create", Cocos2dxBind_cocos2d__Layer_create);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touch_began_2", Cocos2dxBind_cocos2d__Layer_on_touch_began_2);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touch_moved_2", Cocos2dxBind_cocos2d__Layer_on_touch_moved_2);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touch_ended_2", Cocos2dxBind_cocos2d__Layer_on_touch_ended_2);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touch_cancelled_2", Cocos2dxBind_cocos2d__Layer_on_touch_cancelled_2);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touches_began_3", Cocos2dxBind_cocos2d__Layer_on_touches_began_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touches_moved_3", Cocos2dxBind_cocos2d__Layer_on_touches_moved_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touches_ended_3", Cocos2dxBind_cocos2d__Layer_on_touches_ended_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_touches_cancelled_3", Cocos2dxBind_cocos2d__Layer_on_touches_cancelled_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_acceleration_3", Cocos2dxBind_cocos2d__Layer_on_acceleration_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_key_pressed_3", Cocos2dxBind_cocos2d__Layer_on_key_pressed_3);
            binder.bind_custom_method("Cocos2d", "Layer", "on_key_released_3", Cocos2dxBind_cocos2d__Layer_on_key_released_3);
            binder.bind_custom_method("Cocos2d", "Layer", "get_description_2", Cocos2dxBind_cocos2d__Layer_get_description_2);
            binder.bind_custom_method("Cocos2d", "Layer", "init", Cocos2dxBind_cocos2d__Layer_init);
            binder.bind_custom_method("Cocos2d", "Layer", "set_local_z_order_29", Cocos2dxBind_cocos2d__Layer_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_local_z_order_29", Cocos2dxBind_cocos2d__Layer_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_global_z_order_27", Cocos2dxBind_cocos2d__Layer_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Layer", "get_global_z_order_29", Cocos2dxBind_cocos2d__Layer_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scale_x_23", Cocos2dxBind_cocos2d__Layer_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scale_x_26", Cocos2dxBind_cocos2d__Layer_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scale_y_23", Cocos2dxBind_cocos2d__Layer_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scale_y_26", Cocos2dxBind_cocos2d__Layer_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scale_z_29", Cocos2dxBind_cocos2d__Layer_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scale_z_29", Cocos2dxBind_cocos2d__Layer_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scale_45", Cocos2dxBind_cocos2d__Layer_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scale_26", Cocos2dxBind_cocos2d__Layer_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scale_46", Cocos2dxBind_cocos2d__Layer_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position_49", Cocos2dxBind_cocos2d__Layer_set_position_49);
            binder.bind_custom_method("Cocos2d", "Layer", "set_normalized_position_29", Cocos2dxBind_cocos2d__Layer_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position_55", Cocos2dxBind_cocos2d__Layer_get_position_55);
            binder.bind_custom_method("Cocos2d", "Layer", "get_normalized_position_29", Cocos2dxBind_cocos2d__Layer_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position_50", Cocos2dxBind_cocos2d__Layer_set_position_50);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position_56", Cocos2dxBind_cocos2d__Layer_get_position_56);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position_x_28", Cocos2dxBind_cocos2d__Layer_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position_x_28", Cocos2dxBind_cocos2d__Layer_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position_y_28", Cocos2dxBind_cocos2d__Layer_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position_y_28", Cocos2dxBind_cocos2d__Layer_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position3_d_29", Cocos2dxBind_cocos2d__Layer_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position3_d_28", Cocos2dxBind_cocos2d__Layer_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Layer", "set_position_z_28", Cocos2dxBind_cocos2d__Layer_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_position_z_29", Cocos2dxBind_cocos2d__Layer_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_skew_x_28", Cocos2dxBind_cocos2d__Layer_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_skew_x_29", Cocos2dxBind_cocos2d__Layer_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_skew_y_28", Cocos2dxBind_cocos2d__Layer_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_skew_y_29", Cocos2dxBind_cocos2d__Layer_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_anchor_point_26", Cocos2dxBind_cocos2d__Layer_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Layer", "get_anchor_point_29", Cocos2dxBind_cocos2d__Layer_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Layer_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_content_size_24", Cocos2dxBind_cocos2d__Layer_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Layer", "get_content_size_26", Cocos2dxBind_cocos2d__Layer_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Layer", "set_visible_27", Cocos2dxBind_cocos2d__Layer_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Layer", "is_visible_29", Cocos2dxBind_cocos2d__Layer_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_rotation_26", Cocos2dxBind_cocos2d__Layer_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Layer", "get_rotation_29", Cocos2dxBind_cocos2d__Layer_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Layer_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Layer_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Layer_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Layer_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Layer_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Layer_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Layer_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Layer_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Layer_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Layer_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Layer", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Layer_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Layer", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Layer_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Layer", "add_child_113", Cocos2dxBind_cocos2d__Layer_add_child_113);
            binder.bind_custom_method("Cocos2d", "Layer", "add_child_114", Cocos2dxBind_cocos2d__Layer_add_child_114);
            binder.bind_custom_method("Cocos2d", "Layer", "add_child_115", Cocos2dxBind_cocos2d__Layer_add_child_115);
            binder.bind_custom_method("Cocos2d", "Layer", "add_child_116", Cocos2dxBind_cocos2d__Layer_add_child_116);
            binder.bind_custom_method("Cocos2d", "Layer", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Layer_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_child_by_name_29", Cocos2dxBind_cocos2d__Layer_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Layer", "enumerate_children_29", Cocos2dxBind_cocos2d__Layer_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_children_58", Cocos2dxBind_cocos2d__Layer_get_children_58);
            binder.bind_custom_method("Cocos2d", "Layer", "get_children_count_29", Cocos2dxBind_cocos2d__Layer_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_parent_29", Cocos2dxBind_cocos2d__Layer_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_parent_57", Cocos2dxBind_cocos2d__Layer_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_parent_58", Cocos2dxBind_cocos2d__Layer_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_from_parent_29", Cocos2dxBind_cocos2d__Layer_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Layer_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_child_24", Cocos2dxBind_cocos2d__Layer_remove_child_24);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Layer_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Layer_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_all_children_28", Cocos2dxBind_cocos2d__Layer_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__Layer_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "Layer", "reorder_child_26", Cocos2dxBind_cocos2d__Layer_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Layer", "sort_all_children_26", Cocos2dxBind_cocos2d__Layer_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Layer", "get_tag_29", Cocos2dxBind_cocos2d__Layer_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_tag_29", Cocos2dxBind_cocos2d__Layer_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_name_29", Cocos2dxBind_cocos2d__Layer_get_name_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_name_29", Cocos2dxBind_cocos2d__Layer_set_name_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_user_data_57", Cocos2dxBind_cocos2d__Layer_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_user_data_58", Cocos2dxBind_cocos2d__Layer_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Layer", "set_user_data_29", Cocos2dxBind_cocos2d__Layer_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_user_object_57", Cocos2dxBind_cocos2d__Layer_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_user_object_58", Cocos2dxBind_cocos2d__Layer_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Layer", "set_user_object_29", Cocos2dxBind_cocos2d__Layer_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_gl_program_29", Cocos2dxBind_cocos2d__Layer_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_gl_program_28", Cocos2dxBind_cocos2d__Layer_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Layer_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Layer_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Layer", "is_running_29", Cocos2dxBind_cocos2d__Layer_is_running_29);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Layer_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Layer", "on_enter_18", Cocos2dxBind_cocos2d__Layer_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Layer", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Layer_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Layer", "on_exit_18", Cocos2dxBind_cocos2d__Layer_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Layer", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Layer_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Layer", "cleanup_25", Cocos2dxBind_cocos2d__Layer_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Layer", "draw_27", Cocos2dxBind_cocos2d__Layer_draw_27);
            binder.bind_custom_method("Cocos2d", "Layer", "draw_28", Cocos2dxBind_cocos2d__Layer_draw_28);
            binder.bind_custom_method("Cocos2d", "Layer", "visit_31", Cocos2dxBind_cocos2d__Layer_visit_31);
            binder.bind_custom_method("Cocos2d", "Layer", "visit_32", Cocos2dxBind_cocos2d__Layer_visit_32);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scene_29", Cocos2dxBind_cocos2d__Layer_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_bounding_box_26", Cocos2dxBind_cocos2d__Layer_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "Layer", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Layer_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Layer_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_action_manager_29", Cocos2dxBind_cocos2d__Layer_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_action_manager_57", Cocos2dxBind_cocos2d__Layer_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_action_manager_58", Cocos2dxBind_cocos2d__Layer_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Layer", "run_action_28", Cocos2dxBind_cocos2d__Layer_run_action_28);
            binder.bind_custom_method("Cocos2d", "Layer", "stop_all_actions_29", Cocos2dxBind_cocos2d__Layer_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Layer", "stop_action_29", Cocos2dxBind_cocos2d__Layer_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Layer", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Layer_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Layer_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Layer_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Layer_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Layer_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_scheduler_29", Cocos2dxBind_cocos2d__Layer_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scheduler_57", Cocos2dxBind_cocos2d__Layer_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_scheduler_58", Cocos2dxBind_cocos2d__Layer_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Layer", "is_scheduled_58", Cocos2dxBind_cocos2d__Layer_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_update_29", Cocos2dxBind_cocos2d__Layer_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Layer_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Layer", "unschedule_update_29", Cocos2dxBind_cocos2d__Layer_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_once_58", Cocos2dxBind_cocos2d__Layer_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_172", Cocos2dxBind_cocos2d__Layer_schedule_172);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_173", Cocos2dxBind_cocos2d__Layer_schedule_173);
            binder.bind_custom_method("Cocos2d", "Layer", "schedule_174", Cocos2dxBind_cocos2d__Layer_schedule_174);
            binder.bind_custom_method("Cocos2d", "Layer", "unschedule_58", Cocos2dxBind_cocos2d__Layer_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Layer", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Layer_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Layer", "resume_29", Cocos2dxBind_cocos2d__Layer_resume_29);
            binder.bind_custom_method("Cocos2d", "Layer", "pause_29", Cocos2dxBind_cocos2d__Layer_pause_29);
            binder.bind_custom_method("Cocos2d", "Layer", "update_26", Cocos2dxBind_cocos2d__Layer_update_26);
            binder.bind_custom_method("Cocos2d", "Layer", "update_transform_28", Cocos2dxBind_cocos2d__Layer_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Layer_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Layer_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Layer_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Layer_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Layer", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Layer_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Layer_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Layer_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Layer_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Layer_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Layer_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Layer_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Layer_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Layer_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Layer_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Layer_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Layer_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Layer", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Layer_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_additional_transform_58", Cocos2dxBind_cocos2d__Layer_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Layer", "get_component_29", Cocos2dxBind_cocos2d__Layer_get_component_29);
            binder.bind_custom_method("Cocos2d", "Layer", "add_component_29", Cocos2dxBind_cocos2d__Layer_add_component_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_component_57", Cocos2dxBind_cocos2d__Layer_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_component_58", Cocos2dxBind_cocos2d__Layer_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_all_components_29", Cocos2dxBind_cocos2d__Layer_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_physics_body_29", Cocos2dxBind_cocos2d__Layer_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_physics_body_29", Cocos2dxBind_cocos2d__Layer_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Layer", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Layer_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Layer", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Layer_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Layer", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Layer_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_opacity_28", Cocos2dxBind_cocos2d__Layer_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Layer", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Layer_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_opacity_26", Cocos2dxBind_cocos2d__Layer_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Layer", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Layer_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Layer", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Layer_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Layer_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_color_27", Cocos2dxBind_cocos2d__Layer_get_color_27);
            binder.bind_custom_method("Cocos2d", "Layer", "get_displayed_color_29", Cocos2dxBind_cocos2d__Layer_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_color_27", Cocos2dxBind_cocos2d__Layer_set_color_27);
            binder.bind_custom_method("Cocos2d", "Layer", "update_displayed_color_23", Cocos2dxBind_cocos2d__Layer_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Layer", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Layer_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Layer_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Layer_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Layer", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Layer_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Layer", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Layer_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Layer_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Layer", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Layer_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Layer", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Layer_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Layer", "get_camera_mask_29", Cocos2dxBind_cocos2d__Layer_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Layer", "set_camera_mask_22", Cocos2dxBind_cocos2d__Layer_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Layer", "retain_176", Cocos2dxBind_cocos2d__Layer_retain_176);
            binder.bind_custom_method("Cocos2d", "Layer", "release_176", Cocos2dxBind_cocos2d__Layer_release_176);
            binder.bind_custom_method("Cocos2d", "Layer", "autorelease_176", Cocos2dxBind_cocos2d__Layer_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Layer", "get_reference_count_176", Cocos2dxBind_cocos2d__Layer_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "LayerColor", "create_1", Cocos2dxBind_cocos2d__LayerColor_create_1);
            binder.bind_static_method("Cocos2d", "LayerColor", "create_2", Cocos2dxBind_cocos2d__LayerColor_create_2);
            binder.bind_static_method("Cocos2d", "LayerColor", "create_3", Cocos2dxBind_cocos2d__LayerColor_create_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "change_width", Cocos2dxBind_cocos2d__LayerColor_change_width);
            binder.bind_custom_method("Cocos2d", "LayerColor", "change_height", Cocos2dxBind_cocos2d__LayerColor_change_height);
            binder.bind_custom_method("Cocos2d", "LayerColor", "change_width_and_height", Cocos2dxBind_cocos2d__LayerColor_change_width_and_height);
            binder.bind_custom_method("Cocos2d", "LayerColor", "draw", Cocos2dxBind_cocos2d__LayerColor_draw);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_content_size", Cocos2dxBind_cocos2d__LayerColor_set_content_size);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_blend_func", Cocos2dxBind_cocos2d__LayerColor_get_blend_func);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_blend_func", Cocos2dxBind_cocos2d__LayerColor_set_blend_func);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_description", Cocos2dxBind_cocos2d__LayerColor_get_description);
            binder.bind_custom_method("Cocos2d", "LayerColor", "init", Cocos2dxBind_cocos2d__LayerColor_init);
            binder.bind_custom_method("Cocos2d", "LayerColor", "init_with_color_1", Cocos2dxBind_cocos2d__LayerColor_init_with_color_1);
            binder.bind_custom_method("Cocos2d", "LayerColor", "init_with_color_2", Cocos2dxBind_cocos2d__LayerColor_init_with_color_2);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touch_began_2", Cocos2dxBind_cocos2d__LayerColor_on_touch_began_2);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touch_moved_2", Cocos2dxBind_cocos2d__LayerColor_on_touch_moved_2);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touch_ended_2", Cocos2dxBind_cocos2d__LayerColor_on_touch_ended_2);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touch_cancelled_2", Cocos2dxBind_cocos2d__LayerColor_on_touch_cancelled_2);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touches_began_3", Cocos2dxBind_cocos2d__LayerColor_on_touches_began_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touches_moved_3", Cocos2dxBind_cocos2d__LayerColor_on_touches_moved_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touches_ended_3", Cocos2dxBind_cocos2d__LayerColor_on_touches_ended_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_touches_cancelled_3", Cocos2dxBind_cocos2d__LayerColor_on_touches_cancelled_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_acceleration_3", Cocos2dxBind_cocos2d__LayerColor_on_acceleration_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_key_pressed_3", Cocos2dxBind_cocos2d__LayerColor_on_key_pressed_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_key_released_3", Cocos2dxBind_cocos2d__LayerColor_on_key_released_3);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_local_z_order_29", Cocos2dxBind_cocos2d__LayerColor_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_local_z_order_29", Cocos2dxBind_cocos2d__LayerColor_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_global_z_order_27", Cocos2dxBind_cocos2d__LayerColor_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_global_z_order_29", Cocos2dxBind_cocos2d__LayerColor_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scale_x_23", Cocos2dxBind_cocos2d__LayerColor_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scale_x_26", Cocos2dxBind_cocos2d__LayerColor_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scale_y_23", Cocos2dxBind_cocos2d__LayerColor_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scale_y_26", Cocos2dxBind_cocos2d__LayerColor_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scale_z_29", Cocos2dxBind_cocos2d__LayerColor_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scale_z_29", Cocos2dxBind_cocos2d__LayerColor_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scale_45", Cocos2dxBind_cocos2d__LayerColor_set_scale_45);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scale_26", Cocos2dxBind_cocos2d__LayerColor_get_scale_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scale_46", Cocos2dxBind_cocos2d__LayerColor_set_scale_46);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position_49", Cocos2dxBind_cocos2d__LayerColor_set_position_49);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_normalized_position_29", Cocos2dxBind_cocos2d__LayerColor_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position_55", Cocos2dxBind_cocos2d__LayerColor_get_position_55);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_normalized_position_29", Cocos2dxBind_cocos2d__LayerColor_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position_50", Cocos2dxBind_cocos2d__LayerColor_set_position_50);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position_56", Cocos2dxBind_cocos2d__LayerColor_get_position_56);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position_x_28", Cocos2dxBind_cocos2d__LayerColor_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position_x_28", Cocos2dxBind_cocos2d__LayerColor_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position_y_28", Cocos2dxBind_cocos2d__LayerColor_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position_y_28", Cocos2dxBind_cocos2d__LayerColor_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position3_d_29", Cocos2dxBind_cocos2d__LayerColor_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position3_d_28", Cocos2dxBind_cocos2d__LayerColor_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_position_z_28", Cocos2dxBind_cocos2d__LayerColor_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_position_z_29", Cocos2dxBind_cocos2d__LayerColor_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_skew_x_28", Cocos2dxBind_cocos2d__LayerColor_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_skew_x_29", Cocos2dxBind_cocos2d__LayerColor_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_skew_y_28", Cocos2dxBind_cocos2d__LayerColor_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_skew_y_29", Cocos2dxBind_cocos2d__LayerColor_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_anchor_point_26", Cocos2dxBind_cocos2d__LayerColor_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_anchor_point_29", Cocos2dxBind_cocos2d__LayerColor_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__LayerColor_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_content_size_26", Cocos2dxBind_cocos2d__LayerColor_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_visible_27", Cocos2dxBind_cocos2d__LayerColor_set_visible_27);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_visible_29", Cocos2dxBind_cocos2d__LayerColor_is_visible_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_rotation_26", Cocos2dxBind_cocos2d__LayerColor_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_rotation_29", Cocos2dxBind_cocos2d__LayerColor_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_rotation3_d_29", Cocos2dxBind_cocos2d__LayerColor_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_rotation3_d_29", Cocos2dxBind_cocos2d__LayerColor_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_rotation_quat_29", Cocos2dxBind_cocos2d__LayerColor_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_rotation_quat_29", Cocos2dxBind_cocos2d__LayerColor_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__LayerColor_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__LayerColor_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__LayerColor_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__LayerColor_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__LayerColor_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__LayerColor_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__LayerColor_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__LayerColor_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "add_child_113", Cocos2dxBind_cocos2d__LayerColor_add_child_113);
            binder.bind_custom_method("Cocos2d", "LayerColor", "add_child_114", Cocos2dxBind_cocos2d__LayerColor_add_child_114);
            binder.bind_custom_method("Cocos2d", "LayerColor", "add_child_115", Cocos2dxBind_cocos2d__LayerColor_add_child_115);
            binder.bind_custom_method("Cocos2d", "LayerColor", "add_child_116", Cocos2dxBind_cocos2d__LayerColor_add_child_116);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_child_by_tag_29", Cocos2dxBind_cocos2d__LayerColor_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_child_by_name_29", Cocos2dxBind_cocos2d__LayerColor_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "enumerate_children_29", Cocos2dxBind_cocos2d__LayerColor_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_children_58", Cocos2dxBind_cocos2d__LayerColor_get_children_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_children_count_29", Cocos2dxBind_cocos2d__LayerColor_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_parent_29", Cocos2dxBind_cocos2d__LayerColor_set_parent_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_parent_57", Cocos2dxBind_cocos2d__LayerColor_get_parent_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_parent_58", Cocos2dxBind_cocos2d__LayerColor_get_parent_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_from_parent_29", Cocos2dxBind_cocos2d__LayerColor_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__LayerColor_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_child_24", Cocos2dxBind_cocos2d__LayerColor_remove_child_24);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__LayerColor_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_child_by_name_29", Cocos2dxBind_cocos2d__LayerColor_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_all_children_28", Cocos2dxBind_cocos2d__LayerColor_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__LayerColor_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "LayerColor", "reorder_child_26", Cocos2dxBind_cocos2d__LayerColor_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "sort_all_children_26", Cocos2dxBind_cocos2d__LayerColor_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_tag_29", Cocos2dxBind_cocos2d__LayerColor_get_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_tag_29", Cocos2dxBind_cocos2d__LayerColor_set_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_name_29", Cocos2dxBind_cocos2d__LayerColor_get_name_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_name_29", Cocos2dxBind_cocos2d__LayerColor_set_name_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_user_data_57", Cocos2dxBind_cocos2d__LayerColor_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_user_data_58", Cocos2dxBind_cocos2d__LayerColor_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_user_data_29", Cocos2dxBind_cocos2d__LayerColor_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_user_object_57", Cocos2dxBind_cocos2d__LayerColor_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_user_object_58", Cocos2dxBind_cocos2d__LayerColor_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_user_object_29", Cocos2dxBind_cocos2d__LayerColor_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_gl_program_29", Cocos2dxBind_cocos2d__LayerColor_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_gl_program_28", Cocos2dxBind_cocos2d__LayerColor_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_gl_program_state_29", Cocos2dxBind_cocos2d__LayerColor_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_gl_program_state_28", Cocos2dxBind_cocos2d__LayerColor_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_running_29", Cocos2dxBind_cocos2d__LayerColor_is_running_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__LayerColor_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_enter_18", Cocos2dxBind_cocos2d__LayerColor_on_enter_18);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__LayerColor_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_exit_18", Cocos2dxBind_cocos2d__LayerColor_on_exit_18);
            binder.bind_custom_method("Cocos2d", "LayerColor", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__LayerColor_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "LayerColor", "cleanup_25", Cocos2dxBind_cocos2d__LayerColor_cleanup_25);
            binder.bind_custom_method("Cocos2d", "LayerColor", "visit_31", Cocos2dxBind_cocos2d__LayerColor_visit_31);
            binder.bind_custom_method("Cocos2d", "LayerColor", "visit_32", Cocos2dxBind_cocos2d__LayerColor_visit_32);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scene_29", Cocos2dxBind_cocos2d__LayerColor_get_scene_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_bounding_box_26", Cocos2dxBind_cocos2d__LayerColor_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__LayerColor_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__LayerColor_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_action_manager_29", Cocos2dxBind_cocos2d__LayerColor_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_action_manager_57", Cocos2dxBind_cocos2d__LayerColor_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_action_manager_58", Cocos2dxBind_cocos2d__LayerColor_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "run_action_28", Cocos2dxBind_cocos2d__LayerColor_run_action_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "stop_all_actions_29", Cocos2dxBind_cocos2d__LayerColor_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "stop_action_29", Cocos2dxBind_cocos2d__LayerColor_stop_action_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__LayerColor_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__LayerColor_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__LayerColor_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_action_by_tag_29", Cocos2dxBind_cocos2d__LayerColor_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__LayerColor_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_scheduler_29", Cocos2dxBind_cocos2d__LayerColor_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scheduler_57", Cocos2dxBind_cocos2d__LayerColor_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_scheduler_58", Cocos2dxBind_cocos2d__LayerColor_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_scheduled_58", Cocos2dxBind_cocos2d__LayerColor_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_update_29", Cocos2dxBind_cocos2d__LayerColor_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__LayerColor_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "unschedule_update_29", Cocos2dxBind_cocos2d__LayerColor_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_once_58", Cocos2dxBind_cocos2d__LayerColor_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_172", Cocos2dxBind_cocos2d__LayerColor_schedule_172);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_173", Cocos2dxBind_cocos2d__LayerColor_schedule_173);
            binder.bind_custom_method("Cocos2d", "LayerColor", "schedule_174", Cocos2dxBind_cocos2d__LayerColor_schedule_174);
            binder.bind_custom_method("Cocos2d", "LayerColor", "unschedule_58", Cocos2dxBind_cocos2d__LayerColor_unschedule_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__LayerColor_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "resume_29", Cocos2dxBind_cocos2d__LayerColor_resume_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "pause_29", Cocos2dxBind_cocos2d__LayerColor_pause_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_26", Cocos2dxBind_cocos2d__LayerColor_update_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_transform_28", Cocos2dxBind_cocos2d__LayerColor_update_transform_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__LayerColor_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__LayerColor_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_to_node_space_29", Cocos2dxBind_cocos2d__LayerColor_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_to_world_space_29", Cocos2dxBind_cocos2d__LayerColor_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__LayerColor_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__LayerColor_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__LayerColor_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__LayerColor_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_additional_transform_58", Cocos2dxBind_cocos2d__LayerColor_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_component_29", Cocos2dxBind_cocos2d__LayerColor_get_component_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "add_component_29", Cocos2dxBind_cocos2d__LayerColor_add_component_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_component_57", Cocos2dxBind_cocos2d__LayerColor_remove_component_57);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_component_58", Cocos2dxBind_cocos2d__LayerColor_remove_component_58);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_all_components_29", Cocos2dxBind_cocos2d__LayerColor_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_physics_body_29", Cocos2dxBind_cocos2d__LayerColor_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_physics_body_29", Cocos2dxBind_cocos2d__LayerColor_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__LayerColor_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__LayerColor_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__LayerColor_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_opacity_28", Cocos2dxBind_cocos2d__LayerColor_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__LayerColor_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_opacity_26", Cocos2dxBind_cocos2d__LayerColor_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__LayerColor_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__LayerColor_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__LayerColor_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_color_27", Cocos2dxBind_cocos2d__LayerColor_get_color_27);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_displayed_color_29", Cocos2dxBind_cocos2d__LayerColor_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_color_27", Cocos2dxBind_cocos2d__LayerColor_set_color_27);
            binder.bind_custom_method("Cocos2d", "LayerColor", "update_displayed_color_23", Cocos2dxBind_cocos2d__LayerColor_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__LayerColor_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__LayerColor_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__LayerColor_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "LayerColor", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__LayerColor_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__LayerColor_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__LayerColor_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__LayerColor_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__LayerColor_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_camera_mask_29", Cocos2dxBind_cocos2d__LayerColor_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "LayerColor", "set_camera_mask_22", Cocos2dxBind_cocos2d__LayerColor_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "LayerColor", "retain_176", Cocos2dxBind_cocos2d__LayerColor_retain_176);
            binder.bind_custom_method("Cocos2d", "LayerColor", "release_176", Cocos2dxBind_cocos2d__LayerColor_release_176);
            binder.bind_custom_method("Cocos2d", "LayerColor", "autorelease_176", Cocos2dxBind_cocos2d__LayerColor_autorelease_176);
            binder.bind_custom_method("Cocos2d", "LayerColor", "get_reference_count_176", Cocos2dxBind_cocos2d__LayerColor_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListener", "init", Cocos2dxBind_cocos2d__EventListener_init);
            binder.bind_custom_method("Cocos2d", "EventListener", "check_available", Cocos2dxBind_cocos2d__EventListener_check_available);
            binder.bind_custom_method("Cocos2d", "EventListener", "clone", Cocos2dxBind_cocos2d__EventListener_clone);
            binder.bind_custom_method("Cocos2d", "EventListener", "set_enabled_9", Cocos2dxBind_cocos2d__EventListener_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListener", "is_enabled_9", Cocos2dxBind_cocos2d__EventListener_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListener", "retain_176", Cocos2dxBind_cocos2d__EventListener_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListener", "release_176", Cocos2dxBind_cocos2d__EventListener_release_176);
            binder.bind_custom_method("Cocos2d", "EventListener", "autorelease_176", Cocos2dxBind_cocos2d__EventListener_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListener", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListener_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListener", "_id=", Cocos2dxBind_cocos2d__EventListener_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "EventListener", "_id", Cocos2dxBind_cocos2d__EventListener_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "EventListener", "_lua_id=", Cocos2dxBind_cocos2d__EventListener_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "EventListener", "_lua_id", Cocos2dxBind_cocos2d__EventListener_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "EventListener", "_script_object=", Cocos2dxBind_cocos2d__EventListener_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "EventListener", "_script_object", Cocos2dxBind_cocos2d__EventListener_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "EventListenerTouchOneByOne", "create", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_create);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "set_swallow_touches", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_set_swallow_touches);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "is_swallow_touches", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_is_swallow_touches);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "clone", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "check_available", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_check_available);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "init", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_init);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "retain_176", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "release_176", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "on_touch_began=", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_began);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "on_touch_moved=", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_moved);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "on_touch_ended=", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_ended);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchOneByOne", "on_touch_cancelled=", Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_cancelled);
            binder.bind_static_method("Cocos2d", "EventListenerTouchAllAtOnce", "create", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_create);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "clone", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "check_available", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_check_available);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "init", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_init);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "retain_176", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "release_176", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "on_touches_began=", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_began);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "on_touches_moved=", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_moved);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "on_touches_ended=", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_ended);
            binder.bind_custom_method("Cocos2d", "EventListenerTouchAllAtOnce", "on_touches_cancelled=", Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_cancelled);
            binder.bind_static_method("Cocos2d", "ActionTween", "create", Cocos2dxBind_cocos2d__ActionTween_create);
            binder.bind_custom_method("Cocos2d", "ActionTween", "start_with_target", Cocos2dxBind_cocos2d__ActionTween_start_with_target);
            binder.bind_custom_method("Cocos2d", "ActionTween", "update", Cocos2dxBind_cocos2d__ActionTween_update);
            binder.bind_custom_method("Cocos2d", "ActionTween", "reverse", Cocos2dxBind_cocos2d__ActionTween_reverse);
            binder.bind_custom_method("Cocos2d", "ActionTween", "clone", Cocos2dxBind_cocos2d__ActionTween_clone);
            binder.bind_custom_method("Cocos2d", "ActionTween", "init_with_duration", Cocos2dxBind_cocos2d__ActionTween_init_with_duration);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_elapsed_90", Cocos2dxBind_cocos2d__ActionTween_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionTween_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionTween_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionTween", "is_done_87", Cocos2dxBind_cocos2d__ActionTween_is_done_87);
            binder.bind_custom_method("Cocos2d", "ActionTween", "step_88", Cocos2dxBind_cocos2d__ActionTween_step_88);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_duration_103", Cocos2dxBind_cocos2d__ActionTween_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_duration_103", Cocos2dxBind_cocos2d__ActionTween_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionTween", "description_106", Cocos2dxBind_cocos2d__ActionTween_description_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "stop_58", Cocos2dxBind_cocos2d__ActionTween_stop_58);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_target_106", Cocos2dxBind_cocos2d__ActionTween_get_target_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_target_106", Cocos2dxBind_cocos2d__ActionTween_set_target_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_original_target_106", Cocos2dxBind_cocos2d__ActionTween_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_original_target_106", Cocos2dxBind_cocos2d__ActionTween_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_tag_106", Cocos2dxBind_cocos2d__ActionTween_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_tag_106", Cocos2dxBind_cocos2d__ActionTween_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_flags_106", Cocos2dxBind_cocos2d__ActionTween_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "set_flags_106", Cocos2dxBind_cocos2d__ActionTween_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionTween", "retain_176", Cocos2dxBind_cocos2d__ActionTween_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionTween", "release_176", Cocos2dxBind_cocos2d__ActionTween_release_176);
            binder.bind_custom_method("Cocos2d", "ActionTween", "autorelease_176", Cocos2dxBind_cocos2d__ActionTween_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionTween", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionTween_get_reference_count_176);
            binder.bind_static_method("Cocos2dExtension", "ScrollView", "create_1", Cocos2dxBind_cocos2d__extension__ScrollView_create_1);
            binder.bind_static_method("Cocos2dExtension", "ScrollView", "create_2", Cocos2dxBind_cocos2d__extension__ScrollView_create_2);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "init", Cocos2dxBind_cocos2d__extension__ScrollView_init);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "init_with_view_size", Cocos2dxBind_cocos2d__extension__ScrollView_init_with_view_size);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_content_offset", Cocos2dxBind_cocos2d__extension__ScrollView_set_content_offset);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_content_offset", Cocos2dxBind_cocos2d__extension__ScrollView_get_content_offset);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_content_offset_in_duration", Cocos2dxBind_cocos2d__extension__ScrollView_set_content_offset_in_duration);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_zoom_scale_1", Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_1);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_zoom_scale_2", Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_2);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_zoom_scale", Cocos2dxBind_cocos2d__extension__ScrollView_get_zoom_scale);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_zoom_scale_in_duration", Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_in_duration);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_min_scale", Cocos2dxBind_cocos2d__extension__ScrollView_set_min_scale);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_max_scale", Cocos2dxBind_cocos2d__extension__ScrollView_set_max_scale);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "min_container_offset", Cocos2dxBind_cocos2d__extension__ScrollView_min_container_offset);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "max_container_offset", Cocos2dxBind_cocos2d__extension__ScrollView_max_container_offset);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_node_visible", Cocos2dxBind_cocos2d__extension__ScrollView_is_node_visible);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "pause", Cocos2dxBind_cocos2d__extension__ScrollView_pause);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "resume", Cocos2dxBind_cocos2d__extension__ScrollView_resume);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_touch_enabled", Cocos2dxBind_cocos2d__extension__ScrollView_set_touch_enabled);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_touch_enabled", Cocos2dxBind_cocos2d__extension__ScrollView_is_touch_enabled);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_dragging", Cocos2dxBind_cocos2d__extension__ScrollView_is_dragging);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_touch_moved", Cocos2dxBind_cocos2d__extension__ScrollView_is_touch_moved);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_bounceable", Cocos2dxBind_cocos2d__extension__ScrollView_is_bounceable);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_bounceable", Cocos2dxBind_cocos2d__extension__ScrollView_set_bounceable);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_view_size", Cocos2dxBind_cocos2d__extension__ScrollView_get_view_size);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_view_size", Cocos2dxBind_cocos2d__extension__ScrollView_set_view_size);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_container", Cocos2dxBind_cocos2d__extension__ScrollView_get_container);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_container", Cocos2dxBind_cocos2d__extension__ScrollView_set_container);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_direction", Cocos2dxBind_cocos2d__extension__ScrollView_get_direction);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_direction", Cocos2dxBind_cocos2d__extension__ScrollView_set_direction);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_delegate", Cocos2dxBind_cocos2d__extension__ScrollView_get_delegate);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_delegate", Cocos2dxBind_cocos2d__extension__ScrollView_set_delegate);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_inset", Cocos2dxBind_cocos2d__extension__ScrollView_update_inset);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_clipping_to_bounds", Cocos2dxBind_cocos2d__extension__ScrollView_is_clipping_to_bounds);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_clipping_to_bounds", Cocos2dxBind_cocos2d__extension__ScrollView_set_clipping_to_bounds);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touch_began", Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_began);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touch_moved", Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_moved);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touch_ended", Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_ended);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touch_cancelled", Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_cancelled);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_content_size", Cocos2dxBind_cocos2d__extension__ScrollView_set_content_size);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_content_size", Cocos2dxBind_cocos2d__extension__ScrollView_get_content_size);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "visit", Cocos2dxBind_cocos2d__extension__ScrollView_visit);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_1", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_1);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_2", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_2);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_tween_action", Cocos2dxBind_cocos2d__extension__ScrollView_update_tween_action);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "has_visible_parents", Cocos2dxBind_cocos2d__extension__ScrollView_has_visible_parents);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touches_began_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_began_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touches_moved_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_moved_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touches_ended_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_ended_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_touches_cancelled_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_cancelled_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_acceleration_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_acceleration_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_key_pressed_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_key_pressed_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_key_released_3", Cocos2dxBind_cocos2d__extension__ScrollView_on_key_released_3);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_description_2", Cocos2dxBind_cocos2d__extension__ScrollView_get_description_2);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_local_z_order_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_local_z_order_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_local_z_order_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_local_z_order_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_global_z_order_27", Cocos2dxBind_cocos2d__extension__ScrollView_set_global_z_order_27);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_global_z_order_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_global_z_order_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scale_x_23", Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_x_23);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scale_x_26", Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_x_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scale_y_23", Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_y_23);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scale_y_26", Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_y_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scale_z_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_z_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scale_z_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_z_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scale_45", Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_45);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scale_26", Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scale_46", Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_46);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position_49", Cocos2dxBind_cocos2d__extension__ScrollView_set_position_49);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_normalized_position_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_normalized_position_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position_55", Cocos2dxBind_cocos2d__extension__ScrollView_get_position_55);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_normalized_position_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_normalized_position_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position_50", Cocos2dxBind_cocos2d__extension__ScrollView_set_position_50);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position_56", Cocos2dxBind_cocos2d__extension__ScrollView_get_position_56);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position_x_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_position_x_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position_x_28", Cocos2dxBind_cocos2d__extension__ScrollView_get_position_x_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position_y_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_position_y_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position_y_28", Cocos2dxBind_cocos2d__extension__ScrollView_get_position_y_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position3_d_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_position3_d_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position3_d_28", Cocos2dxBind_cocos2d__extension__ScrollView_get_position3_d_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_position_z_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_position_z_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_position_z_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_position_z_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_skew_x_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_skew_x_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_skew_x_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_skew_x_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_skew_y_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_skew_y_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_skew_y_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_skew_y_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_anchor_point_26", Cocos2dxBind_cocos2d__extension__ScrollView_set_anchor_point_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_anchor_point_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_anchor_point_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_visible_27", Cocos2dxBind_cocos2d__extension__ScrollView_set_visible_27);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_visible_29", Cocos2dxBind_cocos2d__extension__ScrollView_is_visible_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_rotation_26", Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_rotation_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_rotation3_d_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_rotation3_d_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_rotation_quat_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_rotation_quat_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__extension__ScrollView_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__extension__ScrollView_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_113", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_113);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_114", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_114);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_115", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_115);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_child_116", Cocos2dxBind_cocos2d__extension__ScrollView_add_child_116);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_child_by_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_child_by_name_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_child_by_name_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "enumerate_children_29", Cocos2dxBind_cocos2d__extension__ScrollView_enumerate_children_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_children_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_children_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_children_count_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_children_count_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_parent_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_parent_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_parent_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_parent_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_from_parent_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_parent_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_child_24", Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_24);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_child_by_name_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_all_children_28", Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_children_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "reorder_child_26", Cocos2dxBind_cocos2d__extension__ScrollView_reorder_child_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "sort_all_children_26", Cocos2dxBind_cocos2d__extension__ScrollView_sort_all_children_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_name_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_name_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_name_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_name_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_user_data_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_user_data_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_user_data_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_user_data_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_user_data_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_user_data_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_user_object_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_user_object_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_user_object_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_user_object_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_user_object_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_user_object_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_gl_program_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_gl_program_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_gl_program_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_gl_program_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_gl_program_state_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_gl_program_state_28", Cocos2dxBind_cocos2d__extension__ScrollView_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_running_29", Cocos2dxBind_cocos2d__extension__ScrollView_is_running_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_enter_18", Cocos2dxBind_cocos2d__extension__ScrollView_on_enter_18);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__extension__ScrollView_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_exit_18", Cocos2dxBind_cocos2d__extension__ScrollView_on_exit_18);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__extension__ScrollView_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "cleanup_25", Cocos2dxBind_cocos2d__extension__ScrollView_cleanup_25);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "draw_27", Cocos2dxBind_cocos2d__extension__ScrollView_draw_27);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "draw_28", Cocos2dxBind_cocos2d__extension__ScrollView_draw_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scene_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_scene_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_bounding_box_26", Cocos2dxBind_cocos2d__extension__ScrollView_get_bounding_box_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_action_manager_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_action_manager_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_action_manager_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_action_manager_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_action_manager_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_action_manager_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "run_action_28", Cocos2dxBind_cocos2d__extension__ScrollView_run_action_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "stop_all_actions_29", Cocos2dxBind_cocos2d__extension__ScrollView_stop_all_actions_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "stop_action_29", Cocos2dxBind_cocos2d__extension__ScrollView_stop_action_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__extension__ScrollView_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_action_by_tag_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_scheduler_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_scheduler_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scheduler_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_scheduler_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_scheduler_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_scheduler_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_scheduled_58", Cocos2dxBind_cocos2d__extension__ScrollView_is_scheduled_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_update_29", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "unschedule_update_29", Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_update_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_once_58", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_once_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_172", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_172);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_173", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_173);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "schedule_174", Cocos2dxBind_cocos2d__extension__ScrollView_schedule_174);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "unschedule_58", Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "resume_29", Cocos2dxBind_cocos2d__extension__ScrollView_resume_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "pause_29", Cocos2dxBind_cocos2d__extension__ScrollView_pause_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_26", Cocos2dxBind_cocos2d__extension__ScrollView_update_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_transform_28", Cocos2dxBind_cocos2d__extension__ScrollView_update_transform_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_to_node_space_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_to_world_space_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__extension__ScrollView_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_additional_transform_58", Cocos2dxBind_cocos2d__extension__ScrollView_set_additional_transform_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_component_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_component_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "add_component_29", Cocos2dxBind_cocos2d__extension__ScrollView_add_component_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_component_57", Cocos2dxBind_cocos2d__extension__ScrollView_remove_component_57);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_component_58", Cocos2dxBind_cocos2d__extension__ScrollView_remove_component_58);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_all_components_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_components_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_physics_body_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_physics_body_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_physics_body_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_physics_body_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__extension__ScrollView_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__extension__ScrollView_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_opacity_28", Cocos2dxBind_cocos2d__extension__ScrollView_get_opacity_28);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_opacity_26", Cocos2dxBind_cocos2d__extension__ScrollView_set_opacity_26);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__extension__ScrollView_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__extension__ScrollView_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_color_27", Cocos2dxBind_cocos2d__extension__ScrollView_get_color_27);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_displayed_color_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_displayed_color_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_color_27", Cocos2dxBind_cocos2d__extension__ScrollView_set_color_27);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "update_displayed_color_23", Cocos2dxBind_cocos2d__extension__ScrollView_update_displayed_color_23);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__extension__ScrollView_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__extension__ScrollView_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__extension__ScrollView_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__extension__ScrollView_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__extension__ScrollView_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__extension__ScrollView_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_camera_mask_29", Cocos2dxBind_cocos2d__extension__ScrollView_get_camera_mask_29);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "set_camera_mask_22", Cocos2dxBind_cocos2d__extension__ScrollView_set_camera_mask_22);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "retain_176", Cocos2dxBind_cocos2d__extension__ScrollView_retain_176);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "release_176", Cocos2dxBind_cocos2d__extension__ScrollView_release_176);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "autorelease_176", Cocos2dxBind_cocos2d__extension__ScrollView_autorelease_176);
            binder.bind_custom_method("Cocos2dExtension", "ScrollView", "get_reference_count_176", Cocos2dxBind_cocos2d__extension__ScrollView_get_reference_count_176);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "setup_rts_rendering_state", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_rts_rendering_state);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "setup_sprite_alphatest", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_alphatest);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "setup_sprite_round", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_round);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "setup_sprite_gray", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_gray);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "setup_avoid_blur_texture", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_avoid_blur_texture);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "set_blending_premultipled", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_blending_premultipled);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "create_empty_image", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_create_empty_image);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "copy_rect_image", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_copy_rect_image);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "node_rect", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_node_rect);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "nodes_rect", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_nodes_rect);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "delay_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_delay_call);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "interval_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_interval_call);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "set_scroll_view_on_scroll", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_scroll_view_on_scroll);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "set_additional_transform", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_additional_transform);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectSystem", "on_active", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_on_active);
            binder.bind_static_method("Cocos2d", "Scene", "create", Cocos2dxBind_cocos2d__Scene_create);
            binder.bind_static_method("Cocos2d", "Scene", "create_with_size", Cocos2dxBind_cocos2d__Scene_create_with_size);
            binder.bind_custom_method("Cocos2d", "Scene", "get_description", Cocos2dxBind_cocos2d__Scene_get_description);
            binder.bind_custom_method("Cocos2d", "Scene", "get_cameras", Cocos2dxBind_cocos2d__Scene_get_cameras);
            binder.bind_custom_method("Cocos2d", "Scene", "get_default_camera", Cocos2dxBind_cocos2d__Scene_get_default_camera);
            binder.bind_custom_method("Cocos2d", "Scene", "get_lights", Cocos2dxBind_cocos2d__Scene_get_lights);
            binder.bind_custom_method("Cocos2d", "Scene", "render", Cocos2dxBind_cocos2d__Scene_render);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_all_children", Cocos2dxBind_cocos2d__Scene_remove_all_children);
            binder.bind_custom_method("Cocos2d", "Scene", "init", Cocos2dxBind_cocos2d__Scene_init);
            binder.bind_custom_method("Cocos2d", "Scene", "init_with_size", Cocos2dxBind_cocos2d__Scene_init_with_size);
            binder.bind_custom_method("Cocos2d", "Scene", "set_camera_order_dirty", Cocos2dxBind_cocos2d__Scene_set_camera_order_dirty);
            binder.bind_custom_method("Cocos2d", "Scene", "on_projection_changed", Cocos2dxBind_cocos2d__Scene_on_projection_changed);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_1", Cocos2dxBind_cocos2d__Scene_add_child_1);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_2", Cocos2dxBind_cocos2d__Scene_add_child_2);
            binder.bind_custom_method("Cocos2d", "Scene", "get_physics_world", Cocos2dxBind_cocos2d__Scene_get_physics_world);
            binder.bind_custom_method("Cocos2d", "Scene", "get_physics3_d_world", Cocos2dxBind_cocos2d__Scene_get_physics3_d_world);
            binder.bind_custom_method("Cocos2d", "Scene", "set_physics3_d_debug_camera", Cocos2dxBind_cocos2d__Scene_set_physics3_d_debug_camera);
            binder.bind_static_method("Cocos2d", "Scene", "create_with_physics", Cocos2dxBind_cocos2d__Scene_create_with_physics);
            binder.bind_custom_method("Cocos2d", "Scene", "init_with_physics", Cocos2dxBind_cocos2d__Scene_init_with_physics);
            binder.bind_custom_method("Cocos2d", "Scene", "set_nav_mesh", Cocos2dxBind_cocos2d__Scene_set_nav_mesh);
            binder.bind_custom_method("Cocos2d", "Scene", "get_nav_mesh", Cocos2dxBind_cocos2d__Scene_get_nav_mesh);
            binder.bind_custom_method("Cocos2d", "Scene", "set_nav_mesh_debug_camera", Cocos2dxBind_cocos2d__Scene_set_nav_mesh_debug_camera);
            binder.bind_custom_method("Cocos2d", "Scene", "step_physics_and_navigation", Cocos2dxBind_cocos2d__Scene_step_physics_and_navigation);
            binder.bind_custom_method("Cocos2d", "Scene", "set_local_z_order_29", Cocos2dxBind_cocos2d__Scene_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_local_z_order_29", Cocos2dxBind_cocos2d__Scene_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_global_z_order_27", Cocos2dxBind_cocos2d__Scene_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Scene", "get_global_z_order_29", Cocos2dxBind_cocos2d__Scene_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scale_x_23", Cocos2dxBind_cocos2d__Scene_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scale_x_26", Cocos2dxBind_cocos2d__Scene_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scale_y_23", Cocos2dxBind_cocos2d__Scene_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scale_y_26", Cocos2dxBind_cocos2d__Scene_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scale_z_29", Cocos2dxBind_cocos2d__Scene_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scale_z_29", Cocos2dxBind_cocos2d__Scene_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scale_45", Cocos2dxBind_cocos2d__Scene_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scale_26", Cocos2dxBind_cocos2d__Scene_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scale_46", Cocos2dxBind_cocos2d__Scene_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position_49", Cocos2dxBind_cocos2d__Scene_set_position_49);
            binder.bind_custom_method("Cocos2d", "Scene", "set_normalized_position_29", Cocos2dxBind_cocos2d__Scene_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position_55", Cocos2dxBind_cocos2d__Scene_get_position_55);
            binder.bind_custom_method("Cocos2d", "Scene", "get_normalized_position_29", Cocos2dxBind_cocos2d__Scene_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position_50", Cocos2dxBind_cocos2d__Scene_set_position_50);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position_56", Cocos2dxBind_cocos2d__Scene_get_position_56);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position_x_28", Cocos2dxBind_cocos2d__Scene_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position_x_28", Cocos2dxBind_cocos2d__Scene_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position_y_28", Cocos2dxBind_cocos2d__Scene_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position_y_28", Cocos2dxBind_cocos2d__Scene_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position3_d_29", Cocos2dxBind_cocos2d__Scene_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position3_d_28", Cocos2dxBind_cocos2d__Scene_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Scene", "set_position_z_28", Cocos2dxBind_cocos2d__Scene_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_position_z_29", Cocos2dxBind_cocos2d__Scene_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_skew_x_28", Cocos2dxBind_cocos2d__Scene_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_skew_x_29", Cocos2dxBind_cocos2d__Scene_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_skew_y_28", Cocos2dxBind_cocos2d__Scene_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_skew_y_29", Cocos2dxBind_cocos2d__Scene_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_anchor_point_26", Cocos2dxBind_cocos2d__Scene_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Scene", "get_anchor_point_29", Cocos2dxBind_cocos2d__Scene_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Scene_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_content_size_24", Cocos2dxBind_cocos2d__Scene_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Scene", "get_content_size_26", Cocos2dxBind_cocos2d__Scene_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Scene", "set_visible_27", Cocos2dxBind_cocos2d__Scene_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Scene", "is_visible_29", Cocos2dxBind_cocos2d__Scene_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_rotation_26", Cocos2dxBind_cocos2d__Scene_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Scene", "get_rotation_29", Cocos2dxBind_cocos2d__Scene_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Scene_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Scene_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Scene_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Scene_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Scene_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Scene_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Scene_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Scene_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Scene_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Scene_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Scene", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Scene_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Scene", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Scene_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_113", Cocos2dxBind_cocos2d__Scene_add_child_113);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_114", Cocos2dxBind_cocos2d__Scene_add_child_114);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_115", Cocos2dxBind_cocos2d__Scene_add_child_115);
            binder.bind_custom_method("Cocos2d", "Scene", "add_child_116", Cocos2dxBind_cocos2d__Scene_add_child_116);
            binder.bind_custom_method("Cocos2d", "Scene", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Scene_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_child_by_name_29", Cocos2dxBind_cocos2d__Scene_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Scene", "enumerate_children_29", Cocos2dxBind_cocos2d__Scene_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_children_58", Cocos2dxBind_cocos2d__Scene_get_children_58);
            binder.bind_custom_method("Cocos2d", "Scene", "get_children_count_29", Cocos2dxBind_cocos2d__Scene_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_parent_29", Cocos2dxBind_cocos2d__Scene_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_parent_57", Cocos2dxBind_cocos2d__Scene_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_parent_58", Cocos2dxBind_cocos2d__Scene_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_from_parent_29", Cocos2dxBind_cocos2d__Scene_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Scene_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_child_24", Cocos2dxBind_cocos2d__Scene_remove_child_24);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Scene_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Scene_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__Scene_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "Scene", "reorder_child_26", Cocos2dxBind_cocos2d__Scene_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Scene", "sort_all_children_26", Cocos2dxBind_cocos2d__Scene_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Scene", "get_tag_29", Cocos2dxBind_cocos2d__Scene_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_tag_29", Cocos2dxBind_cocos2d__Scene_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_name_29", Cocos2dxBind_cocos2d__Scene_get_name_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_name_29", Cocos2dxBind_cocos2d__Scene_set_name_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_user_data_57", Cocos2dxBind_cocos2d__Scene_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_user_data_58", Cocos2dxBind_cocos2d__Scene_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Scene", "set_user_data_29", Cocos2dxBind_cocos2d__Scene_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_user_object_57", Cocos2dxBind_cocos2d__Scene_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_user_object_58", Cocos2dxBind_cocos2d__Scene_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Scene", "set_user_object_29", Cocos2dxBind_cocos2d__Scene_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_gl_program_29", Cocos2dxBind_cocos2d__Scene_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_gl_program_28", Cocos2dxBind_cocos2d__Scene_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Scene_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Scene_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Scene", "is_running_29", Cocos2dxBind_cocos2d__Scene_is_running_29);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Scene_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Scene", "on_enter_18", Cocos2dxBind_cocos2d__Scene_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Scene", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Scene_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Scene", "on_exit_18", Cocos2dxBind_cocos2d__Scene_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Scene", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Scene_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Scene", "cleanup_25", Cocos2dxBind_cocos2d__Scene_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Scene", "draw_27", Cocos2dxBind_cocos2d__Scene_draw_27);
            binder.bind_custom_method("Cocos2d", "Scene", "draw_28", Cocos2dxBind_cocos2d__Scene_draw_28);
            binder.bind_custom_method("Cocos2d", "Scene", "visit_31", Cocos2dxBind_cocos2d__Scene_visit_31);
            binder.bind_custom_method("Cocos2d", "Scene", "visit_32", Cocos2dxBind_cocos2d__Scene_visit_32);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scene_29", Cocos2dxBind_cocos2d__Scene_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_bounding_box_26", Cocos2dxBind_cocos2d__Scene_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "Scene", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Scene_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Scene_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_action_manager_29", Cocos2dxBind_cocos2d__Scene_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_action_manager_57", Cocos2dxBind_cocos2d__Scene_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_action_manager_58", Cocos2dxBind_cocos2d__Scene_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Scene", "run_action_28", Cocos2dxBind_cocos2d__Scene_run_action_28);
            binder.bind_custom_method("Cocos2d", "Scene", "stop_all_actions_29", Cocos2dxBind_cocos2d__Scene_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Scene", "stop_action_29", Cocos2dxBind_cocos2d__Scene_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Scene", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Scene_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Scene_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Scene_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Scene_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Scene_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_scheduler_29", Cocos2dxBind_cocos2d__Scene_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scheduler_57", Cocos2dxBind_cocos2d__Scene_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_scheduler_58", Cocos2dxBind_cocos2d__Scene_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Scene", "is_scheduled_58", Cocos2dxBind_cocos2d__Scene_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_update_29", Cocos2dxBind_cocos2d__Scene_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Scene_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Scene", "unschedule_update_29", Cocos2dxBind_cocos2d__Scene_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_once_58", Cocos2dxBind_cocos2d__Scene_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_172", Cocos2dxBind_cocos2d__Scene_schedule_172);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_173", Cocos2dxBind_cocos2d__Scene_schedule_173);
            binder.bind_custom_method("Cocos2d", "Scene", "schedule_174", Cocos2dxBind_cocos2d__Scene_schedule_174);
            binder.bind_custom_method("Cocos2d", "Scene", "unschedule_58", Cocos2dxBind_cocos2d__Scene_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Scene", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Scene_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Scene", "resume_29", Cocos2dxBind_cocos2d__Scene_resume_29);
            binder.bind_custom_method("Cocos2d", "Scene", "pause_29", Cocos2dxBind_cocos2d__Scene_pause_29);
            binder.bind_custom_method("Cocos2d", "Scene", "update_26", Cocos2dxBind_cocos2d__Scene_update_26);
            binder.bind_custom_method("Cocos2d", "Scene", "update_transform_28", Cocos2dxBind_cocos2d__Scene_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Scene_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Scene_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Scene_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Scene_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Scene", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Scene_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Scene_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Scene_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Scene_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Scene_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Scene_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Scene_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Scene_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Scene_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Scene_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Scene_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Scene_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Scene", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Scene_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_additional_transform_58", Cocos2dxBind_cocos2d__Scene_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Scene", "get_component_29", Cocos2dxBind_cocos2d__Scene_get_component_29);
            binder.bind_custom_method("Cocos2d", "Scene", "add_component_29", Cocos2dxBind_cocos2d__Scene_add_component_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_component_57", Cocos2dxBind_cocos2d__Scene_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_component_58", Cocos2dxBind_cocos2d__Scene_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_all_components_29", Cocos2dxBind_cocos2d__Scene_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_physics_body_29", Cocos2dxBind_cocos2d__Scene_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_physics_body_29", Cocos2dxBind_cocos2d__Scene_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Scene", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Scene_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Scene", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Scene_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Scene", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Scene_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_opacity_28", Cocos2dxBind_cocos2d__Scene_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Scene", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Scene_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_opacity_26", Cocos2dxBind_cocos2d__Scene_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Scene", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Scene_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Scene", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Scene_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Scene_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_color_27", Cocos2dxBind_cocos2d__Scene_get_color_27);
            binder.bind_custom_method("Cocos2d", "Scene", "get_displayed_color_29", Cocos2dxBind_cocos2d__Scene_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_color_27", Cocos2dxBind_cocos2d__Scene_set_color_27);
            binder.bind_custom_method("Cocos2d", "Scene", "update_displayed_color_23", Cocos2dxBind_cocos2d__Scene_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Scene", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Scene_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Scene_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Scene_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Scene", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Scene_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Scene", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Scene_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Scene_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Scene", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Scene_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Scene", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Scene_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Scene", "get_camera_mask_29", Cocos2dxBind_cocos2d__Scene_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Scene", "set_camera_mask_22", Cocos2dxBind_cocos2d__Scene_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Scene", "retain_176", Cocos2dxBind_cocos2d__Scene_retain_176);
            binder.bind_custom_method("Cocos2d", "Scene", "release_176", Cocos2dxBind_cocos2d__Scene_release_176);
            binder.bind_custom_method("Cocos2d", "Scene", "autorelease_176", Cocos2dxBind_cocos2d__Scene_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Scene", "get_reference_count_176", Cocos2dxBind_cocos2d__Scene_get_reference_count_176);
            binder.bind_static_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "create", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_create);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "set_value", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_set_value);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "get_value", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_get_value);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "set_on_delete", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_set_on_delete);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "retain_176", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_retain_176);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "release_176", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_release_176);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "autorelease_176", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_autorelease_176);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "get_reference_count_176", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_get_reference_count_176);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_id=", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__id);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_id", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__id);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_lua_id=", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__lua_id);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_lua_id", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__lua_id);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_script_object=", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__script_object);
            binder.bind_custom_method("CorCocos2dxMrubyInterface", "CocosMrubyRef", "_script_object", Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Director", "get_instance", Cocos2dxBind_cocos2d__Director_get_instance);
            binder.bind_custom_method("Cocos2d", "Director", "init", Cocos2dxBind_cocos2d__Director_init);
            binder.bind_custom_method("Cocos2d", "Director", "get_running_scene", Cocos2dxBind_cocos2d__Director_get_running_scene);
            binder.bind_custom_method("Cocos2d", "Director", "get_animation_interval", Cocos2dxBind_cocos2d__Director_get_animation_interval);
            binder.bind_custom_method("Cocos2d", "Director", "set_animation_interval", Cocos2dxBind_cocos2d__Director_set_animation_interval);
            binder.bind_custom_method("Cocos2d", "Director", "is_display_stats", Cocos2dxBind_cocos2d__Director_is_display_stats);
            binder.bind_custom_method("Cocos2d", "Director", "set_display_stats", Cocos2dxBind_cocos2d__Director_set_display_stats);
            binder.bind_custom_method("Cocos2d", "Director", "get_seconds_per_frame", Cocos2dxBind_cocos2d__Director_get_seconds_per_frame);
            binder.bind_custom_method("Cocos2d", "Director", "get_open_gl_view", Cocos2dxBind_cocos2d__Director_get_open_gl_view);
            binder.bind_custom_method("Cocos2d", "Director", "set_open_gl_view", Cocos2dxBind_cocos2d__Director_set_open_gl_view);
            binder.bind_custom_method("Cocos2d", "Director", "get_texture_cache", Cocos2dxBind_cocos2d__Director_get_texture_cache);
            binder.bind_custom_method("Cocos2d", "Director", "is_next_delta_time_zero", Cocos2dxBind_cocos2d__Director_is_next_delta_time_zero);
            binder.bind_custom_method("Cocos2d", "Director", "set_next_delta_time_zero", Cocos2dxBind_cocos2d__Director_set_next_delta_time_zero);
            binder.bind_custom_method("Cocos2d", "Director", "is_paused", Cocos2dxBind_cocos2d__Director_is_paused);
            binder.bind_custom_method("Cocos2d", "Director", "get_total_frames", Cocos2dxBind_cocos2d__Director_get_total_frames);
            binder.bind_custom_method("Cocos2d", "Director", "get_projection", Cocos2dxBind_cocos2d__Director_get_projection);
            binder.bind_custom_method("Cocos2d", "Director", "set_projection", Cocos2dxBind_cocos2d__Director_set_projection);
            binder.bind_custom_method("Cocos2d", "Director", "set_viewport", Cocos2dxBind_cocos2d__Director_set_viewport);
            binder.bind_custom_method("Cocos2d", "Director", "is_send_cleanup_to_scene", Cocos2dxBind_cocos2d__Director_is_send_cleanup_to_scene);
            binder.bind_custom_method("Cocos2d", "Director", "get_notification_node", Cocos2dxBind_cocos2d__Director_get_notification_node);
            binder.bind_custom_method("Cocos2d", "Director", "set_notification_node", Cocos2dxBind_cocos2d__Director_set_notification_node);
            binder.bind_custom_method("Cocos2d", "Director", "get_win_size", Cocos2dxBind_cocos2d__Director_get_win_size);
            binder.bind_custom_method("Cocos2d", "Director", "get_win_size_in_pixels", Cocos2dxBind_cocos2d__Director_get_win_size_in_pixels);
            binder.bind_custom_method("Cocos2d", "Director", "get_visible_size", Cocos2dxBind_cocos2d__Director_get_visible_size);
            binder.bind_custom_method("Cocos2d", "Director", "get_visible_origin", Cocos2dxBind_cocos2d__Director_get_visible_origin);
            binder.bind_custom_method("Cocos2d", "Director", "convert_to_gl", Cocos2dxBind_cocos2d__Director_convert_to_gl);
            binder.bind_custom_method("Cocos2d", "Director", "convert_to_ui", Cocos2dxBind_cocos2d__Director_convert_to_ui);
            binder.bind_custom_method("Cocos2d", "Director", "get_z_eye", Cocos2dxBind_cocos2d__Director_get_z_eye);
            binder.bind_custom_method("Cocos2d", "Director", "run_with_scene", Cocos2dxBind_cocos2d__Director_run_with_scene);
            binder.bind_custom_method("Cocos2d", "Director", "push_scene", Cocos2dxBind_cocos2d__Director_push_scene);
            binder.bind_custom_method("Cocos2d", "Director", "pop_scene", Cocos2dxBind_cocos2d__Director_pop_scene);
            binder.bind_custom_method("Cocos2d", "Director", "pop_to_root_scene", Cocos2dxBind_cocos2d__Director_pop_to_root_scene);
            binder.bind_custom_method("Cocos2d", "Director", "pop_to_scene_stack_level", Cocos2dxBind_cocos2d__Director_pop_to_scene_stack_level);
            binder.bind_custom_method("Cocos2d", "Director", "replace_scene", Cocos2dxBind_cocos2d__Director_replace_scene);
            binder.bind_custom_method("Cocos2d", "Director", "end", Cocos2dxBind_cocos2d__Director_end);
            binder.bind_custom_method("Cocos2d", "Director", "pause", Cocos2dxBind_cocos2d__Director_pause);
            binder.bind_custom_method("Cocos2d", "Director", "resume", Cocos2dxBind_cocos2d__Director_resume);
            binder.bind_custom_method("Cocos2d", "Director", "restart", Cocos2dxBind_cocos2d__Director_restart);
            binder.bind_custom_method("Cocos2d", "Director", "stop_animation", Cocos2dxBind_cocos2d__Director_stop_animation);
            binder.bind_custom_method("Cocos2d", "Director", "start_animation", Cocos2dxBind_cocos2d__Director_start_animation);
            binder.bind_custom_method("Cocos2d", "Director", "draw_scene", Cocos2dxBind_cocos2d__Director_draw_scene);
            binder.bind_custom_method("Cocos2d", "Director", "purge_cached_data", Cocos2dxBind_cocos2d__Director_purge_cached_data);
            binder.bind_custom_method("Cocos2d", "Director", "set_default_values", Cocos2dxBind_cocos2d__Director_set_default_values);
            binder.bind_custom_method("Cocos2d", "Director", "set_gl_default_values", Cocos2dxBind_cocos2d__Director_set_gl_default_values);
            binder.bind_custom_method("Cocos2d", "Director", "set_alpha_blending", Cocos2dxBind_cocos2d__Director_set_alpha_blending);
            binder.bind_custom_method("Cocos2d", "Director", "set_clear_color", Cocos2dxBind_cocos2d__Director_set_clear_color);
            binder.bind_custom_method("Cocos2d", "Director", "set_depth_test", Cocos2dxBind_cocos2d__Director_set_depth_test);
            binder.bind_custom_method("Cocos2d", "Director", "main_loop", Cocos2dxBind_cocos2d__Director_main_loop);
            binder.bind_custom_method("Cocos2d", "Director", "set_content_scale_factor", Cocos2dxBind_cocos2d__Director_set_content_scale_factor);
            binder.bind_custom_method("Cocos2d", "Director", "get_content_scale_factor", Cocos2dxBind_cocos2d__Director_get_content_scale_factor);
            binder.bind_custom_method("Cocos2d", "Director", "get_scheduler", Cocos2dxBind_cocos2d__Director_get_scheduler);
            binder.bind_custom_method("Cocos2d", "Director", "set_scheduler", Cocos2dxBind_cocos2d__Director_set_scheduler);
            binder.bind_custom_method("Cocos2d", "Director", "get_action_manager", Cocos2dxBind_cocos2d__Director_get_action_manager);
            binder.bind_custom_method("Cocos2d", "Director", "set_action_manager", Cocos2dxBind_cocos2d__Director_set_action_manager);
            binder.bind_custom_method("Cocos2d", "Director", "get_event_dispatcher", Cocos2dxBind_cocos2d__Director_get_event_dispatcher);
            binder.bind_custom_method("Cocos2d", "Director", "set_event_dispatcher", Cocos2dxBind_cocos2d__Director_set_event_dispatcher);
            binder.bind_custom_method("Cocos2d", "Director", "get_renderer", Cocos2dxBind_cocos2d__Director_get_renderer);
            binder.bind_custom_method("Cocos2d", "Director", "get_console", Cocos2dxBind_cocos2d__Director_get_console);
            binder.bind_custom_method("Cocos2d", "Director", "get_delta_time", Cocos2dxBind_cocos2d__Director_get_delta_time);
            binder.bind_custom_method("Cocos2d", "Director", "get_frame_rate", Cocos2dxBind_cocos2d__Director_get_frame_rate);
            binder.bind_custom_method("Cocos2d", "Director", "push_matrix", Cocos2dxBind_cocos2d__Director_push_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "pop_matrix", Cocos2dxBind_cocos2d__Director_pop_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "load_identity_matrix", Cocos2dxBind_cocos2d__Director_load_identity_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "load_matrix", Cocos2dxBind_cocos2d__Director_load_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "multiply_matrix", Cocos2dxBind_cocos2d__Director_multiply_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "get_matrix", Cocos2dxBind_cocos2d__Director_get_matrix);
            binder.bind_custom_method("Cocos2d", "Director", "reset_matrix_stack", Cocos2dxBind_cocos2d__Director_reset_matrix_stack);
            binder.bind_custom_method("Cocos2d", "Director", "get_cocos2d_thread_id", Cocos2dxBind_cocos2d__Director_get_cocos2d_thread_id);
            binder.bind_custom_method("Cocos2d", "Director", "retain_176", Cocos2dxBind_cocos2d__Director_retain_176);
            binder.bind_custom_method("Cocos2d", "Director", "release_176", Cocos2dxBind_cocos2d__Director_release_176);
            binder.bind_custom_method("Cocos2d", "Director", "autorelease_176", Cocos2dxBind_cocos2d__Director_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Director", "get_reference_count_176", Cocos2dxBind_cocos2d__Director_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Director", "_id=", Cocos2dxBind_cocos2d__Director_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Director", "_id", Cocos2dxBind_cocos2d__Director_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Director", "_lua_id=", Cocos2dxBind_cocos2d__Director_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Director", "_lua_id", Cocos2dxBind_cocos2d__Director_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Director", "_script_object=", Cocos2dxBind_cocos2d__Director_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Director", "_script_object", Cocos2dxBind_cocos2d__Director_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Animation3D", "create", Cocos2dxBind_cocos2d__Animation3D_create);
            binder.bind_custom_method("Cocos2d", "Animation3D", "get_duration", Cocos2dxBind_cocos2d__Animation3D_get_duration);
            binder.bind_custom_method("Cocos2d", "Animation3D", "get_bone_curve_by_name", Cocos2dxBind_cocos2d__Animation3D_get_bone_curve_by_name);
            binder.bind_custom_method("Cocos2d", "Animation3D", "get_bone_curves", Cocos2dxBind_cocos2d__Animation3D_get_bone_curves);
            binder.bind_custom_method("Cocos2d", "Animation3D", "init", Cocos2dxBind_cocos2d__Animation3D_init);
            binder.bind_custom_method("Cocos2d", "Animation3D", "init_with_file", Cocos2dxBind_cocos2d__Animation3D_init_with_file);
            binder.bind_custom_method("Cocos2d", "Animation3D", "retain_176", Cocos2dxBind_cocos2d__Animation3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Animation3D", "release_176", Cocos2dxBind_cocos2d__Animation3D_release_176);
            binder.bind_custom_method("Cocos2d", "Animation3D", "autorelease_176", Cocos2dxBind_cocos2d__Animation3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Animation3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Animation3D_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_id=", Cocos2dxBind_cocos2d__Animation3D_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_id", Cocos2dxBind_cocos2d__Animation3D_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_lua_id=", Cocos2dxBind_cocos2d__Animation3D_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_lua_id", Cocos2dxBind_cocos2d__Animation3D_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_script_object=", Cocos2dxBind_cocos2d__Animation3D_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Animation3D", "_script_object", Cocos2dxBind_cocos2d__Animation3D_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Animate3D", "create_1", Cocos2dxBind_cocos2d__Animate3D_create_1);
            binder.bind_static_method("Cocos2d", "Animate3D", "create_2", Cocos2dxBind_cocos2d__Animate3D_create_2);
            binder.bind_static_method("Cocos2d", "Animate3D", "create_with_frames", Cocos2dxBind_cocos2d__Animate3D_create_with_frames);
            binder.bind_custom_method("Cocos2d", "Animate3D", "stop", Cocos2dxBind_cocos2d__Animate3D_stop);
            binder.bind_custom_method("Cocos2d", "Animate3D", "step", Cocos2dxBind_cocos2d__Animate3D_step);
            binder.bind_custom_method("Cocos2d", "Animate3D", "start_with_target", Cocos2dxBind_cocos2d__Animate3D_start_with_target);
            binder.bind_custom_method("Cocos2d", "Animate3D", "reverse", Cocos2dxBind_cocos2d__Animate3D_reverse);
            binder.bind_custom_method("Cocos2d", "Animate3D", "clone", Cocos2dxBind_cocos2d__Animate3D_clone);
            binder.bind_custom_method("Cocos2d", "Animate3D", "update", Cocos2dxBind_cocos2d__Animate3D_update);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_speed", Cocos2dxBind_cocos2d__Animate3D_get_speed);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_speed", Cocos2dxBind_cocos2d__Animate3D_set_speed);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_weight", Cocos2dxBind_cocos2d__Animate3D_get_weight);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_weight", Cocos2dxBind_cocos2d__Animate3D_set_weight);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_origin_interval", Cocos2dxBind_cocos2d__Animate3D_set_origin_interval);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_origin_interval", Cocos2dxBind_cocos2d__Animate3D_get_origin_interval);
            binder.bind_static_method("Cocos2d", "Animate3D", "get_transition_time", Cocos2dxBind_cocos2d__Animate3D_get_transition_time);
            binder.bind_static_method("Cocos2d", "Animate3D", "set_transition_time", Cocos2dxBind_cocos2d__Animate3D_set_transition_time);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_quality", Cocos2dxBind_cocos2d__Animate3D_set_quality);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_quality", Cocos2dxBind_cocos2d__Animate3D_get_quality);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_key_frame_user_info", Cocos2dxBind_cocos2d__Animate3D_set_key_frame_user_info);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_key_frame_user_info_2", Cocos2dxBind_cocos2d__Animate3D_get_key_frame_user_info_2);
            binder.bind_custom_method("Cocos2d", "Animate3D", "remove_from_map", Cocos2dxBind_cocos2d__Animate3D_remove_from_map);
            binder.bind_custom_method("Cocos2d", "Animate3D", "init_1", Cocos2dxBind_cocos2d__Animate3D_init_1);
            binder.bind_custom_method("Cocos2d", "Animate3D", "init_2", Cocos2dxBind_cocos2d__Animate3D_init_2);
            binder.bind_custom_method("Cocos2d", "Animate3D", "init_with_frames", Cocos2dxBind_cocos2d__Animate3D_init_with_frames);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_elapsed_90", Cocos2dxBind_cocos2d__Animate3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Animate3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Animate3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Animate3D", "is_done_87", Cocos2dxBind_cocos2d__Animate3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "Animate3D", "init_with_duration_52", Cocos2dxBind_cocos2d__Animate3D_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_duration_103", Cocos2dxBind_cocos2d__Animate3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_duration_103", Cocos2dxBind_cocos2d__Animate3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Animate3D", "description_106", Cocos2dxBind_cocos2d__Animate3D_description_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_target_106", Cocos2dxBind_cocos2d__Animate3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_target_106", Cocos2dxBind_cocos2d__Animate3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_original_target_106", Cocos2dxBind_cocos2d__Animate3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_original_target_106", Cocos2dxBind_cocos2d__Animate3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_tag_106", Cocos2dxBind_cocos2d__Animate3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_tag_106", Cocos2dxBind_cocos2d__Animate3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_flags_106", Cocos2dxBind_cocos2d__Animate3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "set_flags_106", Cocos2dxBind_cocos2d__Animate3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Animate3D", "retain_176", Cocos2dxBind_cocos2d__Animate3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Animate3D", "release_176", Cocos2dxBind_cocos2d__Animate3D_release_176);
            binder.bind_custom_method("Cocos2d", "Animate3D", "autorelease_176", Cocos2dxBind_cocos2d__Animate3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Animate3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Animate3D_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Data", "get_bytes", Cocos2dxBind_cocos2d__Data_get_bytes);
            binder.bind_custom_method("Cocos2d", "Data", "get_size", Cocos2dxBind_cocos2d__Data_get_size);
            binder.bind_custom_method("Cocos2d", "Data", "copy", Cocos2dxBind_cocos2d__Data_copy);
            binder.bind_custom_method("Cocos2d", "Data", "fast_set", Cocos2dxBind_cocos2d__Data_fast_set);
            binder.bind_custom_method("Cocos2d", "Data", "clear", Cocos2dxBind_cocos2d__Data_clear);
            binder.bind_custom_method("Cocos2d", "Data", "is_null", Cocos2dxBind_cocos2d__Data_is_null);
            binder.bind_custom_method("Cocos2d", "EventCustom", "set_user_data_2", Cocos2dxBind_cocos2d__EventCustom_set_user_data_2);
            binder.bind_custom_method("Cocos2d", "EventCustom", "get_user_data_2", Cocos2dxBind_cocos2d__EventCustom_get_user_data_2);
            binder.bind_custom_method("Cocos2d", "EventCustom", "get_event_name_2", Cocos2dxBind_cocos2d__EventCustom_get_event_name_2);
            binder.bind_custom_method("Cocos2d", "EventCustom", "get_type_5", Cocos2dxBind_cocos2d__EventCustom_get_type_5);
            binder.bind_custom_method("Cocos2d", "EventCustom", "stop_propagation_5", Cocos2dxBind_cocos2d__EventCustom_stop_propagation_5);
            binder.bind_custom_method("Cocos2d", "EventCustom", "is_stopped_5", Cocos2dxBind_cocos2d__EventCustom_is_stopped_5);
            binder.bind_custom_method("Cocos2d", "EventCustom", "get_current_target_5", Cocos2dxBind_cocos2d__EventCustom_get_current_target_5);
            binder.bind_custom_method("Cocos2d", "EventCustom", "retain_176", Cocos2dxBind_cocos2d__EventCustom_retain_176);
            binder.bind_custom_method("Cocos2d", "EventCustom", "release_176", Cocos2dxBind_cocos2d__EventCustom_release_176);
            binder.bind_custom_method("Cocos2d", "EventCustom", "autorelease_176", Cocos2dxBind_cocos2d__EventCustom_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventCustom", "get_reference_count_176", Cocos2dxBind_cocos2d__EventCustom_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "add_event_listener_with_scene_graph_priority", Cocos2dxBind_cocos2d__EventDispatcher_add_event_listener_with_scene_graph_priority);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "add_event_listener_with_fixed_priority", Cocos2dxBind_cocos2d__EventDispatcher_add_event_listener_with_fixed_priority);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "add_custom_event_listener", Cocos2dxBind_cocos2d__EventDispatcher_add_custom_event_listener);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "remove_event_listener", Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listener);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "remove_event_listeners_for_type", Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listeners_for_type);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "remove_event_listeners_for_target", Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listeners_for_target);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "remove_custom_event_listeners", Cocos2dxBind_cocos2d__EventDispatcher_remove_custom_event_listeners);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "remove_all_event_listeners", Cocos2dxBind_cocos2d__EventDispatcher_remove_all_event_listeners);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "pause_event_listeners_for_target", Cocos2dxBind_cocos2d__EventDispatcher_pause_event_listeners_for_target);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "resume_event_listeners_for_target", Cocos2dxBind_cocos2d__EventDispatcher_resume_event_listeners_for_target);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "set_priority", Cocos2dxBind_cocos2d__EventDispatcher_set_priority);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "set_enabled", Cocos2dxBind_cocos2d__EventDispatcher_set_enabled);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "is_enabled", Cocos2dxBind_cocos2d__EventDispatcher_is_enabled);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "dispatch_event", Cocos2dxBind_cocos2d__EventDispatcher_dispatch_event);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "dispatch_custom_event", Cocos2dxBind_cocos2d__EventDispatcher_dispatch_custom_event);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "retain_176", Cocos2dxBind_cocos2d__EventDispatcher_retain_176);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "release_176", Cocos2dxBind_cocos2d__EventDispatcher_release_176);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "autorelease_176", Cocos2dxBind_cocos2d__EventDispatcher_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "get_reference_count_176", Cocos2dxBind_cocos2d__EventDispatcher_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_id=", Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_id", Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_lua_id=", Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_lua_id", Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_script_object=", Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "EventDispatcher", "_script_object", Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "EventListenerCustom", "create", Cocos2dxBind_cocos2d__EventListenerCustom_create);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "check_available", Cocos2dxBind_cocos2d__EventListenerCustom_check_available);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "clone", Cocos2dxBind_cocos2d__EventListenerCustom_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "init", Cocos2dxBind_cocos2d__EventListenerCustom_init);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerCustom_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerCustom_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "retain_176", Cocos2dxBind_cocos2d__EventListenerCustom_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "release_176", Cocos2dxBind_cocos2d__EventListenerCustom_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerCustom_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerCustom", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerCustom_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EventListenerKeyboard", "create", Cocos2dxBind_cocos2d__EventListenerKeyboard_create);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "clone", Cocos2dxBind_cocos2d__EventListenerKeyboard_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "check_available", Cocos2dxBind_cocos2d__EventListenerKeyboard_check_available);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "init", Cocos2dxBind_cocos2d__EventListenerKeyboard_init);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerKeyboard_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerKeyboard_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "retain_176", Cocos2dxBind_cocos2d__EventListenerKeyboard_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "release_176", Cocos2dxBind_cocos2d__EventListenerKeyboard_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerKeyboard_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerKeyboard_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "on_key_pressed=", Cocos2dxBind_cocos2d__EventListenerKeyboard_accessor_set_on_key_pressed);
            binder.bind_custom_method("Cocos2d", "EventListenerKeyboard", "on_key_released=", Cocos2dxBind_cocos2d__EventListenerKeyboard_accessor_set_on_key_released);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "start_with_target", Cocos2dxBind_cocos2d__ActionCamera_start_with_target);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "reverse_2", Cocos2dxBind_cocos2d__ActionCamera_reverse_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "clone", Cocos2dxBind_cocos2d__ActionCamera_clone);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_eye_3", Cocos2dxBind_cocos2d__ActionCamera_set_eye_3);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_eye_4", Cocos2dxBind_cocos2d__ActionCamera_set_eye_4);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_eye_2", Cocos2dxBind_cocos2d__ActionCamera_get_eye_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_center_2", Cocos2dxBind_cocos2d__ActionCamera_set_center_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_center_2", Cocos2dxBind_cocos2d__ActionCamera_get_center_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_up_2", Cocos2dxBind_cocos2d__ActionCamera_set_up_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_up_2", Cocos2dxBind_cocos2d__ActionCamera_get_up_2);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_elapsed_90", Cocos2dxBind_cocos2d__ActionCamera_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionCamera_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionCamera_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "is_done_87", Cocos2dxBind_cocos2d__ActionCamera_is_done_87);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "step_88", Cocos2dxBind_cocos2d__ActionCamera_step_88);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "init_with_duration_52", Cocos2dxBind_cocos2d__ActionCamera_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_duration_103", Cocos2dxBind_cocos2d__ActionCamera_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_duration_103", Cocos2dxBind_cocos2d__ActionCamera_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "description_106", Cocos2dxBind_cocos2d__ActionCamera_description_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "stop_58", Cocos2dxBind_cocos2d__ActionCamera_stop_58);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "update_9", Cocos2dxBind_cocos2d__ActionCamera_update_9);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_target_106", Cocos2dxBind_cocos2d__ActionCamera_get_target_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_target_106", Cocos2dxBind_cocos2d__ActionCamera_set_target_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_original_target_106", Cocos2dxBind_cocos2d__ActionCamera_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_original_target_106", Cocos2dxBind_cocos2d__ActionCamera_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_tag_106", Cocos2dxBind_cocos2d__ActionCamera_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_tag_106", Cocos2dxBind_cocos2d__ActionCamera_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_flags_106", Cocos2dxBind_cocos2d__ActionCamera_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "set_flags_106", Cocos2dxBind_cocos2d__ActionCamera_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "retain_176", Cocos2dxBind_cocos2d__ActionCamera_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "release_176", Cocos2dxBind_cocos2d__ActionCamera_release_176);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "autorelease_176", Cocos2dxBind_cocos2d__ActionCamera_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionCamera", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionCamera_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "OrbitCamera", "create", Cocos2dxBind_cocos2d__OrbitCamera_create);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "spherical_radius", Cocos2dxBind_cocos2d__OrbitCamera_spherical_radius);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "clone", Cocos2dxBind_cocos2d__OrbitCamera_clone);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "start_with_target", Cocos2dxBind_cocos2d__OrbitCamera_start_with_target);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "update", Cocos2dxBind_cocos2d__OrbitCamera_update);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "init_with_duration", Cocos2dxBind_cocos2d__OrbitCamera_init_with_duration);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "reverse_2", Cocos2dxBind_cocos2d__OrbitCamera_reverse_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_eye_3", Cocos2dxBind_cocos2d__OrbitCamera_set_eye_3);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_eye_4", Cocos2dxBind_cocos2d__OrbitCamera_set_eye_4);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_eye_2", Cocos2dxBind_cocos2d__OrbitCamera_get_eye_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_center_2", Cocos2dxBind_cocos2d__OrbitCamera_set_center_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_center_2", Cocos2dxBind_cocos2d__OrbitCamera_get_center_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_up_2", Cocos2dxBind_cocos2d__OrbitCamera_set_up_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_up_2", Cocos2dxBind_cocos2d__OrbitCamera_get_up_2);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_elapsed_90", Cocos2dxBind_cocos2d__OrbitCamera_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__OrbitCamera_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__OrbitCamera_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "is_done_87", Cocos2dxBind_cocos2d__OrbitCamera_is_done_87);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "step_88", Cocos2dxBind_cocos2d__OrbitCamera_step_88);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_duration_103", Cocos2dxBind_cocos2d__OrbitCamera_get_duration_103);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_duration_103", Cocos2dxBind_cocos2d__OrbitCamera_set_duration_103);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "description_106", Cocos2dxBind_cocos2d__OrbitCamera_description_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "stop_58", Cocos2dxBind_cocos2d__OrbitCamera_stop_58);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_target_106", Cocos2dxBind_cocos2d__OrbitCamera_get_target_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_target_106", Cocos2dxBind_cocos2d__OrbitCamera_set_target_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_original_target_106", Cocos2dxBind_cocos2d__OrbitCamera_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_original_target_106", Cocos2dxBind_cocos2d__OrbitCamera_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_tag_106", Cocos2dxBind_cocos2d__OrbitCamera_get_tag_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_tag_106", Cocos2dxBind_cocos2d__OrbitCamera_set_tag_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_flags_106", Cocos2dxBind_cocos2d__OrbitCamera_get_flags_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "set_flags_106", Cocos2dxBind_cocos2d__OrbitCamera_set_flags_106);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "retain_176", Cocos2dxBind_cocos2d__OrbitCamera_retain_176);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "release_176", Cocos2dxBind_cocos2d__OrbitCamera_release_176);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "autorelease_176", Cocos2dxBind_cocos2d__OrbitCamera_autorelease_176);
            binder.bind_custom_method("Cocos2d", "OrbitCamera", "get_reference_count_176", Cocos2dxBind_cocos2d__OrbitCamera_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PointArray", "create", Cocos2dxBind_cocos2d__PointArray_create);
            binder.bind_custom_method("Cocos2d", "PointArray", "init_with_capacity", Cocos2dxBind_cocos2d__PointArray_init_with_capacity);
            binder.bind_custom_method("Cocos2d", "PointArray", "add_control_point", Cocos2dxBind_cocos2d__PointArray_add_control_point);
            binder.bind_custom_method("Cocos2d", "PointArray", "get_control_point_at_index", Cocos2dxBind_cocos2d__PointArray_get_control_point_at_index);
            binder.bind_custom_method("Cocos2d", "PointArray", "remove_control_point_at_index", Cocos2dxBind_cocos2d__PointArray_remove_control_point_at_index);
            binder.bind_custom_method("Cocos2d", "PointArray", "count", Cocos2dxBind_cocos2d__PointArray_count);
            binder.bind_custom_method("Cocos2d", "PointArray", "reverse", Cocos2dxBind_cocos2d__PointArray_reverse);
            binder.bind_custom_method("Cocos2d", "PointArray", "reverse_inline", Cocos2dxBind_cocos2d__PointArray_reverse_inline);
            binder.bind_custom_method("Cocos2d", "PointArray", "clone", Cocos2dxBind_cocos2d__PointArray_clone);
            binder.bind_custom_method("Cocos2d", "PointArray", "get_control_points", Cocos2dxBind_cocos2d__PointArray_get_control_points);
            binder.bind_custom_method("Cocos2d", "PointArray", "set_control_points", Cocos2dxBind_cocos2d__PointArray_set_control_points);
            binder.bind_custom_method("Cocos2d", "PointArray", "retain_176", Cocos2dxBind_cocos2d__PointArray_retain_176);
            binder.bind_custom_method("Cocos2d", "PointArray", "release_176", Cocos2dxBind_cocos2d__PointArray_release_176);
            binder.bind_custom_method("Cocos2d", "PointArray", "autorelease_176", Cocos2dxBind_cocos2d__PointArray_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PointArray", "get_reference_count_176", Cocos2dxBind_cocos2d__PointArray_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "PointArray", "_id=", Cocos2dxBind_cocos2d__PointArray_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "PointArray", "_id", Cocos2dxBind_cocos2d__PointArray_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "PointArray", "_lua_id=", Cocos2dxBind_cocos2d__PointArray_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "PointArray", "_lua_id", Cocos2dxBind_cocos2d__PointArray_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "PointArray", "_script_object=", Cocos2dxBind_cocos2d__PointArray_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "PointArray", "_script_object", Cocos2dxBind_cocos2d__PointArray_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "CardinalSplineTo", "create", Cocos2dxBind_cocos2d__CardinalSplineTo_create);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "init_with_duration_2", Cocos2dxBind_cocos2d__CardinalSplineTo_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_points_4", Cocos2dxBind_cocos2d__CardinalSplineTo_get_points_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_points_4", Cocos2dxBind_cocos2d__CardinalSplineTo_set_points_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "clone", Cocos2dxBind_cocos2d__CardinalSplineTo_clone);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "reverse", Cocos2dxBind_cocos2d__CardinalSplineTo_reverse);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "start_with_target_2", Cocos2dxBind_cocos2d__CardinalSplineTo_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "update_4", Cocos2dxBind_cocos2d__CardinalSplineTo_update_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_elapsed_90", Cocos2dxBind_cocos2d__CardinalSplineTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__CardinalSplineTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__CardinalSplineTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "is_done_87", Cocos2dxBind_cocos2d__CardinalSplineTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "step_88", Cocos2dxBind_cocos2d__CardinalSplineTo_step_88);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_duration_103", Cocos2dxBind_cocos2d__CardinalSplineTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_duration_103", Cocos2dxBind_cocos2d__CardinalSplineTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "description_106", Cocos2dxBind_cocos2d__CardinalSplineTo_description_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "stop_58", Cocos2dxBind_cocos2d__CardinalSplineTo_stop_58);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_target_106", Cocos2dxBind_cocos2d__CardinalSplineTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_target_106", Cocos2dxBind_cocos2d__CardinalSplineTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_original_target_106", Cocos2dxBind_cocos2d__CardinalSplineTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_original_target_106", Cocos2dxBind_cocos2d__CardinalSplineTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_tag_106", Cocos2dxBind_cocos2d__CardinalSplineTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_tag_106", Cocos2dxBind_cocos2d__CardinalSplineTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_flags_106", Cocos2dxBind_cocos2d__CardinalSplineTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "set_flags_106", Cocos2dxBind_cocos2d__CardinalSplineTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "retain_176", Cocos2dxBind_cocos2d__CardinalSplineTo_retain_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "release_176", Cocos2dxBind_cocos2d__CardinalSplineTo_release_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "autorelease_176", Cocos2dxBind_cocos2d__CardinalSplineTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineTo", "get_reference_count_176", Cocos2dxBind_cocos2d__CardinalSplineTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "CardinalSplineBy", "create", Cocos2dxBind_cocos2d__CardinalSplineBy_create);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "start_with_target_2", Cocos2dxBind_cocos2d__CardinalSplineBy_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "clone", Cocos2dxBind_cocos2d__CardinalSplineBy_clone);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "reverse", Cocos2dxBind_cocos2d__CardinalSplineBy_reverse);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "init_with_duration_2", Cocos2dxBind_cocos2d__CardinalSplineBy_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_points_4", Cocos2dxBind_cocos2d__CardinalSplineBy_get_points_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_points_4", Cocos2dxBind_cocos2d__CardinalSplineBy_set_points_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "update_4", Cocos2dxBind_cocos2d__CardinalSplineBy_update_4);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_elapsed_90", Cocos2dxBind_cocos2d__CardinalSplineBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__CardinalSplineBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__CardinalSplineBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "is_done_87", Cocos2dxBind_cocos2d__CardinalSplineBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "step_88", Cocos2dxBind_cocos2d__CardinalSplineBy_step_88);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_duration_103", Cocos2dxBind_cocos2d__CardinalSplineBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_duration_103", Cocos2dxBind_cocos2d__CardinalSplineBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "description_106", Cocos2dxBind_cocos2d__CardinalSplineBy_description_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "stop_58", Cocos2dxBind_cocos2d__CardinalSplineBy_stop_58);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_target_106", Cocos2dxBind_cocos2d__CardinalSplineBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_target_106", Cocos2dxBind_cocos2d__CardinalSplineBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_original_target_106", Cocos2dxBind_cocos2d__CardinalSplineBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_original_target_106", Cocos2dxBind_cocos2d__CardinalSplineBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_tag_106", Cocos2dxBind_cocos2d__CardinalSplineBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_tag_106", Cocos2dxBind_cocos2d__CardinalSplineBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_flags_106", Cocos2dxBind_cocos2d__CardinalSplineBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "set_flags_106", Cocos2dxBind_cocos2d__CardinalSplineBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "retain_176", Cocos2dxBind_cocos2d__CardinalSplineBy_retain_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "release_176", Cocos2dxBind_cocos2d__CardinalSplineBy_release_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "autorelease_176", Cocos2dxBind_cocos2d__CardinalSplineBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CardinalSplineBy", "get_reference_count_176", Cocos2dxBind_cocos2d__CardinalSplineBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "CatmullRomTo", "create", Cocos2dxBind_cocos2d__CatmullRomTo_create);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "init_with_duration", Cocos2dxBind_cocos2d__CatmullRomTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "clone", Cocos2dxBind_cocos2d__CatmullRomTo_clone);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "reverse", Cocos2dxBind_cocos2d__CatmullRomTo_reverse);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_points_4", Cocos2dxBind_cocos2d__CatmullRomTo_get_points_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_points_4", Cocos2dxBind_cocos2d__CatmullRomTo_set_points_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "start_with_target_2", Cocos2dxBind_cocos2d__CatmullRomTo_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "update_4", Cocos2dxBind_cocos2d__CatmullRomTo_update_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_elapsed_90", Cocos2dxBind_cocos2d__CatmullRomTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__CatmullRomTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__CatmullRomTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "is_done_87", Cocos2dxBind_cocos2d__CatmullRomTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "step_88", Cocos2dxBind_cocos2d__CatmullRomTo_step_88);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_duration_103", Cocos2dxBind_cocos2d__CatmullRomTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_duration_103", Cocos2dxBind_cocos2d__CatmullRomTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "description_106", Cocos2dxBind_cocos2d__CatmullRomTo_description_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "stop_58", Cocos2dxBind_cocos2d__CatmullRomTo_stop_58);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_target_106", Cocos2dxBind_cocos2d__CatmullRomTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_target_106", Cocos2dxBind_cocos2d__CatmullRomTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_original_target_106", Cocos2dxBind_cocos2d__CatmullRomTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_original_target_106", Cocos2dxBind_cocos2d__CatmullRomTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_tag_106", Cocos2dxBind_cocos2d__CatmullRomTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_tag_106", Cocos2dxBind_cocos2d__CatmullRomTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_flags_106", Cocos2dxBind_cocos2d__CatmullRomTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "set_flags_106", Cocos2dxBind_cocos2d__CatmullRomTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "retain_176", Cocos2dxBind_cocos2d__CatmullRomTo_retain_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "release_176", Cocos2dxBind_cocos2d__CatmullRomTo_release_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "autorelease_176", Cocos2dxBind_cocos2d__CatmullRomTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomTo", "get_reference_count_176", Cocos2dxBind_cocos2d__CatmullRomTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "CatmullRomBy", "create", Cocos2dxBind_cocos2d__CatmullRomBy_create);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "init_with_duration", Cocos2dxBind_cocos2d__CatmullRomBy_init_with_duration);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "clone", Cocos2dxBind_cocos2d__CatmullRomBy_clone);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "reverse", Cocos2dxBind_cocos2d__CatmullRomBy_reverse);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "start_with_target_2", Cocos2dxBind_cocos2d__CatmullRomBy_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_points_4", Cocos2dxBind_cocos2d__CatmullRomBy_get_points_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_points_4", Cocos2dxBind_cocos2d__CatmullRomBy_set_points_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "update_4", Cocos2dxBind_cocos2d__CatmullRomBy_update_4);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_elapsed_90", Cocos2dxBind_cocos2d__CatmullRomBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__CatmullRomBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__CatmullRomBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "is_done_87", Cocos2dxBind_cocos2d__CatmullRomBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "step_88", Cocos2dxBind_cocos2d__CatmullRomBy_step_88);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_duration_103", Cocos2dxBind_cocos2d__CatmullRomBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_duration_103", Cocos2dxBind_cocos2d__CatmullRomBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "description_106", Cocos2dxBind_cocos2d__CatmullRomBy_description_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "stop_58", Cocos2dxBind_cocos2d__CatmullRomBy_stop_58);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_target_106", Cocos2dxBind_cocos2d__CatmullRomBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_target_106", Cocos2dxBind_cocos2d__CatmullRomBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_original_target_106", Cocos2dxBind_cocos2d__CatmullRomBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_original_target_106", Cocos2dxBind_cocos2d__CatmullRomBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_tag_106", Cocos2dxBind_cocos2d__CatmullRomBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_tag_106", Cocos2dxBind_cocos2d__CatmullRomBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_flags_106", Cocos2dxBind_cocos2d__CatmullRomBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "set_flags_106", Cocos2dxBind_cocos2d__CatmullRomBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "retain_176", Cocos2dxBind_cocos2d__CatmullRomBy_retain_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "release_176", Cocos2dxBind_cocos2d__CatmullRomBy_release_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "autorelease_176", Cocos2dxBind_cocos2d__CatmullRomBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CatmullRomBy", "get_reference_count_176", Cocos2dxBind_cocos2d__CatmullRomBy_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_inner_action_38", Cocos2dxBind_cocos2d__ActionEase_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "ActionEase", "clone", Cocos2dxBind_cocos2d__ActionEase_clone);
            binder.bind_custom_method("Cocos2d", "ActionEase", "reverse", Cocos2dxBind_cocos2d__ActionEase_reverse);
            binder.bind_custom_method("Cocos2d", "ActionEase", "start_with_target_38", Cocos2dxBind_cocos2d__ActionEase_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "ActionEase", "stop_38", Cocos2dxBind_cocos2d__ActionEase_stop_38);
            binder.bind_custom_method("Cocos2d", "ActionEase", "update_4", Cocos2dxBind_cocos2d__ActionEase_update_4);
            binder.bind_custom_method("Cocos2d", "ActionEase", "init_with_action_30", Cocos2dxBind_cocos2d__ActionEase_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_elapsed_90", Cocos2dxBind_cocos2d__ActionEase_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionEase_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionEase_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionEase", "is_done_87", Cocos2dxBind_cocos2d__ActionEase_is_done_87);
            binder.bind_custom_method("Cocos2d", "ActionEase", "step_88", Cocos2dxBind_cocos2d__ActionEase_step_88);
            binder.bind_custom_method("Cocos2d", "ActionEase", "init_with_duration_52", Cocos2dxBind_cocos2d__ActionEase_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_duration_103", Cocos2dxBind_cocos2d__ActionEase_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_duration_103", Cocos2dxBind_cocos2d__ActionEase_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionEase", "description_106", Cocos2dxBind_cocos2d__ActionEase_description_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_target_106", Cocos2dxBind_cocos2d__ActionEase_get_target_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_target_106", Cocos2dxBind_cocos2d__ActionEase_set_target_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_original_target_106", Cocos2dxBind_cocos2d__ActionEase_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_original_target_106", Cocos2dxBind_cocos2d__ActionEase_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_tag_106", Cocos2dxBind_cocos2d__ActionEase_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_tag_106", Cocos2dxBind_cocos2d__ActionEase_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_flags_106", Cocos2dxBind_cocos2d__ActionEase_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "set_flags_106", Cocos2dxBind_cocos2d__ActionEase_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionEase", "retain_176", Cocos2dxBind_cocos2d__ActionEase_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionEase", "release_176", Cocos2dxBind_cocos2d__ActionEase_release_176);
            binder.bind_custom_method("Cocos2d", "ActionEase", "autorelease_176", Cocos2dxBind_cocos2d__ActionEase_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionEase", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionEase_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseRateAction", "create", Cocos2dxBind_cocos2d__EaseRateAction_create);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_rate_4", Cocos2dxBind_cocos2d__EaseRateAction_set_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_rate_4", Cocos2dxBind_cocos2d__EaseRateAction_get_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "clone", Cocos2dxBind_cocos2d__EaseRateAction_clone);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "reverse", Cocos2dxBind_cocos2d__EaseRateAction_reverse);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "init_with_action_4", Cocos2dxBind_cocos2d__EaseRateAction_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseRateAction_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "start_with_target_38", Cocos2dxBind_cocos2d__EaseRateAction_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "stop_38", Cocos2dxBind_cocos2d__EaseRateAction_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "update_4", Cocos2dxBind_cocos2d__EaseRateAction_update_4);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseRateAction_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseRateAction_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseRateAction_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "is_done_87", Cocos2dxBind_cocos2d__EaseRateAction_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "step_88", Cocos2dxBind_cocos2d__EaseRateAction_step_88);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseRateAction_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_duration_103", Cocos2dxBind_cocos2d__EaseRateAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_duration_103", Cocos2dxBind_cocos2d__EaseRateAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "description_106", Cocos2dxBind_cocos2d__EaseRateAction_description_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_target_106", Cocos2dxBind_cocos2d__EaseRateAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_target_106", Cocos2dxBind_cocos2d__EaseRateAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_original_target_106", Cocos2dxBind_cocos2d__EaseRateAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_original_target_106", Cocos2dxBind_cocos2d__EaseRateAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_tag_106", Cocos2dxBind_cocos2d__EaseRateAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_tag_106", Cocos2dxBind_cocos2d__EaseRateAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_flags_106", Cocos2dxBind_cocos2d__EaseRateAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "set_flags_106", Cocos2dxBind_cocos2d__EaseRateAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "retain_176", Cocos2dxBind_cocos2d__EaseRateAction_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "release_176", Cocos2dxBind_cocos2d__EaseRateAction_release_176);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "autorelease_176", Cocos2dxBind_cocos2d__EaseRateAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseRateAction", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseRateAction_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseIn", "create", Cocos2dxBind_cocos2d__EaseIn_create);
            binder.bind_custom_method("Cocos2d", "EaseIn", "update", Cocos2dxBind_cocos2d__EaseIn_update);
            binder.bind_custom_method("Cocos2d", "EaseIn", "clone", Cocos2dxBind_cocos2d__EaseIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseIn", "reverse", Cocos2dxBind_cocos2d__EaseIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_rate_4", Cocos2dxBind_cocos2d__EaseIn_set_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_rate_4", Cocos2dxBind_cocos2d__EaseIn_get_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseIn", "init_with_action_4", Cocos2dxBind_cocos2d__EaseIn_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseIn", "stop_38", Cocos2dxBind_cocos2d__EaseIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseIn", "is_done_87", Cocos2dxBind_cocos2d__EaseIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseIn", "step_88", Cocos2dxBind_cocos2d__EaseIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseIn", "description_106", Cocos2dxBind_cocos2d__EaseIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_target_106", Cocos2dxBind_cocos2d__EaseIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_target_106", Cocos2dxBind_cocos2d__EaseIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseIn", "retain_176", Cocos2dxBind_cocos2d__EaseIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseIn", "release_176", Cocos2dxBind_cocos2d__EaseIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseOut", "create", Cocos2dxBind_cocos2d__EaseOut_create);
            binder.bind_custom_method("Cocos2d", "EaseOut", "update", Cocos2dxBind_cocos2d__EaseOut_update);
            binder.bind_custom_method("Cocos2d", "EaseOut", "clone", Cocos2dxBind_cocos2d__EaseOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseOut", "reverse", Cocos2dxBind_cocos2d__EaseOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_rate_4", Cocos2dxBind_cocos2d__EaseOut_set_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_rate_4", Cocos2dxBind_cocos2d__EaseOut_get_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseOut", "init_with_action_4", Cocos2dxBind_cocos2d__EaseOut_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseOut", "stop_38", Cocos2dxBind_cocos2d__EaseOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseOut", "is_done_87", Cocos2dxBind_cocos2d__EaseOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseOut", "step_88", Cocos2dxBind_cocos2d__EaseOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseOut", "description_106", Cocos2dxBind_cocos2d__EaseOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_target_106", Cocos2dxBind_cocos2d__EaseOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_target_106", Cocos2dxBind_cocos2d__EaseOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseOut", "retain_176", Cocos2dxBind_cocos2d__EaseOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseOut", "release_176", Cocos2dxBind_cocos2d__EaseOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseInOut", "create", Cocos2dxBind_cocos2d__EaseInOut_create);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "update", Cocos2dxBind_cocos2d__EaseInOut_update);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "clone", Cocos2dxBind_cocos2d__EaseInOut_clone);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "reverse", Cocos2dxBind_cocos2d__EaseInOut_reverse);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_rate_4", Cocos2dxBind_cocos2d__EaseInOut_set_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_rate_4", Cocos2dxBind_cocos2d__EaseInOut_get_rate_4);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "init_with_action_4", Cocos2dxBind_cocos2d__EaseInOut_init_with_action_4);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseInOut_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "start_with_target_38", Cocos2dxBind_cocos2d__EaseInOut_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "stop_38", Cocos2dxBind_cocos2d__EaseInOut_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseInOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseInOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseInOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "is_done_87", Cocos2dxBind_cocos2d__EaseInOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "step_88", Cocos2dxBind_cocos2d__EaseInOut_step_88);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseInOut_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_duration_103", Cocos2dxBind_cocos2d__EaseInOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_duration_103", Cocos2dxBind_cocos2d__EaseInOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "description_106", Cocos2dxBind_cocos2d__EaseInOut_description_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_target_106", Cocos2dxBind_cocos2d__EaseInOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_target_106", Cocos2dxBind_cocos2d__EaseInOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_original_target_106", Cocos2dxBind_cocos2d__EaseInOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_original_target_106", Cocos2dxBind_cocos2d__EaseInOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_tag_106", Cocos2dxBind_cocos2d__EaseInOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_tag_106", Cocos2dxBind_cocos2d__EaseInOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_flags_106", Cocos2dxBind_cocos2d__EaseInOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "set_flags_106", Cocos2dxBind_cocos2d__EaseInOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "retain_176", Cocos2dxBind_cocos2d__EaseInOut_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "release_176", Cocos2dxBind_cocos2d__EaseInOut_release_176);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "autorelease_176", Cocos2dxBind_cocos2d__EaseInOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseInOut", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseInOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "EaseExponentialIn", "create", Cocos2dxBind_cocos2d__EaseExponentialIn_create);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "update", Cocos2dxBind_cocos2d__EaseExponentialIn_update);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "clone", Cocos2dxBind_cocos2d__EaseExponentialIn_clone);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "reverse", Cocos2dxBind_cocos2d__EaseExponentialIn_reverse);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_inner_action_38", Cocos2dxBind_cocos2d__EaseExponentialIn_get_inner_action_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "start_with_target_38", Cocos2dxBind_cocos2d__EaseExponentialIn_start_with_target_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "stop_38", Cocos2dxBind_cocos2d__EaseExponentialIn_stop_38);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "init_with_action_30", Cocos2dxBind_cocos2d__EaseExponentialIn_init_with_action_30);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_elapsed_90", Cocos2dxBind_cocos2d__EaseExponentialIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__EaseExponentialIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "is_done_87", Cocos2dxBind_cocos2d__EaseExponentialIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "step_88", Cocos2dxBind_cocos2d__EaseExponentialIn_step_88);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "init_with_duration_52", Cocos2dxBind_cocos2d__EaseExponentialIn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_duration_103", Cocos2dxBind_cocos2d__EaseExponentialIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_duration_103", Cocos2dxBind_cocos2d__EaseExponentialIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "description_106", Cocos2dxBind_cocos2d__EaseExponentialIn_description_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_target_106", Cocos2dxBind_cocos2d__EaseExponentialIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_target_106", Cocos2dxBind_cocos2d__EaseExponentialIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_original_target_106", Cocos2dxBind_cocos2d__EaseExponentialIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_tag_106", Cocos2dxBind_cocos2d__EaseExponentialIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_tag_106", Cocos2dxBind_cocos2d__EaseExponentialIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_flags_106", Cocos2dxBind_cocos2d__EaseExponentialIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "set_flags_106", Cocos2dxBind_cocos2d__EaseExponentialIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "retain_176", Cocos2dxBind_cocos2d__EaseExponentialIn_retain_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "release_176", Cocos2dxBind_cocos2d__EaseExponentialIn_release_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "autorelease_176", Cocos2dxBind_cocos2d__EaseExponentialIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "get_reference_count_176", Cocos2dxBind_cocos2d__EaseExponentialIn_get_reference_count_176);

          }

    }
}
