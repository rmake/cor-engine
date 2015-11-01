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
#include "../projects/cor_lib_test_main/cocos2d/cocos/cocos2d.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/ui/UIEditBox/UIEditBox.h"
#include "../projects/cor_lib_test_main/cocos2d/extensions/GUI/CCScrollView/CCScrollView.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/audio/include/SimpleAudioEngine.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "sub_binding_generated.h"

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

        bool Cocos2dxBind_cocos2d__Texture2D_init_with_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> c, const void * a0, int a1, int a2, int a3, int a4, cocos2d::Size a5)
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

        MrubyRef Cocos2dxBind_cocos2d__EventTouch_get_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getTouches());
        }

        void Cocos2dxBind_cocos2d__EventTouch_set_event_code(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c, int a0)
        {

            c->setEventCode((cocos2d::EventTouch::EventCode)a0);
        }

        void Cocos2dxBind_cocos2d__EventTouch_set_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventTouch> c, MrubyRef a0)
        {

            c->setTouches(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0));
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

        int Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_collision_group_pair(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, int a1)
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

        int Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_nearest(std::weak_ptr<cor::cocos2dx_converter::Collision2dNode> c, int a0, cor::type::Vector2Tmpl<float> a1, int a2, mrubybind::FuncPtr<void (float, cor::cocos2dx_converter::Collision2dNodeRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a3)
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

        void Cocos2dxBind_cor__cocos2dx_converter__EasyHttpClient_get_text(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0, mrubybind::FuncPtr<void (std::string, std::string)> a1)
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

        int Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_is_erased(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSensor> c)
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

        std::vector<cocos2d::Value, std::allocator<cocos2d::Value> > Cocos2dxBind_cocos2d__Value_as_value_vector_2(cocos2d::Value c)
        {

            return c.asValueVector();
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__Value_as_value_map_2(cocos2d::Value c)
        {

            return c.asValueMap();
        }

        std::unordered_map<int, cocos2d::Value, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, cocos2d::Value> > > Cocos2dxBind_cocos2d__Value_as_int_key_map_2(cocos2d::Value c)
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

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> Cocos2dxBind_cocos2d__AnimationFrame_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, float a1, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a2)
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

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__AnimationFrame_get_user_info_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->getUserInfo();
        }

        void Cocos2dxBind_cocos2d__AnimationFrame_set_user_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {

            c->setUserInfo(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> Cocos2dxBind_cocos2d__AnimationFrame_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__AnimationFrame_init_with_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationFrame> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, float a1, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a2)
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
            binder.bind_static_method("Cocos2d", "Value", "create_12", Cocos2dxBind_Value_create_12);
            binder.bind_static_method("Cocos2d", "Value", "create_14", Cocos2dxBind_Value_create_14);
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
