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
        
        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, bool a0)
        {

            c->setSensor(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_calculate_default_moment_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->calculateDefaultMoment();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_create(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsShapeEdgeChain::create(a0, a1, a2, a3);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_center(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getCenter();
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_points_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getPointsCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, bool a0)
        {

            c->setSensor(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_calculate_default_moment_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_offset_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getOffset();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_1()
        {

            return cocos2d::PhysicsBody::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_2(float a0)
        {

            return cocos2d::PhysicsBody::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_3(float a0, float a1)
        {

            return cocos2d::PhysicsBody::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_circle(float a0, cocos2d::PhysicsMaterial a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsBody::createCircle(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_box(cocos2d::Size a0, cocos2d::PhysicsMaterial a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsBody::createBox(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_polygon(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, cocos2d::Vec2 a3)
        {

            return cocos2d::PhysicsBody::createPolygon(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_edge_segment(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsBody::createEdgeSegment(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_edge_box(cocos2d::Size a0, cocos2d::PhysicsMaterial a1, float a2, cocos2d::Vec2 a3)
        {

            return cocos2d::PhysicsBody::createEdgeBox(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_edge_polygon(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsBody::createEdgePolygon(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsBody_create_edge_chain(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsBody::createEdgeChain(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsBody_add_shape(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, bool a1)
        {

            return c->addShape(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_remove_shape_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, bool a1)
        {

            c->removeShape(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_remove_shape_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0, bool a1)
        {

            c->removeShape(a0, a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_remove_all_shapes(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->removeAllShapes(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__PhysicsBody_get_shapes(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getShapes());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsBody_get_first_shape(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getFirstShape();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsBody_get_shape(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            return c->getShape(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_apply_force_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            c->applyForce(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_apply_force_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            c->applyForce(a0, a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_reset_forces(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            c->resetForces();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_apply_impulse_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            c->applyImpulse(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_apply_impulse_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0, cocos2d::Vec2 a1)
        {

            c->applyImpulse(a0, a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_apply_torque(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->applyTorque(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_velocity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            c->setVelocity(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_get_velocity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getVelocity();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_angular_velocity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setAngularVelocity(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_at_local_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            return c->getVelocityAtLocalPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_at_world_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            return c->getVelocityAtWorldPoint(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_angular_velocity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getAngularVelocity();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_velocity_limit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setVelocityLimit(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_limit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getVelocityLimit();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_angular_velocity_limit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setAngularVelocityLimit(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_angular_velocity_limit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getAngularVelocityLimit();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_remove_from_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            c->removeFromWorld();
        }

        cocos2d::PhysicsWorld* Cocos2dxBind_cocos2d__PhysicsBody_get_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getWorld();
        }

        std::vector<cocos2d::PhysicsJoint*> Cocos2dxBind_cocos2d__PhysicsBody_get_joints(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getJoints();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__PhysicsBody_get_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getNode();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_category_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_contact_test_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_collision_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_get_category_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getCategoryBitmask();
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_get_contact_test_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getContactTestBitmask();
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_get_collision_bitmask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_group(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_get_group(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getGroup();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_get_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getPosition();
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_rotation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_position_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            c->setPositionOffset(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_get_position_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getPositionOffset();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_rotation_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setRotationOffset(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_rotation_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getRotationOffset();
        }

        bool Cocos2dxBind_cocos2d__PhysicsBody_is_dynamic(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->isDynamic();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_dynamic(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->setDynamic(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_mass(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_mass(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_add_mass(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->addMass(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_moment(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setMoment(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_moment(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_add_moment(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->addMoment(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_linear_damping(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getLinearDamping();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_linear_damping(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setLinearDamping(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsBody_get_angular_damping(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getAngularDamping();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_angular_damping(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, float a0)
        {

            c->setAngularDamping(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsBody_is_resting(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->isResting();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_resting(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->setResting(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsBody_is_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_enable(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->setEnable(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsBody_is_rotation_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->isRotationEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_rotation_enable(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->setRotationEnable(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsBody_is_gravity_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->isGravityEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_gravity_enable(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, bool a0)
        {

            c->setGravityEnable(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_get_tag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_set_tag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a0)
        {

            c->setTag(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_world2_local(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            return c->world2Local(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsBody_local2_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, cocos2d::Vec2 a0)
        {

            return c->local2World(a0);
        }

        cpBody* Cocos2dxBind_cocos2d__PhysicsBody_get_cp_body(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getCPBody();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsBody_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsBody_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsContact_get_shape_a(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getShapeA();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsContact_get_shape_b(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getShapeB();
        }

        cocos2d::PhysicsContactData* Cocos2dxBind_cocos2d__PhysicsContact_get_contact_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return const_cast<cocos2d::PhysicsContactData* >(c->getContactData());
        }

        cocos2d::PhysicsContactData* Cocos2dxBind_cocos2d__PhysicsContact_get_pre_contact_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return const_cast<cocos2d::PhysicsContactData* >(c->getPreContactData());
        }

        void* Cocos2dxBind_cocos2d__PhysicsContact_get_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getData();
        }

        void Cocos2dxBind_cocos2d__PhysicsContact_set_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c, void * a0)
        {

            c->setData(a0);
        }

        cocos2d::PhysicsContact::EventCode Cocos2dxBind_cocos2d__PhysicsContact_get_event_code(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getEventCode();
        }

        void Cocos2dxBind_cocos2d__PhysicsContact_set_user_data_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c, void * a0)
        {

            c->setUserData(a0);
        }

        void* Cocos2dxBind_cocos2d__PhysicsContact_get_user_data_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getUserData();
        }

        std::string Cocos2dxBind_cocos2d__PhysicsContact_get_event_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getEventName();
        }

        cocos2d::Event::Type Cocos2dxBind_cocos2d__PhysicsContact_get_type_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getType();
        }

        void Cocos2dxBind_cocos2d__PhysicsContact_stop_propagation_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            c->stopPropagation();
        }

        bool Cocos2dxBind_cocos2d__PhysicsContact_is_stopped_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->isStopped();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__PhysicsContact_get_current_target_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getCurrentTarget();
        }

        void Cocos2dxBind_cocos2d__PhysicsContact_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsContact_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsContact_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsContact_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {

            return c->getReferenceCount();
        }

        float Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_restitution(cocos2d::PhysicsContactPreSolve* c)
        {

            return c->getRestitution();
        }

        float Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_friction(cocos2d::PhysicsContactPreSolve* c)
        {

            return c->getFriction();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_surface_velocity(cocos2d::PhysicsContactPreSolve* c)
        {

            return c->getSurfaceVelocity();
        }

        void Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_restitution(cocos2d::PhysicsContactPreSolve* c, float a0)
        {

            c->setRestitution(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_friction(cocos2d::PhysicsContactPreSolve* c, float a0)
        {

            c->setFriction(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_surface_velocity(cocos2d::PhysicsContactPreSolve* c, cocos2d::Vec2 a0)
        {

            c->setSurfaceVelocity(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsContactPreSolve_ignore(cocos2d::PhysicsContactPreSolve* c)
        {

            c->ignore();
        }

        float Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_restitution(cocos2d::PhysicsContactPostSolve* c)
        {

            return c->getRestitution();
        }

        float Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_friction(cocos2d::PhysicsContactPostSolve* c)
        {

            return c->getFriction();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_surface_velocity(cocos2d::PhysicsContactPostSolve* c)
        {

            return c->getSurfaceVelocity();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> Cocos2dxBind_cocos2d__EventListenerPhysicsContact_create()
        {

            return cocos2d::EventListenerPhysicsContact::create();
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContact_check_available_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            return c->checkAvailable();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> Cocos2dxBind_cocos2d__EventListenerPhysicsContact_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContact_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerPhysicsContact_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerPhysicsContact_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_begin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactBegin = 
              [=](cocos2d::PhysicsContact & b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_pre_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPreSolve*)> a)
        {

            c->onContactPreSolve = 
              [=](cocos2d::PhysicsContact & b0, cocos2d::PhysicsContactPreSolve & b1){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), &b1);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_post_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPostSolve*)> a)
        {

            c->onContactPostSolve = 
              [=](cocos2d::PhysicsContact & b0, const cocos2d::PhysicsContactPostSolve & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), const_cast<cocos2d::PhysicsContactPostSolve*>(&b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_separate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactSeparate = 
              [=](cocos2d::PhysicsContact & b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a1)
        {

            return cocos2d::EventListenerPhysicsContactWithBodies::create(a0.get(), a1.get());
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_hit_test(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a1)
        {

            return c->hitTest(a0.get(), a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_check_available_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            return c->checkAvailable();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_begin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactBegin = 
              [=](cocos2d::PhysicsContact & b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_pre_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPreSolve*)> a)
        {

            c->onContactPreSolve = 
              [=](cocos2d::PhysicsContact & b0, cocos2d::PhysicsContactPreSolve & b1){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), &b1);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_post_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPostSolve*)> a)
        {

            c->onContactPostSolve = 
              [=](cocos2d::PhysicsContact & b0, const cocos2d::PhysicsContactPostSolve & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), const_cast<cocos2d::PhysicsContactPostSolve*>(&b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_separate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactSeparate = 
              [=](cocos2d::PhysicsContact & b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a1)
        {

            return cocos2d::EventListenerPhysicsContactWithShapes::create(a0.get(), a1.get());
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_hit_test(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a1)
        {

            return c->hitTest(a0.get(), a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_check_available_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            return c->checkAvailable();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_begin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactBegin = 
              [=](cocos2d::PhysicsContact & b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_pre_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPreSolve*)> a)
        {

            c->onContactPreSolve = 
              [=](cocos2d::PhysicsContact & b0, cocos2d::PhysicsContactPreSolve & b1){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), &b1);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_post_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPostSolve*)> a)
        {

            c->onContactPostSolve = 
              [=](cocos2d::PhysicsContact & b0, const cocos2d::PhysicsContactPostSolve & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), const_cast<cocos2d::PhysicsContactPostSolve*>(&b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_separate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactSeparate = 
              [=](cocos2d::PhysicsContact & b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_create(int a0)
        {

            return cocos2d::EventListenerPhysicsContactWithGroup::create(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_hit_test(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a1)
        {

            return c->hitTest(a0.get(), a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_check_available_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            return c->checkAvailable();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_begin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactBegin = 
              [=](cocos2d::PhysicsContact & b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_pre_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPreSolve*)> a)
        {

            c->onContactPreSolve = 
              [=](cocos2d::PhysicsContact & b0, cocos2d::PhysicsContactPreSolve & b1){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), &b1);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_post_solve(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>, cocos2d::PhysicsContactPostSolve*)> a)
        {

            c->onContactPostSolve = 
              [=](cocos2d::PhysicsContact & b0, const cocos2d::PhysicsContactPostSolve & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0), const_cast<cocos2d::PhysicsContactPostSolve*>(&b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_separate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>)> a)
        {

            c->onContactSeparate = 
              [=](cocos2d::PhysicsContact & b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact>(&b0));
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsJoint_get_body_a_2(cocos2d::PhysicsJoint* c)
        {

            return c->getBodyA();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsJoint_get_body_b_2(cocos2d::PhysicsJoint* c)
        {

            return c->getBodyB();
        }

        cocos2d::PhysicsWorld* Cocos2dxBind_cocos2d__PhysicsJoint_get_world_2(cocos2d::PhysicsJoint* c)
        {

            return c->getWorld();
        }

        int Cocos2dxBind_cocos2d__PhysicsJoint_get_tag_2(cocos2d::PhysicsJoint* c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__PhysicsJoint_set_tag_2(cocos2d::PhysicsJoint* c, int a0)
        {

            c->setTag(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsJoint_is_enabled_2(cocos2d::PhysicsJoint* c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsJoint_set_enable_2(cocos2d::PhysicsJoint* c, bool a0)
        {

            c->setEnable(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsJoint_is_collision_enabled_2(cocos2d::PhysicsJoint* c)
        {

            return c->isCollisionEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsJoint_set_collision_enable_2(cocos2d::PhysicsJoint* c, bool a0)
        {

            c->setCollisionEnable(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsJoint_remove_form_world_2(cocos2d::PhysicsJoint* c)
        {

            c->removeFormWorld();
        }

        void Cocos2dxBind_cocos2d__PhysicsJoint_set_max_force_2(cocos2d::PhysicsJoint* c, float a0)
        {

            c->setMaxForce(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsJoint_get_max_force_2(cocos2d::PhysicsJoint* c)
        {

            return c->getMaxForce();
        }

        cocos2d::PhysicsJointFixed* Cocos2dxBind_cocos2d__PhysicsJointFixed_construct(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsJointFixed::construct(a0.get(), a1.get(), a2);
        }

        bool Cocos2dxBind_cocos2d__PhysicsJointFixed_create_constraints(cocos2d::PhysicsJointFixed* c)
        {

            return c->createConstraints();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsJointFixed_get_body_a_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->getBodyA();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsJointFixed_get_body_b_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->getBodyB();
        }

        cocos2d::PhysicsWorld* Cocos2dxBind_cocos2d__PhysicsJointFixed_get_world_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->getWorld();
        }

        int Cocos2dxBind_cocos2d__PhysicsJointFixed_get_tag_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__PhysicsJointFixed_set_tag_2(cocos2d::PhysicsJointFixed* c, int a0)
        {

            c->setTag(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsJointFixed_is_enabled_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsJointFixed_set_enable_2(cocos2d::PhysicsJointFixed* c, bool a0)
        {

            c->setEnable(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsJointFixed_is_collision_enabled_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->isCollisionEnabled();
        }

        void Cocos2dxBind_cocos2d__PhysicsJointFixed_set_collision_enable_2(cocos2d::PhysicsJointFixed* c, bool a0)
        {

            c->setCollisionEnable(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsJointFixed_remove_form_world_2(cocos2d::PhysicsJointFixed* c)
        {

            c->removeFormWorld();
        }

        void Cocos2dxBind_cocos2d__PhysicsJointFixed_set_max_force_2(cocos2d::PhysicsJointFixed* c, float a0)
        {

            c->setMaxForce(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsJointFixed_get_max_force_2(cocos2d::PhysicsJointFixed* c)
        {

            return c->getMaxForce();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_add_joint(cocos2d::PhysicsWorld* c, cocos2d::PhysicsJoint* a0)
        {

            c->addJoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_remove_joint(cocos2d::PhysicsWorld* c, cocos2d::PhysicsJoint* a0, bool a1)
        {

            c->removeJoint(a0, a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_remove_all_joints(cocos2d::PhysicsWorld* c, bool a0)
        {

            c->removeAllJoints(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_remove_body_1(cocos2d::PhysicsWorld* c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->removeBody(a0.get());
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_remove_body_2(cocos2d::PhysicsWorld* c, int a0)
        {

            c->removeBody(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_remove_all_bodies(cocos2d::PhysicsWorld* c)
        {

            c->removeAllBodies();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_ray_cast(cocos2d::PhysicsWorld* c, mrubybind::FuncPtr<bool (cocos2d::PhysicsWorld*, cocos2d::PhysicsRayCastInfo, void *)> a0, cocos2d::Vec2 a1, cocos2d::Vec2 a2, void * a3)
        {

            c->rayCast(
              [=](cocos2d::PhysicsWorld & b0, const cocos2d::PhysicsRayCastInfo & b1, void * b2){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          r = a0.func()(&b0, b1, b2);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_query_rect(cocos2d::PhysicsWorld* c, mrubybind::FuncPtr<bool (cocos2d::PhysicsWorld*, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape>, void *)> a0, cocos2d::Rect a1, void * a2)
        {

            c->queryRect(
              [=](cocos2d::PhysicsWorld & b0, cocos2d::PhysicsShape & b1, void * b2){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          r = a0.func()(&b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape>(&b1), b2);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_query_point(cocos2d::PhysicsWorld* c, mrubybind::FuncPtr<bool (cocos2d::PhysicsWorld*, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape>, void *)> a0, cocos2d::Vec2 a1, void * a2)
        {

            c->queryPoint(
              [=](cocos2d::PhysicsWorld & b0, cocos2d::PhysicsShape & b1, void * b2){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          r = a0.func()(&b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape>(&b1), b2);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
, a1, a2);
        }

        MrubyRef Cocos2dxBind_cocos2d__PhysicsWorld_get_shapes(cocos2d::PhysicsWorld* c, cocos2d::Vec2 a0)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getShapes(a0));
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsWorld_get_shape(cocos2d::PhysicsWorld* c, cocos2d::Vec2 a0)
        {

            return c->getShape(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__PhysicsWorld_get_all_bodies(cocos2d::PhysicsWorld* c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getAllBodies());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsWorld_get_body(cocos2d::PhysicsWorld* c, int a0)
        {

            return c->getBody(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsWorld_get_gravity(cocos2d::PhysicsWorld* c)
        {

            return c->getGravity();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_gravity(cocos2d::PhysicsWorld* c, cocos2d::Vec2 a0)
        {

            c->setGravity(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_speed(cocos2d::PhysicsWorld* c, float a0)
        {

            c->setSpeed(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsWorld_get_speed(cocos2d::PhysicsWorld* c)
        {

            return c->getSpeed();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_update_rate(cocos2d::PhysicsWorld* c, int a0)
        {

            c->setUpdateRate(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsWorld_get_update_rate(cocos2d::PhysicsWorld* c)
        {

            return c->getUpdateRate();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_substeps(cocos2d::PhysicsWorld* c, int a0)
        {

            c->setSubsteps(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsWorld_get_substeps(cocos2d::PhysicsWorld* c)
        {

            return c->getSubsteps();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_debug_draw_mask(cocos2d::PhysicsWorld* c, int a0)
        {

            c->setDebugDrawMask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsWorld_get_debug_draw_mask(cocos2d::PhysicsWorld* c)
        {

            return c->getDebugDrawMask();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_set_auto_step(cocos2d::PhysicsWorld* c, bool a0)
        {

            c->setAutoStep(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsWorld_is_auto_step(cocos2d::PhysicsWorld* c)
        {

            return c->isAutoStep();
        }

        void Cocos2dxBind_cocos2d__PhysicsWorld_step(cocos2d::PhysicsWorld* c, float a0)
        {

            c->step(a0);
        }

        cocos2d::FileUtils* Cocos2dxBind_cocos2d__FileUtils_get_instance()
        {

            return cocos2d::FileUtils::getInstance();
        }

        void Cocos2dxBind_cocos2d__FileUtils_destroy_instance()
        {

            cocos2d::FileUtils::destroyInstance();
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_delegate(cocos2d::FileUtils* a0)
        {

            cocos2d::FileUtils::setDelegate(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_purge_cached_entries(cocos2d::FileUtils* c)
        {

            c->purgeCachedEntries();
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_get_string_from_file(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getStringFromFile(a0);
        }

        cocos2d::Data Cocos2dxBind_cocos2d__FileUtils_get_data_from_file(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getDataFromFile(a0);
        }

        unsigned char* Cocos2dxBind_cocos2d__FileUtils_get_file_data_from_zip(cocos2d::FileUtils* c, std::string a0, std::string a1, ssize_t * a2)
        {

            return c->getFileDataFromZip(a0, a1, a2);
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_full_path_for_filename(cocos2d::FileUtils* c, std::string a0)
        {

            return c->fullPathForFilename(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_load_filename_lookup_dictionary_from_file(cocos2d::FileUtils* c, std::string a0)
        {

            c->loadFilenameLookupDictionaryFromFile(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_filename_lookup_dictionary(cocos2d::FileUtils* c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {

            c->setFilenameLookupDictionary(a0);
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_full_path_from_relative_file(cocos2d::FileUtils* c, std::string a0, std::string a1)
        {

            return c->fullPathFromRelativeFile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_search_resolutions_order(cocos2d::FileUtils* c, std::vector<std::string> a0)
        {

            c->setSearchResolutionsOrder(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_add_search_resolutions_order(cocos2d::FileUtils* c, std::string a0, const bool a1)
        {

            c->addSearchResolutionsOrder(a0, a1);
        }

        std::vector<std::string> Cocos2dxBind_cocos2d__FileUtils_get_search_resolutions_order(cocos2d::FileUtils* c)
        {

            return c->getSearchResolutionsOrder();
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_search_paths(cocos2d::FileUtils* c, std::vector<std::string> a0)
        {

            c->setSearchPaths(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_default_resource_root_path(cocos2d::FileUtils* c, std::string a0)
        {

            c->setDefaultResourceRootPath(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_add_search_path(cocos2d::FileUtils* c, std::string a0, const bool a1)
        {

            c->addSearchPath(a0, a1);
        }

        std::vector<std::string> Cocos2dxBind_cocos2d__FileUtils_get_search_paths(cocos2d::FileUtils* c)
        {

            return c->getSearchPaths();
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_get_writable_path(cocos2d::FileUtils* c)
        {

            return c->getWritablePath();
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_writable_path(cocos2d::FileUtils* c, std::string a0)
        {

            c->setWritablePath(a0);
        }

        void Cocos2dxBind_cocos2d__FileUtils_set_popup_notify(cocos2d::FileUtils* c, bool a0)
        {

            c->setPopupNotify(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_is_popup_notify(cocos2d::FileUtils* c)
        {

            return c->isPopupNotify();
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__FileUtils_get_value_map_from_file(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getValueMapFromFile(a0);
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__FileUtils_get_value_map_from_data(cocos2d::FileUtils* c, const char * a0, int a1)
        {

            return c->getValueMapFromData(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_write_string_to_file(cocos2d::FileUtils* c, std::string a0, std::string a1)
        {

            return c->writeStringToFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_write_data_to_file(cocos2d::FileUtils* c, cocos2d::Data a0, std::string a1)
        {

            return c->writeDataToFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_write_value_vector_to_file(cocos2d::FileUtils* c, std::vector<cocos2d::Value, std::allocator<cocos2d::Value>> a0, std::string a1)
        {

            return c->writeValueVectorToFile(a0, a1);
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_get_suitable_f_open(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getSuitableFOpen(a0);
        }

        std::vector<cocos2d::Value, std::allocator<cocos2d::Value> > Cocos2dxBind_cocos2d__FileUtils_get_value_vector_from_file(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getValueVectorFromFile(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_is_file_exist(cocos2d::FileUtils* c, std::string a0)
        {

            return c->isFileExist(a0);
        }

        std::string Cocos2dxBind_cocos2d__FileUtils_get_file_extension(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getFileExtension(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_is_absolute_path(cocos2d::FileUtils* c, std::string a0)
        {

            return c->isAbsolutePath(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_is_directory_exist(cocos2d::FileUtils* c, std::string a0)
        {

            return c->isDirectoryExist(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_create_directory(cocos2d::FileUtils* c, std::string a0)
        {

            return c->createDirectory(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_remove_directory(cocos2d::FileUtils* c, std::string a0)
        {

            return c->removeDirectory(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_remove_file(cocos2d::FileUtils* c, std::string a0)
        {

            return c->removeFile(a0);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_rename_file_1(cocos2d::FileUtils* c, std::string a0, std::string a1, std::string a2)
        {

            return c->renameFile(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__FileUtils_rename_file_2(cocos2d::FileUtils* c, std::string a0, std::string a1)
        {

            return c->renameFile(a0, a1);
        }

        int Cocos2dxBind_cocos2d__FileUtils_get_file_size(cocos2d::FileUtils* c, std::string a0)
        {

            return c->getFileSize(a0);
        }

        std::unordered_map<std::string, std::string> Cocos2dxBind_cocos2d__FileUtils_get_full_path_cache(cocos2d::FileUtils* c)
        {

            return c->getFullPathCache();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> Cocos2dxBind_cocos2d__AnimationCache_get_instance()
        {

            return cocos2d::AnimationCache::getInstance();
        }

        void Cocos2dxBind_cocos2d__AnimationCache_destroy_instance()
        {

            cocos2d::AnimationCache::destroyInstance();
        }

        bool Cocos2dxBind_cocos2d__AnimationCache_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__AnimationCache_add_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> a0, std::string a1)
        {

            c->addAnimation(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AnimationCache_remove_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, std::string a0)
        {

            c->removeAnimation(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation> Cocos2dxBind_cocos2d__AnimationCache_get_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, std::string a0)
        {

            return c->getAnimation(a0);
        }

        void Cocos2dxBind_cocos2d__AnimationCache_add_animations_with_dictionary(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0, std::string a1)
        {

            c->addAnimationsWithDictionary(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AnimationCache_add_animations_with_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, std::string a0)
        {

            c->addAnimationsWithFile(a0);
        }

        void Cocos2dxBind_cocos2d__AnimationCache_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AnimationCache_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AnimationCache_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AnimationCache_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__AnimationCache_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__AnimationCache_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__AnimationCache_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__AnimationCache_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__AnimationCache_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__AnimationCache_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> Cocos2dxBind_cocos2d__SpriteBatchNode_create_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1)
        {

            return cocos2d::SpriteBatchNode::createWithTexture(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> Cocos2dxBind_cocos2d__SpriteBatchNode_create(std::string a0, int a1)
        {

            return cocos2d::SpriteBatchNode::create(a0, a1);
        }

        cocos2d::TextureAtlas* Cocos2dxBind_cocos2d__SpriteBatchNode_get_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getTextureAtlas();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::TextureAtlas * a0)
        {

            c->setTextureAtlas(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__SpriteBatchNode_get_descendants_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getDescendants());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_increase_atlas_capacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->increaseAtlasCapacity();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_at_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0, bool a1)
        {

            c->removeChildAtIndex(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_append_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            c->appendChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_sprite_from_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            c->removeSpriteFromAtlas(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_rebuild_index_in_order_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1)
        {

            return c->rebuildIndexInOrder(a0.get(), a1);
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_highest_atlas_index_in_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            return c->highestAtlasIndexInChild(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_lowest_atlas_index_in_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            return c->lowestAtlasIndexInChild(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_atlas_index_for_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1)
        {

            return c->atlasIndexForChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_reorder_batch_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->reorderBatch(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__SpriteBatchNode_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__SpriteBatchNode_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_visit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_reorder_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_children_with_cleanup_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_sort_all_children_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->sortAllChildren();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        std::string Cocos2dxBind_cocos2d__SpriteBatchNode_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_insert_quad_from_sprite_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1)
        {

            c->insertQuadFromSprite(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> Cocos2dxBind_cocos2d__SpriteBatchNode_add_sprite_without_quad_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1, int a2)
        {

            return c->addSpriteWithoutQuad(a0.get(), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1)
        {

            return c->initWithTexture(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0, int a1)
        {

            return c->initWithFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__SpriteBatchNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__SpriteBatchNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SpriteBatchNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SpriteBatchNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__SpriteBatchNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->removeAllChildren();
        }

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__SpriteBatchNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__SpriteBatchNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__SpriteBatchNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__SpriteBatchNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__SpriteBatchNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__SpriteBatchNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__SpriteBatchNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__SpriteBatchNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__SpriteBatchNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__SpriteBatchNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__SpriteBatchNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__SpriteBatchNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__SpriteBatchNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__SpriteBatchNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__SpriteBatchNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__SpriteBatchNode_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__SpriteBatchNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__SpriteBatchNode_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__SpriteBatchNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__SpriteBatchNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__SpriteBatchNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__SpriteBatchNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__SpriteBatchNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> Cocos2dxBind_cocos2d__TextFieldTTF_text_field_with_place_holder_1(std::string a0, cocos2d::Size a1, int a2, std::string a3, float a4)
        {

            return cocos2d::TextFieldTTF::textFieldWithPlaceHolder(a0, a1, (cocos2d::TextHAlignment)a2, a3, a4);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> Cocos2dxBind_cocos2d__TextFieldTTF_text_field_with_place_holder_2(std::string a0, std::string a1, float a2)
        {

            return cocos2d::TextFieldTTF::textFieldWithPlaceHolder(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_init_with_place_holder_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, cocos2d::Size a1, int a2, std::string a3, float a4)
        {

            return c->initWithPlaceHolder(a0, a1, (cocos2d::TextHAlignment)a2, a3, a4);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_init_with_place_holder_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, std::string a1, float a2)
        {

            return c->initWithPlaceHolder(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_attach_with_ime(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->attachWithIME();
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_detach_with_ime(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->detachWithIME();
        }

        cocos2d::TextFieldDelegate* Cocos2dxBind_cocos2d__TextFieldTTF_get_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getDelegate();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::TextFieldDelegate * a0)
        {

            c->setDelegate(a0);
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_char_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getCharCount();
        }

        cocos2d::Color4B Cocos2dxBind_cocos2d__TextFieldTTF_get_color_space_holder(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getColorSpaceHolder();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_color_space_holder_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color3B a0)
        {

            c->setColorSpaceHolder(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_color_space_holder_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color4B a0)
        {

            c->setColorSpaceHolder(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_text_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color4B a0)
        {

            c->setTextColor(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            c->setString(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_string(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getString();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_place_holder(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            c->setPlaceHolder(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_place_holder(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPlaceHolder();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_secure_text_entry(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setSecureTextEntry(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_secure_text_entry(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isSecureTextEntry();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_set_ttf_config_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::_ttfConfig a0)
        {

            return c->setTTFConfig(a0);
        }

        cocos2d::_ttfConfig Cocos2dxBind_cocos2d__TextFieldTTF_get_ttf_config_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getTTFConfig();
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_set_bm_font_file_path_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, cocos2d::Vec2 a1)
        {

            return c->setBMFontFilePath(a0, a1);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_bm_font_file_path_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getBMFontFilePath();
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, int a1, int a2, int a3)
        {

            return c->setCharMap(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, int a1, int a2, int a3)
        {

            return c->setCharMap(a0.get(), a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_6(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            return c->setCharMap(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_system_font_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            c->setSystemFontName(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_system_font_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getSystemFontName();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_system_font_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setSystemFontSize(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_system_font_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getSystemFontSize();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_request_system_font_refresh_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->requestSystemFontRefresh();
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_string_num_lines_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getStringNumLines();
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_string_length_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getStringLength();
        }

        cocos2d::Color4B Cocos2dxBind_cocos2d__TextFieldTTF_get_text_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getTextColor();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_enable_shadow_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color4B a0, cocos2d::Size a1, int a2)
        {

            c->enableShadow(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_enable_outline_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color4B a0, int a1)
        {

            c->enableOutline(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_enable_glow_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color4B a0)
        {

            c->enableGlow(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_disable_effect_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->disableEffect();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_disable_effect_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->disableEffect((cocos2d::LabelEffect)a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_alignment_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setAlignment((cocos2d::TextHAlignment)a0);
        }

        cocos2d::TextHAlignment Cocos2dxBind_cocos2d__TextFieldTTF_get_text_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getTextAlignment();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_alignment_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0, int a1)
        {

            c->setAlignment((cocos2d::TextHAlignment)a0, (cocos2d::TextVAlignment)a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_horizontal_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setHorizontalAlignment((cocos2d::TextHAlignment)a0);
        }

        cocos2d::TextHAlignment Cocos2dxBind_cocos2d__TextFieldTTF_get_horizontal_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getHorizontalAlignment();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_vertical_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setVerticalAlignment((cocos2d::TextVAlignment)a0);
        }

        cocos2d::TextVAlignment Cocos2dxBind_cocos2d__TextFieldTTF_get_vertical_alignment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getVerticalAlignment();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_line_break_without_space_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setLineBreakWithoutSpace(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_max_line_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setMaxLineWidth(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_max_line_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getMaxLineWidth();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setWidth(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_width_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getWidth();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setHeight(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getHeight();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_dimensions_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0, float a1)
        {

            c->setDimensions(a0, a1);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TextFieldTTF_get_dimensions_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getDimensions();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_content_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->updateContent();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__TextFieldTTF_get_letter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            return c->getLetter(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_clip_margin_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setClipMarginEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_clip_margin_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isClipMarginEnabled();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_line_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setLineHeight(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_line_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getLineHeight();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_additional_kerning_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setAdditionalKerning(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_additional_kerning_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getAdditionalKerning();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> Cocos2dxBind_cocos2d__TextFieldTTF_get_font_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getFontAtlas();
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__TextFieldTTF_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_displayed_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_displayed_opacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_description_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getDescription();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TextFieldTTF_get_content_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getContentSize();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__TextFieldTTF_get_bounding_box_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_camera_mask_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_children_with_cleanup_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_global_z_order_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getLocalZOrder();
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TextFieldTTF_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TextFieldTTF_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TextFieldTTF_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__TextFieldTTF_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__TextFieldTTF_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextFieldTTF_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__TextFieldTTF_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__TextFieldTTF_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TextFieldTTF_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__TextFieldTTF_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__TextFieldTTF_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__TextFieldTTF_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__TextFieldTTF_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScene();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__TextFieldTTF_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__TextFieldTTF_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__TextFieldTTF_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TextFieldTTF_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TextFieldTTF_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__TextFieldTTF_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__TextFieldTTF_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__TextFieldTTF_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TextFieldTTF_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TextFieldTTF_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TextFieldTTF_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__TextFieldTTF_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__TextFieldTTF_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TextFieldTTF_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TextFieldTTF_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__TextFieldTTF_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__TextFieldTTF_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getCameraMask();
        }

        bool Cocos2dxBind_cocos2d__TextFieldTTF_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TextFieldTTF_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TextFieldTTF_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TextFieldTTF_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {

            return c->getReferenceCount();
        }

        std::string Cocos2dxBind_cocos2d__TMXObjectGroup_get_group_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->getGroupName();
        }



        
        bool Cocos2dxBind_ParticleSystemQuad_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ProtectedNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RenderTexture_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Camera_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_BaseLight_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_DirectionLight_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AmbientLight_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TextureCache_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShape_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeCircle_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapePolygon_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeBox_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeEdgeSegment_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeEdgePolygon_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeEdgeBox_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsShapeEdgeChain_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_11(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("Cocos2d::EaseExponentialOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseExponentialOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseExponentialOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseExponentialOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseExponentialOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseExponentialInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseExponentialInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseExponentialInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseExponentialInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseExponentialInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseSineIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseSineIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseSineIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseSineIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseSineIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseSineOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseSineOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseSineOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseSineOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseSineOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseSineInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseSineInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseSineInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseSineInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseSineInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseElastic", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseElastic", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseElastic", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseElastic", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseElastic", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::EaseElastic");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseElasticIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::EaseElastic");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseElasticOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::EaseElastic");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseElasticInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBounce", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBounce", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBounce", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBounce", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBounce", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::EaseBounce");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBounceIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::EaseBounce");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBounceOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::EaseBounce");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBounceInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBackIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBackIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBackIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBackIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBackIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBackOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBackOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBackOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBackOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBackOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBackInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBackInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBackInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBackInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBackInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseBezierAction", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseBezierAction", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseBezierAction", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseBezierAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseBezierAction", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuadraticActionIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuadraticActionIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuadraticActionIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuadraticActionIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuadraticActionIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuadraticActionOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuadraticActionOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuadraticActionOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuadraticActionOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuadraticActionOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuadraticActionInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuadraticActionInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuadraticActionInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuadraticActionInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuadraticActionInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuarticActionIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuarticActionIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuarticActionIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuarticActionIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuarticActionIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuarticActionOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuarticActionOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuarticActionOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuarticActionOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuarticActionOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuarticActionInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuarticActionInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuarticActionInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuarticActionInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuarticActionInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuinticActionIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuinticActionIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuinticActionIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuinticActionIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuinticActionIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuinticActionOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuinticActionOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuinticActionOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuinticActionOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuinticActionOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseQuinticActionInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseQuinticActionInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseQuinticActionInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseQuinticActionInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseQuinticActionInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCircleActionIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCircleActionIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCircleActionIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCircleActionIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCircleActionIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCircleActionOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCircleActionOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCircleActionOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCircleActionOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCircleActionOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCircleActionInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCircleActionInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCircleActionInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCircleActionInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCircleActionInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCubicActionIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCubicActionIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCubicActionIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCubicActionIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCubicActionIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCubicActionOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCubicActionOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCubicActionOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCubicActionOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCubicActionOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseCubicActionInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseCubicActionInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseCubicActionInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseCubicActionInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseCubicActionInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionInstant", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ActionInstant", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ActionInstant", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Show", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::Show", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Show", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Show", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Hide", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::Hide", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Hide", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Hide", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ToggleVisibility", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::ToggleVisibility", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ToggleVisibility", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ToggleVisibility", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::RemoveSelf", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::RemoveSelf", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::RemoveSelf", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::RemoveSelf", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FlipX", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::FlipX", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FlipX", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FlipX", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FlipY", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::FlipY", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FlipY", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FlipY", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Place", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::Place", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Place", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Place", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CallFunc", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::CallFunc", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CallFunc", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CallFunc", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CallFuncN", "Cocos2d::CallFunc");
            binder.add_convertable("Cocos2d::CallFuncN", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::CallFuncN", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CallFuncN", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CallFuncN", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::GridAction", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::GridAction", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::GridAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::GridAction", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Grid3DAction", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Grid3DAction", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Grid3DAction", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Grid3DAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Grid3DAction", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::AccelDeccelAmplitude", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::AccelDeccelAmplitude", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::AccelDeccelAmplitude", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::AccelDeccelAmplitude", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::AccelAmplitude", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::AccelAmplitude", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::AccelAmplitude", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::AccelAmplitude", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::DeccelAmplitude", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::DeccelAmplitude", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::DeccelAmplitude", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::DeccelAmplitude", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::StopGrid", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::StopGrid", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::StopGrid", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::StopGrid", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ReuseGrid", "Cocos2d::ActionInstant");
            binder.add_convertable("Cocos2d::ReuseGrid", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ReuseGrid", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ReuseGrid", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Waves3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FlipX3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::FlipX3D");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FlipY3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Lens3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Ripple3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Shaky3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Liquid", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Waves", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Twirl", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionManager", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::Grid3DAction");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::GridAction");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::PageTurn3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ProgressTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ProgressTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ProgressTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ProgressTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ProgressFromTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ProgressFromTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ProgressFromTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ProgressFromTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FadeOutBLTiles", "Cocos2d::FadeOutTRTiles");
            binder.add_convertable("Cocos2d::FadeOutUpTiles", "Cocos2d::FadeOutTRTiles");
            binder.add_convertable("Cocos2d::FadeOutDownTiles", "Cocos2d::FadeOutUpTiles");
            binder.add_convertable("Cocos2d::FadeOutDownTiles", "Cocos2d::FadeOutTRTiles");
            binder.add_convertable("Cocos2d::AtlasNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::AtlasNode", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ClippingNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::ClippingNode", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::LabelAtlas", "Cocos2d::AtlasNode");
            binder.add_convertable("Cocos2d::LabelAtlas", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::LabelAtlas", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::MotionStreak", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::MotionStreak", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ParticleSystem", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::ParticleSystem", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ParticleSystemQuad", "Cocos2d::ParticleSystem");
            binder.add_convertable("Cocos2d::ParticleSystemQuad", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::ParticleSystemQuad", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ProtectedNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::ProtectedNode", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::RenderTexture", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::RenderTexture", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Camera", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Camera", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::BaseLight", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::BaseLight", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::DirectionLight", "Cocos2d::BaseLight");
            binder.add_convertable("Cocos2d::DirectionLight", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::DirectionLight", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::AmbientLight", "Cocos2d::BaseLight");
            binder.add_convertable("Cocos2d::AmbientLight", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::AmbientLight", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TextureCache", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShape", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeCircle", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeCircle", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapePolygon", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapePolygon", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeBox", "Cocos2d::PhysicsShapePolygon");
            binder.add_convertable("Cocos2d::PhysicsShapeBox", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeBox", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeSegment", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeSegment", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgePolygon", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgePolygon", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeBox", "Cocos2d::PhysicsShapeEdgePolygon");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeBox", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeBox", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeChain", "Cocos2d::PhysicsShape");
            binder.add_convertable("Cocos2d::PhysicsShapeEdgeChain", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsBody", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::EventCustom");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::Ref");

          }

    }
}
