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
        
        void Cocos2dxBind_cocos2d__Label_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Label_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Label_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Label_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Label_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Label_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Label_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Label_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Label_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Label_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Label_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScene();
        }

        void Cocos2dxBind_cocos2d__Label_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Label_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Label_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Label_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Label_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Label_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Label_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Label_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Label_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Label_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Label_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Label_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Label_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Label_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Label_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Label_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Label_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Label_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Label_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Label_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Label_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Label_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__Label_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Label_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__Label_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Label_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Label_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Label_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Label_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Label_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Label_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Label_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Label_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Label_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Label_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Label_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Label_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Label_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Label_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Label_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Label_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Label_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Label_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Label_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Label_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Label_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Label_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Label_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Label_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Label_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Label_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Label_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Label_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Label_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Label_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Label_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Label_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Label_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Label_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Label_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Label_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Label_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Label_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__Label_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getCameraMask();
        }

        bool Cocos2dxBind_cocos2d__Label_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__Label_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Label_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Label_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Label_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Label> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> Cocos2dxBind_cocos2d__Layer_create()
        {

            return cocos2d::Layer::create();
        }

        bool Cocos2dxBind_cocos2d__Layer_on_touch_began_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            return c->onTouchBegan(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touch_moved_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchMoved(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touch_ended_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchEnded(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touch_cancelled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchCancelled(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touches_began_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesBegan(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touches_moved_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesMoved(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touches_ended_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesEnded(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_touches_cancelled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesCancelled(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_acceleration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Acceleration * a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onAcceleration(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_key_pressed_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyPressed((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__Layer_on_key_released_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyReleased((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        std::string Cocos2dxBind_cocos2d__Layer_get_description_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getDescription();
        }

        bool Cocos2dxBind_cocos2d__Layer_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__Layer_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Layer_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Layer_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Layer_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Layer_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Layer_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Layer_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Layer_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Layer_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Layer_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Layer_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Layer_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Layer_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Layer_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Layer_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Layer_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Layer_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Layer_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Layer_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Layer_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Layer_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Layer_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Layer_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Layer_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Layer_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Layer_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Layer_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Layer_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Layer_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Layer_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Layer_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__Layer_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Layer_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Layer_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Layer_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Layer_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Layer_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Layer_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Layer_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__Layer_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Layer_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Layer_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Layer_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Layer_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Layer_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Layer_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Layer_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Layer_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Layer_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Layer_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Layer_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Layer_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Layer_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Layer_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Layer_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Layer_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Layer_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Layer_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Layer_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Layer_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__Layer_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Layer_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__Layer_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Layer_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Layer_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Layer_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Layer_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Layer_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Layer_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Layer_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Layer_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Layer_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Layer_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Layer_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Layer_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Layer_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Layer_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Layer_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Layer_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Layer_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Layer_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Layer_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Layer_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Layer_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__Layer_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Layer_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__Layer_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Layer_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Layer_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Layer_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Layer_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Layer_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Layer_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Layer_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Layer_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Layer_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Layer_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Layer_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Layer_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Layer_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Layer_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Layer_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Layer_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Layer_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Layer_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Layer_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Layer_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Layer_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Layer_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Layer_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Layer_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Layer_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Layer_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Layer_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Layer_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Layer_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Layer_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Layer_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Layer_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Layer_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Layer_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Layer_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__Layer_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Layer_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Layer_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Layer_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Layer_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Layer_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> Cocos2dxBind_cocos2d__LayerColor_create_1()
        {

            return cocos2d::LayerColor::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> Cocos2dxBind_cocos2d__LayerColor_create_2(cocos2d::Color4B a0, float a1, float a2)
        {

            return cocos2d::LayerColor::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> Cocos2dxBind_cocos2d__LayerColor_create_3(cocos2d::Color4B a0)
        {

            return cocos2d::LayerColor::create(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_change_width(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->changeWidth(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_change_height(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->changeHeight(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_change_width_and_height(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0, float a1)
        {

            c->changeWidthAndHeight(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__LayerColor_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        std::string Cocos2dxBind_cocos2d__LayerColor_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getDescription();
        }

        bool Cocos2dxBind_cocos2d__LayerColor_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__LayerColor_init_with_color_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Color4B a0, float a1, float a2)
        {

            return c->initWithColor(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_init_with_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Color4B a0)
        {

            return c->initWithColor(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_on_touch_began_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            return c->onTouchBegan(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touch_moved_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchMoved(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touch_ended_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchEnded(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touch_cancelled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchCancelled(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touches_began_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesBegan(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touches_moved_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesMoved(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touches_ended_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesEnded(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_touches_cancelled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesCancelled(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_acceleration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Acceleration * a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onAcceleration(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_key_pressed_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyPressed((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_key_released_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyReleased((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__LayerColor_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__LayerColor_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getAnchorPointInPoints();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__LayerColor_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__LayerColor_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__LayerColor_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__LayerColor_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__LayerColor_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__LayerColor_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__LayerColor_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__LayerColor_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LayerColor_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LayerColor_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__LayerColor_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__LayerColor_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LayerColor_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__LayerColor_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__LayerColor_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__LayerColor_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__LayerColor_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__LayerColor_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__LayerColor_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__LayerColor_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__LayerColor_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__LayerColor_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__LayerColor_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__LayerColor_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__LayerColor_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__LayerColor_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__LayerColor_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__LayerColor_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__LayerColor_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__LayerColor_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__LayerColor_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__LayerColor_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__LayerColor_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__LayerColor_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__LayerColor_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__LayerColor_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__LayerColor_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__LayerColor_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__LayerColor_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__LayerColor_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__LayerColor_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__LayerColor_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__LayerColor_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__LayerColor_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__LayerColor_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__LayerColor_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LayerColor_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LayerColor_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LayerColor_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LayerColor_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LayerColor_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LayerColor_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LayerColor_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LayerColor_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__LayerColor_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__LayerColor_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__LayerColor_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__LayerColor_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__LayerColor_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__LayerColor_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__LayerColor_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__LayerColor_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LayerColor_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LayerColor_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LayerColor_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__LayerColor_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__LayerColor_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LayerColor_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__LayerColor_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__LayerColor_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__LayerColor_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LayerColor> c)
        {

            return c->getReferenceCount();
        }

        bool Cocos2dxBind_cocos2d__EventListener_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c, int a0, std::string a1, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a2)
        {

            return c->init((cocos2d::EventListener::Type)a0, a1, 
              [=](cocos2d::Event * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        bool Cocos2dxBind_cocos2d__EventListener_check_available(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->checkAvailable();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> Cocos2dxBind_cocos2d__EventListener_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__EventListener_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListener_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListener_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListener_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListener_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListener_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListener_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__EventListener_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__EventListener_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__EventListener_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__EventListener_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__EventListener_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListener> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_create()
        {

            return cocos2d::EventListenerTouchOneByOne::create();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_set_swallow_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, bool a0)
        {

            c->setSwallowTouches(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_is_swallow_touches(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->isSwallowTouches();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_check_available(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->checkAvailable();
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_began(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchBegan = 
              [=](cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> b1){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(b0, b1);
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_moved(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchMoved = 
              [=](cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_ended(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchEnded = 
              [=](cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchOneByOne_accessor_set_on_touch_cancelled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchOneByOne> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchCancelled = 
              [=](cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> b0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_create()
        {

            return cocos2d::EventListenerTouchAllAtOnce::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_check_available(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->checkAvailable();
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_set_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_is_enabled_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_began(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c, mrubybind::FuncPtr<void (MrubyRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchesBegan = 
              [=](const std::vector<cocos2d::Touch *, std::allocator<cocos2d::Touch *> > & b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby<cocos2d::Touch>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_moved(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c, mrubybind::FuncPtr<void (MrubyRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchesMoved = 
              [=](const std::vector<cocos2d::Touch *, std::allocator<cocos2d::Touch *> > & b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby<cocos2d::Touch>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_ended(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c, mrubybind::FuncPtr<void (MrubyRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchesEnded = 
              [=](const std::vector<cocos2d::Touch *, std::allocator<cocos2d::Touch *> > & b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby<cocos2d::Touch>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__EventListenerTouchAllAtOnce_accessor_set_on_touches_cancelled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerTouchAllAtOnce> c, mrubybind::FuncPtr<void (MrubyRef, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>)> a)
        {

            c->onTouchesCancelled = 
              [=](const std::vector<cocos2d::Touch *, std::allocator<cocos2d::Touch *> > & b0, cocos2d::Event * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby<cocos2d::Touch>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> Cocos2dxBind_cocos2d__ActionTween_create(float a0, std::string a1, float a2, float a3)
        {

            return cocos2d::ActionTween::create(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__ActionTween_start_with_target(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->startWithTarget(a0.get());
        }

        void Cocos2dxBind_cocos2d__ActionTween_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> Cocos2dxBind_cocos2d__ActionTween_reverse(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->reverse();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> Cocos2dxBind_cocos2d__ActionTween_clone(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->clone();
        }

        bool Cocos2dxBind_cocos2d__ActionTween_init_with_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, float a0, std::string a1, float a2, float a3)
        {

            return c->initWithDuration(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__ActionTween_get_elapsed_90(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getElapsed();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, float a0)
        {

            c->setAmplitudeRate(a0);
        }

        float Cocos2dxBind_cocos2d__ActionTween_get_amplitude_rate_85(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getAmplitudeRate();
        }

        bool Cocos2dxBind_cocos2d__ActionTween_is_done_87(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->isDone();
        }

        void Cocos2dxBind_cocos2d__ActionTween_step_88(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, float a0)
        {

            c->step(a0);
        }

        float Cocos2dxBind_cocos2d__ActionTween_get_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_duration_103(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, float a0)
        {

            c->setDuration(a0);
        }

        std::string Cocos2dxBind_cocos2d__ActionTween_description_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->description();
        }

        void Cocos2dxBind_cocos2d__ActionTween_stop_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            c->stop();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionTween_get_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getTarget();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setTarget(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ActionTween_get_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getOriginalTarget();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_original_target_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setOriginalTarget(a0.get());
        }

        int Cocos2dxBind_cocos2d__ActionTween_get_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_tag_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, int a0)
        {

            c->setTag(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ActionTween_get_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getFlags();
        }

        void Cocos2dxBind_cocos2d__ActionTween_set_flags_106(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c, unsigned int a0)
        {

            c->setFlags(a0);
        }

        void Cocos2dxBind_cocos2d__ActionTween_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ActionTween_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ActionTween_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ActionTween_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionTween> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> Cocos2dxBind_cocos2d__extension__ScrollView_create_1(cocos2d::Size a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            return cocos2d::extension::ScrollView::create(a0, a1.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> Cocos2dxBind_cocos2d__extension__ScrollView_create_2()
        {

            return cocos2d::extension::ScrollView::create();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_init_with_view_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Size a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1)
        {

            return c->initWithViewSize(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_content_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0, bool a1)
        {

            c->setContentOffset(a0, a1);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_get_content_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getContentOffset();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_content_offset_in_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0, float a1)
        {

            c->setContentOffsetInDuration(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setZoomScale(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0, bool a1)
        {

            c->setZoomScale(a0, a1);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_zoom_scale(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getZoomScale();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_zoom_scale_in_duration(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0, float a1)
        {

            c->setZoomScaleInDuration(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_min_scale(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setMinScale(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_max_scale(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setMaxScale(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_min_container_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->minContainerOffset();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_max_container_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->maxContainerOffset();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_node_visible(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->isNodeVisible(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_pause(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->pause(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_resume(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->resume(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_touch_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setTouchEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_touch_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isTouchEnabled();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_dragging(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isDragging();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_touch_moved(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isTouchMoved();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_bounceable(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isBounceable();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_bounceable(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setBounceable(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__extension__ScrollView_get_view_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getViewSize();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_view_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Size a0)
        {

            c->setViewSize(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__extension__ScrollView_get_container(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getContainer();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_container(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setContainer(a0.get());
        }

        cocos2d::extension::ScrollView::Direction Cocos2dxBind_cocos2d__extension__ScrollView_get_direction(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getDirection();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_direction(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->setDirection((cocos2d::extension::ScrollView::Direction)a0);
        }

        cocos2d::extension::ScrollViewDelegate* Cocos2dxBind_cocos2d__extension__ScrollView_get_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getDelegate();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::extension::ScrollViewDelegate * a0)
        {

            c->setDelegate(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_inset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->updateInset();
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_clipping_to_bounds(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isClippingToBounds();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_clipping_to_bounds(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setClippingToBounds(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_began(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            return c->onTouchBegan(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_moved(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchMoved(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_ended(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchEnded(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touch_cancelled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchCancelled(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__extension__ScrollView_get_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_tween_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0, std::string a1)
        {

            c->updateTweenAction(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_has_visible_parents(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->hasVisibleParents();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_began_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesBegan(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_moved_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesMoved(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_ended_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesEnded(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_touches_cancelled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, MrubyRef a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchesCancelled(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_std_vec<cocos2d::Touch>(a0), a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_acceleration_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Acceleration * a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onAcceleration(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_key_pressed_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyPressed((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_key_released_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onKeyReleased((cocos2d::EventKeyboard::KeyCode)a0, a1.get());
        }

        std::string Cocos2dxBind_cocos2d__extension__ScrollView_get_description_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__extension__ScrollView_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__extension__ScrollView_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__extension__ScrollView_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__extension__ScrollView_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__extension__ScrollView_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__extension__ScrollView_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__extension__ScrollView_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__extension__ScrollView_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__extension__ScrollView_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__extension__ScrollView_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__extension__ScrollView_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__extension__ScrollView_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__extension__ScrollView_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__extension__ScrollView_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__extension__ScrollView_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__extension__ScrollView_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__extension__ScrollView_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__extension__ScrollView_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__extension__ScrollView_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__extension__ScrollView_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__extension__ScrollView_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__extension__ScrollView_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__extension__ScrollView_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__extension__ScrollView_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__extension__ScrollView_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__extension__ScrollView_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__extension__ScrollView_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__extension__ScrollView_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__extension__ScrollView_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__extension__ScrollView_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__extension__ScrollView_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__extension__ScrollView_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__extension__ScrollView_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__extension__ScrollView_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__extension__ScrollView_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__extension__ScrollView_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::extension::ScrollView> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }



        
        bool Cocos2dxBind_FadeOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TintTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TintBy_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TintBy> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_DelayTime_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DelayTime> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ReverseTime_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReverseTime> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Animate_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Animate> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TargetedAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TargetedAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RtsObjectAction_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectAction> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_RtsObject_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObject> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_RtsObjectGroup_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectGroup> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_RtsObjectCostGridSpace_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpace> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_RtsObjectCostGridSpaceExperimental_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectCostGridSpaceExperimental> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_TexturedTriangleNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cor::cocos2dx_converter::TexturedTriangleNode> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RtsObjectEffect_valid_question(std::weak_ptr<cor::cocos2dx_converter::RtsObjectEffect> c)
        {
            return !c.expired();
        }
        bool Cocos2dxBind_Image_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> c)
        {
            return c.is_valid();
        }
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> Cocos2dxBind_Image_create()
        {
            return new cocos2d::Image();
        }
        bool Cocos2dxBind_Sprite_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_3(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("Cocos2d", "Ref", "retain_176", Cocos2dxBind_cocos2d__Ref_retain_176);
            binder.bind_custom_method("Cocos2d", "Ref", "release_176", Cocos2dxBind_cocos2d__Ref_release_176);
            binder.bind_custom_method("Cocos2d", "Ref", "autorelease_176", Cocos2dxBind_cocos2d__Ref_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Ref", "get_reference_count_176", Cocos2dxBind_cocos2d__Ref_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Ref", "_id=", Cocos2dxBind_cocos2d__Ref_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Ref", "_id", Cocos2dxBind_cocos2d__Ref_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Ref", "_lua_id=", Cocos2dxBind_cocos2d__Ref_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Ref", "_lua_id", Cocos2dxBind_cocos2d__Ref_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Ref", "_script_object=", Cocos2dxBind_cocos2d__Ref_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Ref", "_script_object", Cocos2dxBind_cocos2d__Ref_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "Vec2", "is_zero", Cocos2dxBind_cocos2d__Vec2_is_zero);
            binder.bind_custom_method("Cocos2d", "Vec2", "is_one", Cocos2dxBind_cocos2d__Vec2_is_one);
            binder.bind_static_method("Cocos2d", "Vec2", "angle", Cocos2dxBind_cocos2d__Vec2_angle);
            binder.bind_custom_method("Cocos2d", "Vec2", "add", Cocos2dxBind_cocos2d__Vec2_add);
            binder.bind_custom_method("Cocos2d", "Vec2", "clamp", Cocos2dxBind_cocos2d__Vec2_clamp);
            binder.bind_custom_method("Cocos2d", "Vec2", "distance", Cocos2dxBind_cocos2d__Vec2_distance);
            binder.bind_custom_method("Cocos2d", "Vec2", "distance_squared", Cocos2dxBind_cocos2d__Vec2_distance_squared);
            binder.bind_custom_method("Cocos2d", "Vec2", "dot", Cocos2dxBind_cocos2d__Vec2_dot);
            binder.bind_static_method("Cocos2d", "Vec2", "dot_2", Cocos2dxBind_cocos2d__Vec2_dot_2);
            binder.bind_custom_method("Cocos2d", "Vec2", "length", Cocos2dxBind_cocos2d__Vec2_length);
            binder.bind_custom_method("Cocos2d", "Vec2", "length_squared", Cocos2dxBind_cocos2d__Vec2_length_squared);
            binder.bind_custom_method("Cocos2d", "Vec2", "negate", Cocos2dxBind_cocos2d__Vec2_negate);
            binder.bind_custom_method("Cocos2d", "Vec2", "normalize", Cocos2dxBind_cocos2d__Vec2_normalize);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_normalized", Cocos2dxBind_cocos2d__Vec2_get_normalized);
            binder.bind_custom_method("Cocos2d", "Vec2", "scale_1", Cocos2dxBind_cocos2d__Vec2_scale_1);
            binder.bind_custom_method("Cocos2d", "Vec2", "scale_2", Cocos2dxBind_cocos2d__Vec2_scale_2);
            binder.bind_custom_method("Cocos2d", "Vec2", "rotate", Cocos2dxBind_cocos2d__Vec2_rotate);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_1", Cocos2dxBind_cocos2d__Vec2_set_1);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_2", Cocos2dxBind_cocos2d__Vec2_set_2);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_3", Cocos2dxBind_cocos2d__Vec2_set_3);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_4", Cocos2dxBind_cocos2d__Vec2_set_4);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_zero", Cocos2dxBind_cocos2d__Vec2_set_zero);
            binder.bind_custom_method("Cocos2d", "Vec2", "subtract", Cocos2dxBind_cocos2d__Vec2_subtract);
            binder.bind_custom_method("Cocos2d", "Vec2", "smooth", Cocos2dxBind_cocos2d__Vec2_smooth);
            binder.bind_custom_method("Cocos2d", "Vec2", "set_point", Cocos2dxBind_cocos2d__Vec2_set_point);
            binder.bind_custom_method("Cocos2d", "Vec2", "equals", Cocos2dxBind_cocos2d__Vec2_equals);
            binder.bind_custom_method("Cocos2d", "Vec2", "fuzzy_equals", Cocos2dxBind_cocos2d__Vec2_fuzzy_equals);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_length", Cocos2dxBind_cocos2d__Vec2_get_length);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_length_sq", Cocos2dxBind_cocos2d__Vec2_get_length_sq);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_distance_sq", Cocos2dxBind_cocos2d__Vec2_get_distance_sq);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_distance", Cocos2dxBind_cocos2d__Vec2_get_distance);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_angle", Cocos2dxBind_cocos2d__Vec2_get_angle);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_angle_2", Cocos2dxBind_cocos2d__Vec2_get_angle_2);
            binder.bind_custom_method("Cocos2d", "Vec2", "cross", Cocos2dxBind_cocos2d__Vec2_cross);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_perp", Cocos2dxBind_cocos2d__Vec2_get_perp);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_midpoint", Cocos2dxBind_cocos2d__Vec2_get_midpoint);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_clamp_point", Cocos2dxBind_cocos2d__Vec2_get_clamp_point);
            binder.bind_custom_method("Cocos2d", "Vec2", "comp_op", Cocos2dxBind_cocos2d__Vec2_comp_op);
            binder.bind_custom_method("Cocos2d", "Vec2", "get_r_perp", Cocos2dxBind_cocos2d__Vec2_get_r_perp);
            binder.bind_custom_method("Cocos2d", "Vec2", "project", Cocos2dxBind_cocos2d__Vec2_project);
            binder.bind_custom_method("Cocos2d", "Vec2", "rotate_2", Cocos2dxBind_cocos2d__Vec2_rotate_2);
            binder.bind_custom_method("Cocos2d", "Vec2", "unrotate", Cocos2dxBind_cocos2d__Vec2_unrotate);
            binder.bind_custom_method("Cocos2d", "Vec2", "lerp", Cocos2dxBind_cocos2d__Vec2_lerp);
            binder.bind_custom_method("Cocos2d", "Vec2", "rotate_by_angle", Cocos2dxBind_cocos2d__Vec2_rotate_by_angle);
            binder.bind_static_method("Cocos2d", "Vec2", "for_angle", Cocos2dxBind_cocos2d__Vec2_for_angle);
            binder.bind_static_method("Cocos2d", "Vec2", "is_line_intersect", Cocos2dxBind_cocos2d__Vec2_is_line_intersect);
            binder.bind_static_method("Cocos2d", "Vec2", "is_line_overlap", Cocos2dxBind_cocos2d__Vec2_is_line_overlap);
            binder.bind_static_method("Cocos2d", "Vec2", "is_line_parallel", Cocos2dxBind_cocos2d__Vec2_is_line_parallel);
            binder.bind_static_method("Cocos2d", "Vec2", "is_segment_intersect", Cocos2dxBind_cocos2d__Vec2_is_segment_intersect);
            binder.bind_static_method("Cocos2d", "Vec2", "get_intersect_point", Cocos2dxBind_cocos2d__Vec2_get_intersect_point);
            binder.bind_custom_method("Cocos2d", "Vec2", "x=", Cocos2dxBind_cocos2d__Vec2_accessor_set_x);
            binder.bind_custom_method("Cocos2d", "Vec2", "x", Cocos2dxBind_cocos2d__Vec2_accessor_get_x);
            binder.bind_custom_method("Cocos2d", "Vec2", "y=", Cocos2dxBind_cocos2d__Vec2_accessor_set_y);
            binder.bind_custom_method("Cocos2d", "Vec2", "y", Cocos2dxBind_cocos2d__Vec2_accessor_get_y);
            binder.bind_custom_method("Cocos2d", "Vec2", "_asterisk__0", Cocos2dxBind_cocos2d__Vec2_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "*", Cocos2dxBind_cocos2d__Vec2_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "_plus__0", Cocos2dxBind_cocos2d__Vec2_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "+", Cocos2dxBind_cocos2d__Vec2_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "_minus__0", Cocos2dxBind_cocos2d__Vec2_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "-", Cocos2dxBind_cocos2d__Vec2_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "_minus_self__0", Cocos2dxBind_cocos2d__Vec2_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Vec2", "-@", Cocos2dxBind_cocos2d__Vec2_operator__minus_self__0);
            binder.bind_static_method("Cocos2d", "Vec3", "from_color", Cocos2dxBind_cocos2d__Vec3_from_color);
            binder.bind_custom_method("Cocos2d", "Vec3", "is_zero", Cocos2dxBind_cocos2d__Vec3_is_zero);
            binder.bind_custom_method("Cocos2d", "Vec3", "is_one", Cocos2dxBind_cocos2d__Vec3_is_one);
            binder.bind_static_method("Cocos2d", "Vec3", "angle", Cocos2dxBind_cocos2d__Vec3_angle);
            binder.bind_custom_method("Cocos2d", "Vec3", "add_1", Cocos2dxBind_cocos2d__Vec3_add_1);
            binder.bind_custom_method("Cocos2d", "Vec3", "add_2", Cocos2dxBind_cocos2d__Vec3_add_2);
            binder.bind_custom_method("Cocos2d", "Vec3", "clamp", Cocos2dxBind_cocos2d__Vec3_clamp);
            binder.bind_custom_method("Cocos2d", "Vec3", "cross", Cocos2dxBind_cocos2d__Vec3_cross);
            binder.bind_custom_method("Cocos2d", "Vec3", "distance", Cocos2dxBind_cocos2d__Vec3_distance);
            binder.bind_custom_method("Cocos2d", "Vec3", "distance_squared", Cocos2dxBind_cocos2d__Vec3_distance_squared);
            binder.bind_custom_method("Cocos2d", "Vec3", "dot", Cocos2dxBind_cocos2d__Vec3_dot);
            binder.bind_static_method("Cocos2d", "Vec3", "dot_2", Cocos2dxBind_cocos2d__Vec3_dot_2);
            binder.bind_custom_method("Cocos2d", "Vec3", "length", Cocos2dxBind_cocos2d__Vec3_length);
            binder.bind_custom_method("Cocos2d", "Vec3", "length_squared", Cocos2dxBind_cocos2d__Vec3_length_squared);
            binder.bind_custom_method("Cocos2d", "Vec3", "negate", Cocos2dxBind_cocos2d__Vec3_negate);
            binder.bind_custom_method("Cocos2d", "Vec3", "normalize", Cocos2dxBind_cocos2d__Vec3_normalize);
            binder.bind_custom_method("Cocos2d", "Vec3", "get_normalized", Cocos2dxBind_cocos2d__Vec3_get_normalized);
            binder.bind_custom_method("Cocos2d", "Vec3", "scale", Cocos2dxBind_cocos2d__Vec3_scale);
            binder.bind_custom_method("Cocos2d", "Vec3", "set_1", Cocos2dxBind_cocos2d__Vec3_set_1);
            binder.bind_custom_method("Cocos2d", "Vec3", "set_2", Cocos2dxBind_cocos2d__Vec3_set_2);
            binder.bind_custom_method("Cocos2d", "Vec3", "set_3", Cocos2dxBind_cocos2d__Vec3_set_3);
            binder.bind_custom_method("Cocos2d", "Vec3", "set_4", Cocos2dxBind_cocos2d__Vec3_set_4);
            binder.bind_custom_method("Cocos2d", "Vec3", "set_zero", Cocos2dxBind_cocos2d__Vec3_set_zero);
            binder.bind_custom_method("Cocos2d", "Vec3", "subtract", Cocos2dxBind_cocos2d__Vec3_subtract);
            binder.bind_custom_method("Cocos2d", "Vec3", "smooth", Cocos2dxBind_cocos2d__Vec3_smooth);
            binder.bind_custom_method("Cocos2d", "Vec3", "lerp", Cocos2dxBind_cocos2d__Vec3_lerp);
            binder.bind_custom_method("Cocos2d", "Vec3", "x=", Cocos2dxBind_cocos2d__Vec3_accessor_set_x);
            binder.bind_custom_method("Cocos2d", "Vec3", "x", Cocos2dxBind_cocos2d__Vec3_accessor_get_x);
            binder.bind_custom_method("Cocos2d", "Vec3", "y=", Cocos2dxBind_cocos2d__Vec3_accessor_set_y);
            binder.bind_custom_method("Cocos2d", "Vec3", "y", Cocos2dxBind_cocos2d__Vec3_accessor_get_y);
            binder.bind_custom_method("Cocos2d", "Vec3", "z=", Cocos2dxBind_cocos2d__Vec3_accessor_set_z);
            binder.bind_custom_method("Cocos2d", "Vec3", "z", Cocos2dxBind_cocos2d__Vec3_accessor_get_z);
            binder.bind_custom_method("Cocos2d", "Vec3", "_asterisk__0", Cocos2dxBind_cocos2d__Vec3_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "*", Cocos2dxBind_cocos2d__Vec3_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "_plus__0", Cocos2dxBind_cocos2d__Vec3_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "+", Cocos2dxBind_cocos2d__Vec3_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "_minus__0", Cocos2dxBind_cocos2d__Vec3_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "-", Cocos2dxBind_cocos2d__Vec3_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "_minus_self__0", Cocos2dxBind_cocos2d__Vec3_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Vec3", "-@", Cocos2dxBind_cocos2d__Vec3_operator__minus_self__0);
            binder.bind_static_method("Cocos2d", "Vec4", "from_color", Cocos2dxBind_cocos2d__Vec4_from_color);
            binder.bind_custom_method("Cocos2d", "Vec4", "is_zero", Cocos2dxBind_cocos2d__Vec4_is_zero);
            binder.bind_custom_method("Cocos2d", "Vec4", "is_one", Cocos2dxBind_cocos2d__Vec4_is_one);
            binder.bind_static_method("Cocos2d", "Vec4", "angle", Cocos2dxBind_cocos2d__Vec4_angle);
            binder.bind_custom_method("Cocos2d", "Vec4", "add", Cocos2dxBind_cocos2d__Vec4_add);
            binder.bind_custom_method("Cocos2d", "Vec4", "clamp", Cocos2dxBind_cocos2d__Vec4_clamp);
            binder.bind_custom_method("Cocos2d", "Vec4", "distance", Cocos2dxBind_cocos2d__Vec4_distance);
            binder.bind_custom_method("Cocos2d", "Vec4", "distance_squared", Cocos2dxBind_cocos2d__Vec4_distance_squared);
            binder.bind_custom_method("Cocos2d", "Vec4", "dot", Cocos2dxBind_cocos2d__Vec4_dot);
            binder.bind_static_method("Cocos2d", "Vec4", "dot_2", Cocos2dxBind_cocos2d__Vec4_dot_2);
            binder.bind_custom_method("Cocos2d", "Vec4", "length", Cocos2dxBind_cocos2d__Vec4_length);
            binder.bind_custom_method("Cocos2d", "Vec4", "length_squared", Cocos2dxBind_cocos2d__Vec4_length_squared);
            binder.bind_custom_method("Cocos2d", "Vec4", "negate", Cocos2dxBind_cocos2d__Vec4_negate);
            binder.bind_custom_method("Cocos2d", "Vec4", "normalize", Cocos2dxBind_cocos2d__Vec4_normalize);
            binder.bind_custom_method("Cocos2d", "Vec4", "get_normalized", Cocos2dxBind_cocos2d__Vec4_get_normalized);
            binder.bind_custom_method("Cocos2d", "Vec4", "scale", Cocos2dxBind_cocos2d__Vec4_scale);
            binder.bind_custom_method("Cocos2d", "Vec4", "set_1", Cocos2dxBind_cocos2d__Vec4_set_1);
            binder.bind_custom_method("Cocos2d", "Vec4", "set_2", Cocos2dxBind_cocos2d__Vec4_set_2);
            binder.bind_custom_method("Cocos2d", "Vec4", "set_3", Cocos2dxBind_cocos2d__Vec4_set_3);
            binder.bind_custom_method("Cocos2d", "Vec4", "set_4", Cocos2dxBind_cocos2d__Vec4_set_4);
            binder.bind_custom_method("Cocos2d", "Vec4", "subtract", Cocos2dxBind_cocos2d__Vec4_subtract);
            binder.bind_custom_method("Cocos2d", "Vec4", "x=", Cocos2dxBind_cocos2d__Vec4_accessor_set_x);
            binder.bind_custom_method("Cocos2d", "Vec4", "x", Cocos2dxBind_cocos2d__Vec4_accessor_get_x);
            binder.bind_custom_method("Cocos2d", "Vec4", "y=", Cocos2dxBind_cocos2d__Vec4_accessor_set_y);
            binder.bind_custom_method("Cocos2d", "Vec4", "y", Cocos2dxBind_cocos2d__Vec4_accessor_get_y);
            binder.bind_custom_method("Cocos2d", "Vec4", "z=", Cocos2dxBind_cocos2d__Vec4_accessor_set_z);
            binder.bind_custom_method("Cocos2d", "Vec4", "z", Cocos2dxBind_cocos2d__Vec4_accessor_get_z);
            binder.bind_custom_method("Cocos2d", "Vec4", "w=", Cocos2dxBind_cocos2d__Vec4_accessor_set_w);
            binder.bind_custom_method("Cocos2d", "Vec4", "w", Cocos2dxBind_cocos2d__Vec4_accessor_get_w);
            binder.bind_custom_method("Cocos2d", "Vec4", "_asterisk__0", Cocos2dxBind_cocos2d__Vec4_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "*", Cocos2dxBind_cocos2d__Vec4_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "_plus__0", Cocos2dxBind_cocos2d__Vec4_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "+", Cocos2dxBind_cocos2d__Vec4_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "_minus__0", Cocos2dxBind_cocos2d__Vec4_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "-", Cocos2dxBind_cocos2d__Vec4_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "_minus_self__0", Cocos2dxBind_cocos2d__Vec4_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Vec4", "-@", Cocos2dxBind_cocos2d__Vec4_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "add_1", Cocos2dxBind_cocos2d__Mat4_add_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "add_3", Cocos2dxBind_cocos2d__Mat4_add_3);
            binder.bind_custom_method("Cocos2d", "Mat4", "determinant", Cocos2dxBind_cocos2d__Mat4_determinant);
            binder.bind_custom_method("Cocos2d", "Mat4", "get_rotation", Cocos2dxBind_cocos2d__Mat4_get_rotation);
            binder.bind_custom_method("Cocos2d", "Mat4", "inverse", Cocos2dxBind_cocos2d__Mat4_inverse);
            binder.bind_custom_method("Cocos2d", "Mat4", "get_inversed", Cocos2dxBind_cocos2d__Mat4_get_inversed);
            binder.bind_custom_method("Cocos2d", "Mat4", "is_identity", Cocos2dxBind_cocos2d__Mat4_is_identity);
            binder.bind_custom_method("Cocos2d", "Mat4", "multiply_1", Cocos2dxBind_cocos2d__Mat4_multiply_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "multiply_4", Cocos2dxBind_cocos2d__Mat4_multiply_4);
            binder.bind_custom_method("Cocos2d", "Mat4", "negate", Cocos2dxBind_cocos2d__Mat4_negate);
            binder.bind_custom_method("Cocos2d", "Mat4", "get_negated", Cocos2dxBind_cocos2d__Mat4_get_negated);
            binder.bind_custom_method("Cocos2d", "Mat4", "rotate_1", Cocos2dxBind_cocos2d__Mat4_rotate_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "rotate_3", Cocos2dxBind_cocos2d__Mat4_rotate_3);
            binder.bind_custom_method("Cocos2d", "Mat4", "rotate_x_1", Cocos2dxBind_cocos2d__Mat4_rotate_x_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "rotate_y_1", Cocos2dxBind_cocos2d__Mat4_rotate_y_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "rotate_z_1", Cocos2dxBind_cocos2d__Mat4_rotate_z_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "scale_1", Cocos2dxBind_cocos2d__Mat4_scale_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "scale_3", Cocos2dxBind_cocos2d__Mat4_scale_3);
            binder.bind_custom_method("Cocos2d", "Mat4", "scale_5", Cocos2dxBind_cocos2d__Mat4_scale_5);
            binder.bind_custom_method("Cocos2d", "Mat4", "set_1", Cocos2dxBind_cocos2d__Mat4_set_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "set_2", Cocos2dxBind_cocos2d__Mat4_set_2);
            binder.bind_custom_method("Cocos2d", "Mat4", "set_3", Cocos2dxBind_cocos2d__Mat4_set_3);
            binder.bind_custom_method("Cocos2d", "Mat4", "set_identity", Cocos2dxBind_cocos2d__Mat4_set_identity);
            binder.bind_custom_method("Cocos2d", "Mat4", "set_zero", Cocos2dxBind_cocos2d__Mat4_set_zero);
            binder.bind_custom_method("Cocos2d", "Mat4", "subtract", Cocos2dxBind_cocos2d__Mat4_subtract);
            binder.bind_custom_method("Cocos2d", "Mat4", "translate_1", Cocos2dxBind_cocos2d__Mat4_translate_1);
            binder.bind_custom_method("Cocos2d", "Mat4", "translate_3", Cocos2dxBind_cocos2d__Mat4_translate_3);
            binder.bind_custom_method("Cocos2d", "Mat4", "transpose", Cocos2dxBind_cocos2d__Mat4_transpose);
            binder.bind_custom_method("Cocos2d", "Mat4", "get_transposed", Cocos2dxBind_cocos2d__Mat4_get_transposed);
            binder.bind_custom_method("Cocos2d", "Mat4", "_asterisk__0", Cocos2dxBind_cocos2d__Mat4_operator__asterisk__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "_asterisk__1", Cocos2dxBind_cocos2d__Mat4_operator__asterisk__1);
            binder.bind_custom_method("Cocos2d", "Mat4", "_asterisk__2", Cocos2dxBind_cocos2d__Mat4_operator__asterisk__2);
            binder.bind_custom_method("Cocos2d", "Mat4", "_plus__0", Cocos2dxBind_cocos2d__Mat4_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "+", Cocos2dxBind_cocos2d__Mat4_operator__plus__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "_minus__0", Cocos2dxBind_cocos2d__Mat4_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "-", Cocos2dxBind_cocos2d__Mat4_operator__minus__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "_minus_self__0", Cocos2dxBind_cocos2d__Mat4_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Mat4", "-@", Cocos2dxBind_cocos2d__Mat4_operator__minus_self__0);
            binder.bind_custom_method("Cocos2d", "Size", "set_size", Cocos2dxBind_cocos2d__Size_set_size);
            binder.bind_custom_method("Cocos2d", "Size", "equals", Cocos2dxBind_cocos2d__Size_equals);
            binder.bind_custom_method("Cocos2d", "Size", "width=", Cocos2dxBind_cocos2d__Size_accessor_set_width);
            binder.bind_custom_method("Cocos2d", "Size", "width", Cocos2dxBind_cocos2d__Size_accessor_get_width);
            binder.bind_custom_method("Cocos2d", "Size", "height=", Cocos2dxBind_cocos2d__Size_accessor_set_height);
            binder.bind_custom_method("Cocos2d", "Size", "height", Cocos2dxBind_cocos2d__Size_accessor_get_height);
            binder.bind_custom_method("Cocos2d", "Rect", "set_rect", Cocos2dxBind_cocos2d__Rect_set_rect);
            binder.bind_custom_method("Cocos2d", "Rect", "get_min_x", Cocos2dxBind_cocos2d__Rect_get_min_x);
            binder.bind_custom_method("Cocos2d", "Rect", "get_mid_x", Cocos2dxBind_cocos2d__Rect_get_mid_x);
            binder.bind_custom_method("Cocos2d", "Rect", "get_max_x", Cocos2dxBind_cocos2d__Rect_get_max_x);
            binder.bind_custom_method("Cocos2d", "Rect", "get_min_y", Cocos2dxBind_cocos2d__Rect_get_min_y);
            binder.bind_custom_method("Cocos2d", "Rect", "get_mid_y", Cocos2dxBind_cocos2d__Rect_get_mid_y);
            binder.bind_custom_method("Cocos2d", "Rect", "get_max_y", Cocos2dxBind_cocos2d__Rect_get_max_y);
            binder.bind_custom_method("Cocos2d", "Rect", "equals", Cocos2dxBind_cocos2d__Rect_equals);
            binder.bind_custom_method("Cocos2d", "Rect", "contains_point", Cocos2dxBind_cocos2d__Rect_contains_point);
            binder.bind_custom_method("Cocos2d", "Rect", "intersects_rect", Cocos2dxBind_cocos2d__Rect_intersects_rect);
            binder.bind_custom_method("Cocos2d", "Rect", "intersects_circle", Cocos2dxBind_cocos2d__Rect_intersects_circle);
            binder.bind_custom_method("Cocos2d", "Rect", "union_with_rect", Cocos2dxBind_cocos2d__Rect_union_with_rect);
            binder.bind_custom_method("Cocos2d", "Rect", "merge", Cocos2dxBind_cocos2d__Rect_merge);
            binder.bind_custom_method("Cocos2d", "Rect", "origin=", Cocos2dxBind_cocos2d__Rect_accessor_set_origin);
            binder.bind_custom_method("Cocos2d", "Rect", "origin", Cocos2dxBind_cocos2d__Rect_accessor_get_origin);
            binder.bind_custom_method("Cocos2d", "Rect", "size=", Cocos2dxBind_cocos2d__Rect_accessor_set_size);
            binder.bind_custom_method("Cocos2d", "Rect", "size", Cocos2dxBind_cocos2d__Rect_accessor_get_size);
            binder.bind_custom_method("Cocos2d", "Color3B", "equals", Cocos2dxBind_cocos2d__Color3B_equals);
            binder.bind_custom_method("Cocos2d", "Color3B", "r=", Cocos2dxBind_cocos2d__Color3B_accessor_set_r);
            binder.bind_custom_method("Cocos2d", "Color3B", "r", Cocos2dxBind_cocos2d__Color3B_accessor_get_r);
            binder.bind_custom_method("Cocos2d", "Color3B", "g=", Cocos2dxBind_cocos2d__Color3B_accessor_set_g);
            binder.bind_custom_method("Cocos2d", "Color3B", "g", Cocos2dxBind_cocos2d__Color3B_accessor_get_g);
            binder.bind_custom_method("Cocos2d", "Color3B", "b=", Cocos2dxBind_cocos2d__Color3B_accessor_set_b);
            binder.bind_custom_method("Cocos2d", "Color3B", "b", Cocos2dxBind_cocos2d__Color3B_accessor_get_b);
            binder.bind_custom_method("Cocos2d", "Color4F", "equals", Cocos2dxBind_cocos2d__Color4F_equals);
            binder.bind_custom_method("Cocos2d", "Color4F", "r=", Cocos2dxBind_cocos2d__Color4F_accessor_set_r);
            binder.bind_custom_method("Cocos2d", "Color4F", "r", Cocos2dxBind_cocos2d__Color4F_accessor_get_r);
            binder.bind_custom_method("Cocos2d", "Color4F", "g=", Cocos2dxBind_cocos2d__Color4F_accessor_set_g);
            binder.bind_custom_method("Cocos2d", "Color4F", "g", Cocos2dxBind_cocos2d__Color4F_accessor_get_g);
            binder.bind_custom_method("Cocos2d", "Color4F", "b=", Cocos2dxBind_cocos2d__Color4F_accessor_set_b);
            binder.bind_custom_method("Cocos2d", "Color4F", "b", Cocos2dxBind_cocos2d__Color4F_accessor_get_b);
            binder.bind_custom_method("Cocos2d", "Color4F", "a=", Cocos2dxBind_cocos2d__Color4F_accessor_set_a);
            binder.bind_custom_method("Cocos2d", "Color4F", "a", Cocos2dxBind_cocos2d__Color4F_accessor_get_a);
            binder.bind_static_method("Cocos2d", "Texture2D", "set_default_alpha_pixel_format", Cocos2dxBind_cocos2d__Texture2D_set_default_alpha_pixel_format);
            binder.bind_static_method("Cocos2d", "Texture2D", "get_default_alpha_pixel_format", Cocos2dxBind_cocos2d__Texture2D_get_default_alpha_pixel_format);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_description", Cocos2dxBind_cocos2d__Texture2D_get_description);
            binder.bind_custom_method("Cocos2d", "Texture2D", "release_gl_texture", Cocos2dxBind_cocos2d__Texture2D_release_gl_texture);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_data", Cocos2dxBind_cocos2d__Texture2D_init_with_data);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_mipmaps", Cocos2dxBind_cocos2d__Texture2D_init_with_mipmaps);
            binder.bind_custom_method("Cocos2d", "Texture2D", "update_with_data", Cocos2dxBind_cocos2d__Texture2D_update_with_data);
            binder.bind_custom_method("Cocos2d", "Texture2D", "draw_at_point", Cocos2dxBind_cocos2d__Texture2D_draw_at_point);
            binder.bind_custom_method("Cocos2d", "Texture2D", "draw_in_rect", Cocos2dxBind_cocos2d__Texture2D_draw_in_rect);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_image_1", Cocos2dxBind_cocos2d__Texture2D_init_with_image_1);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_image_2", Cocos2dxBind_cocos2d__Texture2D_init_with_image_2);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_string_1", Cocos2dxBind_cocos2d__Texture2D_init_with_string_1);
            binder.bind_custom_method("Cocos2d", "Texture2D", "init_with_string_2", Cocos2dxBind_cocos2d__Texture2D_init_with_string_2);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_tex_parameters", Cocos2dxBind_cocos2d__Texture2D_set_tex_parameters);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_anti_alias_tex_parameters", Cocos2dxBind_cocos2d__Texture2D_set_anti_alias_tex_parameters);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_alias_tex_parameters", Cocos2dxBind_cocos2d__Texture2D_set_alias_tex_parameters);
            binder.bind_custom_method("Cocos2d", "Texture2D", "generate_mipmap", Cocos2dxBind_cocos2d__Texture2D_generate_mipmap);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_string_for_format", Cocos2dxBind_cocos2d__Texture2D_get_string_for_format);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_bits_per_pixel_for_format_1", Cocos2dxBind_cocos2d__Texture2D_get_bits_per_pixel_for_format_1);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_bits_per_pixel_for_format_2", Cocos2dxBind_cocos2d__Texture2D_get_bits_per_pixel_for_format_2);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_content_size_in_pixels", Cocos2dxBind_cocos2d__Texture2D_get_content_size_in_pixels);
            binder.bind_custom_method("Cocos2d", "Texture2D", "has_premultiplied_alpha", Cocos2dxBind_cocos2d__Texture2D_has_premultiplied_alpha);
            binder.bind_custom_method("Cocos2d", "Texture2D", "has_mipmaps", Cocos2dxBind_cocos2d__Texture2D_has_mipmaps);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_pixel_format", Cocos2dxBind_cocos2d__Texture2D_get_pixel_format);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_pixels_wide", Cocos2dxBind_cocos2d__Texture2D_get_pixels_wide);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_pixels_high", Cocos2dxBind_cocos2d__Texture2D_get_pixels_high);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_name", Cocos2dxBind_cocos2d__Texture2D_get_name);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_max_s", Cocos2dxBind_cocos2d__Texture2D_get_max_s);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_max_s", Cocos2dxBind_cocos2d__Texture2D_set_max_s);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_max_t", Cocos2dxBind_cocos2d__Texture2D_get_max_t);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_max_t", Cocos2dxBind_cocos2d__Texture2D_set_max_t);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_content_size", Cocos2dxBind_cocos2d__Texture2D_get_content_size);
            binder.bind_custom_method("Cocos2d", "Texture2D", "set_gl_program", Cocos2dxBind_cocos2d__Texture2D_set_gl_program);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_gl_program", Cocos2dxBind_cocos2d__Texture2D_get_gl_program);
            binder.bind_custom_method("Cocos2d", "Texture2D", "retain_176", Cocos2dxBind_cocos2d__Texture2D_retain_176);
            binder.bind_custom_method("Cocos2d", "Texture2D", "release_176", Cocos2dxBind_cocos2d__Texture2D_release_176);
            binder.bind_custom_method("Cocos2d", "Texture2D", "autorelease_176", Cocos2dxBind_cocos2d__Texture2D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Texture2D", "get_reference_count_176", Cocos2dxBind_cocos2d__Texture2D_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_id=", Cocos2dxBind_cocos2d__Texture2D_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_id", Cocos2dxBind_cocos2d__Texture2D_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_lua_id=", Cocos2dxBind_cocos2d__Texture2D_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_lua_id", Cocos2dxBind_cocos2d__Texture2D_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_script_object=", Cocos2dxBind_cocos2d__Texture2D_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Texture2D", "_script_object", Cocos2dxBind_cocos2d__Texture2D_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "Touch", "get_location", Cocos2dxBind_cocos2d__Touch_get_location);
            binder.bind_custom_method("Cocos2d", "Touch", "get_previous_location", Cocos2dxBind_cocos2d__Touch_get_previous_location);
            binder.bind_custom_method("Cocos2d", "Touch", "get_start_location", Cocos2dxBind_cocos2d__Touch_get_start_location);
            binder.bind_custom_method("Cocos2d", "Touch", "get_delta", Cocos2dxBind_cocos2d__Touch_get_delta);
            binder.bind_custom_method("Cocos2d", "Touch", "get_location_in_view", Cocos2dxBind_cocos2d__Touch_get_location_in_view);
            binder.bind_custom_method("Cocos2d", "Touch", "get_previous_location_in_view", Cocos2dxBind_cocos2d__Touch_get_previous_location_in_view);
            binder.bind_custom_method("Cocos2d", "Touch", "get_start_location_in_view", Cocos2dxBind_cocos2d__Touch_get_start_location_in_view);
            binder.bind_custom_method("Cocos2d", "Touch", "set_touch_info", Cocos2dxBind_cocos2d__Touch_set_touch_info);
            binder.bind_custom_method("Cocos2d", "Touch", "get_id", Cocos2dxBind_cocos2d__Touch_get_id);
            binder.bind_custom_method("Cocos2d", "Touch", "retain_176", Cocos2dxBind_cocos2d__Touch_retain_176);
            binder.bind_custom_method("Cocos2d", "Touch", "release_176", Cocos2dxBind_cocos2d__Touch_release_176);
            binder.bind_custom_method("Cocos2d", "Touch", "autorelease_176", Cocos2dxBind_cocos2d__Touch_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Touch", "get_reference_count_176", Cocos2dxBind_cocos2d__Touch_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Touch", "_id=", Cocos2dxBind_cocos2d__Touch_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Touch", "_id", Cocos2dxBind_cocos2d__Touch_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Touch", "_lua_id=", Cocos2dxBind_cocos2d__Touch_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Touch", "_lua_id", Cocos2dxBind_cocos2d__Touch_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Touch", "_script_object=", Cocos2dxBind_cocos2d__Touch_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Touch", "_script_object", Cocos2dxBind_cocos2d__Touch_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "Event", "get_type_5", Cocos2dxBind_cocos2d__Event_get_type_5);
            binder.bind_custom_method("Cocos2d", "Event", "stop_propagation_5", Cocos2dxBind_cocos2d__Event_stop_propagation_5);
            binder.bind_custom_method("Cocos2d", "Event", "is_stopped_5", Cocos2dxBind_cocos2d__Event_is_stopped_5);
            binder.bind_custom_method("Cocos2d", "Event", "get_current_target_5", Cocos2dxBind_cocos2d__Event_get_current_target_5);
            binder.bind_custom_method("Cocos2d", "Event", "retain_176", Cocos2dxBind_cocos2d__Event_retain_176);
            binder.bind_custom_method("Cocos2d", "Event", "release_176", Cocos2dxBind_cocos2d__Event_release_176);
            binder.bind_custom_method("Cocos2d", "Event", "autorelease_176", Cocos2dxBind_cocos2d__Event_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Event", "get_reference_count_176", Cocos2dxBind_cocos2d__Event_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Event", "_id=", Cocos2dxBind_cocos2d__Event_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Event", "_id", Cocos2dxBind_cocos2d__Event_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Event", "_lua_id=", Cocos2dxBind_cocos2d__Event_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Event", "_lua_id", Cocos2dxBind_cocos2d__Event_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Event", "_script_object=", Cocos2dxBind_cocos2d__Event_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Event", "_script_object", Cocos2dxBind_cocos2d__Event_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "EventTouch", "get_event_code", Cocos2dxBind_cocos2d__EventTouch_get_event_code);
            binder.bind_custom_method("Cocos2d", "EventTouch", "get_touches", Cocos2dxBind_cocos2d__EventTouch_get_touches);
            binder.bind_custom_method("Cocos2d", "EventTouch", "set_event_code", Cocos2dxBind_cocos2d__EventTouch_set_event_code);
            binder.bind_custom_method("Cocos2d", "EventTouch", "set_touches", Cocos2dxBind_cocos2d__EventTouch_set_touches);
            binder.bind_custom_method("Cocos2d", "EventTouch", "get_type_5", Cocos2dxBind_cocos2d__EventTouch_get_type_5);
            binder.bind_custom_method("Cocos2d", "EventTouch", "stop_propagation_5", Cocos2dxBind_cocos2d__EventTouch_stop_propagation_5);
            binder.bind_custom_method("Cocos2d", "EventTouch", "is_stopped_5", Cocos2dxBind_cocos2d__EventTouch_is_stopped_5);
            binder.bind_custom_method("Cocos2d", "EventTouch", "get_current_target_5", Cocos2dxBind_cocos2d__EventTouch_get_current_target_5);
            binder.bind_custom_method("Cocos2d", "EventTouch", "retain_176", Cocos2dxBind_cocos2d__EventTouch_retain_176);
            binder.bind_custom_method("Cocos2d", "EventTouch", "release_176", Cocos2dxBind_cocos2d__EventTouch_release_176);
            binder.bind_custom_method("Cocos2d", "EventTouch", "autorelease_176", Cocos2dxBind_cocos2d__EventTouch_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventTouch", "get_reference_count_176", Cocos2dxBind_cocos2d__EventTouch_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Node", "create_2", Cocos2dxBind_cocos2d__Node_create_2);
            binder.bind_custom_method("Cocos2d", "Node", "get_description_15", Cocos2dxBind_cocos2d__Node_get_description_15);
            binder.bind_custom_method("Cocos2d", "Node", "set_local_z_order_29", Cocos2dxBind_cocos2d__Node_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_local_z_order_29", Cocos2dxBind_cocos2d__Node_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_global_z_order_27", Cocos2dxBind_cocos2d__Node_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Node", "get_global_z_order_29", Cocos2dxBind_cocos2d__Node_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_scale_x_23", Cocos2dxBind_cocos2d__Node_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Node", "get_scale_x_26", Cocos2dxBind_cocos2d__Node_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Node", "set_scale_y_23", Cocos2dxBind_cocos2d__Node_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Node", "get_scale_y_26", Cocos2dxBind_cocos2d__Node_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Node", "set_scale_z_29", Cocos2dxBind_cocos2d__Node_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_scale_z_29", Cocos2dxBind_cocos2d__Node_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_scale_45", Cocos2dxBind_cocos2d__Node_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Node", "get_scale_26", Cocos2dxBind_cocos2d__Node_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Node", "set_scale_46", Cocos2dxBind_cocos2d__Node_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Node", "set_position_49", Cocos2dxBind_cocos2d__Node_set_position_49);
            binder.bind_custom_method("Cocos2d", "Node", "set_normalized_position_29", Cocos2dxBind_cocos2d__Node_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_position_55", Cocos2dxBind_cocos2d__Node_get_position_55);
            binder.bind_custom_method("Cocos2d", "Node", "get_normalized_position_29", Cocos2dxBind_cocos2d__Node_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_position_50", Cocos2dxBind_cocos2d__Node_set_position_50);
            binder.bind_custom_method("Cocos2d", "Node", "get_position_56", Cocos2dxBind_cocos2d__Node_get_position_56);
            binder.bind_custom_method("Cocos2d", "Node", "set_position_x_28", Cocos2dxBind_cocos2d__Node_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_position_x_28", Cocos2dxBind_cocos2d__Node_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Node", "set_position_y_28", Cocos2dxBind_cocos2d__Node_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_position_y_28", Cocos2dxBind_cocos2d__Node_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Node", "set_position3_d_29", Cocos2dxBind_cocos2d__Node_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_position3_d_28", Cocos2dxBind_cocos2d__Node_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Node", "set_position_z_28", Cocos2dxBind_cocos2d__Node_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_position_z_29", Cocos2dxBind_cocos2d__Node_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_skew_x_28", Cocos2dxBind_cocos2d__Node_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_skew_x_29", Cocos2dxBind_cocos2d__Node_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_skew_y_28", Cocos2dxBind_cocos2d__Node_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_skew_y_29", Cocos2dxBind_cocos2d__Node_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_anchor_point_26", Cocos2dxBind_cocos2d__Node_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Node", "get_anchor_point_29", Cocos2dxBind_cocos2d__Node_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Node_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_content_size_24", Cocos2dxBind_cocos2d__Node_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Node", "get_content_size_26", Cocos2dxBind_cocos2d__Node_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Node", "set_visible_27", Cocos2dxBind_cocos2d__Node_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Node", "is_visible_29", Cocos2dxBind_cocos2d__Node_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_rotation_26", Cocos2dxBind_cocos2d__Node_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Node", "get_rotation_29", Cocos2dxBind_cocos2d__Node_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Node_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Node_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Node_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Node_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Node_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Node_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Node_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Node_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Node_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Node_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Node", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Node_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Node", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Node_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Node", "add_child_113", Cocos2dxBind_cocos2d__Node_add_child_113);
            binder.bind_custom_method("Cocos2d", "Node", "add_child_114", Cocos2dxBind_cocos2d__Node_add_child_114);
            binder.bind_custom_method("Cocos2d", "Node", "add_child_115", Cocos2dxBind_cocos2d__Node_add_child_115);
            binder.bind_custom_method("Cocos2d", "Node", "add_child_116", Cocos2dxBind_cocos2d__Node_add_child_116);
            binder.bind_custom_method("Cocos2d", "Node", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Node_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_child_by_name_29", Cocos2dxBind_cocos2d__Node_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Node", "enumerate_children_29", Cocos2dxBind_cocos2d__Node_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_children_58", Cocos2dxBind_cocos2d__Node_get_children_58);
            binder.bind_custom_method("Cocos2d", "Node", "get_children_count_29", Cocos2dxBind_cocos2d__Node_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_parent_29", Cocos2dxBind_cocos2d__Node_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_parent_57", Cocos2dxBind_cocos2d__Node_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_parent_58", Cocos2dxBind_cocos2d__Node_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Node", "remove_from_parent_29", Cocos2dxBind_cocos2d__Node_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Node_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_child_24", Cocos2dxBind_cocos2d__Node_remove_child_24);
            binder.bind_custom_method("Cocos2d", "Node", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Node_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Node_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_all_children_28", Cocos2dxBind_cocos2d__Node_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Node", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__Node_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "Node", "reorder_child_26", Cocos2dxBind_cocos2d__Node_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Node", "sort_all_children_26", Cocos2dxBind_cocos2d__Node_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Node", "get_tag_29", Cocos2dxBind_cocos2d__Node_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_tag_29", Cocos2dxBind_cocos2d__Node_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_name_29", Cocos2dxBind_cocos2d__Node_get_name_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_name_29", Cocos2dxBind_cocos2d__Node_set_name_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_user_data_57", Cocos2dxBind_cocos2d__Node_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_user_data_58", Cocos2dxBind_cocos2d__Node_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Node", "set_user_data_29", Cocos2dxBind_cocos2d__Node_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_user_object_57", Cocos2dxBind_cocos2d__Node_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_user_object_58", Cocos2dxBind_cocos2d__Node_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Node", "set_user_object_29", Cocos2dxBind_cocos2d__Node_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_gl_program_29", Cocos2dxBind_cocos2d__Node_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_gl_program_28", Cocos2dxBind_cocos2d__Node_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Node_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Node_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Node", "is_running_29", Cocos2dxBind_cocos2d__Node_is_running_29);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Node_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Node", "on_enter_18", Cocos2dxBind_cocos2d__Node_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Node", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Node_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Node", "on_exit_18", Cocos2dxBind_cocos2d__Node_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Node", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Node_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Node", "cleanup_25", Cocos2dxBind_cocos2d__Node_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Node", "draw_27", Cocos2dxBind_cocos2d__Node_draw_27);
            binder.bind_custom_method("Cocos2d", "Node", "draw_28", Cocos2dxBind_cocos2d__Node_draw_28);
            binder.bind_custom_method("Cocos2d", "Node", "visit_31", Cocos2dxBind_cocos2d__Node_visit_31);
            binder.bind_custom_method("Cocos2d", "Node", "visit_32", Cocos2dxBind_cocos2d__Node_visit_32);
            binder.bind_custom_method("Cocos2d", "Node", "get_scene_29", Cocos2dxBind_cocos2d__Node_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_bounding_box_26", Cocos2dxBind_cocos2d__Node_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "Node", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Node_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Node_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_action_manager_29", Cocos2dxBind_cocos2d__Node_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_action_manager_57", Cocos2dxBind_cocos2d__Node_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_action_manager_58", Cocos2dxBind_cocos2d__Node_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Node", "run_action_28", Cocos2dxBind_cocos2d__Node_run_action_28);
            binder.bind_custom_method("Cocos2d", "Node", "stop_all_actions_29", Cocos2dxBind_cocos2d__Node_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Node", "stop_action_29", Cocos2dxBind_cocos2d__Node_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Node", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Node_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Node_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Node_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Node_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Node_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_scheduler_29", Cocos2dxBind_cocos2d__Node_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_scheduler_57", Cocos2dxBind_cocos2d__Node_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_scheduler_58", Cocos2dxBind_cocos2d__Node_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Node", "is_scheduled_58", Cocos2dxBind_cocos2d__Node_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_update_29", Cocos2dxBind_cocos2d__Node_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Node_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Node", "unschedule_update_29", Cocos2dxBind_cocos2d__Node_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_once_58", Cocos2dxBind_cocos2d__Node_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_172", Cocos2dxBind_cocos2d__Node_schedule_172);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_173", Cocos2dxBind_cocos2d__Node_schedule_173);
            binder.bind_custom_method("Cocos2d", "Node", "schedule_174", Cocos2dxBind_cocos2d__Node_schedule_174);
            binder.bind_custom_method("Cocos2d", "Node", "unschedule_58", Cocos2dxBind_cocos2d__Node_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Node", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Node_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Node", "resume_29", Cocos2dxBind_cocos2d__Node_resume_29);
            binder.bind_custom_method("Cocos2d", "Node", "pause_29", Cocos2dxBind_cocos2d__Node_pause_29);
            binder.bind_custom_method("Cocos2d", "Node", "update_26", Cocos2dxBind_cocos2d__Node_update_26);
            binder.bind_custom_method("Cocos2d", "Node", "update_transform_28", Cocos2dxBind_cocos2d__Node_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Node_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Node_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Node_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Node_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Node", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Node_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Node_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Node_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Node_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Node_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Node_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Node_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Node_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Node_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Node_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Node_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Node_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Node", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Node_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_additional_transform_58", Cocos2dxBind_cocos2d__Node_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Node", "get_component_29", Cocos2dxBind_cocos2d__Node_get_component_29);
            binder.bind_custom_method("Cocos2d", "Node", "add_component_29", Cocos2dxBind_cocos2d__Node_add_component_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_component_57", Cocos2dxBind_cocos2d__Node_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Node", "remove_component_58", Cocos2dxBind_cocos2d__Node_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Node", "remove_all_components_29", Cocos2dxBind_cocos2d__Node_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_physics_body_29", Cocos2dxBind_cocos2d__Node_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_physics_body_29", Cocos2dxBind_cocos2d__Node_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Node", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Node_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Node", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Node_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Node", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Node_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_opacity_28", Cocos2dxBind_cocos2d__Node_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Node", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Node_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_opacity_26", Cocos2dxBind_cocos2d__Node_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Node", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Node_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Node", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Node_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Node_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_color_27", Cocos2dxBind_cocos2d__Node_get_color_27);
            binder.bind_custom_method("Cocos2d", "Node", "get_displayed_color_29", Cocos2dxBind_cocos2d__Node_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_color_27", Cocos2dxBind_cocos2d__Node_set_color_27);
            binder.bind_custom_method("Cocos2d", "Node", "update_displayed_color_23", Cocos2dxBind_cocos2d__Node_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Node", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Node_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Node_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Node_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Node", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Node_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Node", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Node_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Node_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Node", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Node_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Node", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Node_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Node", "get_camera_mask_29", Cocos2dxBind_cocos2d__Node_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Node", "set_camera_mask_22", Cocos2dxBind_cocos2d__Node_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Node", "init_13", Cocos2dxBind_cocos2d__Node_init_13);
            binder.bind_custom_method("Cocos2d", "Node", "retain_176", Cocos2dxBind_cocos2d__Node_retain_176);
            binder.bind_custom_method("Cocos2d", "Node", "release_176", Cocos2dxBind_cocos2d__Node_release_176);
            binder.bind_custom_method("Cocos2d", "Node", "autorelease_176", Cocos2dxBind_cocos2d__Node_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Node", "get_reference_count_176", Cocos2dxBind_cocos2d__Node_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Node", "_id=", Cocos2dxBind_cocos2d__Node_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Node", "_id", Cocos2dxBind_cocos2d__Node_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Node", "_lua_id=", Cocos2dxBind_cocos2d__Node_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Node", "_lua_id", Cocos2dxBind_cocos2d__Node_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Node", "_script_object=", Cocos2dxBind_cocos2d__Node_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Node", "_script_object", Cocos2dxBind_cocos2d__Node_accessor_get__script_object);
            binder.bind_static_method("CorCocos2dxConverter", "Cocos2dxExperimental", "set_on_enter_callback_create", Cocos2dxBind_cor__cocos2dx_converter__Cocos2dxExperimental_set_on_enter_callback_create);
            binder.bind_static_method("Cocos2d", "DrawNode", "create", Cocos2dxBind_cocos2d__DrawNode_create);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_point", Cocos2dxBind_cocos2d__DrawNode_draw_point);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_points_1", Cocos2dxBind_cocos2d__DrawNode_draw_points_1);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_points_2", Cocos2dxBind_cocos2d__DrawNode_draw_points_2);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_line", Cocos2dxBind_cocos2d__DrawNode_draw_line);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_rect_1", Cocos2dxBind_cocos2d__DrawNode_draw_rect_1);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_poly", Cocos2dxBind_cocos2d__DrawNode_draw_poly);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_circle_1", Cocos2dxBind_cocos2d__DrawNode_draw_circle_1);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_circle_2", Cocos2dxBind_cocos2d__DrawNode_draw_circle_2);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_quad_bezier", Cocos2dxBind_cocos2d__DrawNode_draw_quad_bezier);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_cubic_bezier", Cocos2dxBind_cocos2d__DrawNode_draw_cubic_bezier);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_cardinal_spline", Cocos2dxBind_cocos2d__DrawNode_draw_cardinal_spline);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_catmull_rom", Cocos2dxBind_cocos2d__DrawNode_draw_catmull_rom);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_dot", Cocos2dxBind_cocos2d__DrawNode_draw_dot);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_rect_2", Cocos2dxBind_cocos2d__DrawNode_draw_rect_2);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_solid_rect", Cocos2dxBind_cocos2d__DrawNode_draw_solid_rect);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_solid_poly", Cocos2dxBind_cocos2d__DrawNode_draw_solid_poly);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_solid_circle_1", Cocos2dxBind_cocos2d__DrawNode_draw_solid_circle_1);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_solid_circle_2", Cocos2dxBind_cocos2d__DrawNode_draw_solid_circle_2);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_segment", Cocos2dxBind_cocos2d__DrawNode_draw_segment);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_polygon", Cocos2dxBind_cocos2d__DrawNode_draw_polygon);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw_triangle", Cocos2dxBind_cocos2d__DrawNode_draw_triangle);
            binder.bind_custom_method("Cocos2d", "DrawNode", "clear", Cocos2dxBind_cocos2d__DrawNode_clear);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_blend_func", Cocos2dxBind_cocos2d__DrawNode_get_blend_func);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_blend_func", Cocos2dxBind_cocos2d__DrawNode_set_blend_func);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_draw", Cocos2dxBind_cocos2d__DrawNode_on_draw);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_draw_gl_line", Cocos2dxBind_cocos2d__DrawNode_on_draw_gl_line);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_draw_gl_point", Cocos2dxBind_cocos2d__DrawNode_on_draw_gl_point);
            binder.bind_custom_method("Cocos2d", "DrawNode", "draw", Cocos2dxBind_cocos2d__DrawNode_draw);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_line_width", Cocos2dxBind_cocos2d__DrawNode_set_line_width);
            binder.bind_custom_method("Cocos2d", "DrawNode", "init", Cocos2dxBind_cocos2d__DrawNode_init);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_description_15", Cocos2dxBind_cocos2d__DrawNode_get_description_15);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_local_z_order_29", Cocos2dxBind_cocos2d__DrawNode_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_local_z_order_29", Cocos2dxBind_cocos2d__DrawNode_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_global_z_order_27", Cocos2dxBind_cocos2d__DrawNode_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_global_z_order_29", Cocos2dxBind_cocos2d__DrawNode_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scale_x_23", Cocos2dxBind_cocos2d__DrawNode_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scale_x_26", Cocos2dxBind_cocos2d__DrawNode_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scale_y_23", Cocos2dxBind_cocos2d__DrawNode_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scale_y_26", Cocos2dxBind_cocos2d__DrawNode_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scale_z_29", Cocos2dxBind_cocos2d__DrawNode_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scale_z_29", Cocos2dxBind_cocos2d__DrawNode_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scale_45", Cocos2dxBind_cocos2d__DrawNode_set_scale_45);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scale_26", Cocos2dxBind_cocos2d__DrawNode_get_scale_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scale_46", Cocos2dxBind_cocos2d__DrawNode_set_scale_46);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position_49", Cocos2dxBind_cocos2d__DrawNode_set_position_49);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_normalized_position_29", Cocos2dxBind_cocos2d__DrawNode_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position_55", Cocos2dxBind_cocos2d__DrawNode_get_position_55);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_normalized_position_29", Cocos2dxBind_cocos2d__DrawNode_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position_50", Cocos2dxBind_cocos2d__DrawNode_set_position_50);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position_56", Cocos2dxBind_cocos2d__DrawNode_get_position_56);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position_x_28", Cocos2dxBind_cocos2d__DrawNode_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position_x_28", Cocos2dxBind_cocos2d__DrawNode_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position_y_28", Cocos2dxBind_cocos2d__DrawNode_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position_y_28", Cocos2dxBind_cocos2d__DrawNode_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position3_d_29", Cocos2dxBind_cocos2d__DrawNode_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position3_d_28", Cocos2dxBind_cocos2d__DrawNode_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_position_z_28", Cocos2dxBind_cocos2d__DrawNode_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_position_z_29", Cocos2dxBind_cocos2d__DrawNode_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_skew_x_28", Cocos2dxBind_cocos2d__DrawNode_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_skew_x_29", Cocos2dxBind_cocos2d__DrawNode_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_skew_y_28", Cocos2dxBind_cocos2d__DrawNode_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_skew_y_29", Cocos2dxBind_cocos2d__DrawNode_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_anchor_point_26", Cocos2dxBind_cocos2d__DrawNode_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_anchor_point_29", Cocos2dxBind_cocos2d__DrawNode_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__DrawNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_content_size_24", Cocos2dxBind_cocos2d__DrawNode_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_content_size_26", Cocos2dxBind_cocos2d__DrawNode_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_visible_27", Cocos2dxBind_cocos2d__DrawNode_set_visible_27);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_visible_29", Cocos2dxBind_cocos2d__DrawNode_is_visible_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_rotation_26", Cocos2dxBind_cocos2d__DrawNode_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_rotation_29", Cocos2dxBind_cocos2d__DrawNode_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_rotation3_d_29", Cocos2dxBind_cocos2d__DrawNode_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_rotation3_d_29", Cocos2dxBind_cocos2d__DrawNode_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_rotation_quat_29", Cocos2dxBind_cocos2d__DrawNode_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_rotation_quat_29", Cocos2dxBind_cocos2d__DrawNode_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__DrawNode_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__DrawNode_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__DrawNode_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__DrawNode_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__DrawNode_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__DrawNode_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__DrawNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__DrawNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "add_child_113", Cocos2dxBind_cocos2d__DrawNode_add_child_113);
            binder.bind_custom_method("Cocos2d", "DrawNode", "add_child_114", Cocos2dxBind_cocos2d__DrawNode_add_child_114);
            binder.bind_custom_method("Cocos2d", "DrawNode", "add_child_115", Cocos2dxBind_cocos2d__DrawNode_add_child_115);
            binder.bind_custom_method("Cocos2d", "DrawNode", "add_child_116", Cocos2dxBind_cocos2d__DrawNode_add_child_116);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_child_by_tag_29", Cocos2dxBind_cocos2d__DrawNode_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_child_by_name_29", Cocos2dxBind_cocos2d__DrawNode_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "enumerate_children_29", Cocos2dxBind_cocos2d__DrawNode_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_children_58", Cocos2dxBind_cocos2d__DrawNode_get_children_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_children_count_29", Cocos2dxBind_cocos2d__DrawNode_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_parent_29", Cocos2dxBind_cocos2d__DrawNode_set_parent_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_parent_57", Cocos2dxBind_cocos2d__DrawNode_get_parent_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_parent_58", Cocos2dxBind_cocos2d__DrawNode_get_parent_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_from_parent_29", Cocos2dxBind_cocos2d__DrawNode_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__DrawNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_child_24", Cocos2dxBind_cocos2d__DrawNode_remove_child_24);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__DrawNode_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_child_by_name_29", Cocos2dxBind_cocos2d__DrawNode_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_all_children_28", Cocos2dxBind_cocos2d__DrawNode_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__DrawNode_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "DrawNode", "reorder_child_26", Cocos2dxBind_cocos2d__DrawNode_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "sort_all_children_26", Cocos2dxBind_cocos2d__DrawNode_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_tag_29", Cocos2dxBind_cocos2d__DrawNode_get_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_tag_29", Cocos2dxBind_cocos2d__DrawNode_set_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_name_29", Cocos2dxBind_cocos2d__DrawNode_get_name_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_name_29", Cocos2dxBind_cocos2d__DrawNode_set_name_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_user_data_57", Cocos2dxBind_cocos2d__DrawNode_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_user_data_58", Cocos2dxBind_cocos2d__DrawNode_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_user_data_29", Cocos2dxBind_cocos2d__DrawNode_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_user_object_57", Cocos2dxBind_cocos2d__DrawNode_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_user_object_58", Cocos2dxBind_cocos2d__DrawNode_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_user_object_29", Cocos2dxBind_cocos2d__DrawNode_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_gl_program_29", Cocos2dxBind_cocos2d__DrawNode_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_gl_program_28", Cocos2dxBind_cocos2d__DrawNode_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_gl_program_state_29", Cocos2dxBind_cocos2d__DrawNode_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_gl_program_state_28", Cocos2dxBind_cocos2d__DrawNode_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_running_29", Cocos2dxBind_cocos2d__DrawNode_is_running_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__DrawNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_enter_18", Cocos2dxBind_cocos2d__DrawNode_on_enter_18);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__DrawNode_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_exit_18", Cocos2dxBind_cocos2d__DrawNode_on_exit_18);
            binder.bind_custom_method("Cocos2d", "DrawNode", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__DrawNode_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "DrawNode", "cleanup_25", Cocos2dxBind_cocos2d__DrawNode_cleanup_25);
            binder.bind_custom_method("Cocos2d", "DrawNode", "visit_31", Cocos2dxBind_cocos2d__DrawNode_visit_31);
            binder.bind_custom_method("Cocos2d", "DrawNode", "visit_32", Cocos2dxBind_cocos2d__DrawNode_visit_32);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scene_29", Cocos2dxBind_cocos2d__DrawNode_get_scene_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_bounding_box_26", Cocos2dxBind_cocos2d__DrawNode_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__DrawNode_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__DrawNode_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_action_manager_29", Cocos2dxBind_cocos2d__DrawNode_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_action_manager_57", Cocos2dxBind_cocos2d__DrawNode_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_action_manager_58", Cocos2dxBind_cocos2d__DrawNode_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "run_action_28", Cocos2dxBind_cocos2d__DrawNode_run_action_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "stop_all_actions_29", Cocos2dxBind_cocos2d__DrawNode_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "stop_action_29", Cocos2dxBind_cocos2d__DrawNode_stop_action_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__DrawNode_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__DrawNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__DrawNode_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_action_by_tag_29", Cocos2dxBind_cocos2d__DrawNode_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__DrawNode_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_scheduler_29", Cocos2dxBind_cocos2d__DrawNode_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scheduler_57", Cocos2dxBind_cocos2d__DrawNode_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_scheduler_58", Cocos2dxBind_cocos2d__DrawNode_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_scheduled_58", Cocos2dxBind_cocos2d__DrawNode_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_update_29", Cocos2dxBind_cocos2d__DrawNode_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__DrawNode_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "unschedule_update_29", Cocos2dxBind_cocos2d__DrawNode_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_once_58", Cocos2dxBind_cocos2d__DrawNode_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_172", Cocos2dxBind_cocos2d__DrawNode_schedule_172);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_173", Cocos2dxBind_cocos2d__DrawNode_schedule_173);
            binder.bind_custom_method("Cocos2d", "DrawNode", "schedule_174", Cocos2dxBind_cocos2d__DrawNode_schedule_174);
            binder.bind_custom_method("Cocos2d", "DrawNode", "unschedule_58", Cocos2dxBind_cocos2d__DrawNode_unschedule_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__DrawNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "resume_29", Cocos2dxBind_cocos2d__DrawNode_resume_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "pause_29", Cocos2dxBind_cocos2d__DrawNode_pause_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_26", Cocos2dxBind_cocos2d__DrawNode_update_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_transform_28", Cocos2dxBind_cocos2d__DrawNode_update_transform_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__DrawNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__DrawNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__DrawNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_to_node_space_29", Cocos2dxBind_cocos2d__DrawNode_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_to_world_space_29", Cocos2dxBind_cocos2d__DrawNode_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__DrawNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__DrawNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__DrawNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__DrawNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_additional_transform_58", Cocos2dxBind_cocos2d__DrawNode_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_component_29", Cocos2dxBind_cocos2d__DrawNode_get_component_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "add_component_29", Cocos2dxBind_cocos2d__DrawNode_add_component_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_component_57", Cocos2dxBind_cocos2d__DrawNode_remove_component_57);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_component_58", Cocos2dxBind_cocos2d__DrawNode_remove_component_58);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_all_components_29", Cocos2dxBind_cocos2d__DrawNode_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_physics_body_29", Cocos2dxBind_cocos2d__DrawNode_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_physics_body_29", Cocos2dxBind_cocos2d__DrawNode_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__DrawNode_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__DrawNode_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__DrawNode_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_opacity_28", Cocos2dxBind_cocos2d__DrawNode_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__DrawNode_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_opacity_26", Cocos2dxBind_cocos2d__DrawNode_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__DrawNode_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__DrawNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__DrawNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_color_27", Cocos2dxBind_cocos2d__DrawNode_get_color_27);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_displayed_color_29", Cocos2dxBind_cocos2d__DrawNode_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_color_27", Cocos2dxBind_cocos2d__DrawNode_set_color_27);
            binder.bind_custom_method("Cocos2d", "DrawNode", "update_displayed_color_23", Cocos2dxBind_cocos2d__DrawNode_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__DrawNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__DrawNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__DrawNode_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "DrawNode", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__DrawNode_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__DrawNode_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__DrawNode_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__DrawNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__DrawNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_camera_mask_29", Cocos2dxBind_cocos2d__DrawNode_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "DrawNode", "set_camera_mask_22", Cocos2dxBind_cocos2d__DrawNode_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "DrawNode", "retain_176", Cocos2dxBind_cocos2d__DrawNode_retain_176);
            binder.bind_custom_method("Cocos2d", "DrawNode", "release_176", Cocos2dxBind_cocos2d__DrawNode_release_176);
            binder.bind_custom_method("Cocos2d", "DrawNode", "autorelease_176", Cocos2dxBind_cocos2d__DrawNode_autorelease_176);
            binder.bind_custom_method("Cocos2d", "DrawNode", "get_reference_count_176", Cocos2dxBind_cocos2d__DrawNode_get_reference_count_176);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "release", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_release);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "is_valid", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_valid);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_node", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_node);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "set_tag", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_set_tag);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_tag", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_tag);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_distance", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_distance);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_type_id", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_type_id);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_index", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_index);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_transform", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_transform);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_object", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_object);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "is_box", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_box);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_box", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_box);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "is_sphere", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_is_sphere);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNodeRef", "get_sphere", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNodeRef_get_sphere);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "set_transform_to", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_transform_to);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "get_transform_to", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_transform_to);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "get_current_transform", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_current_transform);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "update_current_transform", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_update_current_transform);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "set_transform_to_render", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_transform_to_render);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "get_transform_to_render", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_transform_to_render);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "set_collision_group_pair", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_collision_group_pair);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "get_collision_group_pair", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_get_collision_group_pair);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "add_o_box", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_add_o_box);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "add_o_sphere", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_add_o_sphere);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "find_o_box_1", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_o_box_1);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "find_o_box_2", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_o_box_2);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "find_pair", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_pair);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "all_find_pair", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_all_find_pair);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "all_pair_call", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_all_pair_call);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "find_nearest", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_find_nearest);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "fit", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_fit);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "set_changed", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_set_changed);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "render_to_draw_node", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_render_to_draw_node);
            binder.bind_custom_method("CorCocos2dxConverter", "Collision2dNode", "render_to_draw_node_o_box", Cocos2dxBind_cor__cocos2dx_converter__Collision2dNode_render_to_draw_node_o_box);
            binder.bind_static_method("CorCocos2dxConverter", "EasyHttpClient", "get_text", Cocos2dxBind_cor__cocos2dx_converter__EasyHttpClient_get_text);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "get_node", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_get_node);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "set_collision_callback", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_set_collision_callback);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "get_index", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_get_index);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "is_erased", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_is_erased);
            binder.bind_custom_method("CorCocos2dxConverter", "RtsObjectSensor", "remove", Cocos2dxBind_cor__cocos2dx_converter__RtsObjectSensor_remove);
            binder.bind_custom_method("Cocos2d", "Value", "as_byte", Cocos2dxBind_cocos2d__Value_as_byte);
            binder.bind_custom_method("Cocos2d", "Value", "as_int", Cocos2dxBind_cocos2d__Value_as_int);
            binder.bind_custom_method("Cocos2d", "Value", "as_float", Cocos2dxBind_cocos2d__Value_as_float);
            binder.bind_custom_method("Cocos2d", "Value", "as_double", Cocos2dxBind_cocos2d__Value_as_double);
            binder.bind_custom_method("Cocos2d", "Value", "as_bool", Cocos2dxBind_cocos2d__Value_as_bool);
            binder.bind_custom_method("Cocos2d", "Value", "as_string", Cocos2dxBind_cocos2d__Value_as_string);
            binder.bind_custom_method("Cocos2d", "Value", "as_value_vector_2", Cocos2dxBind_cocos2d__Value_as_value_vector_2);
            binder.bind_custom_method("Cocos2d", "Value", "as_value_map_2", Cocos2dxBind_cocos2d__Value_as_value_map_2);
            binder.bind_custom_method("Cocos2d", "Value", "as_int_key_map_2", Cocos2dxBind_cocos2d__Value_as_int_key_map_2);
            binder.bind_custom_method("Cocos2d", "Value", "is_null", Cocos2dxBind_cocos2d__Value_is_null);
            binder.bind_custom_method("Cocos2d", "Value", "get_type", Cocos2dxBind_cocos2d__Value_get_type);
            binder.bind_custom_method("Cocos2d", "Value", "get_description", Cocos2dxBind_cocos2d__Value_get_description);
            binder.bind_static_method("Cocos2d", "SpriteFrame", "create_1", Cocos2dxBind_cocos2d__SpriteFrame_create_1);
            binder.bind_static_method("Cocos2d", "SpriteFrame", "create_2", Cocos2dxBind_cocos2d__SpriteFrame_create_2);
            binder.bind_static_method("Cocos2d", "SpriteFrame", "create_with_texture_1", Cocos2dxBind_cocos2d__SpriteFrame_create_with_texture_1);
            binder.bind_static_method("Cocos2d", "SpriteFrame", "create_with_texture_2", Cocos2dxBind_cocos2d__SpriteFrame_create_with_texture_2);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_rect_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_get_rect_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_rect_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_set_rect_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "is_rotated", Cocos2dxBind_cocos2d__SpriteFrame_is_rotated);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_rotated", Cocos2dxBind_cocos2d__SpriteFrame_set_rotated);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_rect", Cocos2dxBind_cocos2d__SpriteFrame_get_rect);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_rect", Cocos2dxBind_cocos2d__SpriteFrame_set_rect);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_offset_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_get_offset_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_offset_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_set_offset_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_original_size_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_get_original_size_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_original_size_in_pixels", Cocos2dxBind_cocos2d__SpriteFrame_set_original_size_in_pixels);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_original_size", Cocos2dxBind_cocos2d__SpriteFrame_get_original_size);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_original_size", Cocos2dxBind_cocos2d__SpriteFrame_set_original_size);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_texture", Cocos2dxBind_cocos2d__SpriteFrame_get_texture);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_texture", Cocos2dxBind_cocos2d__SpriteFrame_set_texture);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_offset", Cocos2dxBind_cocos2d__SpriteFrame_get_offset);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "set_offset", Cocos2dxBind_cocos2d__SpriteFrame_set_offset);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "clone", Cocos2dxBind_cocos2d__SpriteFrame_clone);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "init_with_texture_1", Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_1);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "init_with_texture_filename_1", Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_filename_1);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "init_with_texture_2", Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "init_with_texture_filename_2", Cocos2dxBind_cocos2d__SpriteFrame_init_with_texture_filename_2);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "retain_176", Cocos2dxBind_cocos2d__SpriteFrame_retain_176);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "release_176", Cocos2dxBind_cocos2d__SpriteFrame_release_176);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "autorelease_176", Cocos2dxBind_cocos2d__SpriteFrame_autorelease_176);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "get_reference_count_176", Cocos2dxBind_cocos2d__SpriteFrame_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_id=", Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_id", Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_lua_id=", Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_lua_id", Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_script_object=", Cocos2dxBind_cocos2d__SpriteFrame_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "SpriteFrame", "_script_object", Cocos2dxBind_cocos2d__SpriteFrame_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "AnimationFrame", "create", Cocos2dxBind_cocos2d__AnimationFrame_create);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "get_sprite_frame", Cocos2dxBind_cocos2d__AnimationFrame_get_sprite_frame);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "set_sprite_frame", Cocos2dxBind_cocos2d__AnimationFrame_set_sprite_frame);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "get_delay_units", Cocos2dxBind_cocos2d__AnimationFrame_get_delay_units);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "set_delay_units", Cocos2dxBind_cocos2d__AnimationFrame_set_delay_units);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "get_user_info_1", Cocos2dxBind_cocos2d__AnimationFrame_get_user_info_1);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "set_user_info", Cocos2dxBind_cocos2d__AnimationFrame_set_user_info);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "clone", Cocos2dxBind_cocos2d__AnimationFrame_clone);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "init_with_sprite_frame", Cocos2dxBind_cocos2d__AnimationFrame_init_with_sprite_frame);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "retain_176", Cocos2dxBind_cocos2d__AnimationFrame_retain_176);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "release_176", Cocos2dxBind_cocos2d__AnimationFrame_release_176);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "autorelease_176", Cocos2dxBind_cocos2d__AnimationFrame_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "get_reference_count_176", Cocos2dxBind_cocos2d__AnimationFrame_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_id=", Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_id", Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_lua_id=", Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_lua_id", Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_script_object=", Cocos2dxBind_cocos2d__AnimationFrame_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "AnimationFrame", "_script_object", Cocos2dxBind_cocos2d__AnimationFrame_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Animation", "create_1", Cocos2dxBind_cocos2d__Animation_create_1);
            binder.bind_static_method("Cocos2d", "Animation", "create_with_sprite_frames", Cocos2dxBind_cocos2d__Animation_create_with_sprite_frames);
            binder.bind_static_method("Cocos2d", "Animation", "create_2", Cocos2dxBind_cocos2d__Animation_create_2);
            binder.bind_custom_method("Cocos2d", "Animation", "add_sprite_frame", Cocos2dxBind_cocos2d__Animation_add_sprite_frame);
            binder.bind_custom_method("Cocos2d", "Animation", "add_sprite_frame_with_file", Cocos2dxBind_cocos2d__Animation_add_sprite_frame_with_file);
            binder.bind_custom_method("Cocos2d", "Animation", "add_sprite_frame_with_texture", Cocos2dxBind_cocos2d__Animation_add_sprite_frame_with_texture);
            binder.bind_custom_method("Cocos2d", "Animation", "get_total_delay_units", Cocos2dxBind_cocos2d__Animation_get_total_delay_units);
            binder.bind_custom_method("Cocos2d", "Animation", "set_delay_per_unit", Cocos2dxBind_cocos2d__Animation_set_delay_per_unit);
            binder.bind_custom_method("Cocos2d", "Animation", "get_delay_per_unit", Cocos2dxBind_cocos2d__Animation_get_delay_per_unit);
            binder.bind_custom_method("Cocos2d", "Animation", "get_duration", Cocos2dxBind_cocos2d__Animation_get_duration);
            binder.bind_custom_method("Cocos2d", "Animation", "get_frames", Cocos2dxBind_cocos2d__Animation_get_frames);
            binder.bind_custom_method("Cocos2d", "Animation", "set_frames", Cocos2dxBind_cocos2d__Animation_set_frames);
            binder.bind_custom_method("Cocos2d", "Animation", "get_restore_original_frame", Cocos2dxBind_cocos2d__Animation_get_restore_original_frame);
            binder.bind_custom_method("Cocos2d", "Animation", "set_restore_original_frame", Cocos2dxBind_cocos2d__Animation_set_restore_original_frame);
            binder.bind_custom_method("Cocos2d", "Animation", "get_loops", Cocos2dxBind_cocos2d__Animation_get_loops);
            binder.bind_custom_method("Cocos2d", "Animation", "set_loops", Cocos2dxBind_cocos2d__Animation_set_loops);
            binder.bind_custom_method("Cocos2d", "Animation", "clone", Cocos2dxBind_cocos2d__Animation_clone);
            binder.bind_custom_method("Cocos2d", "Animation", "init", Cocos2dxBind_cocos2d__Animation_init);
            binder.bind_custom_method("Cocos2d", "Animation", "init_with_sprite_frames", Cocos2dxBind_cocos2d__Animation_init_with_sprite_frames);
            binder.bind_custom_method("Cocos2d", "Animation", "init_with_animation_frames", Cocos2dxBind_cocos2d__Animation_init_with_animation_frames);
            binder.bind_custom_method("Cocos2d", "Animation", "retain_176", Cocos2dxBind_cocos2d__Animation_retain_176);
            binder.bind_custom_method("Cocos2d", "Animation", "release_176", Cocos2dxBind_cocos2d__Animation_release_176);
            binder.bind_custom_method("Cocos2d", "Animation", "autorelease_176", Cocos2dxBind_cocos2d__Animation_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Animation", "get_reference_count_176", Cocos2dxBind_cocos2d__Animation_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Animation", "_id=", Cocos2dxBind_cocos2d__Animation_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Animation", "_id", Cocos2dxBind_cocos2d__Animation_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Animation", "_lua_id=", Cocos2dxBind_cocos2d__Animation_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Animation", "_lua_id", Cocos2dxBind_cocos2d__Animation_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Animation", "_script_object=", Cocos2dxBind_cocos2d__Animation_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Animation", "_script_object", Cocos2dxBind_cocos2d__Animation_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "Action", "description_106", Cocos2dxBind_cocos2d__Action_description_106);
            binder.bind_custom_method("Cocos2d", "Action", "clone", Cocos2dxBind_cocos2d__Action_clone);
            binder.bind_custom_method("Cocos2d", "Action", "reverse", Cocos2dxBind_cocos2d__Action_reverse);
            binder.bind_custom_method("Cocos2d", "Action", "is_done_2", Cocos2dxBind_cocos2d__Action_is_done_2);
            binder.bind_custom_method("Cocos2d", "Action", "start_with_target_13", Cocos2dxBind_cocos2d__Action_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "Action", "stop_58", Cocos2dxBind_cocos2d__Action_stop_58);
            binder.bind_custom_method("Cocos2d", "Action", "step_2", Cocos2dxBind_cocos2d__Action_step_2);
            binder.bind_custom_method("Cocos2d", "Action", "update_9", Cocos2dxBind_cocos2d__Action_update_9);
            binder.bind_custom_method("Cocos2d", "Action", "get_target_106", Cocos2dxBind_cocos2d__Action_get_target_106);
            binder.bind_custom_method("Cocos2d", "Action", "set_target_106", Cocos2dxBind_cocos2d__Action_set_target_106);
            binder.bind_custom_method("Cocos2d", "Action", "get_original_target_106", Cocos2dxBind_cocos2d__Action_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Action", "set_original_target_106", Cocos2dxBind_cocos2d__Action_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Action", "get_tag_106", Cocos2dxBind_cocos2d__Action_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Action", "set_tag_106", Cocos2dxBind_cocos2d__Action_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Action", "get_flags_106", Cocos2dxBind_cocos2d__Action_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Action", "set_flags_106", Cocos2dxBind_cocos2d__Action_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Action", "retain_176", Cocos2dxBind_cocos2d__Action_retain_176);
            binder.bind_custom_method("Cocos2d", "Action", "release_176", Cocos2dxBind_cocos2d__Action_release_176);
            binder.bind_custom_method("Cocos2d", "Action", "autorelease_176", Cocos2dxBind_cocos2d__Action_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Action", "get_reference_count_176", Cocos2dxBind_cocos2d__Action_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Action", "_id=", Cocos2dxBind_cocos2d__Action_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Action", "_id", Cocos2dxBind_cocos2d__Action_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Action", "_lua_id=", Cocos2dxBind_cocos2d__Action_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Action", "_lua_id", Cocos2dxBind_cocos2d__Action_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Action", "_script_object=", Cocos2dxBind_cocos2d__Action_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Action", "_script_object", Cocos2dxBind_cocos2d__Action_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_duration_103", Cocos2dxBind_cocos2d__FiniteTimeAction_get_duration_103);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "set_duration_103", Cocos2dxBind_cocos2d__FiniteTimeAction_set_duration_103);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "reverse", Cocos2dxBind_cocos2d__FiniteTimeAction_reverse);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "clone", Cocos2dxBind_cocos2d__FiniteTimeAction_clone);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "description_106", Cocos2dxBind_cocos2d__FiniteTimeAction_description_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "is_done_2", Cocos2dxBind_cocos2d__FiniteTimeAction_is_done_2);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "start_with_target_13", Cocos2dxBind_cocos2d__FiniteTimeAction_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "stop_58", Cocos2dxBind_cocos2d__FiniteTimeAction_stop_58);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "step_2", Cocos2dxBind_cocos2d__FiniteTimeAction_step_2);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "update_9", Cocos2dxBind_cocos2d__FiniteTimeAction_update_9);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_target_106", Cocos2dxBind_cocos2d__FiniteTimeAction_get_target_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "set_target_106", Cocos2dxBind_cocos2d__FiniteTimeAction_set_target_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_original_target_106", Cocos2dxBind_cocos2d__FiniteTimeAction_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "set_original_target_106", Cocos2dxBind_cocos2d__FiniteTimeAction_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_tag_106", Cocos2dxBind_cocos2d__FiniteTimeAction_get_tag_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "set_tag_106", Cocos2dxBind_cocos2d__FiniteTimeAction_set_tag_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_flags_106", Cocos2dxBind_cocos2d__FiniteTimeAction_get_flags_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "set_flags_106", Cocos2dxBind_cocos2d__FiniteTimeAction_set_flags_106);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "retain_176", Cocos2dxBind_cocos2d__FiniteTimeAction_retain_176);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "release_176", Cocos2dxBind_cocos2d__FiniteTimeAction_release_176);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "autorelease_176", Cocos2dxBind_cocos2d__FiniteTimeAction_autorelease_176);
            binder.bind_custom_method("Cocos2d", "FiniteTimeAction", "get_reference_count_176", Cocos2dxBind_cocos2d__FiniteTimeAction_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Speed", "create", Cocos2dxBind_cocos2d__Speed_create);
            binder.bind_custom_method("Cocos2d", "Speed", "get_speed", Cocos2dxBind_cocos2d__Speed_get_speed);
            binder.bind_custom_method("Cocos2d", "Speed", "set_speed", Cocos2dxBind_cocos2d__Speed_set_speed);
            binder.bind_custom_method("Cocos2d", "Speed", "set_inner_action", Cocos2dxBind_cocos2d__Speed_set_inner_action);
            binder.bind_custom_method("Cocos2d", "Speed", "get_inner_action", Cocos2dxBind_cocos2d__Speed_get_inner_action);
            binder.bind_custom_method("Cocos2d", "Speed", "clone", Cocos2dxBind_cocos2d__Speed_clone);
            binder.bind_custom_method("Cocos2d", "Speed", "reverse", Cocos2dxBind_cocos2d__Speed_reverse);
            binder.bind_custom_method("Cocos2d", "Speed", "start_with_target", Cocos2dxBind_cocos2d__Speed_start_with_target);
            binder.bind_custom_method("Cocos2d", "Speed", "stop", Cocos2dxBind_cocos2d__Speed_stop);
            binder.bind_custom_method("Cocos2d", "Speed", "step", Cocos2dxBind_cocos2d__Speed_step);
            binder.bind_custom_method("Cocos2d", "Speed", "is_done", Cocos2dxBind_cocos2d__Speed_is_done);
            binder.bind_custom_method("Cocos2d", "Speed", "init_with_action", Cocos2dxBind_cocos2d__Speed_init_with_action);
            binder.bind_custom_method("Cocos2d", "Speed", "description_106", Cocos2dxBind_cocos2d__Speed_description_106);
            binder.bind_custom_method("Cocos2d", "Speed", "update_9", Cocos2dxBind_cocos2d__Speed_update_9);
            binder.bind_custom_method("Cocos2d", "Speed", "get_target_106", Cocos2dxBind_cocos2d__Speed_get_target_106);
            binder.bind_custom_method("Cocos2d", "Speed", "set_target_106", Cocos2dxBind_cocos2d__Speed_set_target_106);
            binder.bind_custom_method("Cocos2d", "Speed", "get_original_target_106", Cocos2dxBind_cocos2d__Speed_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Speed", "set_original_target_106", Cocos2dxBind_cocos2d__Speed_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Speed", "get_tag_106", Cocos2dxBind_cocos2d__Speed_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Speed", "set_tag_106", Cocos2dxBind_cocos2d__Speed_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Speed", "get_flags_106", Cocos2dxBind_cocos2d__Speed_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Speed", "set_flags_106", Cocos2dxBind_cocos2d__Speed_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Speed", "retain_176", Cocos2dxBind_cocos2d__Speed_retain_176);
            binder.bind_custom_method("Cocos2d", "Speed", "release_176", Cocos2dxBind_cocos2d__Speed_release_176);
            binder.bind_custom_method("Cocos2d", "Speed", "autorelease_176", Cocos2dxBind_cocos2d__Speed_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Speed", "get_reference_count_176", Cocos2dxBind_cocos2d__Speed_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Follow", "create", Cocos2dxBind_cocos2d__Follow_create);
            binder.bind_custom_method("Cocos2d", "Follow", "is_boundary_set", Cocos2dxBind_cocos2d__Follow_is_boundary_set);
            binder.bind_custom_method("Cocos2d", "Follow", "set_boundary_set", Cocos2dxBind_cocos2d__Follow_set_boundary_set);
            binder.bind_custom_method("Cocos2d", "Follow", "clone", Cocos2dxBind_cocos2d__Follow_clone);
            binder.bind_custom_method("Cocos2d", "Follow", "reverse", Cocos2dxBind_cocos2d__Follow_reverse);
            binder.bind_custom_method("Cocos2d", "Follow", "step", Cocos2dxBind_cocos2d__Follow_step);
            binder.bind_custom_method("Cocos2d", "Follow", "is_done", Cocos2dxBind_cocos2d__Follow_is_done);
            binder.bind_custom_method("Cocos2d", "Follow", "stop", Cocos2dxBind_cocos2d__Follow_stop);
            binder.bind_custom_method("Cocos2d", "Follow", "init_with_target", Cocos2dxBind_cocos2d__Follow_init_with_target);
            binder.bind_custom_method("Cocos2d", "Follow", "description_106", Cocos2dxBind_cocos2d__Follow_description_106);
            binder.bind_custom_method("Cocos2d", "Follow", "start_with_target_13", Cocos2dxBind_cocos2d__Follow_start_with_target_13);
            binder.bind_custom_method("Cocos2d", "Follow", "update_9", Cocos2dxBind_cocos2d__Follow_update_9);
            binder.bind_custom_method("Cocos2d", "Follow", "get_target_106", Cocos2dxBind_cocos2d__Follow_get_target_106);
            binder.bind_custom_method("Cocos2d", "Follow", "set_target_106", Cocos2dxBind_cocos2d__Follow_set_target_106);
            binder.bind_custom_method("Cocos2d", "Follow", "get_original_target_106", Cocos2dxBind_cocos2d__Follow_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Follow", "set_original_target_106", Cocos2dxBind_cocos2d__Follow_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Follow", "get_tag_106", Cocos2dxBind_cocos2d__Follow_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Follow", "set_tag_106", Cocos2dxBind_cocos2d__Follow_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Follow", "get_flags_106", Cocos2dxBind_cocos2d__Follow_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Follow", "set_flags_106", Cocos2dxBind_cocos2d__Follow_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Follow", "retain_176", Cocos2dxBind_cocos2d__Follow_retain_176);
            binder.bind_custom_method("Cocos2d", "Follow", "release_176", Cocos2dxBind_cocos2d__Follow_release_176);
            binder.bind_custom_method("Cocos2d", "Follow", "autorelease_176", Cocos2dxBind_cocos2d__Follow_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Follow", "get_reference_count_176", Cocos2dxBind_cocos2d__Follow_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_elapsed_90", Cocos2dxBind_cocos2d__ActionInterval_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionInterval_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__ActionInterval_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "is_done_87", Cocos2dxBind_cocos2d__ActionInterval_is_done_87);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "step_88", Cocos2dxBind_cocos2d__ActionInterval_step_88);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "start_with_target_2", Cocos2dxBind_cocos2d__ActionInterval_start_with_target_2);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "reverse", Cocos2dxBind_cocos2d__ActionInterval_reverse);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "clone", Cocos2dxBind_cocos2d__ActionInterval_clone);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "init_with_duration_52", Cocos2dxBind_cocos2d__ActionInterval_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_duration_103", Cocos2dxBind_cocos2d__ActionInterval_get_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_duration_103", Cocos2dxBind_cocos2d__ActionInterval_set_duration_103);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "description_106", Cocos2dxBind_cocos2d__ActionInterval_description_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "stop_58", Cocos2dxBind_cocos2d__ActionInterval_stop_58);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "update_9", Cocos2dxBind_cocos2d__ActionInterval_update_9);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_target_106", Cocos2dxBind_cocos2d__ActionInterval_get_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_target_106", Cocos2dxBind_cocos2d__ActionInterval_set_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_original_target_106", Cocos2dxBind_cocos2d__ActionInterval_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_original_target_106", Cocos2dxBind_cocos2d__ActionInterval_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_tag_106", Cocos2dxBind_cocos2d__ActionInterval_get_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_tag_106", Cocos2dxBind_cocos2d__ActionInterval_set_tag_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_flags_106", Cocos2dxBind_cocos2d__ActionInterval_get_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "set_flags_106", Cocos2dxBind_cocos2d__ActionInterval_set_flags_106);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "retain_176", Cocos2dxBind_cocos2d__ActionInterval_retain_176);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "release_176", Cocos2dxBind_cocos2d__ActionInterval_release_176);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "autorelease_176", Cocos2dxBind_cocos2d__ActionInterval_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ActionInterval", "get_reference_count_176", Cocos2dxBind_cocos2d__ActionInterval_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Sequence", "create_1", Cocos2dxBind_cocos2d__Sequence_create_1);
            binder.bind_static_method("Cocos2d", "Sequence", "create_2", Cocos2dxBind_cocos2d__Sequence_create_2);
            binder.bind_static_method("Cocos2d", "Sequence", "create_with_two_actions", Cocos2dxBind_cocos2d__Sequence_create_with_two_actions);
            binder.bind_custom_method("Cocos2d", "Sequence", "clone", Cocos2dxBind_cocos2d__Sequence_clone);
            binder.bind_custom_method("Cocos2d", "Sequence", "reverse", Cocos2dxBind_cocos2d__Sequence_reverse);
            binder.bind_custom_method("Cocos2d", "Sequence", "start_with_target", Cocos2dxBind_cocos2d__Sequence_start_with_target);
            binder.bind_custom_method("Cocos2d", "Sequence", "stop", Cocos2dxBind_cocos2d__Sequence_stop);
            binder.bind_custom_method("Cocos2d", "Sequence", "update", Cocos2dxBind_cocos2d__Sequence_update);
            binder.bind_custom_method("Cocos2d", "Sequence", "init_with_two_actions", Cocos2dxBind_cocos2d__Sequence_init_with_two_actions);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_elapsed_90", Cocos2dxBind_cocos2d__Sequence_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Sequence_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Sequence_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Sequence", "is_done_87", Cocos2dxBind_cocos2d__Sequence_is_done_87);
            binder.bind_custom_method("Cocos2d", "Sequence", "step_88", Cocos2dxBind_cocos2d__Sequence_step_88);
            binder.bind_custom_method("Cocos2d", "Sequence", "init_with_duration_52", Cocos2dxBind_cocos2d__Sequence_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_duration_103", Cocos2dxBind_cocos2d__Sequence_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_duration_103", Cocos2dxBind_cocos2d__Sequence_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Sequence", "description_106", Cocos2dxBind_cocos2d__Sequence_description_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_target_106", Cocos2dxBind_cocos2d__Sequence_get_target_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_target_106", Cocos2dxBind_cocos2d__Sequence_set_target_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_original_target_106", Cocos2dxBind_cocos2d__Sequence_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_original_target_106", Cocos2dxBind_cocos2d__Sequence_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_tag_106", Cocos2dxBind_cocos2d__Sequence_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_tag_106", Cocos2dxBind_cocos2d__Sequence_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_flags_106", Cocos2dxBind_cocos2d__Sequence_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "set_flags_106", Cocos2dxBind_cocos2d__Sequence_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Sequence", "retain_176", Cocos2dxBind_cocos2d__Sequence_retain_176);
            binder.bind_custom_method("Cocos2d", "Sequence", "release_176", Cocos2dxBind_cocos2d__Sequence_release_176);
            binder.bind_custom_method("Cocos2d", "Sequence", "autorelease_176", Cocos2dxBind_cocos2d__Sequence_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Sequence", "get_reference_count_176", Cocos2dxBind_cocos2d__Sequence_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Repeat", "create", Cocos2dxBind_cocos2d__Repeat_create);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_inner_action", Cocos2dxBind_cocos2d__Repeat_set_inner_action);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_inner_action", Cocos2dxBind_cocos2d__Repeat_get_inner_action);
            binder.bind_custom_method("Cocos2d", "Repeat", "clone", Cocos2dxBind_cocos2d__Repeat_clone);
            binder.bind_custom_method("Cocos2d", "Repeat", "reverse", Cocos2dxBind_cocos2d__Repeat_reverse);
            binder.bind_custom_method("Cocos2d", "Repeat", "start_with_target", Cocos2dxBind_cocos2d__Repeat_start_with_target);
            binder.bind_custom_method("Cocos2d", "Repeat", "stop", Cocos2dxBind_cocos2d__Repeat_stop);
            binder.bind_custom_method("Cocos2d", "Repeat", "update", Cocos2dxBind_cocos2d__Repeat_update);
            binder.bind_custom_method("Cocos2d", "Repeat", "is_done", Cocos2dxBind_cocos2d__Repeat_is_done);
            binder.bind_custom_method("Cocos2d", "Repeat", "init_with_action", Cocos2dxBind_cocos2d__Repeat_init_with_action);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_elapsed_90", Cocos2dxBind_cocos2d__Repeat_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Repeat_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Repeat_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Repeat", "step_88", Cocos2dxBind_cocos2d__Repeat_step_88);
            binder.bind_custom_method("Cocos2d", "Repeat", "init_with_duration_52", Cocos2dxBind_cocos2d__Repeat_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_duration_103", Cocos2dxBind_cocos2d__Repeat_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_duration_103", Cocos2dxBind_cocos2d__Repeat_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Repeat", "description_106", Cocos2dxBind_cocos2d__Repeat_description_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_target_106", Cocos2dxBind_cocos2d__Repeat_get_target_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_target_106", Cocos2dxBind_cocos2d__Repeat_set_target_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_original_target_106", Cocos2dxBind_cocos2d__Repeat_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_original_target_106", Cocos2dxBind_cocos2d__Repeat_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_tag_106", Cocos2dxBind_cocos2d__Repeat_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_tag_106", Cocos2dxBind_cocos2d__Repeat_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_flags_106", Cocos2dxBind_cocos2d__Repeat_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "set_flags_106", Cocos2dxBind_cocos2d__Repeat_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Repeat", "retain_176", Cocos2dxBind_cocos2d__Repeat_retain_176);
            binder.bind_custom_method("Cocos2d", "Repeat", "release_176", Cocos2dxBind_cocos2d__Repeat_release_176);
            binder.bind_custom_method("Cocos2d", "Repeat", "autorelease_176", Cocos2dxBind_cocos2d__Repeat_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Repeat", "get_reference_count_176", Cocos2dxBind_cocos2d__Repeat_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "RepeatForever", "create", Cocos2dxBind_cocos2d__RepeatForever_create);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_inner_action", Cocos2dxBind_cocos2d__RepeatForever_set_inner_action);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_inner_action", Cocos2dxBind_cocos2d__RepeatForever_get_inner_action);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "clone", Cocos2dxBind_cocos2d__RepeatForever_clone);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "reverse", Cocos2dxBind_cocos2d__RepeatForever_reverse);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "start_with_target", Cocos2dxBind_cocos2d__RepeatForever_start_with_target);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "step", Cocos2dxBind_cocos2d__RepeatForever_step);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "is_done", Cocos2dxBind_cocos2d__RepeatForever_is_done);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "init_with_action", Cocos2dxBind_cocos2d__RepeatForever_init_with_action);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_elapsed_90", Cocos2dxBind_cocos2d__RepeatForever_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__RepeatForever_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__RepeatForever_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "init_with_duration_52", Cocos2dxBind_cocos2d__RepeatForever_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_duration_103", Cocos2dxBind_cocos2d__RepeatForever_get_duration_103);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_duration_103", Cocos2dxBind_cocos2d__RepeatForever_set_duration_103);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "description_106", Cocos2dxBind_cocos2d__RepeatForever_description_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "stop_58", Cocos2dxBind_cocos2d__RepeatForever_stop_58);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "update_9", Cocos2dxBind_cocos2d__RepeatForever_update_9);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_target_106", Cocos2dxBind_cocos2d__RepeatForever_get_target_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_target_106", Cocos2dxBind_cocos2d__RepeatForever_set_target_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_original_target_106", Cocos2dxBind_cocos2d__RepeatForever_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_original_target_106", Cocos2dxBind_cocos2d__RepeatForever_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_tag_106", Cocos2dxBind_cocos2d__RepeatForever_get_tag_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_tag_106", Cocos2dxBind_cocos2d__RepeatForever_set_tag_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_flags_106", Cocos2dxBind_cocos2d__RepeatForever_get_flags_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "set_flags_106", Cocos2dxBind_cocos2d__RepeatForever_set_flags_106);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "retain_176", Cocos2dxBind_cocos2d__RepeatForever_retain_176);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "release_176", Cocos2dxBind_cocos2d__RepeatForever_release_176);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "autorelease_176", Cocos2dxBind_cocos2d__RepeatForever_autorelease_176);
            binder.bind_custom_method("Cocos2d", "RepeatForever", "get_reference_count_176", Cocos2dxBind_cocos2d__RepeatForever_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Spawn", "create_1", Cocos2dxBind_cocos2d__Spawn_create_1);
            binder.bind_static_method("Cocos2d", "Spawn", "create_2", Cocos2dxBind_cocos2d__Spawn_create_2);
            binder.bind_static_method("Cocos2d", "Spawn", "create_with_two_actions", Cocos2dxBind_cocos2d__Spawn_create_with_two_actions);
            binder.bind_custom_method("Cocos2d", "Spawn", "clone", Cocos2dxBind_cocos2d__Spawn_clone);
            binder.bind_custom_method("Cocos2d", "Spawn", "reverse", Cocos2dxBind_cocos2d__Spawn_reverse);
            binder.bind_custom_method("Cocos2d", "Spawn", "start_with_target", Cocos2dxBind_cocos2d__Spawn_start_with_target);
            binder.bind_custom_method("Cocos2d", "Spawn", "stop", Cocos2dxBind_cocos2d__Spawn_stop);
            binder.bind_custom_method("Cocos2d", "Spawn", "update", Cocos2dxBind_cocos2d__Spawn_update);
            binder.bind_custom_method("Cocos2d", "Spawn", "init_with_two_actions", Cocos2dxBind_cocos2d__Spawn_init_with_two_actions);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_elapsed_90", Cocos2dxBind_cocos2d__Spawn_get_elapsed_90);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_amplitude_rate_85", Cocos2dxBind_cocos2d__Spawn_set_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_amplitude_rate_85", Cocos2dxBind_cocos2d__Spawn_get_amplitude_rate_85);
            binder.bind_custom_method("Cocos2d", "Spawn", "is_done_87", Cocos2dxBind_cocos2d__Spawn_is_done_87);
            binder.bind_custom_method("Cocos2d", "Spawn", "step_88", Cocos2dxBind_cocos2d__Spawn_step_88);
            binder.bind_custom_method("Cocos2d", "Spawn", "init_with_duration_52", Cocos2dxBind_cocos2d__Spawn_init_with_duration_52);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_duration_103", Cocos2dxBind_cocos2d__Spawn_get_duration_103);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_duration_103", Cocos2dxBind_cocos2d__Spawn_set_duration_103);
            binder.bind_custom_method("Cocos2d", "Spawn", "description_106", Cocos2dxBind_cocos2d__Spawn_description_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_target_106", Cocos2dxBind_cocos2d__Spawn_get_target_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_target_106", Cocos2dxBind_cocos2d__Spawn_set_target_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_original_target_106", Cocos2dxBind_cocos2d__Spawn_get_original_target_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_original_target_106", Cocos2dxBind_cocos2d__Spawn_set_original_target_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_tag_106", Cocos2dxBind_cocos2d__Spawn_get_tag_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_tag_106", Cocos2dxBind_cocos2d__Spawn_set_tag_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_flags_106", Cocos2dxBind_cocos2d__Spawn_get_flags_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "set_flags_106", Cocos2dxBind_cocos2d__Spawn_set_flags_106);
            binder.bind_custom_method("Cocos2d", "Spawn", "retain_176", Cocos2dxBind_cocos2d__Spawn_retain_176);
            binder.bind_custom_method("Cocos2d", "Spawn", "release_176", Cocos2dxBind_cocos2d__Spawn_release_176);
            binder.bind_custom_method("Cocos2d", "Spawn", "autorelease_176", Cocos2dxBind_cocos2d__Spawn_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Spawn", "get_reference_count_176", Cocos2dxBind_cocos2d__Spawn_get_reference_count_176);

          }

    }
}
