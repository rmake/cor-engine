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
        
        void Cocos2dxBind_cocos2d__Shaky3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Shaky3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Shaky3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Shaky3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Shaky3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Shaky3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Shaky3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Shaky3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Shaky3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Shaky3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Shaky3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Shaky3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Shaky3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Shaky3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Shaky3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Shaky3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> Cocos2dxBind_cocos2d__Liquid_create(float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return cocos2d::Liquid::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__Liquid_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__Liquid_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> Cocos2dxBind_cocos2d__Liquid_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Liquid_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Liquid_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Liquid_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Liquid_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Liquid_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Liquid_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Liquid_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Liquid_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Liquid_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Liquid_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getElapsed();
        }

        bool Cocos2dxBind_cocos2d__Liquid_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Liquid_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Liquid_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Liquid_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Liquid_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Liquid_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Liquid_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Liquid_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Liquid_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Liquid_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Liquid_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Liquid_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Liquid_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Liquid_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> Cocos2dxBind_cocos2d__Waves_create(float a0, cocos2d::Size a1, unsigned int a2, float a3, bool a4, bool a5)
        {

            return cocos2d::Waves::create(a0, a1, a2, a3, a4, a5);
        }

        float Cocos2dxBind_cocos2d__Waves_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__Waves_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__Waves_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Waves_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> Cocos2dxBind_cocos2d__Waves_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Waves_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Waves_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0, cocos2d::Size a1, unsigned int a2, float a3, bool a4, bool a5)
        {

            return c->initWithDuration(a0, a1, a2, a3, a4, a5);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Waves_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Waves_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Waves_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Waves_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Waves_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Waves_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Waves_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Waves_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getElapsed();
        }

        bool Cocos2dxBind_cocos2d__Waves_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Waves_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Waves_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Waves_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Waves_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Waves_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Waves_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Waves_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Waves_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Waves_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Waves_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Waves_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Waves_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Waves_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Waves_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Waves_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Waves_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Waves_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> Cocos2dxBind_cocos2d__Twirl_create(float a0, cocos2d::Size a1, cocos2d::Vec2 a2, unsigned int a3, float a4)
        {

            return cocos2d::Twirl::create(a0, a1, a2, a3, a4);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Twirl_get_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getPosition();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        float Cocos2dxBind_cocos2d__Twirl_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__Twirl_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> Cocos2dxBind_cocos2d__Twirl_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Twirl_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__Twirl_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0, cocos2d::Size a1, cocos2d::Vec2 a2, unsigned int a3, float a4)
        {

            return c->initWithDuration(a0, a1, a2, a3, a4);
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__Twirl_get_grid_10(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getGrid();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Twirl_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Twirl_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__Twirl_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Twirl_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__Twirl_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__Twirl_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        float Cocos2dxBind_cocos2d__Twirl_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getElapsed();
        }

        bool Cocos2dxBind_cocos2d__Twirl_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__Twirl_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__Twirl_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Twirl_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__Twirl_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Twirl_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Twirl_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Twirl_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Twirl_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Twirl_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Twirl_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Twirl_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Twirl_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Twirl_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__ActionManager_add_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1, bool a2)
        {

            c->addAction(a0.get(), a1.get(), a2);
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_all_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            c->removeAllActions();
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_all_actions_from_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->removeAllActionsFromTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->removeAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_action_by_tag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            c->removeActionByTag(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_all_actions_by_tag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            c->removeAllActionsByTag(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__ActionManager_remove_actions_by_flags(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, unsigned int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            c->removeActionsByFlags(a0, a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ActionManager_get_action_by_tag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, int a0, const cocos2d::Node * a1)
        {

            return c->getActionByTag(a0, a1);
        }

        ssize_t Cocos2dxBind_cocos2d__ActionManager_get_number_of_running_actions_in_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, const cocos2d::Node * a0)
        {

            return c->getNumberOfRunningActionsInTarget(a0);
        }

        void Cocos2dxBind_cocos2d__ActionManager_pause_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->pauseTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionManager_resume_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->resumeTarget(a0.get());
        }

        MrubyRef Cocos2dxBind_cocos2d__ActionManager_pause_all_running_actions(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->pauseAllRunningActions());
        }

        void Cocos2dxBind_cocos2d__ActionManager_resume_targets(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, MrubyRef a0)
        {

            c->resumeTargets(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::Node>(a0));
        }

        void Cocos2dxBind_cocos2d__ActionManager_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ActionManager_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionManager_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionManager_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionManager_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__ActionManager_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__ActionManager_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__ActionManager_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__ActionManager_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__ActionManager_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__ActionManager_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {

            return c->_scriptObject;
        }

        cocos2d::GridBase* Cocos2dxBind_cocos2d__PageTurn3D_get_grid(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getGrid();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> Cocos2dxBind_cocos2d__PageTurn3D_create(float a0, cocos2d::Size a1)
        {

            return cocos2d::PageTurn3D::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> Cocos2dxBind_cocos2d__PageTurn3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, float a0)
        {

            c->update(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__PageTurn3D_get_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cocos2d::Vec2 a0)
        {

            return c->getVertex(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__PageTurn3D_get_original_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cocos2d::Vec2 a0)
        {

            return c->getOriginalVertex(a0);
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_vertex_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cocos2d::Vec2 a0, cocos2d::Vec3 a1)
        {

            c->setVertex(a0, a1);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__PageTurn3D_get_grid_rect_11(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getGridRect();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> Cocos2dxBind_cocos2d__PageTurn3D_reverse_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_start_with_target_12(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__PageTurn3D_init_with_duration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, float a0, cocos2d::Size a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__PageTurn3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__PageTurn3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__PageTurn3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__PageTurn3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__PageTurn3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__PageTurn3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__PageTurn3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__PageTurn3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__PageTurn3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PageTurn3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PageTurn3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PageTurn3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> Cocos2dxBind_cocos2d__ProgressTo_create(float a0, float a1)
        {

            return cocos2d::ProgressTo::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> Cocos2dxBind_cocos2d__ProgressTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> Cocos2dxBind_cocos2d__ProgressTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProgressTo_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ProgressTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, float a0, float a1)
        {

            return c->initWithDuration(a0, a1);
        }

        float Cocos2dxBind_cocos2d__ProgressTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ProgressTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ProgressTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ProgressTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ProgressTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProgressTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProgressTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ProgressTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ProgressTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ProgressTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ProgressTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ProgressTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ProgressTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> Cocos2dxBind_cocos2d__ProgressFromTo_create(float a0, float a1, float a2)
        {

            return cocos2d::ProgressFromTo::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> Cocos2dxBind_cocos2d__ProgressFromTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> Cocos2dxBind_cocos2d__ProgressFromTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ProgressFromTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, float a0, float a1, float a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        float Cocos2dxBind_cocos2d__ProgressFromTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ProgressFromTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ProgressFromTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ProgressFromTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ProgressFromTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProgressFromTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProgressFromTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ProgressFromTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ProgressFromTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ProgressFromTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ProgressFromTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ProgressFromTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> Cocos2dxBind_cocos2d__ShakyTiles3D_create(float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return cocos2d::ShakyTiles3D::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> Cocos2dxBind_cocos2d__ShakyTiles3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ShakyTiles3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ShakyTiles3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> c, float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> Cocos2dxBind_cocos2d__ShatteredTiles3D_create(float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return cocos2d::ShatteredTiles3D::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> Cocos2dxBind_cocos2d__ShatteredTiles3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ShatteredTiles3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ShatteredTiles3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> c, float a0, cocos2d::Size a1, int a2, bool a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> Cocos2dxBind_cocos2d__ShuffleTiles_create(float a0, cocos2d::Size a1, unsigned int a2)
        {

            return cocos2d::ShuffleTiles::create(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ShuffleTiles_shuffle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, unsigned int * a0, unsigned int a1)
        {

            c->shuffle(a0, a1);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ShuffleTiles_get_delta(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, cocos2d::Size a0)
        {

            return c->getDelta(a0);
        }

        void Cocos2dxBind_cocos2d__ShuffleTiles_place_tile(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, cocos2d::Vec2 a0, cocos2d::Tile * a1)
        {

            c->placeTile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ShuffleTiles_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ShuffleTiles_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> Cocos2dxBind_cocos2d__ShuffleTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__ShuffleTiles_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c, float a0, cocos2d::Size a1, unsigned int a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> Cocos2dxBind_cocos2d__FadeOutTRTiles_create(float a0, cocos2d::Size a1)
        {

            return cocos2d::FadeOutTRTiles::create(a0, a1);
        }

        float Cocos2dxBind_cocos2d__FadeOutTRTiles_test_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c, cocos2d::Size a0, float a1)
        {

            return c->testFunc(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutTRTiles_turn_on_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOnTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutTRTiles_turn_off_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOffTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutTRTiles_transform_tile_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c, cocos2d::Vec2 a0, float a1)
        {

            c->transformTile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutTRTiles_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> Cocos2dxBind_cocos2d__FadeOutTRTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> Cocos2dxBind_cocos2d__FadeOutBLTiles_create(float a0, cocos2d::Size a1)
        {

            return cocos2d::FadeOutBLTiles::create(a0, a1);
        }

        float Cocos2dxBind_cocos2d__FadeOutBLTiles_test_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c, cocos2d::Size a0, float a1)
        {

            return c->testFunc(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> Cocos2dxBind_cocos2d__FadeOutBLTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__FadeOutBLTiles_turn_on_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOnTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutBLTiles_turn_off_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOffTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutBLTiles_transform_tile_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c, cocos2d::Vec2 a0, float a1)
        {

            c->transformTile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutBLTiles_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> Cocos2dxBind_cocos2d__FadeOutUpTiles_create(float a0, cocos2d::Size a1)
        {

            return cocos2d::FadeOutUpTiles::create(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutUpTiles_transform_tile_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c, cocos2d::Vec2 a0, float a1)
        {

            c->transformTile(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> Cocos2dxBind_cocos2d__FadeOutUpTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c)
        {

            return c->clone();
        }

        float Cocos2dxBind_cocos2d__FadeOutUpTiles_test_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c, cocos2d::Size a0, float a1)
        {

            return c->testFunc(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutUpTiles_turn_on_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOnTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutUpTiles_turn_off_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOffTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutUpTiles_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> Cocos2dxBind_cocos2d__FadeOutDownTiles_create(float a0, cocos2d::Size a1)
        {

            return cocos2d::FadeOutDownTiles::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> Cocos2dxBind_cocos2d__FadeOutDownTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c)
        {

            return c->clone();
        }

        float Cocos2dxBind_cocos2d__FadeOutDownTiles_test_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c, cocos2d::Size a0, float a1)
        {

            return c->testFunc(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutDownTiles_transform_tile_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c, cocos2d::Vec2 a0, float a1)
        {

            c->transformTile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FadeOutDownTiles_turn_on_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOnTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutDownTiles_turn_off_tile_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOffTile(a0);
        }

        void Cocos2dxBind_cocos2d__FadeOutDownTiles_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> Cocos2dxBind_cocos2d__TurnOffTiles_create_1(float a0, cocos2d::Size a1)
        {

            return cocos2d::TurnOffTiles::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> Cocos2dxBind_cocos2d__TurnOffTiles_create_2(float a0, cocos2d::Size a1, unsigned int a2)
        {

            return cocos2d::TurnOffTiles::create(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TurnOffTiles_shuffle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, unsigned int * a0, unsigned int a1)
        {

            c->shuffle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TurnOffTiles_turn_on_tile(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOnTile(a0);
        }

        void Cocos2dxBind_cocos2d__TurnOffTiles_turn_off_tile(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, cocos2d::Vec2 a0)
        {

            c->turnOffTile(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> Cocos2dxBind_cocos2d__TurnOffTiles_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__TurnOffTiles_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__TurnOffTiles_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__TurnOffTiles_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c, float a0, cocos2d::Size a1, unsigned int a2)
        {

            return c->initWithDuration(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> Cocos2dxBind_cocos2d__WavesTiles3D_create(float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return cocos2d::WavesTiles3D::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__WavesTiles3D_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__WavesTiles3D_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__WavesTiles3D_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__WavesTiles3D_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> Cocos2dxBind_cocos2d__WavesTiles3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__WavesTiles3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__WavesTiles3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c, float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> Cocos2dxBind_cocos2d__JumpTiles3D_create(float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return cocos2d::JumpTiles3D::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__JumpTiles3D_get_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c)
        {

            return c->getAmplitude();
        }

        void Cocos2dxBind_cocos2d__JumpTiles3D_set_amplitude(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c, float a0)
        {

            c->setAmplitude(a0);
        }

        float Cocos2dxBind_cocos2d__JumpTiles3D_get_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c)
        {

            return c->getAmplitudeRate();
        }

        void Cocos2dxBind_cocos2d__JumpTiles3D_set_amplitude_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> Cocos2dxBind_cocos2d__JumpTiles3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__JumpTiles3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__JumpTiles3D_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c, float a0, cocos2d::Size a1, unsigned int a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> Cocos2dxBind_cocos2d__SplitRows_create(float a0, unsigned int a1)
        {

            return cocos2d::SplitRows::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> Cocos2dxBind_cocos2d__SplitRows_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__SplitRows_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__SplitRows_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__SplitRows_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> c, float a0, unsigned int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> Cocos2dxBind_cocos2d__SplitCols_create(float a0, unsigned int a1)
        {

            return cocos2d::SplitCols::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> Cocos2dxBind_cocos2d__SplitCols_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__SplitCols_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__SplitCols_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        bool Cocos2dxBind_cocos2d__SplitCols_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> c, float a0, unsigned int a1)
        {

            return c->initWithDuration(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> Cocos2dxBind_cocos2d__AtlasNode_create(std::string a0, int a1, int a2, int a3)
        {

            return cocos2d::AtlasNode::create(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_atlas_values(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->updateAtlasValues();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::TextureAtlas * a0)
        {

            c->setTextureAtlas(a0);
        }

        cocos2d::TextureAtlas* Cocos2dxBind_cocos2d__AtlasNode_get_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getTextureAtlas();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_quads_to_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->setQuadsToDraw(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__AtlasNode_get_quads_to_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getQuadsToDraw();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__AtlasNode_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__AtlasNode_get_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getColor();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_opacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__AtlasNode_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getBlendFunc();
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_init_with_tile_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0, int a1, int a2, int a3)
        {

            return c->initWithTileFile(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1, int a2, int a3)
        {

            return c->initWithTexture(a0.get(), a1, a2, a3);
        }

        std::string Cocos2dxBind_cocos2d__AtlasNode_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__AtlasNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__AtlasNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__AtlasNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__AtlasNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__AtlasNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__AtlasNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__AtlasNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AtlasNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AtlasNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__AtlasNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__AtlasNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AtlasNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__AtlasNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__AtlasNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__AtlasNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__AtlasNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__AtlasNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AtlasNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__AtlasNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__AtlasNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__AtlasNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__AtlasNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__AtlasNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__AtlasNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__AtlasNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__AtlasNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__AtlasNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__AtlasNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__AtlasNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__AtlasNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__AtlasNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__AtlasNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__AtlasNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AtlasNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AtlasNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AtlasNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AtlasNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AtlasNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AtlasNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AtlasNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__AtlasNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__AtlasNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__AtlasNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__AtlasNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__AtlasNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AtlasNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AtlasNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AtlasNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__AtlasNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__AtlasNode_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AtlasNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AtlasNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AtlasNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> Cocos2dxBind_cocos2d__ClippingNode_create_1()
        {

            return cocos2d::ClippingNode::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> Cocos2dxBind_cocos2d__ClippingNode_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return cocos2d::ClippingNode::create(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ClippingNode_get_stencil(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getStencil();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_stencil(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setStencil(a0.get());
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_has_content(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->hasContent();
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_alpha_threshold(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getAlphaThreshold();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_alpha_threshold(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setAlphaThreshold(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_inverted(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isInverted();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_inverted(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->setInverted(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_on_enter_transition_did_finish(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_on_exit_transition_did_start(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_camera_mask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_init_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->init(a0.get());
        }

        std::string Cocos2dxBind_cocos2d__ClippingNode_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ClippingNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ClippingNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ClippingNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ClippingNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ClippingNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ClippingNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ClippingNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ClippingNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ClippingNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ClippingNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__ClippingNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ClippingNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ClippingNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ClippingNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ClippingNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ClippingNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ClippingNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ClippingNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ClippingNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ClippingNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ClippingNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ClippingNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ClippingNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ClippingNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ClippingNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ClippingNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ClippingNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ClippingNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__ClippingNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ClippingNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ClippingNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ClippingNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ClippingNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ClippingNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ClippingNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ClippingNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ClippingNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ClippingNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ClippingNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ClippingNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ClippingNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ClippingNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ClippingNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ClippingNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ClippingNode_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ClippingNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ClippingNode_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ClippingNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ClippingNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ClippingNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ClippingNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ClippingNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ClippingNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ClippingNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> Cocos2dxBind_cocos2d__LabelAtlas_create_1()
        {

            return cocos2d::LabelAtlas::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> Cocos2dxBind_cocos2d__LabelAtlas_create_2(std::string a0, std::string a1, int a2, int a3, int a4)
        {

            return cocos2d::LabelAtlas::create(a0, a1, a2, a3, a4);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> Cocos2dxBind_cocos2d__LabelAtlas_create_3(std::string a0, std::string a1)
        {

            return cocos2d::LabelAtlas::create(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, std::string a1, int a2, int a3, int a4)
        {

            return c->initWithString(a0, a1, a2, a3, a4);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, std::string a1)
        {

            return c->initWithString(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a1, int a2, int a3, int a4)
        {

            return c->initWithString(a0, a1.get(), a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            c->setString(a0);
        }

        std::string Cocos2dxBind_cocos2d__LabelAtlas_get_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getString();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_atlas_values(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->updateAtlasValues();
        }

        std::string Cocos2dxBind_cocos2d__LabelAtlas_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::TextureAtlas * a0)
        {

            c->setTextureAtlas(a0);
        }

        cocos2d::TextureAtlas* Cocos2dxBind_cocos2d__LabelAtlas_get_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getTextureAtlas();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_quads_to_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->setQuadsToDraw(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__LabelAtlas_get_quads_to_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getQuadsToDraw();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__LabelAtlas_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__LabelAtlas_get_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getColor();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_opacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__LabelAtlas_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getBlendFunc();
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_with_tile_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, int a1, int a2, int a3)
        {

            return c->initWithTileFile(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1, int a2, int a3)
        {

            return c->initWithTexture(a0.get(), a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__LabelAtlas_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__LabelAtlas_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__LabelAtlas_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__LabelAtlas_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__LabelAtlas_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LabelAtlas_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LabelAtlas_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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



        
        bool Cocos2dxBind_EaseBackInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseBezierAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuadraticActionIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuadraticActionOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuadraticActionInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuarticActionIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuarticActionOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuarticActionInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuinticActionIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuinticActionOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseQuinticActionInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseCircleActionIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseCircleActionOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseCircleActionInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseCubicActionIn_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EaseCubicActionOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_7(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("Cocos2d", "Show", "create", Cocos2dxBind_cocos2d__Show_create);
            binder.bind_custom_method("Cocos2d", "Show", "update", Cocos2dxBind_cocos2d__Show_update);
            binder.bind_custom_method("Cocos2d", "Show", "reverse", Cocos2dxBind_cocos2d__Show_reverse);
            binder.bind_custom_method("Cocos2d", "Show", "clone", Cocos2dxBind_cocos2d__Show_clone);
            binder.bind_custom_method("Cocos2d", "Show", "is_done_12", Cocos2dxBind_cocos2d__Show_is_done_12);
            binder.bind_custom_method("Cocos2d", "Show", "step_12", Cocos2dxBind_cocos2d__Show_step_12);
            binder.bind_custom_method("Cocos2d", "Show", "get_duration_103", Cocos2dxBind_cocos2d__Show_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Show", "set_duration_103", Cocos2dxBind_cocos2d__Show_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Show", "description_106", Cocos2dxBind_cocos2d__Show_description_106);
            binder.bind_custom_method("Cocos2d", "Show", "start_with_target_13", Cocos2dxBind_cocos2d__Show_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "Show", "stop_58", Cocos2dxBind_cocos2d__Show_stop_58);
            binder.bind_custom_method("Cocos2d", "Show", "get_target_106", Cocos2dxBind_cocos2d__Show_get_target_106);
            binder.bind_custom_method("Cocos2d", "Show", "set_target_106", Cocos2dxBind_cocos2d__Show_set_target_106);
            binder.bind_custom_method("Cocos2d", "Show", "get_original_target_106", Cocos2dxBind_cocos2d__Show_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Show", "set_original_target_106", Cocos2dxBind_cocos2d__Show_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Show", "get_tag_106", Cocos2dxBind_cocos2d__Show_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Show", "set_tag_106", Cocos2dxBind_cocos2d__Show_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Show", "get_flags_106", Cocos2dxBind_cocos2d__Show_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Show", "set_flags_106", Cocos2dxBind_cocos2d__Show_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Show", "retain_176", Cocos2dxBind_cocos2d__Show_retain_176);
            binder.bind_custom_method("Cocos2d", "Show", "release_176", Cocos2dxBind_cocos2d__Show_release_176);
            binder.bind_custom_method("Cocos2d", "Show", "autorelease_176", Cocos2dxBind_cocos2d__Show_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Show", "get_reference_count_176", Cocos2dxBind_cocos2d__Show_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Hide", "create", Cocos2dxBind_cocos2d__Hide_create);
            binder.bind_custom_method("Cocos2d", "Hide", "update", Cocos2dxBind_cocos2d__Hide_update);
            binder.bind_custom_method("Cocos2d", "Hide", "reverse", Cocos2dxBind_cocos2d__Hide_reverse);
            binder.bind_custom_method("Cocos2d", "Hide", "clone", Cocos2dxBind_cocos2d__Hide_clone);
            binder.bind_custom_method("Cocos2d", "Hide", "is_done_12", Cocos2dxBind_cocos2d__Hide_is_done_12);
            binder.bind_custom_method("Cocos2d", "Hide", "step_12", Cocos2dxBind_cocos2d__Hide_step_12);
            binder.bind_custom_method("Cocos2d", "Hide", "get_duration_103", Cocos2dxBind_cocos2d__Hide_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Hide", "set_duration_103", Cocos2dxBind_cocos2d__Hide_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Hide", "description_106", Cocos2dxBind_cocos2d__Hide_description_106);
            binder.bind_custom_method("Cocos2d", "Hide", "start_with_target_13", Cocos2dxBind_cocos2d__Hide_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "Hide", "stop_58", Cocos2dxBind_cocos2d__Hide_stop_58);
            binder.bind_custom_method("Cocos2d", "Hide", "get_target_106", Cocos2dxBind_cocos2d__Hide_get_target_106);
            binder.bind_custom_method("Cocos2d", "Hide", "set_target_106", Cocos2dxBind_cocos2d__Hide_set_target_106);
            binder.bind_custom_method("Cocos2d", "Hide", "get_original_target_106", Cocos2dxBind_cocos2d__Hide_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Hide", "set_original_target_106", Cocos2dxBind_cocos2d__Hide_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Hide", "get_tag_106", Cocos2dxBind_cocos2d__Hide_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Hide", "set_tag_106", Cocos2dxBind_cocos2d__Hide_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Hide", "get_flags_106", Cocos2dxBind_cocos2d__Hide_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Hide", "set_flags_106", Cocos2dxBind_cocos2d__Hide_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Hide", "retain_176", Cocos2dxBind_cocos2d__Hide_retain_176);
            binder.bind_custom_method("Cocos2d", "Hide", "release_176", Cocos2dxBind_cocos2d__Hide_release_176);
            binder.bind_custom_method("Cocos2d", "Hide", "autorelease_176", Cocos2dxBind_cocos2d__Hide_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Hide", "get_reference_count_176", Cocos2dxBind_cocos2d__Hide_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ToggleVisibility", "create", Cocos2dxBind_cocos2d__ToggleVisibility_create);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "update", Cocos2dxBind_cocos2d__ToggleVisibility_update);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "reverse", Cocos2dxBind_cocos2d__ToggleVisibility_reverse);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "clone", Cocos2dxBind_cocos2d__ToggleVisibility_clone);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "is_done_12", Cocos2dxBind_cocos2d__ToggleVisibility_is_done_12);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "step_12", Cocos2dxBind_cocos2d__ToggleVisibility_step_12);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_duration_103", Cocos2dxBind_cocos2d__ToggleVisibility_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "set_duration_103", Cocos2dxBind_cocos2d__ToggleVisibility_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "description_106", Cocos2dxBind_cocos2d__ToggleVisibility_description_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "start_with_target_13", Cocos2dxBind_cocos2d__ToggleVisibility_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "stop_58", Cocos2dxBind_cocos2d__ToggleVisibility_stop_58);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_target_106", Cocos2dxBind_cocos2d__ToggleVisibility_get_target_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "set_target_106", Cocos2dxBind_cocos2d__ToggleVisibility_set_target_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_original_target_106", Cocos2dxBind_cocos2d__ToggleVisibility_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "set_original_target_106", Cocos2dxBind_cocos2d__ToggleVisibility_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_tag_106", Cocos2dxBind_cocos2d__ToggleVisibility_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "set_tag_106", Cocos2dxBind_cocos2d__ToggleVisibility_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_flags_106", Cocos2dxBind_cocos2d__ToggleVisibility_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "set_flags_106", Cocos2dxBind_cocos2d__ToggleVisibility_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "retain_176", Cocos2dxBind_cocos2d__ToggleVisibility_retain_176);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "release_176", Cocos2dxBind_cocos2d__ToggleVisibility_release_176);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "autorelease_176", Cocos2dxBind_cocos2d__ToggleVisibility_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "get_reference_count_176", Cocos2dxBind_cocos2d__ToggleVisibility_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "RemoveSelf", "create", Cocos2dxBind_cocos2d__RemoveSelf_create);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "update", Cocos2dxBind_cocos2d__RemoveSelf_update);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "clone", Cocos2dxBind_cocos2d__RemoveSelf_clone);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "reverse", Cocos2dxBind_cocos2d__RemoveSelf_reverse);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "init", Cocos2dxBind_cocos2d__RemoveSelf_init);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "is_done_12", Cocos2dxBind_cocos2d__RemoveSelf_is_done_12);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "step_12", Cocos2dxBind_cocos2d__RemoveSelf_step_12);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_duration_103", Cocos2dxBind_cocos2d__RemoveSelf_get_duration_103);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "set_duration_103", Cocos2dxBind_cocos2d__RemoveSelf_set_duration_103);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "description_106", Cocos2dxBind_cocos2d__RemoveSelf_description_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "start_with_target_13", Cocos2dxBind_cocos2d__RemoveSelf_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "stop_58", Cocos2dxBind_cocos2d__RemoveSelf_stop_58);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_target_106", Cocos2dxBind_cocos2d__RemoveSelf_get_target_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "set_target_106", Cocos2dxBind_cocos2d__RemoveSelf_set_target_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_original_target_106", Cocos2dxBind_cocos2d__RemoveSelf_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "set_original_target_106", Cocos2dxBind_cocos2d__RemoveSelf_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_tag_106", Cocos2dxBind_cocos2d__RemoveSelf_get_tag_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "set_tag_106", Cocos2dxBind_cocos2d__RemoveSelf_set_tag_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_flags_106", Cocos2dxBind_cocos2d__RemoveSelf_get_flags_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "set_flags_106", Cocos2dxBind_cocos2d__RemoveSelf_set_flags_106);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "retain_176", Cocos2dxBind_cocos2d__RemoveSelf_retain_176);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "release_176", Cocos2dxBind_cocos2d__RemoveSelf_release_176);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "autorelease_176", Cocos2dxBind_cocos2d__RemoveSelf_autorelease_176);
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "get_reference_count_176", Cocos2dxBind_cocos2d__RemoveSelf_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FlipX", "create", Cocos2dxBind_cocos2d__FlipX_create);
            binder.bind_custom_method("Cocos2d", "FlipX", "update", Cocos2dxBind_cocos2d__FlipX_update);
            binder.bind_custom_method("Cocos2d", "FlipX", "reverse", Cocos2dxBind_cocos2d__FlipX_reverse);
            binder.bind_custom_method("Cocos2d", "FlipX", "clone", Cocos2dxBind_cocos2d__FlipX_clone);
            binder.bind_custom_method("Cocos2d", "FlipX", "init_with_flip_x", Cocos2dxBind_cocos2d__FlipX_init_with_flip_x);
            binder.bind_custom_method("Cocos2d", "FlipX", "is_done_12", Cocos2dxBind_cocos2d__FlipX_is_done_12);
            binder.bind_custom_method("Cocos2d", "FlipX", "step_12", Cocos2dxBind_cocos2d__FlipX_step_12);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_duration_103", Cocos2dxBind_cocos2d__FlipX_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipX", "set_duration_103", Cocos2dxBind_cocos2d__FlipX_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipX", "description_106", Cocos2dxBind_cocos2d__FlipX_description_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "start_with_target_13", Cocos2dxBind_cocos2d__FlipX_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "FlipX", "stop_58", Cocos2dxBind_cocos2d__FlipX_stop_58);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_target_106", Cocos2dxBind_cocos2d__FlipX_get_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "set_target_106", Cocos2dxBind_cocos2d__FlipX_set_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_original_target_106", Cocos2dxBind_cocos2d__FlipX_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "set_original_target_106", Cocos2dxBind_cocos2d__FlipX_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_tag_106", Cocos2dxBind_cocos2d__FlipX_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "set_tag_106", Cocos2dxBind_cocos2d__FlipX_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_flags_106", Cocos2dxBind_cocos2d__FlipX_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "set_flags_106", Cocos2dxBind_cocos2d__FlipX_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipX", "retain_176", Cocos2dxBind_cocos2d__FlipX_retain_176);
            binder.bind_custom_method("Cocos2d", "FlipX", "release_176", Cocos2dxBind_cocos2d__FlipX_release_176);
            binder.bind_custom_method("Cocos2d", "FlipX", "autorelease_176", Cocos2dxBind_cocos2d__FlipX_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FlipX", "get_reference_count_176", Cocos2dxBind_cocos2d__FlipX_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FlipY", "create", Cocos2dxBind_cocos2d__FlipY_create);
            binder.bind_custom_method("Cocos2d", "FlipY", "update", Cocos2dxBind_cocos2d__FlipY_update);
            binder.bind_custom_method("Cocos2d", "FlipY", "reverse", Cocos2dxBind_cocos2d__FlipY_reverse);
            binder.bind_custom_method("Cocos2d", "FlipY", "clone", Cocos2dxBind_cocos2d__FlipY_clone);
            binder.bind_custom_method("Cocos2d", "FlipY", "init_with_flip_y", Cocos2dxBind_cocos2d__FlipY_init_with_flip_y);
            binder.bind_custom_method("Cocos2d", "FlipY", "is_done_12", Cocos2dxBind_cocos2d__FlipY_is_done_12);
            binder.bind_custom_method("Cocos2d", "FlipY", "step_12", Cocos2dxBind_cocos2d__FlipY_step_12);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_duration_103", Cocos2dxBind_cocos2d__FlipY_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipY", "set_duration_103", Cocos2dxBind_cocos2d__FlipY_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipY", "description_106", Cocos2dxBind_cocos2d__FlipY_description_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "start_with_target_13", Cocos2dxBind_cocos2d__FlipY_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "FlipY", "stop_58", Cocos2dxBind_cocos2d__FlipY_stop_58);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_target_106", Cocos2dxBind_cocos2d__FlipY_get_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "set_target_106", Cocos2dxBind_cocos2d__FlipY_set_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_original_target_106", Cocos2dxBind_cocos2d__FlipY_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "set_original_target_106", Cocos2dxBind_cocos2d__FlipY_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_tag_106", Cocos2dxBind_cocos2d__FlipY_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "set_tag_106", Cocos2dxBind_cocos2d__FlipY_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_flags_106", Cocos2dxBind_cocos2d__FlipY_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "set_flags_106", Cocos2dxBind_cocos2d__FlipY_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipY", "retain_176", Cocos2dxBind_cocos2d__FlipY_retain_176);
            binder.bind_custom_method("Cocos2d", "FlipY", "release_176", Cocos2dxBind_cocos2d__FlipY_release_176);
            binder.bind_custom_method("Cocos2d", "FlipY", "autorelease_176", Cocos2dxBind_cocos2d__FlipY_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FlipY", "get_reference_count_176", Cocos2dxBind_cocos2d__FlipY_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Place", "create", Cocos2dxBind_cocos2d__Place_create);
            binder.bind_custom_method("Cocos2d", "Place", "update", Cocos2dxBind_cocos2d__Place_update);
            binder.bind_custom_method("Cocos2d", "Place", "reverse", Cocos2dxBind_cocos2d__Place_reverse);
            binder.bind_custom_method("Cocos2d", "Place", "clone", Cocos2dxBind_cocos2d__Place_clone);
            binder.bind_custom_method("Cocos2d", "Place", "init_with_position", Cocos2dxBind_cocos2d__Place_init_with_position);
            binder.bind_custom_method("Cocos2d", "Place", "is_done_12", Cocos2dxBind_cocos2d__Place_is_done_12);
            binder.bind_custom_method("Cocos2d", "Place", "step_12", Cocos2dxBind_cocos2d__Place_step_12);
            binder.bind_custom_method("Cocos2d", "Place", "get_duration_103", Cocos2dxBind_cocos2d__Place_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Place", "set_duration_103", Cocos2dxBind_cocos2d__Place_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Place", "description_106", Cocos2dxBind_cocos2d__Place_description_106);
            binder.bind_custom_method("Cocos2d", "Place", "start_with_target_13", Cocos2dxBind_cocos2d__Place_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "Place", "stop_58", Cocos2dxBind_cocos2d__Place_stop_58);
            binder.bind_custom_method("Cocos2d", "Place", "get_target_106", Cocos2dxBind_cocos2d__Place_get_target_106);
            binder.bind_custom_method("Cocos2d", "Place", "set_target_106", Cocos2dxBind_cocos2d__Place_set_target_106);
            binder.bind_custom_method("Cocos2d", "Place", "get_original_target_106", Cocos2dxBind_cocos2d__Place_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Place", "set_original_target_106", Cocos2dxBind_cocos2d__Place_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Place", "get_tag_106", Cocos2dxBind_cocos2d__Place_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Place", "set_tag_106", Cocos2dxBind_cocos2d__Place_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Place", "get_flags_106", Cocos2dxBind_cocos2d__Place_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Place", "set_flags_106", Cocos2dxBind_cocos2d__Place_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Place", "retain_176", Cocos2dxBind_cocos2d__Place_retain_176);
            binder.bind_custom_method("Cocos2d", "Place", "release_176", Cocos2dxBind_cocos2d__Place_release_176);
            binder.bind_custom_method("Cocos2d", "Place", "autorelease_176", Cocos2dxBind_cocos2d__Place_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Place", "get_reference_count_176", Cocos2dxBind_cocos2d__Place_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "CallFunc", "create", Cocos2dxBind_cocos2d__CallFunc_create);
            binder.bind_custom_method("Cocos2d", "CallFunc", "execute", Cocos2dxBind_cocos2d__CallFunc_execute);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_target_callback_2", Cocos2dxBind_cocos2d__CallFunc_get_target_callback_2);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_target_callback_2", Cocos2dxBind_cocos2d__CallFunc_set_target_callback_2);
            binder.bind_custom_method("Cocos2d", "CallFunc", "update_2", Cocos2dxBind_cocos2d__CallFunc_update_2);
            binder.bind_custom_method("Cocos2d", "CallFunc", "reverse_2", Cocos2dxBind_cocos2d__CallFunc_reverse_2);
            binder.bind_custom_method("Cocos2d", "CallFunc", "clone", Cocos2dxBind_cocos2d__CallFunc_clone);
            binder.bind_custom_method("Cocos2d", "CallFunc", "init_with_function", Cocos2dxBind_cocos2d__CallFunc_init_with_function);
            binder.bind_custom_method("Cocos2d", "CallFunc", "is_done_12", Cocos2dxBind_cocos2d__CallFunc_is_done_12);
            binder.bind_custom_method("Cocos2d", "CallFunc", "step_12", Cocos2dxBind_cocos2d__CallFunc_step_12);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_duration_103", Cocos2dxBind_cocos2d__CallFunc_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_duration_103", Cocos2dxBind_cocos2d__CallFunc_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CallFunc", "description_106", Cocos2dxBind_cocos2d__CallFunc_description_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "start_with_target_13", Cocos2dxBind_cocos2d__CallFunc_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "CallFunc", "stop_58", Cocos2dxBind_cocos2d__CallFunc_stop_58);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_target_106", Cocos2dxBind_cocos2d__CallFunc_get_target_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_target_106", Cocos2dxBind_cocos2d__CallFunc_set_target_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_original_target_106", Cocos2dxBind_cocos2d__CallFunc_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_original_target_106", Cocos2dxBind_cocos2d__CallFunc_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_tag_106", Cocos2dxBind_cocos2d__CallFunc_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_tag_106", Cocos2dxBind_cocos2d__CallFunc_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_flags_106", Cocos2dxBind_cocos2d__CallFunc_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "set_flags_106", Cocos2dxBind_cocos2d__CallFunc_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CallFunc", "retain_176", Cocos2dxBind_cocos2d__CallFunc_retain_176);
            binder.bind_custom_method("Cocos2d", "CallFunc", "release_176", Cocos2dxBind_cocos2d__CallFunc_release_176);
            binder.bind_custom_method("Cocos2d", "CallFunc", "autorelease_176", Cocos2dxBind_cocos2d__CallFunc_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CallFunc", "get_reference_count_176", Cocos2dxBind_cocos2d__CallFunc_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "CallFuncN", "create", Cocos2dxBind_cocos2d__CallFuncN_create);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "clone", Cocos2dxBind_cocos2d__CallFuncN_clone);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "execute", Cocos2dxBind_cocos2d__CallFuncN_execute);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "init_with_function", Cocos2dxBind_cocos2d__CallFuncN_init_with_function);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_target_callback_2", Cocos2dxBind_cocos2d__CallFuncN_get_target_callback_2);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_target_callback_2", Cocos2dxBind_cocos2d__CallFuncN_set_target_callback_2);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "update_2", Cocos2dxBind_cocos2d__CallFuncN_update_2);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "reverse_2", Cocos2dxBind_cocos2d__CallFuncN_reverse_2);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "is_done_12", Cocos2dxBind_cocos2d__CallFuncN_is_done_12);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "step_12", Cocos2dxBind_cocos2d__CallFuncN_step_12);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_duration_103", Cocos2dxBind_cocos2d__CallFuncN_get_duration_103);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_duration_103", Cocos2dxBind_cocos2d__CallFuncN_set_duration_103);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "description_106", Cocos2dxBind_cocos2d__CallFuncN_description_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "start_with_target_13", Cocos2dxBind_cocos2d__CallFuncN_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "stop_58", Cocos2dxBind_cocos2d__CallFuncN_stop_58);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_target_106", Cocos2dxBind_cocos2d__CallFuncN_get_target_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_target_106", Cocos2dxBind_cocos2d__CallFuncN_set_target_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_original_target_106", Cocos2dxBind_cocos2d__CallFuncN_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_original_target_106", Cocos2dxBind_cocos2d__CallFuncN_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_tag_106", Cocos2dxBind_cocos2d__CallFuncN_get_tag_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_tag_106", Cocos2dxBind_cocos2d__CallFuncN_set_tag_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_flags_106", Cocos2dxBind_cocos2d__CallFuncN_get_flags_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "set_flags_106", Cocos2dxBind_cocos2d__CallFuncN_set_flags_106);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "retain_176", Cocos2dxBind_cocos2d__CallFuncN_retain_176);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "release_176", Cocos2dxBind_cocos2d__CallFuncN_release_176);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "autorelease_176", Cocos2dxBind_cocos2d__CallFuncN_autorelease_176);
            binder.bind_custom_method("Cocos2d", "CallFuncN", "get_reference_count_176", Cocos2dxBind_cocos2d__CallFuncN_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_grid", Cocos2dxBind_cocos2d__GridAction_get_grid);
            binder.bind_custom_method("Cocos2d", "GridAction", "clone", Cocos2dxBind_cocos2d__GridAction_clone);
            binder.bind_custom_method("Cocos2d", "GridAction", "reverse_12", Cocos2dxBind_cocos2d__GridAction_reverse_12);
            binder.bind_custom_method("Cocos2d", "GridAction", "start_with_target_12", Cocos2dxBind_cocos2d__GridAction_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "GridAction", "init_with_duration_3", Cocos2dxBind_cocos2d__GridAction_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_elapsed_90", Cocos2dxBind_cocos2d__GridAction_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__GridAction_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__GridAction_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "GridAction", "is_done_87", Cocos2dxBind_cocos2d__GridAction_is_done_87);
            binder.bind_custom_method("Cocos2d", "GridAction", "step_88", Cocos2dxBind_cocos2d__GridAction_step_88);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_duration_103", Cocos2dxBind_cocos2d__GridAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_duration_103", Cocos2dxBind_cocos2d__GridAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "GridAction", "description_106", Cocos2dxBind_cocos2d__GridAction_description_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "stop_58", Cocos2dxBind_cocos2d__GridAction_stop_58);
            binder.bind_custom_method("Cocos2d", "GridAction", "update_9", Cocos2dxBind_cocos2d__GridAction_update_9);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_target_106", Cocos2dxBind_cocos2d__GridAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_target_106", Cocos2dxBind_cocos2d__GridAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_original_target_106", Cocos2dxBind_cocos2d__GridAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_original_target_106", Cocos2dxBind_cocos2d__GridAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_tag_106", Cocos2dxBind_cocos2d__GridAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_tag_106", Cocos2dxBind_cocos2d__GridAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_flags_106", Cocos2dxBind_cocos2d__GridAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "set_flags_106", Cocos2dxBind_cocos2d__GridAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "GridAction", "retain_176", Cocos2dxBind_cocos2d__GridAction_retain_176);
            binder.bind_custom_method("Cocos2d", "GridAction", "release_176", Cocos2dxBind_cocos2d__GridAction_release_176);
            binder.bind_custom_method("Cocos2d", "GridAction", "autorelease_176", Cocos2dxBind_cocos2d__GridAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "GridAction", "get_reference_count_176", Cocos2dxBind_cocos2d__GridAction_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_grid_10", Cocos2dxBind_cocos2d__Grid3DAction_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_vertex_11", Cocos2dxBind_cocos2d__Grid3DAction_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_original_vertex_11", Cocos2dxBind_cocos2d__Grid3DAction_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_vertex_11", Cocos2dxBind_cocos2d__Grid3DAction_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "clone", Cocos2dxBind_cocos2d__Grid3DAction_clone);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_grid_rect_11", Cocos2dxBind_cocos2d__Grid3DAction_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "reverse_12", Cocos2dxBind_cocos2d__Grid3DAction_reverse_12);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "start_with_target_12", Cocos2dxBind_cocos2d__Grid3DAction_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "init_with_duration_3", Cocos2dxBind_cocos2d__Grid3DAction_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_elapsed_90", Cocos2dxBind_cocos2d__Grid3DAction_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Grid3DAction_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Grid3DAction_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "is_done_87", Cocos2dxBind_cocos2d__Grid3DAction_is_done_87);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "step_88", Cocos2dxBind_cocos2d__Grid3DAction_step_88);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_duration_103", Cocos2dxBind_cocos2d__Grid3DAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_duration_103", Cocos2dxBind_cocos2d__Grid3DAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "description_106", Cocos2dxBind_cocos2d__Grid3DAction_description_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "stop_58", Cocos2dxBind_cocos2d__Grid3DAction_stop_58);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "update_9", Cocos2dxBind_cocos2d__Grid3DAction_update_9);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_target_106", Cocos2dxBind_cocos2d__Grid3DAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_target_106", Cocos2dxBind_cocos2d__Grid3DAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_original_target_106", Cocos2dxBind_cocos2d__Grid3DAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_original_target_106", Cocos2dxBind_cocos2d__Grid3DAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_tag_106", Cocos2dxBind_cocos2d__Grid3DAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_tag_106", Cocos2dxBind_cocos2d__Grid3DAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_flags_106", Cocos2dxBind_cocos2d__Grid3DAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "set_flags_106", Cocos2dxBind_cocos2d__Grid3DAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "retain_176", Cocos2dxBind_cocos2d__Grid3DAction_retain_176);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "release_176", Cocos2dxBind_cocos2d__Grid3DAction_release_176);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "autorelease_176", Cocos2dxBind_cocos2d__Grid3DAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "get_reference_count_176", Cocos2dxBind_cocos2d__Grid3DAction_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "AccelDeccelAmplitude", "create", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_create);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_rate", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_rate);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_rate", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_rate);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "start_with_target", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_start_with_target);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "update", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_update);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "clone", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_clone);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "reverse", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_reverse);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "init_with_action", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_init_with_action);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_elapsed_90", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "is_done_87", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_is_done_87);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "step_88", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_step_88);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "init_with_duration_52", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_duration_103", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_duration_103);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_duration_103", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_duration_103);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "description_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_description_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "stop_58", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_stop_58);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_target_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_target_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_target_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_target_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_original_target_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_original_target_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_tag_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_tag_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_tag_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_tag_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_flags_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_flags_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "set_flags_106", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_set_flags_106);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "retain_176", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_retain_176);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "release_176", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_release_176);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "autorelease_176", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "get_reference_count_176", Cocos2dxBind_cocos2d__AccelDeccelAmplitude_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "AccelAmplitude", "create", Cocos2dxBind_cocos2d__AccelAmplitude_create);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_rate", Cocos2dxBind_cocos2d__AccelAmplitude_get_rate);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_rate", Cocos2dxBind_cocos2d__AccelAmplitude_set_rate);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "start_with_target", Cocos2dxBind_cocos2d__AccelAmplitude_start_with_target);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "update", Cocos2dxBind_cocos2d__AccelAmplitude_update);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "clone", Cocos2dxBind_cocos2d__AccelAmplitude_clone);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "reverse", Cocos2dxBind_cocos2d__AccelAmplitude_reverse);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "init_with_action", Cocos2dxBind_cocos2d__AccelAmplitude_init_with_action);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_elapsed_90", Cocos2dxBind_cocos2d__AccelAmplitude_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__AccelAmplitude_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__AccelAmplitude_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "is_done_87", Cocos2dxBind_cocos2d__AccelAmplitude_is_done_87);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "step_88", Cocos2dxBind_cocos2d__AccelAmplitude_step_88);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "init_with_duration_52", Cocos2dxBind_cocos2d__AccelAmplitude_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_duration_103", Cocos2dxBind_cocos2d__AccelAmplitude_get_duration_103);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_duration_103", Cocos2dxBind_cocos2d__AccelAmplitude_set_duration_103);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "description_106", Cocos2dxBind_cocos2d__AccelAmplitude_description_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "stop_58", Cocos2dxBind_cocos2d__AccelAmplitude_stop_58);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_target_106", Cocos2dxBind_cocos2d__AccelAmplitude_get_target_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_target_106", Cocos2dxBind_cocos2d__AccelAmplitude_set_target_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_original_target_106", Cocos2dxBind_cocos2d__AccelAmplitude_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_original_target_106", Cocos2dxBind_cocos2d__AccelAmplitude_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_tag_106", Cocos2dxBind_cocos2d__AccelAmplitude_get_tag_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_tag_106", Cocos2dxBind_cocos2d__AccelAmplitude_set_tag_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_flags_106", Cocos2dxBind_cocos2d__AccelAmplitude_get_flags_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "set_flags_106", Cocos2dxBind_cocos2d__AccelAmplitude_set_flags_106);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "retain_176", Cocos2dxBind_cocos2d__AccelAmplitude_retain_176);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "release_176", Cocos2dxBind_cocos2d__AccelAmplitude_release_176);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "autorelease_176", Cocos2dxBind_cocos2d__AccelAmplitude_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "get_reference_count_176", Cocos2dxBind_cocos2d__AccelAmplitude_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "DeccelAmplitude", "create", Cocos2dxBind_cocos2d__DeccelAmplitude_create);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_rate", Cocos2dxBind_cocos2d__DeccelAmplitude_get_rate);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_rate", Cocos2dxBind_cocos2d__DeccelAmplitude_set_rate);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "start_with_target", Cocos2dxBind_cocos2d__DeccelAmplitude_start_with_target);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "update", Cocos2dxBind_cocos2d__DeccelAmplitude_update);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "clone", Cocos2dxBind_cocos2d__DeccelAmplitude_clone);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "reverse", Cocos2dxBind_cocos2d__DeccelAmplitude_reverse);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "init_with_action", Cocos2dxBind_cocos2d__DeccelAmplitude_init_with_action);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_elapsed_90", Cocos2dxBind_cocos2d__DeccelAmplitude_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__DeccelAmplitude_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__DeccelAmplitude_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "is_done_87", Cocos2dxBind_cocos2d__DeccelAmplitude_is_done_87);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "step_88", Cocos2dxBind_cocos2d__DeccelAmplitude_step_88);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "init_with_duration_52", Cocos2dxBind_cocos2d__DeccelAmplitude_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_duration_103", Cocos2dxBind_cocos2d__DeccelAmplitude_get_duration_103);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_duration_103", Cocos2dxBind_cocos2d__DeccelAmplitude_set_duration_103);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "description_106", Cocos2dxBind_cocos2d__DeccelAmplitude_description_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "stop_58", Cocos2dxBind_cocos2d__DeccelAmplitude_stop_58);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_target_106", Cocos2dxBind_cocos2d__DeccelAmplitude_get_target_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_target_106", Cocos2dxBind_cocos2d__DeccelAmplitude_set_target_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_original_target_106", Cocos2dxBind_cocos2d__DeccelAmplitude_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_original_target_106", Cocos2dxBind_cocos2d__DeccelAmplitude_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_tag_106", Cocos2dxBind_cocos2d__DeccelAmplitude_get_tag_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_tag_106", Cocos2dxBind_cocos2d__DeccelAmplitude_set_tag_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_flags_106", Cocos2dxBind_cocos2d__DeccelAmplitude_get_flags_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "set_flags_106", Cocos2dxBind_cocos2d__DeccelAmplitude_set_flags_106);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "retain_176", Cocos2dxBind_cocos2d__DeccelAmplitude_retain_176);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "release_176", Cocos2dxBind_cocos2d__DeccelAmplitude_release_176);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "autorelease_176", Cocos2dxBind_cocos2d__DeccelAmplitude_autorelease_176);
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "get_reference_count_176", Cocos2dxBind_cocos2d__DeccelAmplitude_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "StopGrid", "create", Cocos2dxBind_cocos2d__StopGrid_create);
            binder.bind_custom_method("Cocos2d", "StopGrid", "start_with_target", Cocos2dxBind_cocos2d__StopGrid_start_with_target);
            binder.bind_custom_method("Cocos2d", "StopGrid", "clone", Cocos2dxBind_cocos2d__StopGrid_clone);
            binder.bind_custom_method("Cocos2d", "StopGrid", "reverse", Cocos2dxBind_cocos2d__StopGrid_reverse);
            binder.bind_custom_method("Cocos2d", "StopGrid", "is_done_12", Cocos2dxBind_cocos2d__StopGrid_is_done_12);
            binder.bind_custom_method("Cocos2d", "StopGrid", "step_12", Cocos2dxBind_cocos2d__StopGrid_step_12);
            binder.bind_custom_method("Cocos2d", "StopGrid", "update_3", Cocos2dxBind_cocos2d__StopGrid_update_3);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_duration_103", Cocos2dxBind_cocos2d__StopGrid_get_duration_103);
            binder.bind_custom_method("Cocos2d", "StopGrid", "set_duration_103", Cocos2dxBind_cocos2d__StopGrid_set_duration_103);
            binder.bind_custom_method("Cocos2d", "StopGrid", "description_106", Cocos2dxBind_cocos2d__StopGrid_description_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "stop_58", Cocos2dxBind_cocos2d__StopGrid_stop_58);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_target_106", Cocos2dxBind_cocos2d__StopGrid_get_target_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "set_target_106", Cocos2dxBind_cocos2d__StopGrid_set_target_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_original_target_106", Cocos2dxBind_cocos2d__StopGrid_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "set_original_target_106", Cocos2dxBind_cocos2d__StopGrid_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_tag_106", Cocos2dxBind_cocos2d__StopGrid_get_tag_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "set_tag_106", Cocos2dxBind_cocos2d__StopGrid_set_tag_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_flags_106", Cocos2dxBind_cocos2d__StopGrid_get_flags_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "set_flags_106", Cocos2dxBind_cocos2d__StopGrid_set_flags_106);
            binder.bind_custom_method("Cocos2d", "StopGrid", "retain_176", Cocos2dxBind_cocos2d__StopGrid_retain_176);
            binder.bind_custom_method("Cocos2d", "StopGrid", "release_176", Cocos2dxBind_cocos2d__StopGrid_release_176);
            binder.bind_custom_method("Cocos2d", "StopGrid", "autorelease_176", Cocos2dxBind_cocos2d__StopGrid_autorelease_176);
            binder.bind_custom_method("Cocos2d", "StopGrid", "get_reference_count_176", Cocos2dxBind_cocos2d__StopGrid_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ReuseGrid", "create", Cocos2dxBind_cocos2d__ReuseGrid_create);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "start_with_target", Cocos2dxBind_cocos2d__ReuseGrid_start_with_target);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "clone", Cocos2dxBind_cocos2d__ReuseGrid_clone);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "reverse", Cocos2dxBind_cocos2d__ReuseGrid_reverse);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "init_with_times", Cocos2dxBind_cocos2d__ReuseGrid_init_with_times);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "is_done_12", Cocos2dxBind_cocos2d__ReuseGrid_is_done_12);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "step_12", Cocos2dxBind_cocos2d__ReuseGrid_step_12);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "update_3", Cocos2dxBind_cocos2d__ReuseGrid_update_3);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_duration_103", Cocos2dxBind_cocos2d__ReuseGrid_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "set_duration_103", Cocos2dxBind_cocos2d__ReuseGrid_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "description_106", Cocos2dxBind_cocos2d__ReuseGrid_description_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "stop_58", Cocos2dxBind_cocos2d__ReuseGrid_stop_58);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_target_106", Cocos2dxBind_cocos2d__ReuseGrid_get_target_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "set_target_106", Cocos2dxBind_cocos2d__ReuseGrid_set_target_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_original_target_106", Cocos2dxBind_cocos2d__ReuseGrid_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "set_original_target_106", Cocos2dxBind_cocos2d__ReuseGrid_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_tag_106", Cocos2dxBind_cocos2d__ReuseGrid_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "set_tag_106", Cocos2dxBind_cocos2d__ReuseGrid_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_flags_106", Cocos2dxBind_cocos2d__ReuseGrid_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "set_flags_106", Cocos2dxBind_cocos2d__ReuseGrid_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "retain_176", Cocos2dxBind_cocos2d__ReuseGrid_retain_176);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "release_176", Cocos2dxBind_cocos2d__ReuseGrid_release_176);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "autorelease_176", Cocos2dxBind_cocos2d__ReuseGrid_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "get_reference_count_176", Cocos2dxBind_cocos2d__ReuseGrid_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Waves3D", "create", Cocos2dxBind_cocos2d__Waves3D_create);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_amplitude", Cocos2dxBind_cocos2d__Waves3D_get_amplitude);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_amplitude", Cocos2dxBind_cocos2d__Waves3D_set_amplitude);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_amplitude_rate", Cocos2dxBind_cocos2d__Waves3D_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_amplitude_rate", Cocos2dxBind_cocos2d__Waves3D_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Waves3D", "clone", Cocos2dxBind_cocos2d__Waves3D_clone);
            binder.bind_custom_method("Cocos2d", "Waves3D", "update", Cocos2dxBind_cocos2d__Waves3D_update);
            binder.bind_custom_method("Cocos2d", "Waves3D", "init_with_duration", Cocos2dxBind_cocos2d__Waves3D_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_grid_10", Cocos2dxBind_cocos2d__Waves3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_vertex_11", Cocos2dxBind_cocos2d__Waves3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__Waves3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_vertex_11", Cocos2dxBind_cocos2d__Waves3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__Waves3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Waves3D", "reverse_12", Cocos2dxBind_cocos2d__Waves3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "Waves3D", "start_with_target_12", Cocos2dxBind_cocos2d__Waves3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_elapsed_90", Cocos2dxBind_cocos2d__Waves3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Waves3D", "is_done_87", Cocos2dxBind_cocos2d__Waves3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "Waves3D", "step_88", Cocos2dxBind_cocos2d__Waves3D_step_88);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_duration_103", Cocos2dxBind_cocos2d__Waves3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_duration_103", Cocos2dxBind_cocos2d__Waves3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Waves3D", "description_106", Cocos2dxBind_cocos2d__Waves3D_description_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "stop_58", Cocos2dxBind_cocos2d__Waves3D_stop_58);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_target_106", Cocos2dxBind_cocos2d__Waves3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_target_106", Cocos2dxBind_cocos2d__Waves3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_original_target_106", Cocos2dxBind_cocos2d__Waves3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_original_target_106", Cocos2dxBind_cocos2d__Waves3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_tag_106", Cocos2dxBind_cocos2d__Waves3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_tag_106", Cocos2dxBind_cocos2d__Waves3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_flags_106", Cocos2dxBind_cocos2d__Waves3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "set_flags_106", Cocos2dxBind_cocos2d__Waves3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Waves3D", "retain_176", Cocos2dxBind_cocos2d__Waves3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Waves3D", "release_176", Cocos2dxBind_cocos2d__Waves3D_release_176);
            binder.bind_custom_method("Cocos2d", "Waves3D", "autorelease_176", Cocos2dxBind_cocos2d__Waves3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Waves3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Waves3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FlipX3D", "create", Cocos2dxBind_cocos2d__FlipX3D_create);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "clone", Cocos2dxBind_cocos2d__FlipX3D_clone);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "update", Cocos2dxBind_cocos2d__FlipX3D_update);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "init_with_duration_2", Cocos2dxBind_cocos2d__FlipX3D_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "init_with_size_2", Cocos2dxBind_cocos2d__FlipX3D_init_with_size_2);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_grid_10", Cocos2dxBind_cocos2d__FlipX3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_vertex_11", Cocos2dxBind_cocos2d__FlipX3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__FlipX3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_vertex_11", Cocos2dxBind_cocos2d__FlipX3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__FlipX3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "reverse_12", Cocos2dxBind_cocos2d__FlipX3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "start_with_target_12", Cocos2dxBind_cocos2d__FlipX3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_elapsed_90", Cocos2dxBind_cocos2d__FlipX3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__FlipX3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__FlipX3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "is_done_87", Cocos2dxBind_cocos2d__FlipX3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "step_88", Cocos2dxBind_cocos2d__FlipX3D_step_88);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_duration_103", Cocos2dxBind_cocos2d__FlipX3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_duration_103", Cocos2dxBind_cocos2d__FlipX3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "description_106", Cocos2dxBind_cocos2d__FlipX3D_description_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "stop_58", Cocos2dxBind_cocos2d__FlipX3D_stop_58);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_target_106", Cocos2dxBind_cocos2d__FlipX3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_target_106", Cocos2dxBind_cocos2d__FlipX3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_original_target_106", Cocos2dxBind_cocos2d__FlipX3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_original_target_106", Cocos2dxBind_cocos2d__FlipX3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_tag_106", Cocos2dxBind_cocos2d__FlipX3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_tag_106", Cocos2dxBind_cocos2d__FlipX3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_flags_106", Cocos2dxBind_cocos2d__FlipX3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "set_flags_106", Cocos2dxBind_cocos2d__FlipX3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "retain_176", Cocos2dxBind_cocos2d__FlipX3D_retain_176);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "release_176", Cocos2dxBind_cocos2d__FlipX3D_release_176);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "autorelease_176", Cocos2dxBind_cocos2d__FlipX3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FlipX3D", "get_reference_count_176", Cocos2dxBind_cocos2d__FlipX3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FlipY3D", "create", Cocos2dxBind_cocos2d__FlipY3D_create);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "update", Cocos2dxBind_cocos2d__FlipY3D_update);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "clone", Cocos2dxBind_cocos2d__FlipY3D_clone);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "init_with_duration_2", Cocos2dxBind_cocos2d__FlipY3D_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "init_with_size_2", Cocos2dxBind_cocos2d__FlipY3D_init_with_size_2);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_grid_10", Cocos2dxBind_cocos2d__FlipY3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_vertex_11", Cocos2dxBind_cocos2d__FlipY3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__FlipY3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_vertex_11", Cocos2dxBind_cocos2d__FlipY3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__FlipY3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "reverse_12", Cocos2dxBind_cocos2d__FlipY3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "start_with_target_12", Cocos2dxBind_cocos2d__FlipY3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_elapsed_90", Cocos2dxBind_cocos2d__FlipY3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__FlipY3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__FlipY3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "is_done_87", Cocos2dxBind_cocos2d__FlipY3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "step_88", Cocos2dxBind_cocos2d__FlipY3D_step_88);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_duration_103", Cocos2dxBind_cocos2d__FlipY3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_duration_103", Cocos2dxBind_cocos2d__FlipY3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "description_106", Cocos2dxBind_cocos2d__FlipY3D_description_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "stop_58", Cocos2dxBind_cocos2d__FlipY3D_stop_58);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_target_106", Cocos2dxBind_cocos2d__FlipY3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_target_106", Cocos2dxBind_cocos2d__FlipY3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_original_target_106", Cocos2dxBind_cocos2d__FlipY3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_original_target_106", Cocos2dxBind_cocos2d__FlipY3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_tag_106", Cocos2dxBind_cocos2d__FlipY3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_tag_106", Cocos2dxBind_cocos2d__FlipY3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_flags_106", Cocos2dxBind_cocos2d__FlipY3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "set_flags_106", Cocos2dxBind_cocos2d__FlipY3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "retain_176", Cocos2dxBind_cocos2d__FlipY3D_retain_176);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "release_176", Cocos2dxBind_cocos2d__FlipY3D_release_176);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "autorelease_176", Cocos2dxBind_cocos2d__FlipY3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FlipY3D", "get_reference_count_176", Cocos2dxBind_cocos2d__FlipY3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Lens3D", "create", Cocos2dxBind_cocos2d__Lens3D_create);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_lens_effect", Cocos2dxBind_cocos2d__Lens3D_get_lens_effect);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_lens_effect", Cocos2dxBind_cocos2d__Lens3D_set_lens_effect);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_concave", Cocos2dxBind_cocos2d__Lens3D_set_concave);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_position", Cocos2dxBind_cocos2d__Lens3D_get_position);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_position", Cocos2dxBind_cocos2d__Lens3D_set_position);
            binder.bind_custom_method("Cocos2d", "Lens3D", "clone", Cocos2dxBind_cocos2d__Lens3D_clone);
            binder.bind_custom_method("Cocos2d", "Lens3D", "update", Cocos2dxBind_cocos2d__Lens3D_update);
            binder.bind_custom_method("Cocos2d", "Lens3D", "init_with_duration", Cocos2dxBind_cocos2d__Lens3D_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_grid_10", Cocos2dxBind_cocos2d__Lens3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_vertex_11", Cocos2dxBind_cocos2d__Lens3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__Lens3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_vertex_11", Cocos2dxBind_cocos2d__Lens3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__Lens3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Lens3D", "reverse_12", Cocos2dxBind_cocos2d__Lens3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "Lens3D", "start_with_target_12", Cocos2dxBind_cocos2d__Lens3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_elapsed_90", Cocos2dxBind_cocos2d__Lens3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Lens3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Lens3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Lens3D", "is_done_87", Cocos2dxBind_cocos2d__Lens3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "Lens3D", "step_88", Cocos2dxBind_cocos2d__Lens3D_step_88);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_duration_103", Cocos2dxBind_cocos2d__Lens3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_duration_103", Cocos2dxBind_cocos2d__Lens3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Lens3D", "description_106", Cocos2dxBind_cocos2d__Lens3D_description_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "stop_58", Cocos2dxBind_cocos2d__Lens3D_stop_58);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_target_106", Cocos2dxBind_cocos2d__Lens3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_target_106", Cocos2dxBind_cocos2d__Lens3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_original_target_106", Cocos2dxBind_cocos2d__Lens3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_original_target_106", Cocos2dxBind_cocos2d__Lens3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_tag_106", Cocos2dxBind_cocos2d__Lens3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_tag_106", Cocos2dxBind_cocos2d__Lens3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_flags_106", Cocos2dxBind_cocos2d__Lens3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "set_flags_106", Cocos2dxBind_cocos2d__Lens3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Lens3D", "retain_176", Cocos2dxBind_cocos2d__Lens3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Lens3D", "release_176", Cocos2dxBind_cocos2d__Lens3D_release_176);
            binder.bind_custom_method("Cocos2d", "Lens3D", "autorelease_176", Cocos2dxBind_cocos2d__Lens3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Lens3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Lens3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Ripple3D", "create", Cocos2dxBind_cocos2d__Ripple3D_create);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_position", Cocos2dxBind_cocos2d__Ripple3D_get_position);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_position", Cocos2dxBind_cocos2d__Ripple3D_set_position);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_amplitude", Cocos2dxBind_cocos2d__Ripple3D_get_amplitude);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_amplitude", Cocos2dxBind_cocos2d__Ripple3D_set_amplitude);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_amplitude_rate", Cocos2dxBind_cocos2d__Ripple3D_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_amplitude_rate", Cocos2dxBind_cocos2d__Ripple3D_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "clone", Cocos2dxBind_cocos2d__Ripple3D_clone);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "update", Cocos2dxBind_cocos2d__Ripple3D_update);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "init_with_duration", Cocos2dxBind_cocos2d__Ripple3D_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_grid_10", Cocos2dxBind_cocos2d__Ripple3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_vertex_11", Cocos2dxBind_cocos2d__Ripple3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__Ripple3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_vertex_11", Cocos2dxBind_cocos2d__Ripple3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__Ripple3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "reverse_12", Cocos2dxBind_cocos2d__Ripple3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "start_with_target_12", Cocos2dxBind_cocos2d__Ripple3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_elapsed_90", Cocos2dxBind_cocos2d__Ripple3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "is_done_87", Cocos2dxBind_cocos2d__Ripple3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "step_88", Cocos2dxBind_cocos2d__Ripple3D_step_88);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_duration_103", Cocos2dxBind_cocos2d__Ripple3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_duration_103", Cocos2dxBind_cocos2d__Ripple3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "description_106", Cocos2dxBind_cocos2d__Ripple3D_description_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "stop_58", Cocos2dxBind_cocos2d__Ripple3D_stop_58);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_target_106", Cocos2dxBind_cocos2d__Ripple3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_target_106", Cocos2dxBind_cocos2d__Ripple3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_original_target_106", Cocos2dxBind_cocos2d__Ripple3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_original_target_106", Cocos2dxBind_cocos2d__Ripple3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_tag_106", Cocos2dxBind_cocos2d__Ripple3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_tag_106", Cocos2dxBind_cocos2d__Ripple3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_flags_106", Cocos2dxBind_cocos2d__Ripple3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "set_flags_106", Cocos2dxBind_cocos2d__Ripple3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "retain_176", Cocos2dxBind_cocos2d__Ripple3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "release_176", Cocos2dxBind_cocos2d__Ripple3D_release_176);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "autorelease_176", Cocos2dxBind_cocos2d__Ripple3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Ripple3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Ripple3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Shaky3D", "create", Cocos2dxBind_cocos2d__Shaky3D_create);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "clone", Cocos2dxBind_cocos2d__Shaky3D_clone);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "update", Cocos2dxBind_cocos2d__Shaky3D_update);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "init_with_duration", Cocos2dxBind_cocos2d__Shaky3D_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_grid_10", Cocos2dxBind_cocos2d__Shaky3D_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_vertex_11", Cocos2dxBind_cocos2d__Shaky3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__Shaky3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_vertex_11", Cocos2dxBind_cocos2d__Shaky3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__Shaky3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "reverse_12", Cocos2dxBind_cocos2d__Shaky3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "start_with_target_12", Cocos2dxBind_cocos2d__Shaky3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_elapsed_90", Cocos2dxBind_cocos2d__Shaky3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Shaky3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Shaky3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "is_done_87", Cocos2dxBind_cocos2d__Shaky3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "step_88", Cocos2dxBind_cocos2d__Shaky3D_step_88);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_duration_103", Cocos2dxBind_cocos2d__Shaky3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_duration_103", Cocos2dxBind_cocos2d__Shaky3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "description_106", Cocos2dxBind_cocos2d__Shaky3D_description_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "stop_58", Cocos2dxBind_cocos2d__Shaky3D_stop_58);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_target_106", Cocos2dxBind_cocos2d__Shaky3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_target_106", Cocos2dxBind_cocos2d__Shaky3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_original_target_106", Cocos2dxBind_cocos2d__Shaky3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_original_target_106", Cocos2dxBind_cocos2d__Shaky3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_tag_106", Cocos2dxBind_cocos2d__Shaky3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_tag_106", Cocos2dxBind_cocos2d__Shaky3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_flags_106", Cocos2dxBind_cocos2d__Shaky3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "set_flags_106", Cocos2dxBind_cocos2d__Shaky3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "retain_176", Cocos2dxBind_cocos2d__Shaky3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "release_176", Cocos2dxBind_cocos2d__Shaky3D_release_176);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "autorelease_176", Cocos2dxBind_cocos2d__Shaky3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Shaky3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Shaky3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Liquid", "create", Cocos2dxBind_cocos2d__Liquid_create);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_amplitude", Cocos2dxBind_cocos2d__Liquid_get_amplitude);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_amplitude", Cocos2dxBind_cocos2d__Liquid_set_amplitude);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_amplitude_rate", Cocos2dxBind_cocos2d__Liquid_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_amplitude_rate", Cocos2dxBind_cocos2d__Liquid_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Liquid", "clone", Cocos2dxBind_cocos2d__Liquid_clone);
            binder.bind_custom_method("Cocos2d", "Liquid", "update", Cocos2dxBind_cocos2d__Liquid_update);
            binder.bind_custom_method("Cocos2d", "Liquid", "init_with_duration", Cocos2dxBind_cocos2d__Liquid_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_grid_10", Cocos2dxBind_cocos2d__Liquid_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_vertex_11", Cocos2dxBind_cocos2d__Liquid_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_original_vertex_11", Cocos2dxBind_cocos2d__Liquid_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_vertex_11", Cocos2dxBind_cocos2d__Liquid_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_grid_rect_11", Cocos2dxBind_cocos2d__Liquid_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Liquid", "reverse_12", Cocos2dxBind_cocos2d__Liquid_reverse_12);
            binder.bind_custom_method("Cocos2d", "Liquid", "start_with_target_12", Cocos2dxBind_cocos2d__Liquid_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_elapsed_90", Cocos2dxBind_cocos2d__Liquid_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Liquid", "is_done_87", Cocos2dxBind_cocos2d__Liquid_is_done_87);
            binder.bind_custom_method("Cocos2d", "Liquid", "step_88", Cocos2dxBind_cocos2d__Liquid_step_88);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_duration_103", Cocos2dxBind_cocos2d__Liquid_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_duration_103", Cocos2dxBind_cocos2d__Liquid_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Liquid", "description_106", Cocos2dxBind_cocos2d__Liquid_description_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "stop_58", Cocos2dxBind_cocos2d__Liquid_stop_58);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_target_106", Cocos2dxBind_cocos2d__Liquid_get_target_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_target_106", Cocos2dxBind_cocos2d__Liquid_set_target_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_original_target_106", Cocos2dxBind_cocos2d__Liquid_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_original_target_106", Cocos2dxBind_cocos2d__Liquid_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_tag_106", Cocos2dxBind_cocos2d__Liquid_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_tag_106", Cocos2dxBind_cocos2d__Liquid_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_flags_106", Cocos2dxBind_cocos2d__Liquid_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "set_flags_106", Cocos2dxBind_cocos2d__Liquid_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Liquid", "retain_176", Cocos2dxBind_cocos2d__Liquid_retain_176);
            binder.bind_custom_method("Cocos2d", "Liquid", "release_176", Cocos2dxBind_cocos2d__Liquid_release_176);
            binder.bind_custom_method("Cocos2d", "Liquid", "autorelease_176", Cocos2dxBind_cocos2d__Liquid_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Liquid", "get_reference_count_176", Cocos2dxBind_cocos2d__Liquid_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Waves", "create", Cocos2dxBind_cocos2d__Waves_create);
            binder.bind_custom_method("Cocos2d", "Waves", "get_amplitude", Cocos2dxBind_cocos2d__Waves_get_amplitude);
            binder.bind_custom_method("Cocos2d", "Waves", "set_amplitude", Cocos2dxBind_cocos2d__Waves_set_amplitude);
            binder.bind_custom_method("Cocos2d", "Waves", "get_amplitude_rate", Cocos2dxBind_cocos2d__Waves_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Waves", "set_amplitude_rate", Cocos2dxBind_cocos2d__Waves_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Waves", "clone", Cocos2dxBind_cocos2d__Waves_clone);
            binder.bind_custom_method("Cocos2d", "Waves", "update", Cocos2dxBind_cocos2d__Waves_update);
            binder.bind_custom_method("Cocos2d", "Waves", "init_with_duration", Cocos2dxBind_cocos2d__Waves_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Waves", "get_grid_10", Cocos2dxBind_cocos2d__Waves_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Waves", "get_vertex_11", Cocos2dxBind_cocos2d__Waves_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves", "get_original_vertex_11", Cocos2dxBind_cocos2d__Waves_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves", "set_vertex_11", Cocos2dxBind_cocos2d__Waves_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Waves", "get_grid_rect_11", Cocos2dxBind_cocos2d__Waves_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Waves", "reverse_12", Cocos2dxBind_cocos2d__Waves_reverse_12);
            binder.bind_custom_method("Cocos2d", "Waves", "start_with_target_12", Cocos2dxBind_cocos2d__Waves_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Waves", "get_elapsed_90", Cocos2dxBind_cocos2d__Waves_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Waves", "is_done_87", Cocos2dxBind_cocos2d__Waves_is_done_87);
            binder.bind_custom_method("Cocos2d", "Waves", "step_88", Cocos2dxBind_cocos2d__Waves_step_88);
            binder.bind_custom_method("Cocos2d", "Waves", "get_duration_103", Cocos2dxBind_cocos2d__Waves_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Waves", "set_duration_103", Cocos2dxBind_cocos2d__Waves_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Waves", "description_106", Cocos2dxBind_cocos2d__Waves_description_106);
            binder.bind_custom_method("Cocos2d", "Waves", "stop_58", Cocos2dxBind_cocos2d__Waves_stop_58);
            binder.bind_custom_method("Cocos2d", "Waves", "get_target_106", Cocos2dxBind_cocos2d__Waves_get_target_106);
            binder.bind_custom_method("Cocos2d", "Waves", "set_target_106", Cocos2dxBind_cocos2d__Waves_set_target_106);
            binder.bind_custom_method("Cocos2d", "Waves", "get_original_target_106", Cocos2dxBind_cocos2d__Waves_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Waves", "set_original_target_106", Cocos2dxBind_cocos2d__Waves_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Waves", "get_tag_106", Cocos2dxBind_cocos2d__Waves_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Waves", "set_tag_106", Cocos2dxBind_cocos2d__Waves_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Waves", "get_flags_106", Cocos2dxBind_cocos2d__Waves_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Waves", "set_flags_106", Cocos2dxBind_cocos2d__Waves_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Waves", "retain_176", Cocos2dxBind_cocos2d__Waves_retain_176);
            binder.bind_custom_method("Cocos2d", "Waves", "release_176", Cocos2dxBind_cocos2d__Waves_release_176);
            binder.bind_custom_method("Cocos2d", "Waves", "autorelease_176", Cocos2dxBind_cocos2d__Waves_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Waves", "get_reference_count_176", Cocos2dxBind_cocos2d__Waves_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Twirl", "create", Cocos2dxBind_cocos2d__Twirl_create);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_position", Cocos2dxBind_cocos2d__Twirl_get_position);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_position", Cocos2dxBind_cocos2d__Twirl_set_position);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_amplitude", Cocos2dxBind_cocos2d__Twirl_get_amplitude);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_amplitude", Cocos2dxBind_cocos2d__Twirl_set_amplitude);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_amplitude_rate", Cocos2dxBind_cocos2d__Twirl_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_amplitude_rate", Cocos2dxBind_cocos2d__Twirl_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "Twirl", "clone", Cocos2dxBind_cocos2d__Twirl_clone);
            binder.bind_custom_method("Cocos2d", "Twirl", "update", Cocos2dxBind_cocos2d__Twirl_update);
            binder.bind_custom_method("Cocos2d", "Twirl", "init_with_duration", Cocos2dxBind_cocos2d__Twirl_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_grid_10", Cocos2dxBind_cocos2d__Twirl_get_grid_10);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_vertex_11", Cocos2dxBind_cocos2d__Twirl_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_original_vertex_11", Cocos2dxBind_cocos2d__Twirl_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_vertex_11", Cocos2dxBind_cocos2d__Twirl_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_grid_rect_11", Cocos2dxBind_cocos2d__Twirl_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "Twirl", "reverse_12", Cocos2dxBind_cocos2d__Twirl_reverse_12);
            binder.bind_custom_method("Cocos2d", "Twirl", "start_with_target_12", Cocos2dxBind_cocos2d__Twirl_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_elapsed_90", Cocos2dxBind_cocos2d__Twirl_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Twirl", "is_done_87", Cocos2dxBind_cocos2d__Twirl_is_done_87);
            binder.bind_custom_method("Cocos2d", "Twirl", "step_88", Cocos2dxBind_cocos2d__Twirl_step_88);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_duration_103", Cocos2dxBind_cocos2d__Twirl_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_duration_103", Cocos2dxBind_cocos2d__Twirl_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Twirl", "description_106", Cocos2dxBind_cocos2d__Twirl_description_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "stop_58", Cocos2dxBind_cocos2d__Twirl_stop_58);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_target_106", Cocos2dxBind_cocos2d__Twirl_get_target_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_target_106", Cocos2dxBind_cocos2d__Twirl_set_target_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_original_target_106", Cocos2dxBind_cocos2d__Twirl_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_original_target_106", Cocos2dxBind_cocos2d__Twirl_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_tag_106", Cocos2dxBind_cocos2d__Twirl_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_tag_106", Cocos2dxBind_cocos2d__Twirl_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_flags_106", Cocos2dxBind_cocos2d__Twirl_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "set_flags_106", Cocos2dxBind_cocos2d__Twirl_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Twirl", "retain_176", Cocos2dxBind_cocos2d__Twirl_retain_176);
            binder.bind_custom_method("Cocos2d", "Twirl", "release_176", Cocos2dxBind_cocos2d__Twirl_release_176);
            binder.bind_custom_method("Cocos2d", "Twirl", "autorelease_176", Cocos2dxBind_cocos2d__Twirl_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Twirl", "get_reference_count_176", Cocos2dxBind_cocos2d__Twirl_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "ActionManager", "add_action", Cocos2dxBind_cocos2d__ActionManager_add_action);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_all_actions", Cocos2dxBind_cocos2d__ActionManager_remove_all_actions);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_all_actions_from_target", Cocos2dxBind_cocos2d__ActionManager_remove_all_actions_from_target);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_action", Cocos2dxBind_cocos2d__ActionManager_remove_action);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_action_by_tag", Cocos2dxBind_cocos2d__ActionManager_remove_action_by_tag);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_all_actions_by_tag", Cocos2dxBind_cocos2d__ActionManager_remove_all_actions_by_tag);
            binder.bind_custom_method("Cocos2d", "ActionManager", "remove_actions_by_flags", Cocos2dxBind_cocos2d__ActionManager_remove_actions_by_flags);
            binder.bind_custom_method("Cocos2d", "ActionManager", "get_action_by_tag", Cocos2dxBind_cocos2d__ActionManager_get_action_by_tag);
            binder.bind_custom_method("Cocos2d", "ActionManager", "get_number_of_running_actions_in_target", Cocos2dxBind_cocos2d__ActionManager_get_number_of_running_actions_in_target);
            binder.bind_custom_method("Cocos2d", "ActionManager", "pause_target", Cocos2dxBind_cocos2d__ActionManager_pause_target);
            binder.bind_custom_method("Cocos2d", "ActionManager", "resume_target", Cocos2dxBind_cocos2d__ActionManager_resume_target);
            binder.bind_custom_method("Cocos2d", "ActionManager", "pause_all_running_actions", Cocos2dxBind_cocos2d__ActionManager_pause_all_running_actions);
            binder.bind_custom_method("Cocos2d", "ActionManager", "resume_targets", Cocos2dxBind_cocos2d__ActionManager_resume_targets);
            binder.bind_custom_method("Cocos2d", "ActionManager", "update", Cocos2dxBind_cocos2d__ActionManager_update);
            binder.bind_custom_method("Cocos2d", "ActionManager", "retain_176", Cocos2dxBind_cocos2d__ActionManager_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionManager", "release_176", Cocos2dxBind_cocos2d__ActionManager_release_176);
            binder.bind_custom_method("Cocos2d", "ActionManager", "autorelease_176", Cocos2dxBind_cocos2d__ActionManager_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionManager", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionManager_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_id=", Cocos2dxBind_cocos2d__ActionManager_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_id", Cocos2dxBind_cocos2d__ActionManager_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_lua_id=", Cocos2dxBind_cocos2d__ActionManager_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_lua_id", Cocos2dxBind_cocos2d__ActionManager_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_script_object=", Cocos2dxBind_cocos2d__ActionManager_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "ActionManager", "_script_object", Cocos2dxBind_cocos2d__ActionManager_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_grid", Cocos2dxBind_cocos2d__PageTurn3D_get_grid);
            binder.bind_static_method("Cocos2d", "PageTurn3D", "create", Cocos2dxBind_cocos2d__PageTurn3D_create);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "clone", Cocos2dxBind_cocos2d__PageTurn3D_clone);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "update", Cocos2dxBind_cocos2d__PageTurn3D_update);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_vertex_11", Cocos2dxBind_cocos2d__PageTurn3D_get_vertex_11);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_original_vertex_11", Cocos2dxBind_cocos2d__PageTurn3D_get_original_vertex_11);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_vertex_11", Cocos2dxBind_cocos2d__PageTurn3D_set_vertex_11);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_grid_rect_11", Cocos2dxBind_cocos2d__PageTurn3D_get_grid_rect_11);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "reverse_12", Cocos2dxBind_cocos2d__PageTurn3D_reverse_12);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "start_with_target_12", Cocos2dxBind_cocos2d__PageTurn3D_start_with_target_12);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "init_with_duration_3", Cocos2dxBind_cocos2d__PageTurn3D_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_elapsed_90", Cocos2dxBind_cocos2d__PageTurn3D_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__PageTurn3D_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__PageTurn3D_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "is_done_87", Cocos2dxBind_cocos2d__PageTurn3D_is_done_87);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "step_88", Cocos2dxBind_cocos2d__PageTurn3D_step_88);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_duration_103", Cocos2dxBind_cocos2d__PageTurn3D_get_duration_103);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_duration_103", Cocos2dxBind_cocos2d__PageTurn3D_set_duration_103);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "description_106", Cocos2dxBind_cocos2d__PageTurn3D_description_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "stop_58", Cocos2dxBind_cocos2d__PageTurn3D_stop_58);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_target_106", Cocos2dxBind_cocos2d__PageTurn3D_get_target_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_target_106", Cocos2dxBind_cocos2d__PageTurn3D_set_target_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_original_target_106", Cocos2dxBind_cocos2d__PageTurn3D_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_original_target_106", Cocos2dxBind_cocos2d__PageTurn3D_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_tag_106", Cocos2dxBind_cocos2d__PageTurn3D_get_tag_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_tag_106", Cocos2dxBind_cocos2d__PageTurn3D_set_tag_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_flags_106", Cocos2dxBind_cocos2d__PageTurn3D_get_flags_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "set_flags_106", Cocos2dxBind_cocos2d__PageTurn3D_set_flags_106);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "retain_176", Cocos2dxBind_cocos2d__PageTurn3D_retain_176);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "release_176", Cocos2dxBind_cocos2d__PageTurn3D_release_176);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "autorelease_176", Cocos2dxBind_cocos2d__PageTurn3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "get_reference_count_176", Cocos2dxBind_cocos2d__PageTurn3D_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ProgressTo", "create", Cocos2dxBind_cocos2d__ProgressTo_create);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "clone", Cocos2dxBind_cocos2d__ProgressTo_clone);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "reverse", Cocos2dxBind_cocos2d__ProgressTo_reverse);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "start_with_target", Cocos2dxBind_cocos2d__ProgressTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "update", Cocos2dxBind_cocos2d__ProgressTo_update);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "init_with_duration", Cocos2dxBind_cocos2d__ProgressTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_elapsed_90", Cocos2dxBind_cocos2d__ProgressTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ProgressTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ProgressTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "is_done_87", Cocos2dxBind_cocos2d__ProgressTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "step_88", Cocos2dxBind_cocos2d__ProgressTo_step_88);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_duration_103", Cocos2dxBind_cocos2d__ProgressTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_duration_103", Cocos2dxBind_cocos2d__ProgressTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "description_106", Cocos2dxBind_cocos2d__ProgressTo_description_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "stop_58", Cocos2dxBind_cocos2d__ProgressTo_stop_58);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_target_106", Cocos2dxBind_cocos2d__ProgressTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_target_106", Cocos2dxBind_cocos2d__ProgressTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_original_target_106", Cocos2dxBind_cocos2d__ProgressTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_original_target_106", Cocos2dxBind_cocos2d__ProgressTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_tag_106", Cocos2dxBind_cocos2d__ProgressTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_tag_106", Cocos2dxBind_cocos2d__ProgressTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_flags_106", Cocos2dxBind_cocos2d__ProgressTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "set_flags_106", Cocos2dxBind_cocos2d__ProgressTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "retain_176", Cocos2dxBind_cocos2d__ProgressTo_retain_176);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "release_176", Cocos2dxBind_cocos2d__ProgressTo_release_176);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "autorelease_176", Cocos2dxBind_cocos2d__ProgressTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ProgressTo", "get_reference_count_176", Cocos2dxBind_cocos2d__ProgressTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ProgressFromTo", "create", Cocos2dxBind_cocos2d__ProgressFromTo_create);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "clone", Cocos2dxBind_cocos2d__ProgressFromTo_clone);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "reverse", Cocos2dxBind_cocos2d__ProgressFromTo_reverse);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "start_with_target", Cocos2dxBind_cocos2d__ProgressFromTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "update", Cocos2dxBind_cocos2d__ProgressFromTo_update);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "init_with_duration", Cocos2dxBind_cocos2d__ProgressFromTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_elapsed_90", Cocos2dxBind_cocos2d__ProgressFromTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ProgressFromTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ProgressFromTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "is_done_87", Cocos2dxBind_cocos2d__ProgressFromTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "step_88", Cocos2dxBind_cocos2d__ProgressFromTo_step_88);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_duration_103", Cocos2dxBind_cocos2d__ProgressFromTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_duration_103", Cocos2dxBind_cocos2d__ProgressFromTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "description_106", Cocos2dxBind_cocos2d__ProgressFromTo_description_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "stop_58", Cocos2dxBind_cocos2d__ProgressFromTo_stop_58);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_target_106", Cocos2dxBind_cocos2d__ProgressFromTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_target_106", Cocos2dxBind_cocos2d__ProgressFromTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_original_target_106", Cocos2dxBind_cocos2d__ProgressFromTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_original_target_106", Cocos2dxBind_cocos2d__ProgressFromTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_tag_106", Cocos2dxBind_cocos2d__ProgressFromTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_tag_106", Cocos2dxBind_cocos2d__ProgressFromTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_flags_106", Cocos2dxBind_cocos2d__ProgressFromTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "set_flags_106", Cocos2dxBind_cocos2d__ProgressFromTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "retain_176", Cocos2dxBind_cocos2d__ProgressFromTo_retain_176);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "release_176", Cocos2dxBind_cocos2d__ProgressFromTo_release_176);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "autorelease_176", Cocos2dxBind_cocos2d__ProgressFromTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "get_reference_count_176", Cocos2dxBind_cocos2d__ProgressFromTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ShakyTiles3D", "create", Cocos2dxBind_cocos2d__ShakyTiles3D_create);
            binder.bind_custom_method("Cocos2d", "ShakyTiles3D", "clone", Cocos2dxBind_cocos2d__ShakyTiles3D_clone);
            binder.bind_custom_method("Cocos2d", "ShakyTiles3D", "update", Cocos2dxBind_cocos2d__ShakyTiles3D_update);
            binder.bind_custom_method("Cocos2d", "ShakyTiles3D", "init_with_duration", Cocos2dxBind_cocos2d__ShakyTiles3D_init_with_duration);
            binder.bind_static_method("Cocos2d", "ShatteredTiles3D", "create", Cocos2dxBind_cocos2d__ShatteredTiles3D_create);
            binder.bind_custom_method("Cocos2d", "ShatteredTiles3D", "clone", Cocos2dxBind_cocos2d__ShatteredTiles3D_clone);
            binder.bind_custom_method("Cocos2d", "ShatteredTiles3D", "update", Cocos2dxBind_cocos2d__ShatteredTiles3D_update);
            binder.bind_custom_method("Cocos2d", "ShatteredTiles3D", "init_with_duration", Cocos2dxBind_cocos2d__ShatteredTiles3D_init_with_duration);
            binder.bind_static_method("Cocos2d", "ShuffleTiles", "create", Cocos2dxBind_cocos2d__ShuffleTiles_create);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "shuffle", Cocos2dxBind_cocos2d__ShuffleTiles_shuffle);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "get_delta", Cocos2dxBind_cocos2d__ShuffleTiles_get_delta);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "place_tile", Cocos2dxBind_cocos2d__ShuffleTiles_place_tile);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "start_with_target", Cocos2dxBind_cocos2d__ShuffleTiles_start_with_target);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "update", Cocos2dxBind_cocos2d__ShuffleTiles_update);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "clone", Cocos2dxBind_cocos2d__ShuffleTiles_clone);
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "init_with_duration", Cocos2dxBind_cocos2d__ShuffleTiles_init_with_duration);

          }

    }
}
