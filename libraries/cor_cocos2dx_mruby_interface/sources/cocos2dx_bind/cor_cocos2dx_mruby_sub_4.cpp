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
        
        void Cocos2dxBind_cocos2d__extension__ScrollView_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__extension__ScrollView_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__extension__ScrollView_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_rts_rendering_state()
        {

            cor::cocos2dx_converter::RtsObjectSystem::setup_rts_rendering_state();
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_alphatest(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            cor::cocos2dx_converter::RtsObjectSystem::setup_sprite_alphatest(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_round(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            cor::cocos2dx_converter::RtsObjectSystem::setup_sprite_round(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_sprite_gray(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            cor::cocos2dx_converter::RtsObjectSystem::setup_sprite_gray(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_setup_avoid_blur_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            cor::cocos2dx_converter::RtsObjectSystem::setup_avoid_blur_texture(a0.get());
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_blending_premultipled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> a0)
        {

            cor::cocos2dx_converter::RtsObjectSystem::set_blending_premultipled(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_create_empty_image(int a0, int a1)
        {

            return cor::cocos2dx_converter::RtsObjectSystem::create_empty_image(a0, a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_copy_rect_image(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> a1, int a2, int a3)
        {

            cor::cocos2dx_converter::RtsObjectSystem::copy_rect_image(a0.get(), a1.get(), a2, a3);
        }

        cocos2d::Rect Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_node_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return cor::cocos2dx_converter::RtsObjectSystem::node_rect(a0.get());
        }

        cocos2d::Rect Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_nodes_rect(MrubyRef a0)
        {

            return cor::cocos2dx_converter::RtsObjectSystem::nodes_rect(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::Node>(a0));
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_delay_call(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, float a1, mrubybind::FuncPtr<void ()> a2)
        {

            return cor::cocos2dx_converter::RtsObjectSystem::delay_call(a0.get(), a1, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_interval_call(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, float a1, mrubybind::FuncPtr<void ()> a2)
        {

            return cor::cocos2dx_converter::RtsObjectSystem::interval_call(a0.get(), a1, 
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_scroll_view_on_scroll(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> a0, mrubybind::FuncPtr<void ()> a1)
        {

            cor::cocos2dx_converter::RtsObjectSystem::set_scroll_view_on_scroll(a0.get(), 
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

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_set_additional_transform(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, cor::type::Matrix4x4Tmpl<float> a1)
        {

            cor::cocos2dx_converter::RtsObjectSystem::set_additional_transform(a0.get(), a1);
        }

        void Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSystem_on_active()
        {

            cor::cocos2dx_converter::RtsObjectSystem::on_active();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Scene_create()
        {

            return cocos2d::Scene::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Scene_create_with_size(cocos2d::Size a0)
        {

            return cocos2d::Scene::createWithSize(a0);
        }

        std::string Cocos2dxBind_cocos2d__Scene_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getDescription();
        }

        MrubyRef Cocos2dxBind_cocos2d__Scene_get_cameras(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getCameras());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> Cocos2dxBind_cocos2d__Scene_get_default_camera(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getDefaultCamera();
        }

        MrubyRef Cocos2dxBind_cocos2d__Scene_get_lights(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getLights());
        }

        void Cocos2dxBind_cocos2d__Scene_render(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Renderer * a0)
        {

            c->render(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_all_children(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->removeAllChildren();
        }

        bool Cocos2dxBind_cocos2d__Scene_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__Scene_init_with_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Size a0)
        {

            return c->initWithSize(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_set_camera_order_dirty(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->setCameraOrderDirty();
        }

        void Cocos2dxBind_cocos2d__Scene_on_projection_changed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> a0)
        {

            c->onProjectionChanged(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cocos2d::PhysicsWorld* Cocos2dxBind_cocos2d__Scene_get_physics_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPhysicsWorld();
        }

        cocos2d::Physics3DWorld* Cocos2dxBind_cocos2d__Scene_get_physics3_d_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPhysics3DWorld();
        }

        void Cocos2dxBind_cocos2d__Scene_set_physics3_d_debug_camera(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> a0)
        {

            c->setPhysics3DDebugCamera(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Scene_create_with_physics()
        {

            return cocos2d::Scene::createWithPhysics();
        }

        bool Cocos2dxBind_cocos2d__Scene_init_with_physics(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->initWithPhysics();
        }

        void Cocos2dxBind_cocos2d__Scene_set_nav_mesh(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::NavMesh * a0)
        {

            c->setNavMesh(a0);
        }

        cocos2d::NavMesh* Cocos2dxBind_cocos2d__Scene_get_nav_mesh(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNavMesh();
        }

        void Cocos2dxBind_cocos2d__Scene_set_nav_mesh_debug_camera(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> a0)
        {

            c->setNavMeshDebugCamera(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_step_physics_and_navigation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->stepPhysicsAndNavigation(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Scene_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Scene_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Scene_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Scene_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Scene_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Scene_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Scene_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Scene_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Scene_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Scene_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Scene_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Scene_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Scene_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Scene_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Scene_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Scene_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Scene_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Scene_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Scene_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Scene_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Scene_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Scene_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Scene_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Scene_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Scene_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Scene_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Scene_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__Scene_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Scene_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Scene_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Scene_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Scene_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Scene_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Scene_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Scene_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Scene_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Scene_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Scene_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Scene_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Scene_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Scene_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Scene_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Scene_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Scene_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Scene_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Scene_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Scene_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Scene_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Scene_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Scene_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Scene_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Scene_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Scene_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Scene_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__Scene_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Scene_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__Scene_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Scene_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Scene_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Scene_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Scene_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Scene_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Scene_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Scene_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Scene_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Scene_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Scene_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Scene_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Scene_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Scene_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Scene_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Scene_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Scene_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Scene_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Scene_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Scene_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__Scene_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Scene_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__Scene_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Scene_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Scene_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Scene_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Scene_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Scene_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Scene_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Scene_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Scene_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Scene_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Scene_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Scene_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Scene_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Scene_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Scene_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Scene_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Scene_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Scene_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Scene_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Scene_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Scene_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Scene_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Scene_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Scene_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Scene_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Scene_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Scene_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Scene_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Scene_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Scene_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Scene_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Scene_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Scene_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Scene_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Scene_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__Scene_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Scene_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Scene_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Scene_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Scene_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Scene_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_create()
        {

            return cor::cocos2dx_mruby_interface::CocosMrubyRef::create();
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_set_value(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c, mrubybind::MrubyRef a0)
        {

            c->set_value(a0);
        }

        mrubybind::MrubyRef Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_get_value(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->get_value();
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_set_on_delete(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->set_on_delete(
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

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cor__cocos2dx_mruby_interface__CocosMrubyRef_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> Cocos2dxBind_cocos2d__Director_get_instance()
        {

            return cocos2d::Director::getInstance();
        }

        bool Cocos2dxBind_cocos2d__Director_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->init();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Director_get_running_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getRunningScene();
        }

        float Cocos2dxBind_cocos2d__Director_get_animation_interval(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getAnimationInterval();
        }

        void Cocos2dxBind_cocos2d__Director_set_animation_interval(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, float a0)
        {

            c->setAnimationInterval(a0);
        }

        bool Cocos2dxBind_cocos2d__Director_is_display_stats(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->isDisplayStats();
        }

        void Cocos2dxBind_cocos2d__Director_set_display_stats(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, bool a0)
        {

            c->setDisplayStats(a0);
        }

        float Cocos2dxBind_cocos2d__Director_get_seconds_per_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getSecondsPerFrame();
        }

        cocos2d::GLView* Cocos2dxBind_cocos2d__Director_get_open_gl_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getOpenGLView();
        }

        void Cocos2dxBind_cocos2d__Director_set_open_gl_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cocos2d::GLView * a0)
        {

            c->setOpenGLView(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> Cocos2dxBind_cocos2d__Director_get_texture_cache(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getTextureCache();
        }

        bool Cocos2dxBind_cocos2d__Director_is_next_delta_time_zero(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->isNextDeltaTimeZero();
        }

        void Cocos2dxBind_cocos2d__Director_set_next_delta_time_zero(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, bool a0)
        {

            c->setNextDeltaTimeZero(a0);
        }

        bool Cocos2dxBind_cocos2d__Director_is_paused(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->isPaused();
        }

        unsigned int Cocos2dxBind_cocos2d__Director_get_total_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getTotalFrames();
        }

        cocos2d::Director::Projection Cocos2dxBind_cocos2d__Director_get_projection(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getProjection();
        }

        void Cocos2dxBind_cocos2d__Director_set_projection(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            c->setProjection((cocos2d::Director::Projection)a0);
        }

        void Cocos2dxBind_cocos2d__Director_set_viewport(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->setViewport();
        }

        bool Cocos2dxBind_cocos2d__Director_is_send_cleanup_to_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->isSendCleanupToScene();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Director_get_notification_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getNotificationNode();
        }

        void Cocos2dxBind_cocos2d__Director_set_notification_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setNotificationNode(a0.get());
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Director_get_win_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getWinSize();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Director_get_win_size_in_pixels(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getWinSizeInPixels();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Director_get_visible_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getVisibleSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Director_get_visible_origin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getVisibleOrigin();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Director_convert_to_gl(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cocos2d::Vec2 a0)
        {

            return c->convertToGL(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Director_convert_to_ui(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cocos2d::Vec2 a0)
        {

            return c->convertToUI(a0);
        }

        float Cocos2dxBind_cocos2d__Director_get_z_eye(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getZEye();
        }

        void Cocos2dxBind_cocos2d__Director_run_with_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> a0)
        {

            c->runWithScene(a0.get());
        }

        void Cocos2dxBind_cocos2d__Director_push_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> a0)
        {

            c->pushScene(a0.get());
        }

        void Cocos2dxBind_cocos2d__Director_pop_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->popScene();
        }

        void Cocos2dxBind_cocos2d__Director_pop_to_root_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->popToRootScene();
        }

        void Cocos2dxBind_cocos2d__Director_pop_to_scene_stack_level(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            c->popToSceneStackLevel(a0);
        }

        void Cocos2dxBind_cocos2d__Director_replace_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> a0)
        {

            c->replaceScene(a0.get());
        }

        void Cocos2dxBind_cocos2d__Director_end(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->end();
        }

        void Cocos2dxBind_cocos2d__Director_pause(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Director_resume(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Director_restart(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->restart();
        }

        void Cocos2dxBind_cocos2d__Director_stop_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->stopAnimation();
        }

        void Cocos2dxBind_cocos2d__Director_start_animation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->startAnimation();
        }

        void Cocos2dxBind_cocos2d__Director_draw_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->drawScene();
        }

        void Cocos2dxBind_cocos2d__Director_purge_cached_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->purgeCachedData();
        }

        void Cocos2dxBind_cocos2d__Director_set_default_values(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->setDefaultValues();
        }

        void Cocos2dxBind_cocos2d__Director_set_gl_default_values(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->setGLDefaultValues();
        }

        void Cocos2dxBind_cocos2d__Director_set_alpha_blending(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, bool a0)
        {

            c->setAlphaBlending(a0);
        }

        void Cocos2dxBind_cocos2d__Director_set_clear_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cocos2d::Color4F a0)
        {

            c->setClearColor(a0);
        }

        void Cocos2dxBind_cocos2d__Director_set_depth_test(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, bool a0)
        {

            c->setDepthTest(a0);
        }

        void Cocos2dxBind_cocos2d__Director_main_loop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->mainLoop();
        }

        void Cocos2dxBind_cocos2d__Director_set_content_scale_factor(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, float a0)
        {

            c->setContentScaleFactor(a0);
        }

        float Cocos2dxBind_cocos2d__Director_get_content_scale_factor(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getContentScaleFactor();
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Director_get_scheduler(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getScheduler();
        }

        void Cocos2dxBind_cocos2d__Director_set_scheduler(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Director_get_action_manager(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getActionManager();
        }

        void Cocos2dxBind_cocos2d__Director_set_action_manager(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Director_get_event_dispatcher(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Director_set_event_dispatcher(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cocos2d::Renderer* Cocos2dxBind_cocos2d__Director_get_renderer(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getRenderer();
        }

        cocos2d::Console* Cocos2dxBind_cocos2d__Director_get_console(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getConsole();
        }

        float Cocos2dxBind_cocos2d__Director_get_delta_time(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getDeltaTime();
        }

        float Cocos2dxBind_cocos2d__Director_get_frame_rate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getFrameRate();
        }

        void Cocos2dxBind_cocos2d__Director_push_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            c->pushMatrix((cocos2d::MATRIX_STACK_TYPE)a0);
        }

        void Cocos2dxBind_cocos2d__Director_pop_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            c->popMatrix((cocos2d::MATRIX_STACK_TYPE)a0);
        }

        void Cocos2dxBind_cocos2d__Director_load_identity_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            c->loadIdentityMatrix((cocos2d::MATRIX_STACK_TYPE)a0);
        }

        void Cocos2dxBind_cocos2d__Director_load_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0, cocos2d::Mat4 a1)
        {

            c->loadMatrix((cocos2d::MATRIX_STACK_TYPE)a0, a1);
        }

        void Cocos2dxBind_cocos2d__Director_multiply_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0, cocos2d::Mat4 a1)
        {

            c->multiplyMatrix((cocos2d::MATRIX_STACK_TYPE)a0, a1);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Director_get_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a0)
        {

            return c->getMatrix((cocos2d::MATRIX_STACK_TYPE)a0);
        }

        void Cocos2dxBind_cocos2d__Director_reset_matrix_stack(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->resetMatrixStack();
        }

        std::thread::id Cocos2dxBind_cocos2d__Director_get_cocos2d_thread_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getCocos2dThreadId();
        }

        void Cocos2dxBind_cocos2d__Director_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Director_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Director_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Director_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Director_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Director_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Director_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Director_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Director_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Director_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> Cocos2dxBind_cocos2d__Animation3D_create(std::string a0, std::string a1)
        {

            return cocos2d::Animation3D::create(a0, a1);
        }

        float Cocos2dxBind_cocos2d__Animation3D_get_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->getDuration();
        }

        cocos2d::Animation3D::Curve* Cocos2dxBind_cocos2d__Animation3D_get_bone_curve_by_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, std::string a0)
        {

            return c->getBoneCurveByName(a0);
        }

        bool Cocos2dxBind_cocos2d__Animation3D_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, cocos2d::Animation3DData a0)
        {

            return c->init(a0);
        }

        bool Cocos2dxBind_cocos2d__Animation3D_init_with_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, std::string a0, std::string a1)
        {

            return c->initWithFile(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Animation3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Animation3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Animation3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Animation3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Animation3D_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Animation3D_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Animation3D_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Animation3D_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Animation3D_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Animation3D_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> Cocos2dxBind_cocos2d__Animate3D_create_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0)
        {

            return cocos2d::Animate3D::create(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> Cocos2dxBind_cocos2d__Animate3D_create_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0, float a1, float a2)
        {

            return cocos2d::Animate3D::create(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> Cocos2dxBind_cocos2d__Animate3D_create_with_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0, int a1, int a2, float a3)
        {

            return cocos2d::Animate3D::createWithFrames(a0.get(), a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__Animate3D_stop(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__Animate3D_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->step(a0);
        }

        void Cocos2dxBind_cocos2d__Animate3D_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> Cocos2dxBind_cocos2d__Animate3D_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> Cocos2dxBind_cocos2d__Animate3D_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__Animate3D_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_speed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getSpeed();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_speed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->setSpeed(a0);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_weight(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getWeight();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_weight(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->setWeight(a0);
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_origin_interval(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->setOriginInterval(a0);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_origin_interval(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getOriginInterval();
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_transition_time()
        {

            return cocos2d::Animate3D::getTransitionTime();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_transition_time(float a0)
        {

            cocos2d::Animate3D::setTransitionTime(a0);
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_quality(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, int a0)
        {

            c->setQuality((cocos2d::Animate3DQuality)a0);
        }

        cocos2d::Animate3DQuality Cocos2dxBind_cocos2d__Animate3D_get_quality(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getQuality();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_key_frame_user_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, int a0, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a1)
        {

            c->setKeyFrameUserInfo(a0, a1);
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > >* Cocos2dxBind_cocos2d__Animate3D_get_key_frame_user_info_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, int a0)
        {

            return c->getKeyFrameUserInfo(a0);
        }

        void Cocos2dxBind_cocos2d__Animate3D_remove_from_map(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            c->removeFromMap();
        }

        bool Cocos2dxBind_cocos2d__Animate3D_init_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0)
        {

            return c->init(a0.get());
        }

        bool Cocos2dxBind_cocos2d__Animate3D_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0, float a1, float a2)
        {

            return c->init(a0.get(), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__Animate3D_init_with_frames(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> a0, int a1, int a2, float a3)
        {

            return c->initWithFrames(a0.get(), a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__Animate3D_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->isDone();
        }

        bool Cocos2dxBind_cocos2d__Animate3D_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__Animate3D_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__Animate3D_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Animate3D_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Animate3D_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__Animate3D_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Animate3D_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__Animate3D_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__Animate3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Animate3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Animate3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Animate3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {

            return c->getReferenceCount();
        }

        unsigned char* Cocos2dxBind_cocos2d__Data_get_bytes(cocos2d::Data& c)
        {

            return c.getBytes();
        }

        ssize_t Cocos2dxBind_cocos2d__Data_get_size(cocos2d::Data& c)
        {

            return c.getSize();
        }

        void Cocos2dxBind_cocos2d__Data_copy(cocos2d::Data& c, const unsigned char * a0, const long a1)
        {

            c.copy(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Data_fast_set(cocos2d::Data& c, unsigned char * a0, const long a1)
        {

            c.fastSet(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Data_clear(cocos2d::Data& c)
        {

            c.clear();
        }

        bool Cocos2dxBind_cocos2d__Data_is_null(cocos2d::Data& c)
        {

            return c.isNull();
        }

        void Cocos2dxBind_cocos2d__EventCustom_set_user_data_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c, void * a0)
        {

            c->setUserData(a0);
        }

        void* Cocos2dxBind_cocos2d__EventCustom_get_user_data_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->getUserData();
        }

        std::string Cocos2dxBind_cocos2d__EventCustom_get_event_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->getEventName();
        }

        cocos2d::Event::Type Cocos2dxBind_cocos2d__EventCustom_get_type_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->getType();
        }

        void Cocos2dxBind_cocos2d__EventCustom_stop_propagation_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            c->stopPropagation();
        }

        bool Cocos2dxBind_cocos2d__EventCustom_is_stopped_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->isStopped();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EventCustom_get_current_target_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->getCurrentTarget();
        }

        void Cocos2dxBind_cocos2d__EventCustom_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventCustom_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventCustom_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventCustom_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_add_event_listener_with_scene_graph_priority(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            c->addEventListenerWithSceneGraphPriority(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_add_event_listener_with_fixed_priority(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> a0, int a1)
        {

            c->addEventListenerWithFixedPriority(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> Cocos2dxBind_cocos2d__EventDispatcher_add_custom_event_listener(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, std::string a0, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>)> a1)
        {

            return c->addCustomEventListener(a0, 
              [=](cocos2d::EventCustom * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listener(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> a0)
        {

            c->removeEventListener(a0.get());
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listeners_for_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, int a0)
        {

            c->removeEventListenersForType((cocos2d::EventListener::Type)a0);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_remove_event_listeners_for_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeEventListenersForTarget(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_remove_custom_event_listeners(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, std::string a0)
        {

            c->removeCustomEventListeners(a0);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_remove_all_event_listeners(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            c->removeAllEventListeners();
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_pause_event_listeners_for_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->pauseEventListenersForTarget(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_resume_event_listeners_for_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->resumeEventListenersForTarget(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_set_priority(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> a0, int a1)
        {

            c->setPriority(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_set_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventDispatcher_is_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_dispatch_event(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a0)
        {

            c->dispatchEvent(a0.get());
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_dispatch_custom_event(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, std::string a0, void * a1)
        {

            c->dispatchCustomEvent(a0, a1);
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventDispatcher_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventDispatcher_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__EventDispatcher_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__EventDispatcher_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> Cocos2dxBind_cocos2d__EventListenerCustom_create(std::string a0, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>)> a1)
        {

            return cocos2d::EventListenerCustom::create(a0, 
              [=](cocos2d::EventCustom * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        bool Cocos2dxBind_cocos2d__EventListenerCustom_check_available(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            return c->checkAvailable();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> Cocos2dxBind_cocos2d__EventListenerCustom_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerCustom_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c, std::string a0, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>)> a1)
        {

            return c->init(a0, 
              [=](cocos2d::EventCustom * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__EventListenerCustom_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerCustom_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerCustom_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerCustom_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerCustom_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerCustom_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerCustom> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> Cocos2dxBind_cocos2d__EventListenerKeyboard_create()
        {

            return cocos2d::EventListenerKeyboard::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> Cocos2dxBind_cocos2d__EventListenerKeyboard_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerKeyboard_check_available(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->checkAvailable();
        }

        bool Cocos2dxBind_cocos2d__EventListenerKeyboard_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__EventListenerKeyboard_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerKeyboard_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerKeyboard_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerKeyboard_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerKeyboard_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerKeyboard_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerKeyboard_accessor_set_on_key_pressed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c, mrubybind::FuncPtr<void (cocos2d::EventKeyboard::KeyCode, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onKeyPressed = 
              [=](cocos2d::EventKeyboard::KeyCode b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerKeyboard_accessor_set_on_key_released(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerKeyboard> c, mrubybind::FuncPtr<void (cocos2d::EventKeyboard::KeyCode, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onKeyReleased = 
              [=](cocos2d::EventKeyboard::KeyCode b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__ActionCamera_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> Cocos2dxBind_cocos2d__ActionCamera_reverse_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> Cocos2dxBind_cocos2d__ActionCamera_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_eye_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cocos2d::Vec3 a0)
        {

            c->setEye(a0);
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_eye_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0, float a1, float a2)
        {

            c->setEye(a0, a1, a2);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ActionCamera_get_eye_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getEye();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cocos2d::Vec3 a0)
        {

            c->setCenter(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ActionCamera_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getCenter();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_up_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cocos2d::Vec3 a0)
        {

            c->setUp(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ActionCamera_get_up_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getUp();
        }

        float Cocos2dxBind_cocos2d__ActionCamera_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ActionCamera_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ActionCamera_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__ActionCamera_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__ActionCamera_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ActionCamera_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_update_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionCamera_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionCamera_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ActionCamera_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ActionCamera_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ActionCamera_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionCamera_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionCamera_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionCamera_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> Cocos2dxBind_cocos2d__OrbitCamera_create(float a0, float a1, float a2, float a3, float a4, float a5, float a6)
        {

            return cocos2d::OrbitCamera::create(a0, a1, a2, a3, a4, a5, a6);
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_spherical_radius(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float * a0, float * a1, float * a2)
        {

            c->sphericalRadius(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> Cocos2dxBind_cocos2d__OrbitCamera_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__OrbitCamera_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0, float a1, float a2, float a3, float a4, float a5, float a6)
        {

            return c->initWithDuration(a0, a1, a2, a3, a4, a5, a6);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionCamera> Cocos2dxBind_cocos2d__OrbitCamera_reverse_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_eye_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cocos2d::Vec3 a0)
        {

            c->setEye(a0);
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_eye_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0, float a1, float a2)
        {

            c->setEye(a0, a1, a2);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__OrbitCamera_get_eye_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getEye();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cocos2d::Vec3 a0)
        {

            c->setCenter(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__OrbitCamera_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getCenter();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_up_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cocos2d::Vec3 a0)
        {

            c->setUp(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__OrbitCamera_get_up_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getUp();
        }

        float Cocos2dxBind_cocos2d__OrbitCamera_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__OrbitCamera_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__OrbitCamera_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__OrbitCamera_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__OrbitCamera_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__OrbitCamera_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__OrbitCamera_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__OrbitCamera_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__OrbitCamera_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__OrbitCamera_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__OrbitCamera_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__OrbitCamera_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::OrbitCamera> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__PointArray_create(int a0)
        {

            return cocos2d::PointArray::create(a0);
        }

        bool Cocos2dxBind_cocos2d__PointArray_init_with_capacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, int a0)
        {

            return c->initWithCapacity(a0);
        }

        void Cocos2dxBind_cocos2d__PointArray_add_control_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, cocos2d::Vec2 a0)
        {

            c->addControlPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PointArray_get_control_point_at_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, int a0)
        {

            return c->getControlPointAtIndex(a0);
        }

        void Cocos2dxBind_cocos2d__PointArray_remove_control_point_at_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, int a0)
        {

            c->removeControlPointAtIndex(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__PointArray_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->count();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__PointArray_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__PointArray_reverse_inline(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            c->reverseInline();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__PointArray_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->clone();
        }

        const std::vector<cocos2d::Vec2*>* Cocos2dxBind_cocos2d__PointArray_get_control_points(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return const_cast<const std::vector<cocos2d::Vec2*>* >(c->getControlPoints());
        }

        void Cocos2dxBind_cocos2d__PointArray_set_control_points(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, std::vector<cocos2d::Vec2 *> * a0)
        {

            c->setControlPoints(a0);
        }

        void Cocos2dxBind_cocos2d__PointArray_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PointArray_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PointArray_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PointArray_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__PointArray_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__PointArray_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__PointArray_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__PointArray_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__PointArray_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__PointArray_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> Cocos2dxBind_cocos2d__CardinalSplineTo_create(float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1, float a2)
        {

            return cocos2d::CardinalSplineTo::create(a0, a1.get(), a2);
        }

        bool Cocos2dxBind_cocos2d__CardinalSplineTo_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1, float a2)
        {

            return c->initWithDuration(a0, a1.get(), a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__CardinalSplineTo_get_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getPoints();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0)
        {

            c->setPoints(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> Cocos2dxBind_cocos2d__CardinalSplineTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> Cocos2dxBind_cocos2d__CardinalSplineTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__CardinalSplineTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CardinalSplineTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CardinalSplineTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CardinalSplineTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CardinalSplineTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CardinalSplineTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CardinalSplineTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CardinalSplineTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> Cocos2dxBind_cocos2d__CardinalSplineBy_create(float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1, float a2)
        {

            return cocos2d::CardinalSplineBy::create(a0, a1.get(), a2);
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> Cocos2dxBind_cocos2d__CardinalSplineBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> Cocos2dxBind_cocos2d__CardinalSplineBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__CardinalSplineBy_init_with_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1, float a2)
        {

            return c->initWithDuration(a0, a1.get(), a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__CardinalSplineBy_get_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getPoints();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0)
        {

            c->setPoints(a0.get());
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__CardinalSplineBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CardinalSplineBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CardinalSplineBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CardinalSplineBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CardinalSplineBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CardinalSplineBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CardinalSplineBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CardinalSplineBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CardinalSplineBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CardinalSplineBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CardinalSplineBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> Cocos2dxBind_cocos2d__CatmullRomTo_create(float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1)
        {

            return cocos2d::CatmullRomTo::create(a0, a1.get());
        }

        bool Cocos2dxBind_cocos2d__CatmullRomTo_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1)
        {

            return c->initWithDuration(a0, a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> Cocos2dxBind_cocos2d__CatmullRomTo_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> Cocos2dxBind_cocos2d__CatmullRomTo_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__CatmullRomTo_get_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getPoints();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0)
        {

            c->setPoints(a0.get());
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomTo_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomTo_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__CatmullRomTo_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomTo_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CatmullRomTo_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CatmullRomTo_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CatmullRomTo_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CatmullRomTo_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CatmullRomTo_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CatmullRomTo_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CatmullRomTo_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CatmullRomTo_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomTo> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> Cocos2dxBind_cocos2d__CatmullRomBy_create(float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1)
        {

            return cocos2d::CatmullRomBy::create(a0, a1.get());
        }

        bool Cocos2dxBind_cocos2d__CatmullRomBy_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, float a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a1)
        {

            return c->initWithDuration(a0, a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> Cocos2dxBind_cocos2d__CatmullRomBy_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> Cocos2dxBind_cocos2d__CatmullRomBy_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_start_with_target_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> Cocos2dxBind_cocos2d__CatmullRomBy_get_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getPoints();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_points_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PointArray> a0)
        {

            c->setPoints(a0.get());
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomBy_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomBy_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__CatmullRomBy_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__CatmullRomBy_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__CatmullRomBy_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CatmullRomBy_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__CatmullRomBy_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__CatmullRomBy_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__CatmullRomBy_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__CatmullRomBy_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__CatmullRomBy_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__CatmullRomBy_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CatmullRomBy> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__ActionEase_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getInnerAction();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__ActionEase_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__ActionEase_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__ActionEase_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionEase_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__ActionEase_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, float a0)
        {

            c->update(a0);
        }

        bool Cocos2dxBind_cocos2d__ActionEase_init_with_action_30(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return c->initWithAction(a0.get());
        }

        float Cocos2dxBind_cocos2d__ActionEase_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ActionEase_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ActionEase_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ActionEase_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__ActionEase_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__ActionEase_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ActionEase_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionEase_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionEase_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ActionEase_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ActionEase_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ActionEase_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ActionEase_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionEase_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionEase_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionEase_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> Cocos2dxBind_cocos2d__EaseRateAction_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseRateAction::create(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            c->setRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseRateAction_get_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getRate();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> Cocos2dxBind_cocos2d__EaseRateAction_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> Cocos2dxBind_cocos2d__EaseRateAction_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->reverse();
        }

        bool Cocos2dxBind_cocos2d__EaseRateAction_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseRateAction_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            c->stop();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_update_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            c->update(a0);
        }

        float Cocos2dxBind_cocos2d__EaseRateAction_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseRateAction_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseRateAction_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseRateAction_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseRateAction_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseRateAction_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseRateAction_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseRateAction_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseRateAction_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseRateAction_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseRateAction_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseRateAction_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseRateAction_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseRateAction> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> Cocos2dxBind_cocos2d__EaseIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseIn::create(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EaseIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> Cocos2dxBind_cocos2d__EaseIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> Cocos2dxBind_cocos2d__EaseIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            c->setRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseIn_get_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getRate();
        }

        bool Cocos2dxBind_cocos2d__EaseIn_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseIn_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseIn_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseIn_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseIn_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseIn_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseIn_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseIn_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseIn_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseIn_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseIn_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseIn_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseIn_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseIn_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseIn_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseIn_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseIn_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseIn> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> Cocos2dxBind_cocos2d__EaseOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseOut::create(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EaseOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> Cocos2dxBind_cocos2d__EaseOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> Cocos2dxBind_cocos2d__EaseOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            c->setRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseOut_get_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getRate();
        }

        bool Cocos2dxBind_cocos2d__EaseOut_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> Cocos2dxBind_cocos2d__EaseInOut_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return cocos2d::EaseInOut::create(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__EaseInOut_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> Cocos2dxBind_cocos2d__EaseInOut_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> Cocos2dxBind_cocos2d__EaseInOut_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->reverse();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            c->setRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseInOut_get_rate_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getRate();
        }

        bool Cocos2dxBind_cocos2d__EaseInOut_init_with_action_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0, float a1)
        {

            return c->initWithAction(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseInOut_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseInOut_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            c->stop();
        }

        float Cocos2dxBind_cocos2d__EaseInOut_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__EaseInOut_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__EaseInOut_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            c->step(a0);
        }

        bool Cocos2dxBind_cocos2d__EaseInOut_init_with_duration_52(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            return c->initWithDuration(a0);
        }

        float Cocos2dxBind_cocos2d__EaseInOut_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__EaseInOut_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->description();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseInOut_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EaseInOut_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__EaseInOut_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__EaseInOut_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__EaseInOut_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EaseInOut_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EaseInOut_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EaseInOut_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseInOut> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> Cocos2dxBind_cocos2d__EaseExponentialIn_create(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> a0)
        {

            return cocos2d::EaseExponentialIn::create(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> Cocos2dxBind_cocos2d__EaseExponentialIn_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->clone();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionEase> Cocos2dxBind_cocos2d__EaseExponentialIn_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInterval> Cocos2dxBind_cocos2d__EaseExponentialIn_get_inner_action_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            return c->getInnerAction();
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_start_with_target_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__EaseExponentialIn_stop_38(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> c)
        {

            c->stop();
        }



        
        bool Cocos2dxBind_FontAtlas_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FontAtlas> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Label_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Layer_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_LayerColor_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListener_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerTouchOneByOne_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerTouchAllAtOnce_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionTween_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ScrollView_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RtsObjectSystem_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectSystem> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_Scene_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CocosMrubyRef_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_mruby_interface::CocosMrubyRef> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Director_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Director> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Animation3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animation3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Animate3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate3D> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_4(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("Cocos2d", "RotateTo", "create_1", Cocos2dxBind_cocos2d__RotateTo_create_1);
            binder.bind_static_method("Cocos2d", "RotateTo", "create_2", Cocos2dxBind_cocos2d__RotateTo_create_2);
            binder.bind_static_method("Cocos2d", "RotateTo", "create_3", Cocos2dxBind_cocos2d__RotateTo_create_3);
            binder.bind_custom_method("Cocos2d", "RotateTo", "clone", Cocos2dxBind_cocos2d__RotateTo_clone);
            binder.bind_custom_method("Cocos2d", "RotateTo", "reverse", Cocos2dxBind_cocos2d__RotateTo_reverse);
            binder.bind_custom_method("Cocos2d", "RotateTo", "start_with_target", Cocos2dxBind_cocos2d__RotateTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "RotateTo", "update", Cocos2dxBind_cocos2d__RotateTo_update);
            binder.bind_custom_method("Cocos2d", "RotateTo", "init_with_duration_1", Cocos2dxBind_cocos2d__RotateTo_init_with_duration_1);
            binder.bind_custom_method("Cocos2d", "RotateTo", "init_with_duration_2", Cocos2dxBind_cocos2d__RotateTo_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_elapsed_90", Cocos2dxBind_cocos2d__RotateTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__RotateTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__RotateTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RotateTo", "is_done_87", Cocos2dxBind_cocos2d__RotateTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "RotateTo", "step_88", Cocos2dxBind_cocos2d__RotateTo_step_88);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_duration_103", Cocos2dxBind_cocos2d__RotateTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_duration_103", Cocos2dxBind_cocos2d__RotateTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "RotateTo", "description_106", Cocos2dxBind_cocos2d__RotateTo_description_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "stop_58", Cocos2dxBind_cocos2d__RotateTo_stop_58);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_target_106", Cocos2dxBind_cocos2d__RotateTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_target_106", Cocos2dxBind_cocos2d__RotateTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_original_target_106", Cocos2dxBind_cocos2d__RotateTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_original_target_106", Cocos2dxBind_cocos2d__RotateTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_tag_106", Cocos2dxBind_cocos2d__RotateTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_tag_106", Cocos2dxBind_cocos2d__RotateTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_flags_106", Cocos2dxBind_cocos2d__RotateTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "set_flags_106", Cocos2dxBind_cocos2d__RotateTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "RotateTo", "retain_176", Cocos2dxBind_cocos2d__RotateTo_retain_176);
            binder.bind_custom_method("Cocos2d", "RotateTo", "release_176", Cocos2dxBind_cocos2d__RotateTo_release_176);
            binder.bind_custom_method("Cocos2d", "RotateTo", "autorelease_176", Cocos2dxBind_cocos2d__RotateTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "RotateTo", "get_reference_count_176", Cocos2dxBind_cocos2d__RotateTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "RotateBy", "create_1", Cocos2dxBind_cocos2d__RotateBy_create_1);
            binder.bind_static_method("Cocos2d", "RotateBy", "create_2", Cocos2dxBind_cocos2d__RotateBy_create_2);
            binder.bind_static_method("Cocos2d", "RotateBy", "create_3", Cocos2dxBind_cocos2d__RotateBy_create_3);
            binder.bind_custom_method("Cocos2d", "RotateBy", "clone", Cocos2dxBind_cocos2d__RotateBy_clone);
            binder.bind_custom_method("Cocos2d", "RotateBy", "reverse", Cocos2dxBind_cocos2d__RotateBy_reverse);
            binder.bind_custom_method("Cocos2d", "RotateBy", "start_with_target", Cocos2dxBind_cocos2d__RotateBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "RotateBy", "update", Cocos2dxBind_cocos2d__RotateBy_update);
            binder.bind_custom_method("Cocos2d", "RotateBy", "init_with_duration_1", Cocos2dxBind_cocos2d__RotateBy_init_with_duration_1);
            binder.bind_custom_method("Cocos2d", "RotateBy", "init_with_duration_2", Cocos2dxBind_cocos2d__RotateBy_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "RotateBy", "init_with_duration_3", Cocos2dxBind_cocos2d__RotateBy_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_elapsed_90", Cocos2dxBind_cocos2d__RotateBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__RotateBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__RotateBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RotateBy", "is_done_87", Cocos2dxBind_cocos2d__RotateBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "RotateBy", "step_88", Cocos2dxBind_cocos2d__RotateBy_step_88);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_duration_103", Cocos2dxBind_cocos2d__RotateBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_duration_103", Cocos2dxBind_cocos2d__RotateBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "RotateBy", "description_106", Cocos2dxBind_cocos2d__RotateBy_description_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "stop_58", Cocos2dxBind_cocos2d__RotateBy_stop_58);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_target_106", Cocos2dxBind_cocos2d__RotateBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_target_106", Cocos2dxBind_cocos2d__RotateBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_original_target_106", Cocos2dxBind_cocos2d__RotateBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_original_target_106", Cocos2dxBind_cocos2d__RotateBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_tag_106", Cocos2dxBind_cocos2d__RotateBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_tag_106", Cocos2dxBind_cocos2d__RotateBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_flags_106", Cocos2dxBind_cocos2d__RotateBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "set_flags_106", Cocos2dxBind_cocos2d__RotateBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "RotateBy", "retain_176", Cocos2dxBind_cocos2d__RotateBy_retain_176);
            binder.bind_custom_method("Cocos2d", "RotateBy", "release_176", Cocos2dxBind_cocos2d__RotateBy_release_176);
            binder.bind_custom_method("Cocos2d", "RotateBy", "autorelease_176", Cocos2dxBind_cocos2d__RotateBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "RotateBy", "get_reference_count_176", Cocos2dxBind_cocos2d__RotateBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "MoveBy", "create_1", Cocos2dxBind_cocos2d__MoveBy_create_1);
            binder.bind_static_method("Cocos2d", "MoveBy", "create_2", Cocos2dxBind_cocos2d__MoveBy_create_2);
            binder.bind_custom_method("Cocos2d", "MoveBy", "clone", Cocos2dxBind_cocos2d__MoveBy_clone);
            binder.bind_custom_method("Cocos2d", "MoveBy", "reverse", Cocos2dxBind_cocos2d__MoveBy_reverse);
            binder.bind_custom_method("Cocos2d", "MoveBy", "start_with_target", Cocos2dxBind_cocos2d__MoveBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "MoveBy", "update_2", Cocos2dxBind_cocos2d__MoveBy_update_2);
            binder.bind_custom_method("Cocos2d", "MoveBy", "init_with_duration_1", Cocos2dxBind_cocos2d__MoveBy_init_with_duration_1);
            binder.bind_custom_method("Cocos2d", "MoveBy", "init_with_duration_2", Cocos2dxBind_cocos2d__MoveBy_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_elapsed_90", Cocos2dxBind_cocos2d__MoveBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__MoveBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__MoveBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "MoveBy", "is_done_87", Cocos2dxBind_cocos2d__MoveBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "MoveBy", "step_88", Cocos2dxBind_cocos2d__MoveBy_step_88);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_duration_103", Cocos2dxBind_cocos2d__MoveBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_duration_103", Cocos2dxBind_cocos2d__MoveBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "MoveBy", "description_106", Cocos2dxBind_cocos2d__MoveBy_description_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "stop_58", Cocos2dxBind_cocos2d__MoveBy_stop_58);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_target_106", Cocos2dxBind_cocos2d__MoveBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_target_106", Cocos2dxBind_cocos2d__MoveBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_original_target_106", Cocos2dxBind_cocos2d__MoveBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_original_target_106", Cocos2dxBind_cocos2d__MoveBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_tag_106", Cocos2dxBind_cocos2d__MoveBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_tag_106", Cocos2dxBind_cocos2d__MoveBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_flags_106", Cocos2dxBind_cocos2d__MoveBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "set_flags_106", Cocos2dxBind_cocos2d__MoveBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "MoveBy", "retain_176", Cocos2dxBind_cocos2d__MoveBy_retain_176);
            binder.bind_custom_method("Cocos2d", "MoveBy", "release_176", Cocos2dxBind_cocos2d__MoveBy_release_176);
            binder.bind_custom_method("Cocos2d", "MoveBy", "autorelease_176", Cocos2dxBind_cocos2d__MoveBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "MoveBy", "get_reference_count_176", Cocos2dxBind_cocos2d__MoveBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "MoveTo", "create_1", Cocos2dxBind_cocos2d__MoveTo_create_1);
            binder.bind_static_method("Cocos2d", "MoveTo", "create_2", Cocos2dxBind_cocos2d__MoveTo_create_2);
            binder.bind_custom_method("Cocos2d", "MoveTo", "clone", Cocos2dxBind_cocos2d__MoveTo_clone);
            binder.bind_custom_method("Cocos2d", "MoveTo", "reverse", Cocos2dxBind_cocos2d__MoveTo_reverse);
            binder.bind_custom_method("Cocos2d", "MoveTo", "start_with_target", Cocos2dxBind_cocos2d__MoveTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "MoveTo", "init_with_duration_1", Cocos2dxBind_cocos2d__MoveTo_init_with_duration_1);
            binder.bind_custom_method("Cocos2d", "MoveTo", "init_with_duration_2", Cocos2dxBind_cocos2d__MoveTo_init_with_duration_2);
            binder.bind_custom_method("Cocos2d", "MoveTo", "update_2", Cocos2dxBind_cocos2d__MoveTo_update_2);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_elapsed_90", Cocos2dxBind_cocos2d__MoveTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__MoveTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__MoveTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "MoveTo", "is_done_87", Cocos2dxBind_cocos2d__MoveTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "MoveTo", "step_88", Cocos2dxBind_cocos2d__MoveTo_step_88);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_duration_103", Cocos2dxBind_cocos2d__MoveTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_duration_103", Cocos2dxBind_cocos2d__MoveTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "MoveTo", "description_106", Cocos2dxBind_cocos2d__MoveTo_description_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "stop_58", Cocos2dxBind_cocos2d__MoveTo_stop_58);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_target_106", Cocos2dxBind_cocos2d__MoveTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_target_106", Cocos2dxBind_cocos2d__MoveTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_original_target_106", Cocos2dxBind_cocos2d__MoveTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_original_target_106", Cocos2dxBind_cocos2d__MoveTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_tag_106", Cocos2dxBind_cocos2d__MoveTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_tag_106", Cocos2dxBind_cocos2d__MoveTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_flags_106", Cocos2dxBind_cocos2d__MoveTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "set_flags_106", Cocos2dxBind_cocos2d__MoveTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "MoveTo", "retain_176", Cocos2dxBind_cocos2d__MoveTo_retain_176);
            binder.bind_custom_method("Cocos2d", "MoveTo", "release_176", Cocos2dxBind_cocos2d__MoveTo_release_176);
            binder.bind_custom_method("Cocos2d", "MoveTo", "autorelease_176", Cocos2dxBind_cocos2d__MoveTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "MoveTo", "get_reference_count_176", Cocos2dxBind_cocos2d__MoveTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "SkewTo", "create", Cocos2dxBind_cocos2d__SkewTo_create);
            binder.bind_custom_method("Cocos2d", "SkewTo", "clone", Cocos2dxBind_cocos2d__SkewTo_clone);
            binder.bind_custom_method("Cocos2d", "SkewTo", "reverse", Cocos2dxBind_cocos2d__SkewTo_reverse);
            binder.bind_custom_method("Cocos2d", "SkewTo", "start_with_target", Cocos2dxBind_cocos2d__SkewTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "SkewTo", "update_2", Cocos2dxBind_cocos2d__SkewTo_update_2);
            binder.bind_custom_method("Cocos2d", "SkewTo", "init_with_duration", Cocos2dxBind_cocos2d__SkewTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_elapsed_90", Cocos2dxBind_cocos2d__SkewTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__SkewTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__SkewTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "SkewTo", "is_done_87", Cocos2dxBind_cocos2d__SkewTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "SkewTo", "step_88", Cocos2dxBind_cocos2d__SkewTo_step_88);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_duration_103", Cocos2dxBind_cocos2d__SkewTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_duration_103", Cocos2dxBind_cocos2d__SkewTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "SkewTo", "description_106", Cocos2dxBind_cocos2d__SkewTo_description_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "stop_58", Cocos2dxBind_cocos2d__SkewTo_stop_58);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_target_106", Cocos2dxBind_cocos2d__SkewTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_target_106", Cocos2dxBind_cocos2d__SkewTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_original_target_106", Cocos2dxBind_cocos2d__SkewTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_original_target_106", Cocos2dxBind_cocos2d__SkewTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_tag_106", Cocos2dxBind_cocos2d__SkewTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_tag_106", Cocos2dxBind_cocos2d__SkewTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_flags_106", Cocos2dxBind_cocos2d__SkewTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "set_flags_106", Cocos2dxBind_cocos2d__SkewTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "SkewTo", "retain_176", Cocos2dxBind_cocos2d__SkewTo_retain_176);
            binder.bind_custom_method("Cocos2d", "SkewTo", "release_176", Cocos2dxBind_cocos2d__SkewTo_release_176);
            binder.bind_custom_method("Cocos2d", "SkewTo", "autorelease_176", Cocos2dxBind_cocos2d__SkewTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "SkewTo", "get_reference_count_176", Cocos2dxBind_cocos2d__SkewTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "SkewBy", "create", Cocos2dxBind_cocos2d__SkewBy_create);
            binder.bind_custom_method("Cocos2d", "SkewBy", "start_with_target", Cocos2dxBind_cocos2d__SkewBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "SkewBy", "clone", Cocos2dxBind_cocos2d__SkewBy_clone);
            binder.bind_custom_method("Cocos2d", "SkewBy", "reverse", Cocos2dxBind_cocos2d__SkewBy_reverse);
            binder.bind_custom_method("Cocos2d", "SkewBy", "init_with_duration", Cocos2dxBind_cocos2d__SkewBy_init_with_duration);
            binder.bind_custom_method("Cocos2d", "SkewBy", "update_2", Cocos2dxBind_cocos2d__SkewBy_update_2);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_elapsed_90", Cocos2dxBind_cocos2d__SkewBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__SkewBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__SkewBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "SkewBy", "is_done_87", Cocos2dxBind_cocos2d__SkewBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "SkewBy", "step_88", Cocos2dxBind_cocos2d__SkewBy_step_88);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_duration_103", Cocos2dxBind_cocos2d__SkewBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_duration_103", Cocos2dxBind_cocos2d__SkewBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "SkewBy", "description_106", Cocos2dxBind_cocos2d__SkewBy_description_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "stop_58", Cocos2dxBind_cocos2d__SkewBy_stop_58);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_target_106", Cocos2dxBind_cocos2d__SkewBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_target_106", Cocos2dxBind_cocos2d__SkewBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_original_target_106", Cocos2dxBind_cocos2d__SkewBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_original_target_106", Cocos2dxBind_cocos2d__SkewBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_tag_106", Cocos2dxBind_cocos2d__SkewBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_tag_106", Cocos2dxBind_cocos2d__SkewBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_flags_106", Cocos2dxBind_cocos2d__SkewBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "set_flags_106", Cocos2dxBind_cocos2d__SkewBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "SkewBy", "retain_176", Cocos2dxBind_cocos2d__SkewBy_retain_176);
            binder.bind_custom_method("Cocos2d", "SkewBy", "release_176", Cocos2dxBind_cocos2d__SkewBy_release_176);
            binder.bind_custom_method("Cocos2d", "SkewBy", "autorelease_176", Cocos2dxBind_cocos2d__SkewBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "SkewBy", "get_reference_count_176", Cocos2dxBind_cocos2d__SkewBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "JumpBy", "create", Cocos2dxBind_cocos2d__JumpBy_create);
            binder.bind_custom_method("Cocos2d", "JumpBy", "clone", Cocos2dxBind_cocos2d__JumpBy_clone);
            binder.bind_custom_method("Cocos2d", "JumpBy", "reverse", Cocos2dxBind_cocos2d__JumpBy_reverse);
            binder.bind_custom_method("Cocos2d", "JumpBy", "start_with_target", Cocos2dxBind_cocos2d__JumpBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "JumpBy", "update_2", Cocos2dxBind_cocos2d__JumpBy_update_2);
            binder.bind_custom_method("Cocos2d", "JumpBy", "init_with_duration", Cocos2dxBind_cocos2d__JumpBy_init_with_duration);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_elapsed_90", Cocos2dxBind_cocos2d__JumpBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__JumpBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__JumpBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "JumpBy", "is_done_87", Cocos2dxBind_cocos2d__JumpBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "JumpBy", "step_88", Cocos2dxBind_cocos2d__JumpBy_step_88);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_duration_103", Cocos2dxBind_cocos2d__JumpBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_duration_103", Cocos2dxBind_cocos2d__JumpBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "JumpBy", "description_106", Cocos2dxBind_cocos2d__JumpBy_description_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "stop_58", Cocos2dxBind_cocos2d__JumpBy_stop_58);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_target_106", Cocos2dxBind_cocos2d__JumpBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_target_106", Cocos2dxBind_cocos2d__JumpBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_original_target_106", Cocos2dxBind_cocos2d__JumpBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_original_target_106", Cocos2dxBind_cocos2d__JumpBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_tag_106", Cocos2dxBind_cocos2d__JumpBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_tag_106", Cocos2dxBind_cocos2d__JumpBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_flags_106", Cocos2dxBind_cocos2d__JumpBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "set_flags_106", Cocos2dxBind_cocos2d__JumpBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "JumpBy", "retain_176", Cocos2dxBind_cocos2d__JumpBy_retain_176);
            binder.bind_custom_method("Cocos2d", "JumpBy", "release_176", Cocos2dxBind_cocos2d__JumpBy_release_176);
            binder.bind_custom_method("Cocos2d", "JumpBy", "autorelease_176", Cocos2dxBind_cocos2d__JumpBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "JumpBy", "get_reference_count_176", Cocos2dxBind_cocos2d__JumpBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "JumpTo", "create", Cocos2dxBind_cocos2d__JumpTo_create);
            binder.bind_custom_method("Cocos2d", "JumpTo", "start_with_target", Cocos2dxBind_cocos2d__JumpTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "JumpTo", "clone", Cocos2dxBind_cocos2d__JumpTo_clone);
            binder.bind_custom_method("Cocos2d", "JumpTo", "reverse", Cocos2dxBind_cocos2d__JumpTo_reverse);
            binder.bind_custom_method("Cocos2d", "JumpTo", "init_with_duration", Cocos2dxBind_cocos2d__JumpTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "JumpTo", "update_2", Cocos2dxBind_cocos2d__JumpTo_update_2);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_elapsed_90", Cocos2dxBind_cocos2d__JumpTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__JumpTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__JumpTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "JumpTo", "is_done_87", Cocos2dxBind_cocos2d__JumpTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "JumpTo", "step_88", Cocos2dxBind_cocos2d__JumpTo_step_88);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_duration_103", Cocos2dxBind_cocos2d__JumpTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_duration_103", Cocos2dxBind_cocos2d__JumpTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "JumpTo", "description_106", Cocos2dxBind_cocos2d__JumpTo_description_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "stop_58", Cocos2dxBind_cocos2d__JumpTo_stop_58);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_target_106", Cocos2dxBind_cocos2d__JumpTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_target_106", Cocos2dxBind_cocos2d__JumpTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_original_target_106", Cocos2dxBind_cocos2d__JumpTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_original_target_106", Cocos2dxBind_cocos2d__JumpTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_tag_106", Cocos2dxBind_cocos2d__JumpTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_tag_106", Cocos2dxBind_cocos2d__JumpTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_flags_106", Cocos2dxBind_cocos2d__JumpTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "set_flags_106", Cocos2dxBind_cocos2d__JumpTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "JumpTo", "retain_176", Cocos2dxBind_cocos2d__JumpTo_retain_176);
            binder.bind_custom_method("Cocos2d", "JumpTo", "release_176", Cocos2dxBind_cocos2d__JumpTo_release_176);
            binder.bind_custom_method("Cocos2d", "JumpTo", "autorelease_176", Cocos2dxBind_cocos2d__JumpTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "JumpTo", "get_reference_count_176", Cocos2dxBind_cocos2d__JumpTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "BezierBy", "create", Cocos2dxBind_cocos2d__BezierBy_create);
            binder.bind_custom_method("Cocos2d", "BezierBy", "clone", Cocos2dxBind_cocos2d__BezierBy_clone);
            binder.bind_custom_method("Cocos2d", "BezierBy", "reverse", Cocos2dxBind_cocos2d__BezierBy_reverse);
            binder.bind_custom_method("Cocos2d", "BezierBy", "start_with_target", Cocos2dxBind_cocos2d__BezierBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "BezierBy", "update_2", Cocos2dxBind_cocos2d__BezierBy_update_2);
            binder.bind_custom_method("Cocos2d", "BezierBy", "init_with_duration", Cocos2dxBind_cocos2d__BezierBy_init_with_duration);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_elapsed_90", Cocos2dxBind_cocos2d__BezierBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__BezierBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__BezierBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "BezierBy", "is_done_87", Cocos2dxBind_cocos2d__BezierBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "BezierBy", "step_88", Cocos2dxBind_cocos2d__BezierBy_step_88);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_duration_103", Cocos2dxBind_cocos2d__BezierBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_duration_103", Cocos2dxBind_cocos2d__BezierBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "BezierBy", "description_106", Cocos2dxBind_cocos2d__BezierBy_description_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "stop_58", Cocos2dxBind_cocos2d__BezierBy_stop_58);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_target_106", Cocos2dxBind_cocos2d__BezierBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_target_106", Cocos2dxBind_cocos2d__BezierBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_original_target_106", Cocos2dxBind_cocos2d__BezierBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_original_target_106", Cocos2dxBind_cocos2d__BezierBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_tag_106", Cocos2dxBind_cocos2d__BezierBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_tag_106", Cocos2dxBind_cocos2d__BezierBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_flags_106", Cocos2dxBind_cocos2d__BezierBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "set_flags_106", Cocos2dxBind_cocos2d__BezierBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "BezierBy", "retain_176", Cocos2dxBind_cocos2d__BezierBy_retain_176);
            binder.bind_custom_method("Cocos2d", "BezierBy", "release_176", Cocos2dxBind_cocos2d__BezierBy_release_176);
            binder.bind_custom_method("Cocos2d", "BezierBy", "autorelease_176", Cocos2dxBind_cocos2d__BezierBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "BezierBy", "get_reference_count_176", Cocos2dxBind_cocos2d__BezierBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "BezierTo", "create", Cocos2dxBind_cocos2d__BezierTo_create);
            binder.bind_custom_method("Cocos2d", "BezierTo", "start_with_target", Cocos2dxBind_cocos2d__BezierTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "BezierTo", "clone", Cocos2dxBind_cocos2d__BezierTo_clone);
            binder.bind_custom_method("Cocos2d", "BezierTo", "reverse", Cocos2dxBind_cocos2d__BezierTo_reverse);
            binder.bind_custom_method("Cocos2d", "BezierTo", "init_with_duration", Cocos2dxBind_cocos2d__BezierTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "BezierTo", "update_2", Cocos2dxBind_cocos2d__BezierTo_update_2);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_elapsed_90", Cocos2dxBind_cocos2d__BezierTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__BezierTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__BezierTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "BezierTo", "is_done_87", Cocos2dxBind_cocos2d__BezierTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "BezierTo", "step_88", Cocos2dxBind_cocos2d__BezierTo_step_88);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_duration_103", Cocos2dxBind_cocos2d__BezierTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_duration_103", Cocos2dxBind_cocos2d__BezierTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "BezierTo", "description_106", Cocos2dxBind_cocos2d__BezierTo_description_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "stop_58", Cocos2dxBind_cocos2d__BezierTo_stop_58);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_target_106", Cocos2dxBind_cocos2d__BezierTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_target_106", Cocos2dxBind_cocos2d__BezierTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_original_target_106", Cocos2dxBind_cocos2d__BezierTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_original_target_106", Cocos2dxBind_cocos2d__BezierTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_tag_106", Cocos2dxBind_cocos2d__BezierTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_tag_106", Cocos2dxBind_cocos2d__BezierTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_flags_106", Cocos2dxBind_cocos2d__BezierTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "set_flags_106", Cocos2dxBind_cocos2d__BezierTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "BezierTo", "retain_176", Cocos2dxBind_cocos2d__BezierTo_retain_176);
            binder.bind_custom_method("Cocos2d", "BezierTo", "release_176", Cocos2dxBind_cocos2d__BezierTo_release_176);
            binder.bind_custom_method("Cocos2d", "BezierTo", "autorelease_176", Cocos2dxBind_cocos2d__BezierTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "BezierTo", "get_reference_count_176", Cocos2dxBind_cocos2d__BezierTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ScaleTo", "create_1", Cocos2dxBind_cocos2d__ScaleTo_create_1);
            binder.bind_static_method("Cocos2d", "ScaleTo", "create_2", Cocos2dxBind_cocos2d__ScaleTo_create_2);
            binder.bind_static_method("Cocos2d", "ScaleTo", "create_3", Cocos2dxBind_cocos2d__ScaleTo_create_3);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "clone", Cocos2dxBind_cocos2d__ScaleTo_clone);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "reverse", Cocos2dxBind_cocos2d__ScaleTo_reverse);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "start_with_target", Cocos2dxBind_cocos2d__ScaleTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "update_2", Cocos2dxBind_cocos2d__ScaleTo_update_2);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "init_with_duration_4", Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_4);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "init_with_duration_5", Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_5);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "init_with_duration_6", Cocos2dxBind_cocos2d__ScaleTo_init_with_duration_6);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_elapsed_90", Cocos2dxBind_cocos2d__ScaleTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ScaleTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ScaleTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "is_done_87", Cocos2dxBind_cocos2d__ScaleTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "step_88", Cocos2dxBind_cocos2d__ScaleTo_step_88);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_duration_103", Cocos2dxBind_cocos2d__ScaleTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_duration_103", Cocos2dxBind_cocos2d__ScaleTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "description_106", Cocos2dxBind_cocos2d__ScaleTo_description_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "stop_58", Cocos2dxBind_cocos2d__ScaleTo_stop_58);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_target_106", Cocos2dxBind_cocos2d__ScaleTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_target_106", Cocos2dxBind_cocos2d__ScaleTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_original_target_106", Cocos2dxBind_cocos2d__ScaleTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_original_target_106", Cocos2dxBind_cocos2d__ScaleTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_tag_106", Cocos2dxBind_cocos2d__ScaleTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_tag_106", Cocos2dxBind_cocos2d__ScaleTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_flags_106", Cocos2dxBind_cocos2d__ScaleTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "set_flags_106", Cocos2dxBind_cocos2d__ScaleTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "retain_176", Cocos2dxBind_cocos2d__ScaleTo_retain_176);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "release_176", Cocos2dxBind_cocos2d__ScaleTo_release_176);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "autorelease_176", Cocos2dxBind_cocos2d__ScaleTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ScaleTo", "get_reference_count_176", Cocos2dxBind_cocos2d__ScaleTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ScaleBy", "create_1", Cocos2dxBind_cocos2d__ScaleBy_create_1);
            binder.bind_static_method("Cocos2d", "ScaleBy", "create_2", Cocos2dxBind_cocos2d__ScaleBy_create_2);
            binder.bind_static_method("Cocos2d", "ScaleBy", "create_3", Cocos2dxBind_cocos2d__ScaleBy_create_3);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "start_with_target", Cocos2dxBind_cocos2d__ScaleBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "clone", Cocos2dxBind_cocos2d__ScaleBy_clone);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "reverse", Cocos2dxBind_cocos2d__ScaleBy_reverse);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "update_2", Cocos2dxBind_cocos2d__ScaleBy_update_2);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "init_with_duration_4", Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_4);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "init_with_duration_5", Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_5);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "init_with_duration_6", Cocos2dxBind_cocos2d__ScaleBy_init_with_duration_6);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_elapsed_90", Cocos2dxBind_cocos2d__ScaleBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ScaleBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ScaleBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "is_done_87", Cocos2dxBind_cocos2d__ScaleBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "step_88", Cocos2dxBind_cocos2d__ScaleBy_step_88);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_duration_103", Cocos2dxBind_cocos2d__ScaleBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_duration_103", Cocos2dxBind_cocos2d__ScaleBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "description_106", Cocos2dxBind_cocos2d__ScaleBy_description_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "stop_58", Cocos2dxBind_cocos2d__ScaleBy_stop_58);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_target_106", Cocos2dxBind_cocos2d__ScaleBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_target_106", Cocos2dxBind_cocos2d__ScaleBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_original_target_106", Cocos2dxBind_cocos2d__ScaleBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_original_target_106", Cocos2dxBind_cocos2d__ScaleBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_tag_106", Cocos2dxBind_cocos2d__ScaleBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_tag_106", Cocos2dxBind_cocos2d__ScaleBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_flags_106", Cocos2dxBind_cocos2d__ScaleBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "set_flags_106", Cocos2dxBind_cocos2d__ScaleBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "retain_176", Cocos2dxBind_cocos2d__ScaleBy_retain_176);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "release_176", Cocos2dxBind_cocos2d__ScaleBy_release_176);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "autorelease_176", Cocos2dxBind_cocos2d__ScaleBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ScaleBy", "get_reference_count_176", Cocos2dxBind_cocos2d__ScaleBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Blink", "create", Cocos2dxBind_cocos2d__Blink_create);
            binder.bind_custom_method("Cocos2d", "Blink", "clone", Cocos2dxBind_cocos2d__Blink_clone);
            binder.bind_custom_method("Cocos2d", "Blink", "reverse", Cocos2dxBind_cocos2d__Blink_reverse);
            binder.bind_custom_method("Cocos2d", "Blink", "update", Cocos2dxBind_cocos2d__Blink_update);
            binder.bind_custom_method("Cocos2d", "Blink", "start_with_target", Cocos2dxBind_cocos2d__Blink_start_with_target);
            binder.bind_custom_method("Cocos2d", "Blink", "stop", Cocos2dxBind_cocos2d__Blink_stop);
            binder.bind_custom_method("Cocos2d", "Blink", "init_with_duration", Cocos2dxBind_cocos2d__Blink_init_with_duration);
            binder.bind_custom_method("Cocos2d", "Blink", "get_elapsed_90", Cocos2dxBind_cocos2d__Blink_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Blink", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Blink_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Blink", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Blink_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Blink", "is_done_87", Cocos2dxBind_cocos2d__Blink_is_done_87);
            binder.bind_custom_method("Cocos2d", "Blink", "step_88", Cocos2dxBind_cocos2d__Blink_step_88);
            binder.bind_custom_method("Cocos2d", "Blink", "get_duration_103", Cocos2dxBind_cocos2d__Blink_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Blink", "set_duration_103", Cocos2dxBind_cocos2d__Blink_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Blink", "description_106", Cocos2dxBind_cocos2d__Blink_description_106);
            binder.bind_custom_method("Cocos2d", "Blink", "get_target_106", Cocos2dxBind_cocos2d__Blink_get_target_106);
            binder.bind_custom_method("Cocos2d", "Blink", "set_target_106", Cocos2dxBind_cocos2d__Blink_set_target_106);
            binder.bind_custom_method("Cocos2d", "Blink", "get_original_target_106", Cocos2dxBind_cocos2d__Blink_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Blink", "set_original_target_106", Cocos2dxBind_cocos2d__Blink_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Blink", "get_tag_106", Cocos2dxBind_cocos2d__Blink_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Blink", "set_tag_106", Cocos2dxBind_cocos2d__Blink_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Blink", "get_flags_106", Cocos2dxBind_cocos2d__Blink_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Blink", "set_flags_106", Cocos2dxBind_cocos2d__Blink_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Blink", "retain_176", Cocos2dxBind_cocos2d__Blink_retain_176);
            binder.bind_custom_method("Cocos2d", "Blink", "release_176", Cocos2dxBind_cocos2d__Blink_release_176);
            binder.bind_custom_method("Cocos2d", "Blink", "autorelease_176", Cocos2dxBind_cocos2d__Blink_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Blink", "get_reference_count_176", Cocos2dxBind_cocos2d__Blink_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FadeTo", "create", Cocos2dxBind_cocos2d__FadeTo_create);
            binder.bind_custom_method("Cocos2d", "FadeTo", "clone", Cocos2dxBind_cocos2d__FadeTo_clone);
            binder.bind_custom_method("Cocos2d", "FadeTo", "reverse", Cocos2dxBind_cocos2d__FadeTo_reverse);
            binder.bind_custom_method("Cocos2d", "FadeTo", "start_with_target", Cocos2dxBind_cocos2d__FadeTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "FadeTo", "update_3", Cocos2dxBind_cocos2d__FadeTo_update_3);
            binder.bind_custom_method("Cocos2d", "FadeTo", "init_with_duration_3", Cocos2dxBind_cocos2d__FadeTo_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_elapsed_90", Cocos2dxBind_cocos2d__FadeTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeTo", "is_done_87", Cocos2dxBind_cocos2d__FadeTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "FadeTo", "step_88", Cocos2dxBind_cocos2d__FadeTo_step_88);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_duration_103", Cocos2dxBind_cocos2d__FadeTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_duration_103", Cocos2dxBind_cocos2d__FadeTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeTo", "description_106", Cocos2dxBind_cocos2d__FadeTo_description_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "stop_58", Cocos2dxBind_cocos2d__FadeTo_stop_58);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_target_106", Cocos2dxBind_cocos2d__FadeTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_target_106", Cocos2dxBind_cocos2d__FadeTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_original_target_106", Cocos2dxBind_cocos2d__FadeTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_original_target_106", Cocos2dxBind_cocos2d__FadeTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_tag_106", Cocos2dxBind_cocos2d__FadeTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_tag_106", Cocos2dxBind_cocos2d__FadeTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_flags_106", Cocos2dxBind_cocos2d__FadeTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "set_flags_106", Cocos2dxBind_cocos2d__FadeTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeTo", "retain_176", Cocos2dxBind_cocos2d__FadeTo_retain_176);
            binder.bind_custom_method("Cocos2d", "FadeTo", "release_176", Cocos2dxBind_cocos2d__FadeTo_release_176);
            binder.bind_custom_method("Cocos2d", "FadeTo", "autorelease_176", Cocos2dxBind_cocos2d__FadeTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FadeTo", "get_reference_count_176", Cocos2dxBind_cocos2d__FadeTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FadeIn", "create", Cocos2dxBind_cocos2d__FadeIn_create);
            binder.bind_custom_method("Cocos2d", "FadeIn", "start_with_target", Cocos2dxBind_cocos2d__FadeIn_start_with_target);
            binder.bind_custom_method("Cocos2d", "FadeIn", "clone", Cocos2dxBind_cocos2d__FadeIn_clone);
            binder.bind_custom_method("Cocos2d", "FadeIn", "reverse", Cocos2dxBind_cocos2d__FadeIn_reverse);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_reverse_action", Cocos2dxBind_cocos2d__FadeIn_set_reverse_action);
            binder.bind_custom_method("Cocos2d", "FadeIn", "update_3", Cocos2dxBind_cocos2d__FadeIn_update_3);
            binder.bind_custom_method("Cocos2d", "FadeIn", "init_with_duration_3", Cocos2dxBind_cocos2d__FadeIn_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_elapsed_90", Cocos2dxBind_cocos2d__FadeIn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeIn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeIn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeIn", "is_done_87", Cocos2dxBind_cocos2d__FadeIn_is_done_87);
            binder.bind_custom_method("Cocos2d", "FadeIn", "step_88", Cocos2dxBind_cocos2d__FadeIn_step_88);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_duration_103", Cocos2dxBind_cocos2d__FadeIn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_duration_103", Cocos2dxBind_cocos2d__FadeIn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeIn", "description_106", Cocos2dxBind_cocos2d__FadeIn_description_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "stop_58", Cocos2dxBind_cocos2d__FadeIn_stop_58);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_target_106", Cocos2dxBind_cocos2d__FadeIn_get_target_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_target_106", Cocos2dxBind_cocos2d__FadeIn_set_target_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_original_target_106", Cocos2dxBind_cocos2d__FadeIn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_original_target_106", Cocos2dxBind_cocos2d__FadeIn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_tag_106", Cocos2dxBind_cocos2d__FadeIn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_tag_106", Cocos2dxBind_cocos2d__FadeIn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_flags_106", Cocos2dxBind_cocos2d__FadeIn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "set_flags_106", Cocos2dxBind_cocos2d__FadeIn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeIn", "retain_176", Cocos2dxBind_cocos2d__FadeIn_retain_176);
            binder.bind_custom_method("Cocos2d", "FadeIn", "release_176", Cocos2dxBind_cocos2d__FadeIn_release_176);
            binder.bind_custom_method("Cocos2d", "FadeIn", "autorelease_176", Cocos2dxBind_cocos2d__FadeIn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FadeIn", "get_reference_count_176", Cocos2dxBind_cocos2d__FadeIn_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "FadeOut", "create", Cocos2dxBind_cocos2d__FadeOut_create);
            binder.bind_custom_method("Cocos2d", "FadeOut", "start_with_target", Cocos2dxBind_cocos2d__FadeOut_start_with_target);
            binder.bind_custom_method("Cocos2d", "FadeOut", "clone", Cocos2dxBind_cocos2d__FadeOut_clone);
            binder.bind_custom_method("Cocos2d", "FadeOut", "reverse", Cocos2dxBind_cocos2d__FadeOut_reverse);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_reverse_action", Cocos2dxBind_cocos2d__FadeOut_set_reverse_action);
            binder.bind_custom_method("Cocos2d", "FadeOut", "update_3", Cocos2dxBind_cocos2d__FadeOut_update_3);
            binder.bind_custom_method("Cocos2d", "FadeOut", "init_with_duration_3", Cocos2dxBind_cocos2d__FadeOut_init_with_duration_3);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_elapsed_90", Cocos2dxBind_cocos2d__FadeOut_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeOut_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__FadeOut_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "FadeOut", "is_done_87", Cocos2dxBind_cocos2d__FadeOut_is_done_87);
            binder.bind_custom_method("Cocos2d", "FadeOut", "step_88", Cocos2dxBind_cocos2d__FadeOut_step_88);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_duration_103", Cocos2dxBind_cocos2d__FadeOut_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_duration_103", Cocos2dxBind_cocos2d__FadeOut_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FadeOut", "description_106", Cocos2dxBind_cocos2d__FadeOut_description_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "stop_58", Cocos2dxBind_cocos2d__FadeOut_stop_58);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_target_106", Cocos2dxBind_cocos2d__FadeOut_get_target_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_target_106", Cocos2dxBind_cocos2d__FadeOut_set_target_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_original_target_106", Cocos2dxBind_cocos2d__FadeOut_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_original_target_106", Cocos2dxBind_cocos2d__FadeOut_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_tag_106", Cocos2dxBind_cocos2d__FadeOut_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_tag_106", Cocos2dxBind_cocos2d__FadeOut_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_flags_106", Cocos2dxBind_cocos2d__FadeOut_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "set_flags_106", Cocos2dxBind_cocos2d__FadeOut_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FadeOut", "retain_176", Cocos2dxBind_cocos2d__FadeOut_retain_176);
            binder.bind_custom_method("Cocos2d", "FadeOut", "release_176", Cocos2dxBind_cocos2d__FadeOut_release_176);
            binder.bind_custom_method("Cocos2d", "FadeOut", "autorelease_176", Cocos2dxBind_cocos2d__FadeOut_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FadeOut", "get_reference_count_176", Cocos2dxBind_cocos2d__FadeOut_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "TintTo", "create_1", Cocos2dxBind_cocos2d__TintTo_create_1);
            binder.bind_static_method("Cocos2d", "TintTo", "create_2", Cocos2dxBind_cocos2d__TintTo_create_2);
            binder.bind_custom_method("Cocos2d", "TintTo", "clone", Cocos2dxBind_cocos2d__TintTo_clone);
            binder.bind_custom_method("Cocos2d", "TintTo", "reverse", Cocos2dxBind_cocos2d__TintTo_reverse);
            binder.bind_custom_method("Cocos2d", "TintTo", "start_with_target", Cocos2dxBind_cocos2d__TintTo_start_with_target);
            binder.bind_custom_method("Cocos2d", "TintTo", "update", Cocos2dxBind_cocos2d__TintTo_update);
            binder.bind_custom_method("Cocos2d", "TintTo", "init_with_duration", Cocos2dxBind_cocos2d__TintTo_init_with_duration);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_elapsed_90", Cocos2dxBind_cocos2d__TintTo_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__TintTo_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__TintTo_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TintTo", "is_done_87", Cocos2dxBind_cocos2d__TintTo_is_done_87);
            binder.bind_custom_method("Cocos2d", "TintTo", "step_88", Cocos2dxBind_cocos2d__TintTo_step_88);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_duration_103", Cocos2dxBind_cocos2d__TintTo_get_duration_103);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_duration_103", Cocos2dxBind_cocos2d__TintTo_set_duration_103);
            binder.bind_custom_method("Cocos2d", "TintTo", "description_106", Cocos2dxBind_cocos2d__TintTo_description_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "stop_58", Cocos2dxBind_cocos2d__TintTo_stop_58);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_target_106", Cocos2dxBind_cocos2d__TintTo_get_target_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_target_106", Cocos2dxBind_cocos2d__TintTo_set_target_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_original_target_106", Cocos2dxBind_cocos2d__TintTo_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_original_target_106", Cocos2dxBind_cocos2d__TintTo_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_tag_106", Cocos2dxBind_cocos2d__TintTo_get_tag_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_tag_106", Cocos2dxBind_cocos2d__TintTo_set_tag_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_flags_106", Cocos2dxBind_cocos2d__TintTo_get_flags_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "set_flags_106", Cocos2dxBind_cocos2d__TintTo_set_flags_106);
            binder.bind_custom_method("Cocos2d", "TintTo", "retain_176", Cocos2dxBind_cocos2d__TintTo_retain_176);
            binder.bind_custom_method("Cocos2d", "TintTo", "release_176", Cocos2dxBind_cocos2d__TintTo_release_176);
            binder.bind_custom_method("Cocos2d", "TintTo", "autorelease_176", Cocos2dxBind_cocos2d__TintTo_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TintTo", "get_reference_count_176", Cocos2dxBind_cocos2d__TintTo_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "TintBy", "create", Cocos2dxBind_cocos2d__TintBy_create);
            binder.bind_custom_method("Cocos2d", "TintBy", "clone", Cocos2dxBind_cocos2d__TintBy_clone);
            binder.bind_custom_method("Cocos2d", "TintBy", "reverse", Cocos2dxBind_cocos2d__TintBy_reverse);
            binder.bind_custom_method("Cocos2d", "TintBy", "start_with_target", Cocos2dxBind_cocos2d__TintBy_start_with_target);
            binder.bind_custom_method("Cocos2d", "TintBy", "update", Cocos2dxBind_cocos2d__TintBy_update);
            binder.bind_custom_method("Cocos2d", "TintBy", "init_with_duration", Cocos2dxBind_cocos2d__TintBy_init_with_duration);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_elapsed_90", Cocos2dxBind_cocos2d__TintBy_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__TintBy_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__TintBy_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TintBy", "is_done_87", Cocos2dxBind_cocos2d__TintBy_is_done_87);
            binder.bind_custom_method("Cocos2d", "TintBy", "step_88", Cocos2dxBind_cocos2d__TintBy_step_88);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_duration_103", Cocos2dxBind_cocos2d__TintBy_get_duration_103);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_duration_103", Cocos2dxBind_cocos2d__TintBy_set_duration_103);
            binder.bind_custom_method("Cocos2d", "TintBy", "description_106", Cocos2dxBind_cocos2d__TintBy_description_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "stop_58", Cocos2dxBind_cocos2d__TintBy_stop_58);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_target_106", Cocos2dxBind_cocos2d__TintBy_get_target_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_target_106", Cocos2dxBind_cocos2d__TintBy_set_target_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_original_target_106", Cocos2dxBind_cocos2d__TintBy_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_original_target_106", Cocos2dxBind_cocos2d__TintBy_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_tag_106", Cocos2dxBind_cocos2d__TintBy_get_tag_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_tag_106", Cocos2dxBind_cocos2d__TintBy_set_tag_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_flags_106", Cocos2dxBind_cocos2d__TintBy_get_flags_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "set_flags_106", Cocos2dxBind_cocos2d__TintBy_set_flags_106);
            binder.bind_custom_method("Cocos2d", "TintBy", "retain_176", Cocos2dxBind_cocos2d__TintBy_retain_176);
            binder.bind_custom_method("Cocos2d", "TintBy", "release_176", Cocos2dxBind_cocos2d__TintBy_release_176);
            binder.bind_custom_method("Cocos2d", "TintBy", "autorelease_176", Cocos2dxBind_cocos2d__TintBy_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TintBy", "get_reference_count_176", Cocos2dxBind_cocos2d__TintBy_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "DelayTime", "create", Cocos2dxBind_cocos2d__DelayTime_create);
            binder.bind_custom_method("Cocos2d", "DelayTime", "update", Cocos2dxBind_cocos2d__DelayTime_update);
            binder.bind_custom_method("Cocos2d", "DelayTime", "reverse", Cocos2dxBind_cocos2d__DelayTime_reverse);
            binder.bind_custom_method("Cocos2d", "DelayTime", "clone", Cocos2dxBind_cocos2d__DelayTime_clone);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_elapsed_90", Cocos2dxBind_cocos2d__DelayTime_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__DelayTime_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__DelayTime_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "DelayTime", "is_done_87", Cocos2dxBind_cocos2d__DelayTime_is_done_87);
            binder.bind_custom_method("Cocos2d", "DelayTime", "step_88", Cocos2dxBind_cocos2d__DelayTime_step_88);
            binder.bind_custom_method("Cocos2d", "DelayTime", "start_with_target_2", Cocos2dxBind_cocos2d__DelayTime_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "DelayTime", "init_with_duration_52", Cocos2dxBind_cocos2d__DelayTime_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_duration_103", Cocos2dxBind_cocos2d__DelayTime_get_duration_103);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_duration_103", Cocos2dxBind_cocos2d__DelayTime_set_duration_103);
            binder.bind_custom_method("Cocos2d", "DelayTime", "description_106", Cocos2dxBind_cocos2d__DelayTime_description_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "stop_58", Cocos2dxBind_cocos2d__DelayTime_stop_58);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_target_106", Cocos2dxBind_cocos2d__DelayTime_get_target_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_target_106", Cocos2dxBind_cocos2d__DelayTime_set_target_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_original_target_106", Cocos2dxBind_cocos2d__DelayTime_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_original_target_106", Cocos2dxBind_cocos2d__DelayTime_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_tag_106", Cocos2dxBind_cocos2d__DelayTime_get_tag_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_tag_106", Cocos2dxBind_cocos2d__DelayTime_set_tag_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_flags_106", Cocos2dxBind_cocos2d__DelayTime_get_flags_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "set_flags_106", Cocos2dxBind_cocos2d__DelayTime_set_flags_106);
            binder.bind_custom_method("Cocos2d", "DelayTime", "retain_176", Cocos2dxBind_cocos2d__DelayTime_retain_176);
            binder.bind_custom_method("Cocos2d", "DelayTime", "release_176", Cocos2dxBind_cocos2d__DelayTime_release_176);
            binder.bind_custom_method("Cocos2d", "DelayTime", "autorelease_176", Cocos2dxBind_cocos2d__DelayTime_autorelease_176);
            binder.bind_custom_method("Cocos2d", "DelayTime", "get_reference_count_176", Cocos2dxBind_cocos2d__DelayTime_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ReverseTime", "create", Cocos2dxBind_cocos2d__ReverseTime_create);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "reverse", Cocos2dxBind_cocos2d__ReverseTime_reverse);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "clone", Cocos2dxBind_cocos2d__ReverseTime_clone);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "start_with_target", Cocos2dxBind_cocos2d__ReverseTime_start_with_target);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "stop", Cocos2dxBind_cocos2d__ReverseTime_stop);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "update", Cocos2dxBind_cocos2d__ReverseTime_update);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "init_with_action", Cocos2dxBind_cocos2d__ReverseTime_init_with_action);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_elapsed_90", Cocos2dxBind_cocos2d__ReverseTime_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ReverseTime_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ReverseTime_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "is_done_87", Cocos2dxBind_cocos2d__ReverseTime_is_done_87);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "step_88", Cocos2dxBind_cocos2d__ReverseTime_step_88);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "init_with_duration_52", Cocos2dxBind_cocos2d__ReverseTime_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_duration_103", Cocos2dxBind_cocos2d__ReverseTime_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_duration_103", Cocos2dxBind_cocos2d__ReverseTime_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "description_106", Cocos2dxBind_cocos2d__ReverseTime_description_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_target_106", Cocos2dxBind_cocos2d__ReverseTime_get_target_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_target_106", Cocos2dxBind_cocos2d__ReverseTime_set_target_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_original_target_106", Cocos2dxBind_cocos2d__ReverseTime_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_original_target_106", Cocos2dxBind_cocos2d__ReverseTime_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_tag_106", Cocos2dxBind_cocos2d__ReverseTime_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_tag_106", Cocos2dxBind_cocos2d__ReverseTime_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_flags_106", Cocos2dxBind_cocos2d__ReverseTime_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "set_flags_106", Cocos2dxBind_cocos2d__ReverseTime_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "retain_176", Cocos2dxBind_cocos2d__ReverseTime_retain_176);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "release_176", Cocos2dxBind_cocos2d__ReverseTime_release_176);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "autorelease_176", Cocos2dxBind_cocos2d__ReverseTime_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ReverseTime", "get_reference_count_176", Cocos2dxBind_cocos2d__ReverseTime_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Animate", "create", Cocos2dxBind_cocos2d__Animate_create);
            binder.bind_custom_method("Cocos2d", "Animate", "set_animation", Cocos2dxBind_cocos2d__Animate_set_animation);
            binder.bind_custom_method("Cocos2d", "Animate", "get_animation_1", Cocos2dxBind_cocos2d__Animate_get_animation_1);
            binder.bind_custom_method("Cocos2d", "Animate", "get_animation_2", Cocos2dxBind_cocos2d__Animate_get_animation_2);
            binder.bind_custom_method("Cocos2d", "Animate", "get_current_frame_index", Cocos2dxBind_cocos2d__Animate_get_current_frame_index);
            binder.bind_custom_method("Cocos2d", "Animate", "clone", Cocos2dxBind_cocos2d__Animate_clone);
            binder.bind_custom_method("Cocos2d", "Animate", "reverse", Cocos2dxBind_cocos2d__Animate_reverse);
            binder.bind_custom_method("Cocos2d", "Animate", "start_with_target", Cocos2dxBind_cocos2d__Animate_start_with_target);
            binder.bind_custom_method("Cocos2d", "Animate", "stop", Cocos2dxBind_cocos2d__Animate_stop);
            binder.bind_custom_method("Cocos2d", "Animate", "update", Cocos2dxBind_cocos2d__Animate_update);
            binder.bind_custom_method("Cocos2d", "Animate", "init_with_animation", Cocos2dxBind_cocos2d__Animate_init_with_animation);
            binder.bind_custom_method("Cocos2d", "Animate", "get_elapsed_90", Cocos2dxBind_cocos2d__Animate_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Animate", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Animate_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Animate", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Animate_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Animate", "is_done_87", Cocos2dxBind_cocos2d__Animate_is_done_87);
            binder.bind_custom_method("Cocos2d", "Animate", "step_88", Cocos2dxBind_cocos2d__Animate_step_88);
            binder.bind_custom_method("Cocos2d", "Animate", "init_with_duration_52", Cocos2dxBind_cocos2d__Animate_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "Animate", "get_duration_103", Cocos2dxBind_cocos2d__Animate_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Animate", "set_duration_103", Cocos2dxBind_cocos2d__Animate_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Animate", "description_106", Cocos2dxBind_cocos2d__Animate_description_106);
            binder.bind_custom_method("Cocos2d", "Animate", "get_target_106", Cocos2dxBind_cocos2d__Animate_get_target_106);
            binder.bind_custom_method("Cocos2d", "Animate", "set_target_106", Cocos2dxBind_cocos2d__Animate_set_target_106);
            binder.bind_custom_method("Cocos2d", "Animate", "get_original_target_106", Cocos2dxBind_cocos2d__Animate_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Animate", "set_original_target_106", Cocos2dxBind_cocos2d__Animate_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Animate", "get_tag_106", Cocos2dxBind_cocos2d__Animate_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Animate", "set_tag_106", Cocos2dxBind_cocos2d__Animate_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Animate", "get_flags_106", Cocos2dxBind_cocos2d__Animate_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Animate", "set_flags_106", Cocos2dxBind_cocos2d__Animate_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Animate", "retain_176", Cocos2dxBind_cocos2d__Animate_retain_176);
            binder.bind_custom_method("Cocos2d", "Animate", "release_176", Cocos2dxBind_cocos2d__Animate_release_176);
            binder.bind_custom_method("Cocos2d", "Animate", "autorelease_176", Cocos2dxBind_cocos2d__Animate_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Animate", "get_reference_count_176", Cocos2dxBind_cocos2d__Animate_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "TargetedAction", "create", Cocos2dxBind_cocos2d__TargetedAction_create);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_forced_target", Cocos2dxBind_cocos2d__TargetedAction_set_forced_target);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_forced_target_1", Cocos2dxBind_cocos2d__TargetedAction_get_forced_target_1);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_forced_target_2", Cocos2dxBind_cocos2d__TargetedAction_get_forced_target_2);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "clone", Cocos2dxBind_cocos2d__TargetedAction_clone);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "reverse", Cocos2dxBind_cocos2d__TargetedAction_reverse);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "start_with_target", Cocos2dxBind_cocos2d__TargetedAction_start_with_target);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "stop", Cocos2dxBind_cocos2d__TargetedAction_stop);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "update", Cocos2dxBind_cocos2d__TargetedAction_update);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "is_done", Cocos2dxBind_cocos2d__TargetedAction_is_done);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "init_with_target", Cocos2dxBind_cocos2d__TargetedAction_init_with_target);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_elapsed_90", Cocos2dxBind_cocos2d__TargetedAction_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__TargetedAction_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__TargetedAction_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "step_88", Cocos2dxBind_cocos2d__TargetedAction_step_88);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "init_with_duration_52", Cocos2dxBind_cocos2d__TargetedAction_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_duration_103", Cocos2dxBind_cocos2d__TargetedAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_duration_103", Cocos2dxBind_cocos2d__TargetedAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "description_106", Cocos2dxBind_cocos2d__TargetedAction_description_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_target_106", Cocos2dxBind_cocos2d__TargetedAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_target_106", Cocos2dxBind_cocos2d__TargetedAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_original_target_106", Cocos2dxBind_cocos2d__TargetedAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_original_target_106", Cocos2dxBind_cocos2d__TargetedAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_tag_106", Cocos2dxBind_cocos2d__TargetedAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_tag_106", Cocos2dxBind_cocos2d__TargetedAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_flags_106", Cocos2dxBind_cocos2d__TargetedAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "set_flags_106", Cocos2dxBind_cocos2d__TargetedAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "retain_176", Cocos2dxBind_cocos2d__TargetedAction_retain_176);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "release_176", Cocos2dxBind_cocos2d__TargetedAction_release_176);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "autorelease_176", Cocos2dxBind_cocos2d__TargetedAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TargetedAction", "get_reference_count_176", Cocos2dxBind_cocos2d__TargetedAction_get_reference_count_176);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectAction", "is_erased", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_is_erased);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectAction", "stop", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_stop);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectAction", "step", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectAction_step);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObject", "create_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_create_1);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObject", "create_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_create_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_object_group", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_object_group);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_node_ref", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_node_ref);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_kind", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_kind);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_kind", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_kind);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_movable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_movable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_movable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_movable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_collidable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_collidable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_collidable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_collidable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_enemy_collidable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_enemy_collidable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_enemy_collidable", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_enemy_collidable);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_rotate_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_rotate_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_rotate_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_rotate_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_parabola_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_parabola_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_parabola_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_parabola_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_flip_mode", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_flip_mode);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_flip_mode", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_flip_mode);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_node_render", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_node_render);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_node_render_z", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_node_render_z);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_node_render", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_node_render);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_move_push_back_callback", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_push_back_callback);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_move_first_callback", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_first_callback);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_move_target_filter_callback", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_move_target_filter_callback);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_z_offset", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_z_offset);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_z_offset", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_z_offset);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_walks", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_walks);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_walks", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_walks);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_shoots", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_shoots);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_shoots", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_shoots);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_idles", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_idles);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_idles", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_idles);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_past_th", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_past_th);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_past_animation_direction", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_past_animation_direction);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "is_valid", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_is_valid);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "is_released", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_is_released);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "release", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_release);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "convert_to_render_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_convert_to_render_1);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "convert_to_render_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_convert_to_render_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "z_order_correct", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_z_order_correct);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "step", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_step);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "render", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_render);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "add_action", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_add_action);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "add_sensor", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_add_sensor);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_position", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_position);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_position", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_position);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_render_offset", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_render_offset);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "get_render_offset", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_get_render_offset);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_no_arg", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_no_arg);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_1);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_action_no_arg", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_no_arg);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_action_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_1);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "move_to_action_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_move_to_action_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "trace_to", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_trace_to);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "delay_call_no_arg", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_delay_call_no_arg);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "delay_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_delay_call);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "interval_call_no_arg", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_interval_call_no_arg);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "interval_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_interval_call);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "stop_move", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_stop_move);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "set_up_spacing_move", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_set_up_spacing_move);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "flip_on_right", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_flip_on_right);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "stop_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_stop_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "start_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "start_shoot_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_shoot_animation);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObject", "start_idle_animation", Cocos2dxBind_cor__cocos2dx_converter__RtsObject_start_idle_animation);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectGroup", "create_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_1);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectGroup", "create_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "create_object", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_create_object);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "release_object", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_release_object);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "set_dt", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_dt);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "get_dt", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_dt);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "set_debug_draw_node", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_debug_draw_node);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "get_debug_draw_node", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_debug_draw_node);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "get_internal_state", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_internal_state);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "search_from_node", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_search_from_node);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "get_collision", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_collision);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "set_transform_to_render", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_transform_to_render);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "get_transform_to_render", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_get_transform_to_render);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "set_contact_pair", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_set_contact_pair);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "solve_contact_1", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_solve_contact_1);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "solve_contact_2", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_solve_contact_2);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "delay_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_delay_call);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "poll_delay_call", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_poll_delay_call);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectGroup", "poll", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectGroup_poll);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "set_wall_kind", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_set_wall_kind);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "set_index_convert", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_set_index_convert);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "add", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_add);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "remove", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_remove);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "each_vertices", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_vertices);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "each_edges", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_edges);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "each_cell", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_each_cell);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectCostGridSpace", "make_graph", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpace_make_graph);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectCostGridSpaceExperimental", "run1", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run1);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectCostGridSpaceExperimental", "run2", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_run2);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectCostGridSpaceExperimental", "thread_run", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectCostGridSpaceExperimental_thread_run);
            binder.bind_static_method("CorCocos2dxConverter", "TexturedTriangleNode", "create_1", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_create_1);
            binder.bind_static_method("CorCocos2dxConverter", "TexturedTriangleNode", "create_2", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_create_2);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_texuter", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_texuter);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_texture", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_texture);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "init", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_init);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "clear", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_clear);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "ensure_capacity", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_ensure_capacity);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_triangle", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_triangle);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "draw", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_draw);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_description_15", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_description_15);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_local_z_order_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_local_z_order_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_local_z_order_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_local_z_order_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_global_z_order_27", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_global_z_order_27);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_global_z_order_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_global_z_order_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scale_x_23", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_x_23);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scale_x_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_x_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scale_y_23", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_y_23);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scale_y_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_y_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scale_z_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_z_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scale_z_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_z_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scale_45", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_45);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scale_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scale_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scale_46", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scale_46);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position_49", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_49);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_normalized_position_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_normalized_position_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position_55", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_55);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_normalized_position_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_normalized_position_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position_50", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_50);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position_56", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_56);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position_x_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_x_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position_x_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_x_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position_y_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_y_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position_y_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_y_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position3_d_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position3_d_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position3_d_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position3_d_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_position_z_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_position_z_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_position_z_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_position_z_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_skew_x_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_skew_x_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_skew_x_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_skew_x_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_skew_y_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_skew_y_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_skew_y_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_skew_y_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_anchor_point_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_anchor_point_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_anchor_point_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_anchor_point_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_anchor_point_in_points_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_content_size_24", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_content_size_24);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_content_size_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_content_size_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_visible_27", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_visible_27);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_visible_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_visible_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_rotation_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_rotation_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_rotation3_d_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation3_d_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_rotation3_d_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation3_d_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_rotation_quat_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_quat_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_rotation_quat_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_quat_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_rotation_skew_x_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_skew_x_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_rotation_skew_x_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_skew_x_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_rotation_skew_y_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_rotation_skew_y_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_rotation_skew_y_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_rotation_skew_y_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_order_of_arrival_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_order_of_arrival_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_order_of_arrival_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_order_of_arrival_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_child_113", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_113);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_child_114", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_114);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_child_115", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_115);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_child_116", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_child_116);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_child_by_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_child_by_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_child_by_name_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_child_by_name_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "enumerate_children_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_enumerate_children_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_children_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_children_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_children_count_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_children_count_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_parent_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_parent_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_parent_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_parent_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_from_parent_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_parent_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_child_24", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_24);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_child_by_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_by_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_child_by_name_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_child_by_name_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_all_children_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_children_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_all_children_with_cleanup_24", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "reorder_child_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_reorder_child_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "sort_all_children_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_sort_all_children_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_name_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_name_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_name_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_name_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_user_data_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_data_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_user_data_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_data_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_user_data_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_user_data_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_user_object_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_object_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_user_object_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_user_object_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_user_object_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_user_object_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_gl_program_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_gl_program_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_gl_program_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_gl_program_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_gl_program_state_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_gl_program_state_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_gl_program_state_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_gl_program_state_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_running_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_running_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "on_enter_18", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_enter_18);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "on_enter_transition_did_finish_24", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_enter_transition_did_finish_24);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "on_exit_18", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_exit_18);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "on_exit_transition_did_start_24", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_on_exit_transition_did_start_24);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "cleanup_25", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_cleanup_25);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "visit_31", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_visit_31);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "visit_32", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_visit_32);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scene_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scene_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_bounding_box_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_bounding_box_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_event_dispatcher_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_event_dispatcher_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_event_dispatcher_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_event_dispatcher_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_action_manager_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_action_manager_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_action_manager_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_manager_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_action_manager_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_manager_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "run_action_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_run_action_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "stop_all_actions_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_all_actions_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "stop_action_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_action_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "stop_action_by_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_action_by_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "stop_actions_by_flags_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_stop_actions_by_flags_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_action_by_tag_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_action_by_tag_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_number_of_running_actions_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_number_of_running_actions_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_scheduler_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_scheduler_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scheduler_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scheduler_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_scheduler_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_scheduler_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_scheduled_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_scheduled_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_update_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_update_with_priority_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_update_with_priority_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "unschedule_update_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_update_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_once_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_once_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_172", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_172);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_173", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_173);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "schedule_174", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_schedule_174);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "unschedule_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "unschedule_all_callbacks_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "resume_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_resume_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "pause_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_pause_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_transform_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_transform_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_parent_transform_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_parent_transform_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_node_to_parent_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_parent_to_node_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_world_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_world_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_world_to_node_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_world_to_node_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_to_node_space_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_node_space_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_to_world_space_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_world_space_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_to_node_space_ar_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_to_world_space_ar_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_touch_to_node_space_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_additional_transform_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_additional_transform_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_component_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_component_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "add_component_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_add_component_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_component_57", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_component_57);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_component_58", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_component_58);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_all_components_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_all_components_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_physics_body_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_physics_body_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_physics_body_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_physics_body_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "remove_from_physics_world_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_remove_from_physics_world_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_transform_from_physics_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_transform_from_physics_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_physics_body_transform_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_physics_body_transform_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_opacity_28", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_opacity_28);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_displayed_opacity_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_displayed_opacity_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_opacity_26", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_opacity_26);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_displayed_opacity_23", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_displayed_opacity_23);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_color_27", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_color_27);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_displayed_color_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_displayed_color_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_color_27", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_color_27);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "update_displayed_color_23", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_update_displayed_color_23);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_cascade_color_enabled_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_cascade_color_enabled_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_opacity_modify_rgb_21", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_opacity_modify_rgb_21);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "is_opacity_modify_rgb_21", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_is_opacity_modify_rgb_21);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_on_enter_callback_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_on_enter_callback_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_on_exit_callback_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_on_exit_callback_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_camera_mask_29", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_camera_mask_29);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "set_camera_mask_22", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_set_camera_mask_22);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "retain_176", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_retain_176);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "release_176", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_release_176);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "autorelease_176", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_autorelease_176);
            binder.bind_custom_method("CorCocos2dxConverter", "TexturedTriangleNode", "get_reference_count_176", Cocos2dxBind_cor__cocos2dx_converter__TexturedTriangleNode_get_reference_count_176);
            binder.bind_static_method("CorCocos2dxConverter", "RtsObjectEffect", "create_layser", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectEffect_create_layser);
            binder.bind_custom_method("Cocos2d", "Image", "init_with_image_file", Cocos2dxBind_cocos2d__Image_init_with_image_file);
            binder.bind_custom_method("Cocos2d", "Image", "init_with_image_data", Cocos2dxBind_cocos2d__Image_init_with_image_data);
            binder.bind_custom_method("Cocos2d", "Image", "init_with_raw_data", Cocos2dxBind_cocos2d__Image_init_with_raw_data);
            binder.bind_custom_method("Cocos2d", "Image", "get_data", Cocos2dxBind_cocos2d__Image_get_data);
            binder.bind_custom_method("Cocos2d", "Image", "get_data_len", Cocos2dxBind_cocos2d__Image_get_data_len);
            binder.bind_custom_method("Cocos2d", "Image", "get_file_type", Cocos2dxBind_cocos2d__Image_get_file_type);
            binder.bind_custom_method("Cocos2d", "Image", "get_render_format", Cocos2dxBind_cocos2d__Image_get_render_format);
            binder.bind_custom_method("Cocos2d", "Image", "get_width", Cocos2dxBind_cocos2d__Image_get_width);
            binder.bind_custom_method("Cocos2d", "Image", "get_height", Cocos2dxBind_cocos2d__Image_get_height);
            binder.bind_custom_method("Cocos2d", "Image", "get_number_of_mipmaps", Cocos2dxBind_cocos2d__Image_get_number_of_mipmaps);
            binder.bind_custom_method("Cocos2d", "Image", "get_mipmaps", Cocos2dxBind_cocos2d__Image_get_mipmaps);
            binder.bind_custom_method("Cocos2d", "Image", "has_premultiplied_alpha", Cocos2dxBind_cocos2d__Image_has_premultiplied_alpha);
            binder.bind_custom_method("Cocos2d", "Image", "get_bit_per_pixel", Cocos2dxBind_cocos2d__Image_get_bit_per_pixel);
            binder.bind_custom_method("Cocos2d", "Image", "has_alpha", Cocos2dxBind_cocos2d__Image_has_alpha);
            binder.bind_custom_method("Cocos2d", "Image", "is_compressed", Cocos2dxBind_cocos2d__Image_is_compressed);
            binder.bind_custom_method("Cocos2d", "Image", "save_to_file", Cocos2dxBind_cocos2d__Image_save_to_file);
            binder.bind_static_method("Cocos2d", "Image", "set_pvr_images_have_premultiplied_alpha", Cocos2dxBind_cocos2d__Image_set_pvr_images_have_premultiplied_alpha);
            binder.bind_custom_method("Cocos2d", "Image", "retain_176", Cocos2dxBind_cocos2d__Image_retain_176);
            binder.bind_custom_method("Cocos2d", "Image", "release_176", Cocos2dxBind_cocos2d__Image_release_176);
            binder.bind_custom_method("Cocos2d", "Image", "autorelease_176", Cocos2dxBind_cocos2d__Image_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Image", "get_reference_count_176", Cocos2dxBind_cocos2d__Image_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Image", "_id=", Cocos2dxBind_cocos2d__Image_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Image", "_id", Cocos2dxBind_cocos2d__Image_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Image", "_lua_id=", Cocos2dxBind_cocos2d__Image_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Image", "_lua_id", Cocos2dxBind_cocos2d__Image_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Image", "_script_object=", Cocos2dxBind_cocos2d__Image_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Image", "_script_object", Cocos2dxBind_cocos2d__Image_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Sprite", "create_1", Cocos2dxBind_cocos2d__Sprite_create_1);
            binder.bind_static_method("Cocos2d", "Sprite", "create_2", Cocos2dxBind_cocos2d__Sprite_create_2);
            binder.bind_static_method("Cocos2d", "Sprite", "create_3", Cocos2dxBind_cocos2d__Sprite_create_3);
            binder.bind_static_method("Cocos2d", "Sprite", "create_4", Cocos2dxBind_cocos2d__Sprite_create_4);
            binder.bind_static_method("Cocos2d", "Sprite", "create_with_texture_1", Cocos2dxBind_cocos2d__Sprite_create_with_texture_1);
            binder.bind_static_method("Cocos2d", "Sprite", "create_with_texture_2", Cocos2dxBind_cocos2d__Sprite_create_with_texture_2);
            binder.bind_static_method("Cocos2d", "Sprite", "create_with_sprite_frame", Cocos2dxBind_cocos2d__Sprite_create_with_sprite_frame);
            binder.bind_static_method("Cocos2d", "Sprite", "create_with_sprite_frame_name", Cocos2dxBind_cocos2d__Sprite_create_with_sprite_frame_name);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_transform", Cocos2dxBind_cocos2d__Sprite_update_transform);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_batch_node", Cocos2dxBind_cocos2d__Sprite_get_batch_node);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_batch_node", Cocos2dxBind_cocos2d__Sprite_set_batch_node);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_texture_1", Cocos2dxBind_cocos2d__Sprite_set_texture_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_texture_2", Cocos2dxBind_cocos2d__Sprite_set_texture_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_texture", Cocos2dxBind_cocos2d__Sprite_get_texture);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_texture_rect_1", Cocos2dxBind_cocos2d__Sprite_set_texture_rect_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_texture_rect_2", Cocos2dxBind_cocos2d__Sprite_set_texture_rect_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_vertex_rect", Cocos2dxBind_cocos2d__Sprite_set_vertex_rect);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_sprite_frame_1", Cocos2dxBind_cocos2d__Sprite_set_sprite_frame_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_sprite_frame_2", Cocos2dxBind_cocos2d__Sprite_set_sprite_frame_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_frame_displayed", Cocos2dxBind_cocos2d__Sprite_is_frame_displayed);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_sprite_frame", Cocos2dxBind_cocos2d__Sprite_get_sprite_frame);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_display_frame_with_animation_name", Cocos2dxBind_cocos2d__Sprite_set_display_frame_with_animation_name);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_dirty", Cocos2dxBind_cocos2d__Sprite_is_dirty);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_dirty", Cocos2dxBind_cocos2d__Sprite_set_dirty);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_quad", Cocos2dxBind_cocos2d__Sprite_get_quad);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_texture_rect_rotated", Cocos2dxBind_cocos2d__Sprite_is_texture_rect_rotated);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_atlas_index", Cocos2dxBind_cocos2d__Sprite_get_atlas_index);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_atlas_index", Cocos2dxBind_cocos2d__Sprite_set_atlas_index);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_texture_rect", Cocos2dxBind_cocos2d__Sprite_get_texture_rect);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_texture_atlas", Cocos2dxBind_cocos2d__Sprite_get_texture_atlas);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_texture_atlas", Cocos2dxBind_cocos2d__Sprite_set_texture_atlas);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_offset_position", Cocos2dxBind_cocos2d__Sprite_get_offset_position);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_flipped_x", Cocos2dxBind_cocos2d__Sprite_is_flipped_x);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_flipped_x", Cocos2dxBind_cocos2d__Sprite_set_flipped_x);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_flipped_y", Cocos2dxBind_cocos2d__Sprite_is_flipped_y);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_flipped_y", Cocos2dxBind_cocos2d__Sprite_set_flipped_y);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_blend_func", Cocos2dxBind_cocos2d__Sprite_set_blend_func);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_blend_func", Cocos2dxBind_cocos2d__Sprite_get_blend_func);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_description", Cocos2dxBind_cocos2d__Sprite_get_description);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scale_x", Cocos2dxBind_cocos2d__Sprite_set_scale_x);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scale_y", Cocos2dxBind_cocos2d__Sprite_set_scale_y);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scale_1", Cocos2dxBind_cocos2d__Sprite_set_scale_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position_1", Cocos2dxBind_cocos2d__Sprite_set_position_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position_2", Cocos2dxBind_cocos2d__Sprite_set_position_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_rotation", Cocos2dxBind_cocos2d__Sprite_set_rotation);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_rotation_skew_x", Cocos2dxBind_cocos2d__Sprite_set_rotation_skew_x);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_rotation_skew_y", Cocos2dxBind_cocos2d__Sprite_set_rotation_skew_y);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_skew_x", Cocos2dxBind_cocos2d__Sprite_set_skew_x);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_skew_y", Cocos2dxBind_cocos2d__Sprite_set_skew_y);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_child", Cocos2dxBind_cocos2d__Sprite_remove_child);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_all_children_with_cleanup", Cocos2dxBind_cocos2d__Sprite_remove_all_children_with_cleanup);
            binder.bind_custom_method("Cocos2d", "Sprite", "reorder_child", Cocos2dxBind_cocos2d__Sprite_reorder_child);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_1", Cocos2dxBind_cocos2d__Sprite_add_child_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_2", Cocos2dxBind_cocos2d__Sprite_add_child_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "sort_all_children", Cocos2dxBind_cocos2d__Sprite_sort_all_children);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scale_2", Cocos2dxBind_cocos2d__Sprite_set_scale_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position_z", Cocos2dxBind_cocos2d__Sprite_set_position_z);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_anchor_point", Cocos2dxBind_cocos2d__Sprite_set_anchor_point);
            binder.bind_custom_method("Cocos2d", "Sprite", "ignore_anchor_point_for_position", Cocos2dxBind_cocos2d__Sprite_ignore_anchor_point_for_position);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_visible", Cocos2dxBind_cocos2d__Sprite_set_visible);
            binder.bind_custom_method("Cocos2d", "Sprite", "draw", Cocos2dxBind_cocos2d__Sprite_draw);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_opacity_modify_rgb", Cocos2dxBind_cocos2d__Sprite_set_opacity_modify_rgb);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_opacity_modify_rgb", Cocos2dxBind_cocos2d__Sprite_is_opacity_modify_rgb);
            binder.bind_custom_method("Cocos2d", "Sprite", "init", Cocos2dxBind_cocos2d__Sprite_init);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_texture_1", Cocos2dxBind_cocos2d__Sprite_init_with_texture_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_polygon", Cocos2dxBind_cocos2d__Sprite_init_with_polygon);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_texture_2", Cocos2dxBind_cocos2d__Sprite_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_texture_3", Cocos2dxBind_cocos2d__Sprite_init_with_texture_3);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_sprite_frame", Cocos2dxBind_cocos2d__Sprite_init_with_sprite_frame);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_sprite_frame_name", Cocos2dxBind_cocos2d__Sprite_init_with_sprite_frame_name);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_file_1", Cocos2dxBind_cocos2d__Sprite_init_with_file_1);
            binder.bind_custom_method("Cocos2d", "Sprite", "init_with_file_2", Cocos2dxBind_cocos2d__Sprite_init_with_file_2);
            binder.bind_custom_method("Cocos2d", "Sprite", "debug_draw", Cocos2dxBind_cocos2d__Sprite_debug_draw);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_polygon_info", Cocos2dxBind_cocos2d__Sprite_get_polygon_info);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_polygon_info", Cocos2dxBind_cocos2d__Sprite_set_polygon_info);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_local_z_order_29", Cocos2dxBind_cocos2d__Sprite_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_local_z_order_29", Cocos2dxBind_cocos2d__Sprite_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_global_z_order_27", Cocos2dxBind_cocos2d__Sprite_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_global_z_order_29", Cocos2dxBind_cocos2d__Sprite_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scale_x_26", Cocos2dxBind_cocos2d__Sprite_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scale_y_26", Cocos2dxBind_cocos2d__Sprite_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scale_z_29", Cocos2dxBind_cocos2d__Sprite_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scale_z_29", Cocos2dxBind_cocos2d__Sprite_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scale_26", Cocos2dxBind_cocos2d__Sprite_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_normalized_position_29", Cocos2dxBind_cocos2d__Sprite_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position_55", Cocos2dxBind_cocos2d__Sprite_get_position_55);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_normalized_position_29", Cocos2dxBind_cocos2d__Sprite_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position_56", Cocos2dxBind_cocos2d__Sprite_get_position_56);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position_x_28", Cocos2dxBind_cocos2d__Sprite_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position_x_28", Cocos2dxBind_cocos2d__Sprite_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position_y_28", Cocos2dxBind_cocos2d__Sprite_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position_y_28", Cocos2dxBind_cocos2d__Sprite_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_position3_d_29", Cocos2dxBind_cocos2d__Sprite_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position3_d_28", Cocos2dxBind_cocos2d__Sprite_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_position_z_29", Cocos2dxBind_cocos2d__Sprite_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_skew_x_29", Cocos2dxBind_cocos2d__Sprite_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_skew_y_29", Cocos2dxBind_cocos2d__Sprite_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_anchor_point_29", Cocos2dxBind_cocos2d__Sprite_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Sprite_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_content_size_24", Cocos2dxBind_cocos2d__Sprite_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_content_size_26", Cocos2dxBind_cocos2d__Sprite_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_visible_29", Cocos2dxBind_cocos2d__Sprite_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_rotation_29", Cocos2dxBind_cocos2d__Sprite_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Sprite_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Sprite_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Sprite_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Sprite_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Sprite_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Sprite_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Sprite_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Sprite_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Sprite_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_113", Cocos2dxBind_cocos2d__Sprite_add_child_113);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_114", Cocos2dxBind_cocos2d__Sprite_add_child_114);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_115", Cocos2dxBind_cocos2d__Sprite_add_child_115);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_child_116", Cocos2dxBind_cocos2d__Sprite_add_child_116);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Sprite_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_child_by_name_29", Cocos2dxBind_cocos2d__Sprite_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "enumerate_children_29", Cocos2dxBind_cocos2d__Sprite_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_children_58", Cocos2dxBind_cocos2d__Sprite_get_children_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_children_count_29", Cocos2dxBind_cocos2d__Sprite_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_parent_29", Cocos2dxBind_cocos2d__Sprite_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_parent_57", Cocos2dxBind_cocos2d__Sprite_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_parent_58", Cocos2dxBind_cocos2d__Sprite_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_from_parent_29", Cocos2dxBind_cocos2d__Sprite_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Sprite_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Sprite_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Sprite_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_all_children_28", Cocos2dxBind_cocos2d__Sprite_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_tag_29", Cocos2dxBind_cocos2d__Sprite_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_tag_29", Cocos2dxBind_cocos2d__Sprite_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_name_29", Cocos2dxBind_cocos2d__Sprite_get_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_name_29", Cocos2dxBind_cocos2d__Sprite_set_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_user_data_57", Cocos2dxBind_cocos2d__Sprite_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_user_data_58", Cocos2dxBind_cocos2d__Sprite_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_user_data_29", Cocos2dxBind_cocos2d__Sprite_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_user_object_57", Cocos2dxBind_cocos2d__Sprite_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_user_object_58", Cocos2dxBind_cocos2d__Sprite_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_user_object_29", Cocos2dxBind_cocos2d__Sprite_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_gl_program_29", Cocos2dxBind_cocos2d__Sprite_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_gl_program_28", Cocos2dxBind_cocos2d__Sprite_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Sprite_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Sprite_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_running_29", Cocos2dxBind_cocos2d__Sprite_is_running_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Sprite_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "on_enter_18", Cocos2dxBind_cocos2d__Sprite_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Sprite", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Sprite_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Sprite", "on_exit_18", Cocos2dxBind_cocos2d__Sprite_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Sprite", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Sprite_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Sprite", "cleanup_25", Cocos2dxBind_cocos2d__Sprite_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Sprite", "visit_31", Cocos2dxBind_cocos2d__Sprite_visit_31);
            binder.bind_custom_method("Cocos2d", "Sprite", "visit_32", Cocos2dxBind_cocos2d__Sprite_visit_32);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scene_29", Cocos2dxBind_cocos2d__Sprite_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_bounding_box_26", Cocos2dxBind_cocos2d__Sprite_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Sprite_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Sprite_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_action_manager_29", Cocos2dxBind_cocos2d__Sprite_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_action_manager_57", Cocos2dxBind_cocos2d__Sprite_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_action_manager_58", Cocos2dxBind_cocos2d__Sprite_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "run_action_28", Cocos2dxBind_cocos2d__Sprite_run_action_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "stop_all_actions_29", Cocos2dxBind_cocos2d__Sprite_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "stop_action_29", Cocos2dxBind_cocos2d__Sprite_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Sprite_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Sprite_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Sprite_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Sprite_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Sprite_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_scheduler_29", Cocos2dxBind_cocos2d__Sprite_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scheduler_57", Cocos2dxBind_cocos2d__Sprite_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_scheduler_58", Cocos2dxBind_cocos2d__Sprite_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_scheduled_58", Cocos2dxBind_cocos2d__Sprite_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_update_29", Cocos2dxBind_cocos2d__Sprite_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Sprite_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "unschedule_update_29", Cocos2dxBind_cocos2d__Sprite_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_once_58", Cocos2dxBind_cocos2d__Sprite_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_172", Cocos2dxBind_cocos2d__Sprite_schedule_172);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_173", Cocos2dxBind_cocos2d__Sprite_schedule_173);
            binder.bind_custom_method("Cocos2d", "Sprite", "schedule_174", Cocos2dxBind_cocos2d__Sprite_schedule_174);
            binder.bind_custom_method("Cocos2d", "Sprite", "unschedule_58", Cocos2dxBind_cocos2d__Sprite_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Sprite_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "resume_29", Cocos2dxBind_cocos2d__Sprite_resume_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "pause_29", Cocos2dxBind_cocos2d__Sprite_pause_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_26", Cocos2dxBind_cocos2d__Sprite_update_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Sprite_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Sprite_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Sprite_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Sprite_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Sprite_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Sprite_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Sprite_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Sprite_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Sprite_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Sprite_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Sprite_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Sprite_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Sprite_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Sprite_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_additional_transform_58", Cocos2dxBind_cocos2d__Sprite_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_component_29", Cocos2dxBind_cocos2d__Sprite_get_component_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "add_component_29", Cocos2dxBind_cocos2d__Sprite_add_component_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_component_57", Cocos2dxBind_cocos2d__Sprite_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_component_58", Cocos2dxBind_cocos2d__Sprite_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_all_components_29", Cocos2dxBind_cocos2d__Sprite_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_physics_body_29", Cocos2dxBind_cocos2d__Sprite_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_physics_body_29", Cocos2dxBind_cocos2d__Sprite_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Sprite_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Sprite_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Sprite_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_opacity_28", Cocos2dxBind_cocos2d__Sprite_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Sprite_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_opacity_26", Cocos2dxBind_cocos2d__Sprite_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Sprite_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Sprite_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Sprite_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_color_27", Cocos2dxBind_cocos2d__Sprite_get_color_27);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_displayed_color_29", Cocos2dxBind_cocos2d__Sprite_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_color_27", Cocos2dxBind_cocos2d__Sprite_set_color_27);
            binder.bind_custom_method("Cocos2d", "Sprite", "update_displayed_color_23", Cocos2dxBind_cocos2d__Sprite_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Sprite", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Sprite_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Sprite_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Sprite_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Sprite_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Sprite_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Sprite_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_camera_mask_29", Cocos2dxBind_cocos2d__Sprite_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Sprite", "set_camera_mask_22", Cocos2dxBind_cocos2d__Sprite_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Sprite", "retain_176", Cocos2dxBind_cocos2d__Sprite_retain_176);
            binder.bind_custom_method("Cocos2d", "Sprite", "release_176", Cocos2dxBind_cocos2d__Sprite_release_176);
            binder.bind_custom_method("Cocos2d", "Sprite", "autorelease_176", Cocos2dxBind_cocos2d__Sprite_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Sprite", "get_reference_count_176", Cocos2dxBind_cocos2d__Sprite_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "add_letter_definition", Cocos2dxBind_cocos2d__FontAtlas_add_letter_definition);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "prepare_letter_definitions", Cocos2dxBind_cocos2d__FontAtlas_prepare_letter_definitions);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "get_textures", Cocos2dxBind_cocos2d__FontAtlas_get_textures);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "add_texture", Cocos2dxBind_cocos2d__FontAtlas_add_texture);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "get_line_height", Cocos2dxBind_cocos2d__FontAtlas_get_line_height);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "set_line_height", Cocos2dxBind_cocos2d__FontAtlas_set_line_height);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "get_texture", Cocos2dxBind_cocos2d__FontAtlas_get_texture);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "get_font", Cocos2dxBind_cocos2d__FontAtlas_get_font);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "listen_renderer_recreated", Cocos2dxBind_cocos2d__FontAtlas_listen_renderer_recreated);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "purge_textures_atlas", Cocos2dxBind_cocos2d__FontAtlas_purge_textures_atlas);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "set_anti_alias_tex_parameters", Cocos2dxBind_cocos2d__FontAtlas_set_anti_alias_tex_parameters);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "set_alias_tex_parameters", Cocos2dxBind_cocos2d__FontAtlas_set_alias_tex_parameters);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "retain_176", Cocos2dxBind_cocos2d__FontAtlas_retain_176);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "release_176", Cocos2dxBind_cocos2d__FontAtlas_release_176);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "autorelease_176", Cocos2dxBind_cocos2d__FontAtlas_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "get_reference_count_176", Cocos2dxBind_cocos2d__FontAtlas_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_id=", Cocos2dxBind_cocos2d__FontAtlas_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_id", Cocos2dxBind_cocos2d__FontAtlas_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_lua_id=", Cocos2dxBind_cocos2d__FontAtlas_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_lua_id", Cocos2dxBind_cocos2d__FontAtlas_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_script_object=", Cocos2dxBind_cocos2d__FontAtlas_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "FontAtlas", "_script_object", Cocos2dxBind_cocos2d__FontAtlas_accessor_get__script_object);

          }

    }
}
