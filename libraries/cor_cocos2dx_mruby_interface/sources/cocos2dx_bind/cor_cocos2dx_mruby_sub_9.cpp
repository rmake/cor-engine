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
        
        void* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ParticleSystemQuad_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ParticleSystemQuad_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystemQuad_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ParticleSystemQuad_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ParticleSystemQuad_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ParticleSystemQuad_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> Cocos2dxBind_cocos2d__ProtectedNode_create()
        {

            return cocos2d::ProtectedNode::create();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_7(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addProtectedChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addProtectedChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProtectedNode_get_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            return c->getProtectedChildByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0, bool a1)
        {

            c->removeProtectedChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->removeAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_all_protected_children_with_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->removeAllProtectedChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_reorder_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_sort_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->sortAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_on_enter_transition_did_finish_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_on_exit_transition_did_start_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_displayed_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_displayed_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_disable_cascade_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->disableCascadeColor();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_disable_cascade_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->disableCascadeOpacity();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_camera_mask_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        std::string Cocos2dxBind_cocos2d__ProtectedNode_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ProtectedNode_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ProtectedNode_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ProtectedNode_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProtectedNode_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProtectedNode_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ProtectedNode_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ProtectedNode_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ProtectedNode_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ProtectedNode_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ProtectedNode_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ProtectedNode_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ProtectedNode_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ProtectedNode_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ProtectedNode_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ProtectedNode_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ProtectedNode_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ProtectedNode_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ProtectedNode_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ProtectedNode_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ProtectedNode_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ProtectedNode_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ProtectedNode_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ProtectedNode_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ProtectedNode_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ProtectedNode_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ProtectedNode_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ProtectedNode_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ProtectedNode_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ProtectedNode_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ProtectedNode_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ProtectedNode_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ProtectedNode_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ProtectedNode_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ProtectedNode_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ProtectedNode_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ProtectedNode_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getCameraMask();
        }

        bool Cocos2dxBind_cocos2d__ProtectedNode_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ProtectedNode_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ProtectedNode_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ProtectedNode_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> Cocos2dxBind_cocos2d__RenderTexture_create_1(int a0, int a1, int a2, unsigned int a3)
        {

            return cocos2d::RenderTexture::create(a0, a1, (cocos2d::Texture2D::PixelFormat)a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> Cocos2dxBind_cocos2d__RenderTexture_create_2(int a0, int a1, int a2)
        {

            return cocos2d::RenderTexture::create(a0, a1, (cocos2d::Texture2D::PixelFormat)a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> Cocos2dxBind_cocos2d__RenderTexture_create_3(int a0, int a1)
        {

            return cocos2d::RenderTexture::create(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_begin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->begin();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1, float a2, float a3)
        {

            c->beginWithClear(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1, float a2, float a3, float a4)
        {

            c->beginWithClear(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1, float a2, float a3, float a4, int a5)
        {

            c->beginWithClear(a0, a1, a2, a3, a4, a5);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_end_to_lua(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->endToLua();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_end(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->end();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_clear(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1, float a2, float a3)
        {

            c->clear(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_clear_depth(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->clearDepth(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_clear_stencil(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->clearStencil(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> Cocos2dxBind_cocos2d__RenderTexture_new_image(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            return c->newImage(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_save_to_file_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0, bool a1, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture>, const std::string &)> a2)
        {

            return c->saveToFile(a0, a1, 
              [=](cocos2d::RenderTexture * b0, const std::string & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_save_to_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0, int a1, bool a2, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture>, const std::string &)> a3)
        {

            return c->saveToFile(a0, (cocos2d::Image::Format)a1, a2, 
              [=](cocos2d::RenderTexture * b0, const std::string & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a3.is_living()) {
                          a3.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_listen_to_background(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> a0)
        {

            c->listenToBackground(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_listen_to_foreground(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> a0)
        {

            c->listenToForeground(a0.get());
        }

        unsigned int Cocos2dxBind_cocos2d__RenderTexture_get_clear_flags(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getClearFlags();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_clear_flags(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, unsigned int a0)
        {

            c->setClearFlags(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__RenderTexture_get_clear_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getClearColor();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_clear_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Color4F a0)
        {

            c->setClearColor(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_clear_depth(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getClearDepth();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_clear_depth(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setClearDepth(a0);
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_clear_stencil(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getClearStencil();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_clear_stencil(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->setClearStencil(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_auto_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isAutoDraw();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_auto_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setAutoDraw(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__RenderTexture_get_sprite(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getSprite();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_sprite(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            c->setSprite(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_keep_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setKeepMatrix(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_virtual_viewport(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0, cocos2d::Rect a1, cocos2d::Rect a2)
        {

            c->setVirtualViewport(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_init_with_width_and_height_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0, int a1, int a2)
        {

            return c->initWithWidthAndHeight(a0, a1, (cocos2d::Texture2D::PixelFormat)a2);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_init_with_width_and_height_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0, int a1, int a2, unsigned int a3)
        {

            return c->initWithWidthAndHeight(a0, a1, (cocos2d::Texture2D::PixelFormat)a2, a3);
        }

        std::string Cocos2dxBind_cocos2d__RenderTexture_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__RenderTexture_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__RenderTexture_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__RenderTexture_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__RenderTexture_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__RenderTexture_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RenderTexture_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RenderTexture_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__RenderTexture_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__RenderTexture_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__RenderTexture_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__RenderTexture_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__RenderTexture_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__RenderTexture_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RenderTexture_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__RenderTexture_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__RenderTexture_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__RenderTexture_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__RenderTexture_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__RenderTexture_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__RenderTexture_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__RenderTexture_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__RenderTexture_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__RenderTexture_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__RenderTexture_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__RenderTexture_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__RenderTexture_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__RenderTexture_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__RenderTexture_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__RenderTexture_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__RenderTexture_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__RenderTexture_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__RenderTexture_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__RenderTexture_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__RenderTexture_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__RenderTexture_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__RenderTexture_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__RenderTexture_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__RenderTexture_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__RenderTexture_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__RenderTexture_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__RenderTexture_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__RenderTexture_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__RenderTexture_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__RenderTexture_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__RenderTexture_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__RenderTexture_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__RenderTexture_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__RenderTexture_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> Cocos2dxBind_cocos2d__Camera_create_perspective(float a0, float a1, float a2, float a3)
        {

            return cocos2d::Camera::createPerspective(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> Cocos2dxBind_cocos2d__Camera_create_orthographic(float a0, float a1, float a2, float a3)
        {

            return cocos2d::Camera::createOrthographic(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> Cocos2dxBind_cocos2d__Camera_create()
        {

            return cocos2d::Camera::create();
        }

        cocos2d::Camera::Type Cocos2dxBind_cocos2d__Camera_get_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getType();
        }

        cocos2d::CameraFlag Cocos2dxBind_cocos2d__Camera_get_camera_flag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getCameraFlag();
        }

        void Cocos2dxBind_cocos2d__Camera_set_camera_flag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->setCameraFlag((cocos2d::CameraFlag)a0);
        }

        void Cocos2dxBind_cocos2d__Camera_look_at(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0, cocos2d::Vec3 a1)
        {

            c->lookAt(a0, a1);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_projection_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getProjectionMatrix();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_view_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getViewMatrix();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_view_projection_matrix(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getViewProjectionMatrix();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_project(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            return c->project(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_project_gl(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            return c->projectGL(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Camera_unproject_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            return c->unproject(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Camera_unproject_gl_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            return c->unprojectGL(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_visible_in_frustum(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, const cocos2d::AABB * a0)
        {

            return c->isVisibleInFrustum(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_depth_in_view(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Mat4 a0)
        {

            return c->getDepthInView(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_set_depth(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, signed char a0)
        {

            c->setDepth(a0);
        }

        signed char Cocos2dxBind_cocos2d__Camera_get_depth(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getDepth();
        }

        int Cocos2dxBind_cocos2d__Camera_get_render_order(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRenderOrder();
        }

        float Cocos2dxBind_cocos2d__Camera_get_far_plane(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getFarPlane();
        }

        float Cocos2dxBind_cocos2d__Camera_get_near_plane(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNearPlane();
        }

        void Cocos2dxBind_cocos2d__Camera_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Camera_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->onExit();
        }

        const cocos2d::Camera* Cocos2dxBind_cocos2d__Camera_get_visiting_camera()
        {

            return const_cast<const cocos2d::Camera* >(cocos2d::Camera::getVisitingCamera());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> Cocos2dxBind_cocos2d__Camera_get_default_camera()
        {

            return cocos2d::Camera::getDefaultCamera();
        }

        void Cocos2dxBind_cocos2d__Camera_clear_background(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->clearBackground();
        }

        void Cocos2dxBind_cocos2d__Camera_apply(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->apply();
        }

        void Cocos2dxBind_cocos2d__Camera_set_frame_buffer_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::experimental::FrameBuffer * a0)
        {

            c->setFrameBufferObject(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_set_viewport(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::experimental::Viewport a0)
        {

            c->setViewport(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_view_projection_updated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isViewProjectionUpdated();
        }

        void Cocos2dxBind_cocos2d__Camera_set_background_brush(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::CameraBackgroundBrush * a0)
        {

            c->setBackgroundBrush(a0);
        }

        cocos2d::CameraBackgroundBrush* Cocos2dxBind_cocos2d__Camera_get_background_brush(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getBackgroundBrush();
        }

        void Cocos2dxBind_cocos2d__Camera_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Camera_set_scene(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> a0)
        {

            c->setScene(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_set_additional_projection(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Mat4 a0)
        {

            c->setAdditionalProjection(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_init_default(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->initDefault();
        }

        bool Cocos2dxBind_cocos2d__Camera_init_perspective(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0, float a1, float a2, float a3)
        {

            return c->initPerspective(a0, a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__Camera_init_orthographic(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0, float a1, float a2, float a3)
        {

            return c->initOrthographic(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__Camera_apply_frame_buffer_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->applyFrameBufferObject();
        }

        void Cocos2dxBind_cocos2d__Camera_apply_viewport(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->applyViewport();
        }

        cocos2d::experimental::Viewport Cocos2dxBind_cocos2d__Camera_get_default_viewport()
        {

            return cocos2d::Camera::getDefaultViewport();
        }

        void Cocos2dxBind_cocos2d__Camera_set_default_viewport(cocos2d::experimental::Viewport a0)
        {

            cocos2d::Camera::setDefaultViewport(a0);
        }

        std::string Cocos2dxBind_cocos2d__Camera_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__Camera_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Camera_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Camera_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Camera_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Camera_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Camera_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Camera_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Camera_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Camera_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Camera_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Camera_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Camera_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Camera_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Camera_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Camera_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Camera_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Camera_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Camera_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Camera_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Camera_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Camera_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Camera_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Camera_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Camera_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Camera_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Camera_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Camera_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Camera_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Camera_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Camera_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__Camera_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__Camera_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Camera_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Camera_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Camera_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Camera_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Camera_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Camera_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__Camera_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Camera_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Camera_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Camera_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Camera_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Camera_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Camera_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Camera_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Camera_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Camera_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Camera_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Camera_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Camera_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__Camera_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Camera_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__Camera_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Camera_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Camera_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Camera_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__Camera_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Camera_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Camera_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Camera_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Camera_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Camera_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Camera_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Camera_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Camera_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Camera_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Camera_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Camera_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__Camera_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Camera_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Camera_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Camera_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Camera_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Camera_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Camera_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Camera_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__Camera_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__Camera_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__Camera_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Camera_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Camera_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Camera_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Camera_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Camera_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Camera_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Camera_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Camera_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Camera_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Camera_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Camera_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Camera_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Camera_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Camera_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Camera_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Camera_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Camera_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Camera_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Camera_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Camera_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Camera_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Camera_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Camera_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Camera_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Camera_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Camera_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Camera_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Camera_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Camera_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Camera_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__Camera_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__Camera_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Camera_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__Camera_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__Camera_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Camera_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Camera_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Camera_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> c)
        {

            return c->getReferenceCount();
        }

        cocos2d::LightType Cocos2dxBind_cocos2d__BaseLight_get_light_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getLightType();
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getIntensity();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setIntensity(a0);
        }

        cocos2d::LightFlag Cocos2dxBind_cocos2d__BaseLight_get_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getLightFlag();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->setLightFlag((cocos2d::LightFlag)a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__BaseLight_on_enter_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__BaseLight_on_exit_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->onExit();
        }

        std::string Cocos2dxBind_cocos2d__BaseLight_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__BaseLight_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__BaseLight_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__BaseLight_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__BaseLight_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__BaseLight_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__BaseLight_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->setRotationSkewY(a0);
        }



        
        bool Cocos2dxBind_StopGrid_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ReuseGrid_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Waves3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FlipX3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FlipY3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Lens3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Ripple3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Shaky3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Liquid_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Waves_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Twirl_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionManager_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> c)
        {
            return c.is_valid();
        }
        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_ActionManager_create()
        {
            return new cocos2d::ActionManager();
        }
        bool Cocos2dxBind_PageTurn3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ProgressTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ProgressFromTo_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ShakyTiles3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_9(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "get_restitution", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_restitution);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "get_friction", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_friction);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "get_surface_velocity", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_get_surface_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "set_restitution", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_restitution);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "set_friction", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_friction);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "set_surface_velocity", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_set_surface_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPreSolve", "ignore", Cocos2dxBind_cocos2d__PhysicsContactPreSolve_ignore);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPostSolve", "get_restitution", Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_restitution);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPostSolve", "get_friction", Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_friction);
            binder.bind_custom_method("Cocos2d", "PhysicsContactPostSolve", "get_surface_velocity", Cocos2dxBind_cocos2d__PhysicsContactPostSolve_get_surface_velocity);
            binder.bind_static_method("Cocos2d", "EventListenerPhysicsContact", "create", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_create);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "check_available_4", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_check_available_4);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "clone", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "retain_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "release_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "on_contact_begin=", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_begin);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "on_contact_pre_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_pre_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "on_contact_post_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_post_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "on_contact_separate=", Cocos2dxBind_cocos2d__EventListenerPhysicsContact_accessor_set_on_contact_separate);
            binder.bind_static_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "create", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_create);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "hit_test", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_hit_test);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "clone", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "check_available_4", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_check_available_4);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "retain_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "release_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "on_contact_begin=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_begin);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "on_contact_pre_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_pre_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "on_contact_post_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_post_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "on_contact_separate=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithBodies_accessor_set_on_contact_separate);
            binder.bind_static_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "create", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_create);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "hit_test", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_hit_test);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "clone", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "check_available_4", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_check_available_4);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "retain_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "release_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "on_contact_begin=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_begin);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "on_contact_pre_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_pre_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "on_contact_post_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_post_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "on_contact_separate=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithShapes_accessor_set_on_contact_separate);
            binder.bind_static_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "create", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_create);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "hit_test", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_hit_test);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "clone", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_clone);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "check_available_4", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_check_available_4);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "set_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_set_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "is_enabled_9", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_is_enabled_9);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "retain_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_retain_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "release_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_release_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "autorelease_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "get_reference_count_176", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "on_contact_begin=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_begin);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "on_contact_pre_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_pre_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "on_contact_post_solve=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_post_solve);
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "on_contact_separate=", Cocos2dxBind_cocos2d__EventListenerPhysicsContactWithGroup_accessor_set_on_contact_separate);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "get_body_a_2", Cocos2dxBind_cocos2d__PhysicsJoint_get_body_a_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "get_body_b_2", Cocos2dxBind_cocos2d__PhysicsJoint_get_body_b_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "get_world_2", Cocos2dxBind_cocos2d__PhysicsJoint_get_world_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "get_tag_2", Cocos2dxBind_cocos2d__PhysicsJoint_get_tag_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "set_tag_2", Cocos2dxBind_cocos2d__PhysicsJoint_set_tag_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "is_enabled_2", Cocos2dxBind_cocos2d__PhysicsJoint_is_enabled_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "set_enable_2", Cocos2dxBind_cocos2d__PhysicsJoint_set_enable_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "is_collision_enabled_2", Cocos2dxBind_cocos2d__PhysicsJoint_is_collision_enabled_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "set_collision_enable_2", Cocos2dxBind_cocos2d__PhysicsJoint_set_collision_enable_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "remove_form_world_2", Cocos2dxBind_cocos2d__PhysicsJoint_remove_form_world_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "set_max_force_2", Cocos2dxBind_cocos2d__PhysicsJoint_set_max_force_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJoint", "get_max_force_2", Cocos2dxBind_cocos2d__PhysicsJoint_get_max_force_2);
            binder.bind_static_method("Cocos2d", "PhysicsJointFixed", "construct", Cocos2dxBind_cocos2d__PhysicsJointFixed_construct);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "create_constraints", Cocos2dxBind_cocos2d__PhysicsJointFixed_create_constraints);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "get_body_a_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_get_body_a_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "get_body_b_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_get_body_b_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "get_world_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_get_world_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "get_tag_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_get_tag_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "set_tag_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_set_tag_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "is_enabled_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_is_enabled_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "set_enable_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_set_enable_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "is_collision_enabled_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_is_collision_enabled_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "set_collision_enable_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_set_collision_enable_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "remove_form_world_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_remove_form_world_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "set_max_force_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_set_max_force_2);
            binder.bind_custom_method("Cocos2d", "PhysicsJointFixed", "get_max_force_2", Cocos2dxBind_cocos2d__PhysicsJointFixed_get_max_force_2);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "add_joint", Cocos2dxBind_cocos2d__PhysicsWorld_add_joint);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "remove_joint", Cocos2dxBind_cocos2d__PhysicsWorld_remove_joint);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "remove_all_joints", Cocos2dxBind_cocos2d__PhysicsWorld_remove_all_joints);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "remove_body_1", Cocos2dxBind_cocos2d__PhysicsWorld_remove_body_1);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "remove_body_2", Cocos2dxBind_cocos2d__PhysicsWorld_remove_body_2);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "remove_all_bodies", Cocos2dxBind_cocos2d__PhysicsWorld_remove_all_bodies);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "ray_cast", Cocos2dxBind_cocos2d__PhysicsWorld_ray_cast);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "query_rect", Cocos2dxBind_cocos2d__PhysicsWorld_query_rect);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "query_point", Cocos2dxBind_cocos2d__PhysicsWorld_query_point);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_shapes", Cocos2dxBind_cocos2d__PhysicsWorld_get_shapes);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_shape", Cocos2dxBind_cocos2d__PhysicsWorld_get_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_all_bodies", Cocos2dxBind_cocos2d__PhysicsWorld_get_all_bodies);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_body", Cocos2dxBind_cocos2d__PhysicsWorld_get_body);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_gravity", Cocos2dxBind_cocos2d__PhysicsWorld_get_gravity);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_gravity", Cocos2dxBind_cocos2d__PhysicsWorld_set_gravity);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_speed", Cocos2dxBind_cocos2d__PhysicsWorld_set_speed);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_speed", Cocos2dxBind_cocos2d__PhysicsWorld_get_speed);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_update_rate", Cocos2dxBind_cocos2d__PhysicsWorld_set_update_rate);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_update_rate", Cocos2dxBind_cocos2d__PhysicsWorld_get_update_rate);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_substeps", Cocos2dxBind_cocos2d__PhysicsWorld_set_substeps);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_substeps", Cocos2dxBind_cocos2d__PhysicsWorld_get_substeps);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_debug_draw_mask", Cocos2dxBind_cocos2d__PhysicsWorld_set_debug_draw_mask);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "get_debug_draw_mask", Cocos2dxBind_cocos2d__PhysicsWorld_get_debug_draw_mask);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "set_auto_step", Cocos2dxBind_cocos2d__PhysicsWorld_set_auto_step);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "is_auto_step", Cocos2dxBind_cocos2d__PhysicsWorld_is_auto_step);
            binder.bind_custom_method("Cocos2d", "PhysicsWorld", "step", Cocos2dxBind_cocos2d__PhysicsWorld_step);
            binder.bind_static_method("Cocos2d", "FileUtils", "get_instance", Cocos2dxBind_cocos2d__FileUtils_get_instance);
            binder.bind_static_method("Cocos2d", "FileUtils", "destroy_instance", Cocos2dxBind_cocos2d__FileUtils_destroy_instance);
            binder.bind_static_method("Cocos2d", "FileUtils", "set_delegate", Cocos2dxBind_cocos2d__FileUtils_set_delegate);
            binder.bind_custom_method("Cocos2d", "FileUtils", "purge_cached_entries", Cocos2dxBind_cocos2d__FileUtils_purge_cached_entries);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_string_from_file", Cocos2dxBind_cocos2d__FileUtils_get_string_from_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_data_from_file", Cocos2dxBind_cocos2d__FileUtils_get_data_from_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_file_data_from_zip", Cocos2dxBind_cocos2d__FileUtils_get_file_data_from_zip);
            binder.bind_custom_method("Cocos2d", "FileUtils", "full_path_for_filename", Cocos2dxBind_cocos2d__FileUtils_full_path_for_filename);
            binder.bind_custom_method("Cocos2d", "FileUtils", "load_filename_lookup_dictionary_from_file", Cocos2dxBind_cocos2d__FileUtils_load_filename_lookup_dictionary_from_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_filename_lookup_dictionary", Cocos2dxBind_cocos2d__FileUtils_set_filename_lookup_dictionary);
            binder.bind_custom_method("Cocos2d", "FileUtils", "full_path_from_relative_file", Cocos2dxBind_cocos2d__FileUtils_full_path_from_relative_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_search_resolutions_order", Cocos2dxBind_cocos2d__FileUtils_set_search_resolutions_order);
            binder.bind_custom_method("Cocos2d", "FileUtils", "add_search_resolutions_order", Cocos2dxBind_cocos2d__FileUtils_add_search_resolutions_order);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_search_resolutions_order", Cocos2dxBind_cocos2d__FileUtils_get_search_resolutions_order);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_search_paths", Cocos2dxBind_cocos2d__FileUtils_set_search_paths);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_default_resource_root_path", Cocos2dxBind_cocos2d__FileUtils_set_default_resource_root_path);
            binder.bind_custom_method("Cocos2d", "FileUtils", "add_search_path", Cocos2dxBind_cocos2d__FileUtils_add_search_path);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_search_paths", Cocos2dxBind_cocos2d__FileUtils_get_search_paths);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_writable_path", Cocos2dxBind_cocos2d__FileUtils_get_writable_path);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_writable_path", Cocos2dxBind_cocos2d__FileUtils_set_writable_path);
            binder.bind_custom_method("Cocos2d", "FileUtils", "set_popup_notify", Cocos2dxBind_cocos2d__FileUtils_set_popup_notify);
            binder.bind_custom_method("Cocos2d", "FileUtils", "is_popup_notify", Cocos2dxBind_cocos2d__FileUtils_is_popup_notify);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_value_map_from_file", Cocos2dxBind_cocos2d__FileUtils_get_value_map_from_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_value_map_from_data", Cocos2dxBind_cocos2d__FileUtils_get_value_map_from_data);
            binder.bind_custom_method("Cocos2d", "FileUtils", "write_string_to_file", Cocos2dxBind_cocos2d__FileUtils_write_string_to_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "write_data_to_file", Cocos2dxBind_cocos2d__FileUtils_write_data_to_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "write_value_vector_to_file", Cocos2dxBind_cocos2d__FileUtils_write_value_vector_to_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_suitable_f_open", Cocos2dxBind_cocos2d__FileUtils_get_suitable_f_open);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_value_vector_from_file", Cocos2dxBind_cocos2d__FileUtils_get_value_vector_from_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "is_file_exist", Cocos2dxBind_cocos2d__FileUtils_is_file_exist);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_file_extension", Cocos2dxBind_cocos2d__FileUtils_get_file_extension);
            binder.bind_custom_method("Cocos2d", "FileUtils", "is_absolute_path", Cocos2dxBind_cocos2d__FileUtils_is_absolute_path);
            binder.bind_custom_method("Cocos2d", "FileUtils", "is_directory_exist", Cocos2dxBind_cocos2d__FileUtils_is_directory_exist);
            binder.bind_custom_method("Cocos2d", "FileUtils", "create_directory", Cocos2dxBind_cocos2d__FileUtils_create_directory);
            binder.bind_custom_method("Cocos2d", "FileUtils", "remove_directory", Cocos2dxBind_cocos2d__FileUtils_remove_directory);
            binder.bind_custom_method("Cocos2d", "FileUtils", "remove_file", Cocos2dxBind_cocos2d__FileUtils_remove_file);
            binder.bind_custom_method("Cocos2d", "FileUtils", "rename_file_1", Cocos2dxBind_cocos2d__FileUtils_rename_file_1);
            binder.bind_custom_method("Cocos2d", "FileUtils", "rename_file_2", Cocos2dxBind_cocos2d__FileUtils_rename_file_2);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_file_size", Cocos2dxBind_cocos2d__FileUtils_get_file_size);
            binder.bind_custom_method("Cocos2d", "FileUtils", "get_full_path_cache", Cocos2dxBind_cocos2d__FileUtils_get_full_path_cache);
            binder.bind_static_method("Cocos2d", "AnimationCache", "get_instance", Cocos2dxBind_cocos2d__AnimationCache_get_instance);
            binder.bind_static_method("Cocos2d", "AnimationCache", "destroy_instance", Cocos2dxBind_cocos2d__AnimationCache_destroy_instance);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "init", Cocos2dxBind_cocos2d__AnimationCache_init);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "add_animation", Cocos2dxBind_cocos2d__AnimationCache_add_animation);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "remove_animation", Cocos2dxBind_cocos2d__AnimationCache_remove_animation);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "get_animation", Cocos2dxBind_cocos2d__AnimationCache_get_animation);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "add_animations_with_dictionary", Cocos2dxBind_cocos2d__AnimationCache_add_animations_with_dictionary);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "add_animations_with_file", Cocos2dxBind_cocos2d__AnimationCache_add_animations_with_file);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "retain_176", Cocos2dxBind_cocos2d__AnimationCache_retain_176);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "release_176", Cocos2dxBind_cocos2d__AnimationCache_release_176);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "autorelease_176", Cocos2dxBind_cocos2d__AnimationCache_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "get_reference_count_176", Cocos2dxBind_cocos2d__AnimationCache_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_id=", Cocos2dxBind_cocos2d__AnimationCache_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_id", Cocos2dxBind_cocos2d__AnimationCache_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_lua_id=", Cocos2dxBind_cocos2d__AnimationCache_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_lua_id", Cocos2dxBind_cocos2d__AnimationCache_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_script_object=", Cocos2dxBind_cocos2d__AnimationCache_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "AnimationCache", "_script_object", Cocos2dxBind_cocos2d__AnimationCache_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "SpriteBatchNode", "create_with_texture_2", Cocos2dxBind_cocos2d__SpriteBatchNode_create_with_texture_2);
            binder.bind_static_method("Cocos2d", "SpriteBatchNode", "create", Cocos2dxBind_cocos2d__SpriteBatchNode_create);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_texture_atlas_2", Cocos2dxBind_cocos2d__SpriteBatchNode_get_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_texture_atlas_2", Cocos2dxBind_cocos2d__SpriteBatchNode_set_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_descendants_2", Cocos2dxBind_cocos2d__SpriteBatchNode_get_descendants_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "increase_atlas_capacity_2", Cocos2dxBind_cocos2d__SpriteBatchNode_increase_atlas_capacity_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_child_at_index_2", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_at_index_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "append_child_2", Cocos2dxBind_cocos2d__SpriteBatchNode_append_child_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_sprite_from_atlas_2", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_sprite_from_atlas_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "rebuild_index_in_order_2", Cocos2dxBind_cocos2d__SpriteBatchNode_rebuild_index_in_order_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "highest_atlas_index_in_child_2", Cocos2dxBind_cocos2d__SpriteBatchNode_highest_atlas_index_in_child_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "lowest_atlas_index_in_child_2", Cocos2dxBind_cocos2d__SpriteBatchNode_lowest_atlas_index_in_child_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "atlas_index_for_child_2", Cocos2dxBind_cocos2d__SpriteBatchNode_atlas_index_for_child_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "reorder_batch_2", Cocos2dxBind_cocos2d__SpriteBatchNode_reorder_batch_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_texture_2", Cocos2dxBind_cocos2d__SpriteBatchNode_get_texture_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_texture_2", Cocos2dxBind_cocos2d__SpriteBatchNode_set_texture_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_blend_func_2", Cocos2dxBind_cocos2d__SpriteBatchNode_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_blend_func_2", Cocos2dxBind_cocos2d__SpriteBatchNode_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "visit_2", Cocos2dxBind_cocos2d__SpriteBatchNode_visit_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_3", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_3);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_4", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_4);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "reorder_child_2", Cocos2dxBind_cocos2d__SpriteBatchNode_reorder_child_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_child", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_all_children_with_cleanup_2", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_children_with_cleanup_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "sort_all_children_2", Cocos2dxBind_cocos2d__SpriteBatchNode_sort_all_children_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "draw_2", Cocos2dxBind_cocos2d__SpriteBatchNode_draw_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_description", Cocos2dxBind_cocos2d__SpriteBatchNode_get_description);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "insert_quad_from_sprite_2", Cocos2dxBind_cocos2d__SpriteBatchNode_insert_quad_from_sprite_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_sprite_without_quad_2", Cocos2dxBind_cocos2d__SpriteBatchNode_add_sprite_without_quad_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "init_with_texture_2", Cocos2dxBind_cocos2d__SpriteBatchNode_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "init_with_file_2", Cocos2dxBind_cocos2d__SpriteBatchNode_init_with_file_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "init_2", Cocos2dxBind_cocos2d__SpriteBatchNode_init_2);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_local_z_order_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_local_z_order_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_global_z_order_27", Cocos2dxBind_cocos2d__SpriteBatchNode_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_global_z_order_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scale_x_23", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scale_x_26", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scale_y_23", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scale_y_26", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scale_z_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scale_z_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scale_45", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_45);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scale_26", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scale_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scale_46", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scale_46);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position_49", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_49);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_normalized_position_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position_55", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_55);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_normalized_position_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position_50", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_50);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position_56", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_56);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position_x_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position_x_28", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position_y_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position_y_28", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position3_d_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position3_d_28", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_position_z_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_position_z_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_skew_x_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_skew_x_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_skew_y_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_skew_y_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_anchor_point_26", Cocos2dxBind_cocos2d__SpriteBatchNode_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_anchor_point_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_content_size_24", Cocos2dxBind_cocos2d__SpriteBatchNode_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_content_size_26", Cocos2dxBind_cocos2d__SpriteBatchNode_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_visible_27", Cocos2dxBind_cocos2d__SpriteBatchNode_set_visible_27);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_visible_29", Cocos2dxBind_cocos2d__SpriteBatchNode_is_visible_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_rotation_26", Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_rotation_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_rotation3_d_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_rotation3_d_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_rotation_quat_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_rotation_quat_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__SpriteBatchNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__SpriteBatchNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_113", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_113);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_114", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_114);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_115", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_115);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_child_116", Cocos2dxBind_cocos2d__SpriteBatchNode_add_child_116);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_child_by_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_child_by_name_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "enumerate_children_29", Cocos2dxBind_cocos2d__SpriteBatchNode_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_children_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_children_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_children_count_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_parent_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_parent_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_parent_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_parent_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_from_parent_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_child_by_name_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_all_children_28", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_name_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_name_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_name_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_name_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_user_data_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_user_data_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_user_data_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_user_object_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_user_object_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_user_object_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_gl_program_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_gl_program_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_gl_program_state_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_gl_program_state_28", Cocos2dxBind_cocos2d__SpriteBatchNode_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_running_29", Cocos2dxBind_cocos2d__SpriteBatchNode_is_running_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "on_enter_18", Cocos2dxBind_cocos2d__SpriteBatchNode_on_enter_18);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__SpriteBatchNode_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "on_exit_18", Cocos2dxBind_cocos2d__SpriteBatchNode_on_exit_18);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__SpriteBatchNode_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "cleanup_25", Cocos2dxBind_cocos2d__SpriteBatchNode_cleanup_25);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scene_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scene_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_bounding_box_26", Cocos2dxBind_cocos2d__SpriteBatchNode_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_action_manager_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_action_manager_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_action_manager_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "run_action_28", Cocos2dxBind_cocos2d__SpriteBatchNode_run_action_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "stop_all_actions_29", Cocos2dxBind_cocos2d__SpriteBatchNode_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "stop_action_29", Cocos2dxBind_cocos2d__SpriteBatchNode_stop_action_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__SpriteBatchNode_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_action_by_tag_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_scheduler_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scheduler_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_scheduler_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_scheduled_58", Cocos2dxBind_cocos2d__SpriteBatchNode_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_update_29", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "unschedule_update_29", Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_once_58", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_172", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_172);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_173", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_173);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "schedule_174", Cocos2dxBind_cocos2d__SpriteBatchNode_schedule_174);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "unschedule_58", Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__SpriteBatchNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "resume_29", Cocos2dxBind_cocos2d__SpriteBatchNode_resume_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "pause_29", Cocos2dxBind_cocos2d__SpriteBatchNode_pause_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_26", Cocos2dxBind_cocos2d__SpriteBatchNode_update_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_transform_28", Cocos2dxBind_cocos2d__SpriteBatchNode_update_transform_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_to_node_space_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_to_world_space_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__SpriteBatchNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_additional_transform_58", Cocos2dxBind_cocos2d__SpriteBatchNode_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_component_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_component_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "add_component_29", Cocos2dxBind_cocos2d__SpriteBatchNode_add_component_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_component_57", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_component_57);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_component_58", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_component_58);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_all_components_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_physics_body_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_physics_body_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__SpriteBatchNode_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__SpriteBatchNode_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__SpriteBatchNode_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_opacity_28", Cocos2dxBind_cocos2d__SpriteBatchNode_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_opacity_26", Cocos2dxBind_cocos2d__SpriteBatchNode_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__SpriteBatchNode_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__SpriteBatchNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_color_27", Cocos2dxBind_cocos2d__SpriteBatchNode_get_color_27);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_displayed_color_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_color_27", Cocos2dxBind_cocos2d__SpriteBatchNode_set_color_27);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "update_displayed_color_23", Cocos2dxBind_cocos2d__SpriteBatchNode_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__SpriteBatchNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__SpriteBatchNode_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__SpriteBatchNode_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__SpriteBatchNode_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__SpriteBatchNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__SpriteBatchNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_camera_mask_29", Cocos2dxBind_cocos2d__SpriteBatchNode_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "set_camera_mask_22", Cocos2dxBind_cocos2d__SpriteBatchNode_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "retain_176", Cocos2dxBind_cocos2d__SpriteBatchNode_retain_176);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "release_176", Cocos2dxBind_cocos2d__SpriteBatchNode_release_176);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "autorelease_176", Cocos2dxBind_cocos2d__SpriteBatchNode_autorelease_176);
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "get_reference_count_176", Cocos2dxBind_cocos2d__SpriteBatchNode_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "TextFieldTTF", "text_field_with_place_holder_1", Cocos2dxBind_cocos2d__TextFieldTTF_text_field_with_place_holder_1);
            binder.bind_static_method("Cocos2d", "TextFieldTTF", "text_field_with_place_holder_2", Cocos2dxBind_cocos2d__TextFieldTTF_text_field_with_place_holder_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "init_with_place_holder_1", Cocos2dxBind_cocos2d__TextFieldTTF_init_with_place_holder_1);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "init_with_place_holder_2", Cocos2dxBind_cocos2d__TextFieldTTF_init_with_place_holder_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "attach_with_ime", Cocos2dxBind_cocos2d__TextFieldTTF_attach_with_ime);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "detach_with_ime", Cocos2dxBind_cocos2d__TextFieldTTF_detach_with_ime);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_delegate", Cocos2dxBind_cocos2d__TextFieldTTF_get_delegate);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_delegate", Cocos2dxBind_cocos2d__TextFieldTTF_set_delegate);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_char_count", Cocos2dxBind_cocos2d__TextFieldTTF_get_char_count);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_color_space_holder", Cocos2dxBind_cocos2d__TextFieldTTF_get_color_space_holder);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_color_space_holder_1", Cocos2dxBind_cocos2d__TextFieldTTF_set_color_space_holder_1);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_color_space_holder_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_color_space_holder_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_text_color", Cocos2dxBind_cocos2d__TextFieldTTF_set_text_color);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_string", Cocos2dxBind_cocos2d__TextFieldTTF_set_string);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_string", Cocos2dxBind_cocos2d__TextFieldTTF_get_string);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_place_holder", Cocos2dxBind_cocos2d__TextFieldTTF_set_place_holder);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_place_holder", Cocos2dxBind_cocos2d__TextFieldTTF_get_place_holder);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_secure_text_entry", Cocos2dxBind_cocos2d__TextFieldTTF_set_secure_text_entry);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_secure_text_entry", Cocos2dxBind_cocos2d__TextFieldTTF_is_secure_text_entry);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "visit", Cocos2dxBind_cocos2d__TextFieldTTF_visit);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_ttf_config_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_ttf_config_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_ttf_config_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_ttf_config_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_bm_font_file_path_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_bm_font_file_path_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_bm_font_file_path_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_bm_font_file_path_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_char_map_4", Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_4);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_char_map_5", Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_5);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_char_map_6", Cocos2dxBind_cocos2d__TextFieldTTF_set_char_map_6);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_system_font_name_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_system_font_name_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_system_font_name_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_system_font_name_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_system_font_size_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_system_font_size_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_system_font_size_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_system_font_size_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "request_system_font_refresh_2", Cocos2dxBind_cocos2d__TextFieldTTF_request_system_font_refresh_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_string_num_lines_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_string_num_lines_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_string_length_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_string_length_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_text_color_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_text_color_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "enable_shadow_2", Cocos2dxBind_cocos2d__TextFieldTTF_enable_shadow_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "enable_outline_2", Cocos2dxBind_cocos2d__TextFieldTTF_enable_outline_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "enable_glow_2", Cocos2dxBind_cocos2d__TextFieldTTF_enable_glow_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "disable_effect_3", Cocos2dxBind_cocos2d__TextFieldTTF_disable_effect_3);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "disable_effect_4", Cocos2dxBind_cocos2d__TextFieldTTF_disable_effect_4);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_alignment_3", Cocos2dxBind_cocos2d__TextFieldTTF_set_alignment_3);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_text_alignment_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_text_alignment_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_alignment_4", Cocos2dxBind_cocos2d__TextFieldTTF_set_alignment_4);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_horizontal_alignment_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_horizontal_alignment_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_horizontal_alignment_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_horizontal_alignment_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_vertical_alignment_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_vertical_alignment_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_vertical_alignment_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_vertical_alignment_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_line_break_without_space_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_line_break_without_space_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_max_line_width_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_max_line_width_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_max_line_width_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_max_line_width_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_width_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_width_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_width_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_width_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_height_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_height_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_height_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_height_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_dimensions_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_dimensions_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_dimensions_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_dimensions_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_content_2", Cocos2dxBind_cocos2d__TextFieldTTF_update_content_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_letter_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_letter_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_clip_margin_enabled_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_clip_margin_enabled_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_clip_margin_enabled_2", Cocos2dxBind_cocos2d__TextFieldTTF_is_clip_margin_enabled_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_line_height_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_line_height_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_line_height_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_line_height_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_additional_kerning_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_additional_kerning_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_additional_kerning_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_additional_kerning_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_font_atlas_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_font_atlas_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_blend_func_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_blend_func_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__TextFieldTTF_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_displayed_color_2", Cocos2dxBind_cocos2d__TextFieldTTF_update_displayed_color_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_displayed_opacity_2", Cocos2dxBind_cocos2d__TextFieldTTF_update_displayed_opacity_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_description_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_description_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_content_size_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_content_size_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_bounding_box_2", Cocos2dxBind_cocos2d__TextFieldTTF_get_bounding_box_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "draw_2", Cocos2dxBind_cocos2d__TextFieldTTF_draw_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_camera_mask_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_camera_mask_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_all_children_with_cleanup_2", Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_children_with_cleanup_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_child_2", Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_global_z_order_2", Cocos2dxBind_cocos2d__TextFieldTTF_set_global_z_order_2);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_local_z_order_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_local_z_order_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_global_z_order_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scale_x_23", Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scale_x_26", Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scale_y_23", Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scale_y_26", Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scale_z_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scale_z_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scale_45", Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_45);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scale_26", Cocos2dxBind_cocos2d__TextFieldTTF_get_scale_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scale_46", Cocos2dxBind_cocos2d__TextFieldTTF_set_scale_46);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position_49", Cocos2dxBind_cocos2d__TextFieldTTF_set_position_49);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_normalized_position_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position_55", Cocos2dxBind_cocos2d__TextFieldTTF_get_position_55);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_normalized_position_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position_50", Cocos2dxBind_cocos2d__TextFieldTTF_set_position_50);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position_56", Cocos2dxBind_cocos2d__TextFieldTTF_get_position_56);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position_x_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position_x_28", Cocos2dxBind_cocos2d__TextFieldTTF_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position_y_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position_y_28", Cocos2dxBind_cocos2d__TextFieldTTF_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position3_d_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position3_d_28", Cocos2dxBind_cocos2d__TextFieldTTF_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_position_z_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_position_z_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_skew_x_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_skew_x_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_skew_y_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_skew_y_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_anchor_point_26", Cocos2dxBind_cocos2d__TextFieldTTF_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_anchor_point_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_content_size_24", Cocos2dxBind_cocos2d__TextFieldTTF_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_visible_27", Cocos2dxBind_cocos2d__TextFieldTTF_set_visible_27);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_visible_29", Cocos2dxBind_cocos2d__TextFieldTTF_is_visible_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_rotation_26", Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_rotation_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_rotation3_d_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_rotation3_d_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_rotation_quat_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_rotation_quat_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__TextFieldTTF_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__TextFieldTTF_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "add_child_113", Cocos2dxBind_cocos2d__TextFieldTTF_add_child_113);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "add_child_114", Cocos2dxBind_cocos2d__TextFieldTTF_add_child_114);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "add_child_115", Cocos2dxBind_cocos2d__TextFieldTTF_add_child_115);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "add_child_116", Cocos2dxBind_cocos2d__TextFieldTTF_add_child_116);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_child_by_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_child_by_name_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "enumerate_children_29", Cocos2dxBind_cocos2d__TextFieldTTF_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_children_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_children_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_children_count_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_parent_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_parent_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_parent_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_parent_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_from_parent_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_child_by_name_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_all_children_28", Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "reorder_child_26", Cocos2dxBind_cocos2d__TextFieldTTF_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "sort_all_children_26", Cocos2dxBind_cocos2d__TextFieldTTF_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_name_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_name_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_name_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_name_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_user_data_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_user_data_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_user_data_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_user_object_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_user_object_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_user_object_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_gl_program_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_gl_program_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_gl_program_state_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_gl_program_state_28", Cocos2dxBind_cocos2d__TextFieldTTF_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_running_29", Cocos2dxBind_cocos2d__TextFieldTTF_is_running_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "on_enter_18", Cocos2dxBind_cocos2d__TextFieldTTF_on_enter_18);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__TextFieldTTF_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "on_exit_18", Cocos2dxBind_cocos2d__TextFieldTTF_on_exit_18);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__TextFieldTTF_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "cleanup_25", Cocos2dxBind_cocos2d__TextFieldTTF_cleanup_25);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scene_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_scene_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_action_manager_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_action_manager_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_action_manager_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "run_action_28", Cocos2dxBind_cocos2d__TextFieldTTF_run_action_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "stop_all_actions_29", Cocos2dxBind_cocos2d__TextFieldTTF_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "stop_action_29", Cocos2dxBind_cocos2d__TextFieldTTF_stop_action_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__TextFieldTTF_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_action_by_tag_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_scheduler_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scheduler_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_scheduler_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_scheduled_58", Cocos2dxBind_cocos2d__TextFieldTTF_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_update_29", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "unschedule_update_29", Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_once_58", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_172", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_172);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_173", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_173);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "schedule_174", Cocos2dxBind_cocos2d__TextFieldTTF_schedule_174);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "unschedule_58", Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__TextFieldTTF_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "resume_29", Cocos2dxBind_cocos2d__TextFieldTTF_resume_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "pause_29", Cocos2dxBind_cocos2d__TextFieldTTF_pause_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_26", Cocos2dxBind_cocos2d__TextFieldTTF_update_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_transform_28", Cocos2dxBind_cocos2d__TextFieldTTF_update_transform_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_to_node_space_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_to_world_space_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__TextFieldTTF_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_additional_transform_58", Cocos2dxBind_cocos2d__TextFieldTTF_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_component_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_component_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "add_component_29", Cocos2dxBind_cocos2d__TextFieldTTF_add_component_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_component_57", Cocos2dxBind_cocos2d__TextFieldTTF_remove_component_57);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_component_58", Cocos2dxBind_cocos2d__TextFieldTTF_remove_component_58);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_all_components_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_physics_body_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_physics_body_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__TextFieldTTF_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__TextFieldTTF_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__TextFieldTTF_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_opacity_28", Cocos2dxBind_cocos2d__TextFieldTTF_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_opacity_26", Cocos2dxBind_cocos2d__TextFieldTTF_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TextFieldTTF_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_color_27", Cocos2dxBind_cocos2d__TextFieldTTF_get_color_27);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_displayed_color_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_color_27", Cocos2dxBind_cocos2d__TextFieldTTF_set_color_27);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TextFieldTTF_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__TextFieldTTF_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__TextFieldTTF_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__TextFieldTTF_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_camera_mask_29", Cocos2dxBind_cocos2d__TextFieldTTF_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "init_13", Cocos2dxBind_cocos2d__TextFieldTTF_init_13);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "retain_176", Cocos2dxBind_cocos2d__TextFieldTTF_retain_176);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "release_176", Cocos2dxBind_cocos2d__TextFieldTTF_release_176);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "autorelease_176", Cocos2dxBind_cocos2d__TextFieldTTF_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "get_reference_count_176", Cocos2dxBind_cocos2d__TextFieldTTF_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_group_name", Cocos2dxBind_cocos2d__TMXObjectGroup_get_group_name);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "set_group_name", Cocos2dxBind_cocos2d__TMXObjectGroup_set_group_name);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_property", Cocos2dxBind_cocos2d__TMXObjectGroup_get_property);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_object", Cocos2dxBind_cocos2d__TMXObjectGroup_get_object);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_position_offset", Cocos2dxBind_cocos2d__TMXObjectGroup_get_position_offset);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "set_position_offset", Cocos2dxBind_cocos2d__TMXObjectGroup_set_position_offset);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_properties_1", Cocos2dxBind_cocos2d__TMXObjectGroup_get_properties_1);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "set_properties", Cocos2dxBind_cocos2d__TMXObjectGroup_set_properties);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_objects_1", Cocos2dxBind_cocos2d__TMXObjectGroup_get_objects_1);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "set_objects", Cocos2dxBind_cocos2d__TMXObjectGroup_set_objects);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "retain_176", Cocos2dxBind_cocos2d__TMXObjectGroup_retain_176);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "release_176", Cocos2dxBind_cocos2d__TMXObjectGroup_release_176);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "autorelease_176", Cocos2dxBind_cocos2d__TMXObjectGroup_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "get_reference_count_176", Cocos2dxBind_cocos2d__TMXObjectGroup_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_id=", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_id", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_lua_id=", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_lua_id", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_script_object=", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "_script_object", Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "TMXLayer", "create", Cocos2dxBind_cocos2d__TMXLayer_create);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "init_with_tileset_info", Cocos2dxBind_cocos2d__TMXLayer_init_with_tileset_info);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "release_map", Cocos2dxBind_cocos2d__TMXLayer_release_map);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_tile_at", Cocos2dxBind_cocos2d__TMXLayer_get_tile_at);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_tile_gid_at", Cocos2dxBind_cocos2d__TMXLayer_get_tile_gid_at);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_tile_gid_1", Cocos2dxBind_cocos2d__TMXLayer_set_tile_gid_1);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_tile_gid_2", Cocos2dxBind_cocos2d__TMXLayer_set_tile_gid_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_tile_at", Cocos2dxBind_cocos2d__TMXLayer_remove_tile_at);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_at", Cocos2dxBind_cocos2d__TMXLayer_get_position_at);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_property", Cocos2dxBind_cocos2d__TMXLayer_get_property);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "setup_tiles", Cocos2dxBind_cocos2d__TMXLayer_setup_tiles);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_layer_name", Cocos2dxBind_cocos2d__TMXLayer_get_layer_name);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_layer_name", Cocos2dxBind_cocos2d__TMXLayer_set_layer_name);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_layer_size", Cocos2dxBind_cocos2d__TMXLayer_get_layer_size);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_layer_size", Cocos2dxBind_cocos2d__TMXLayer_set_layer_size);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_map_tile_size", Cocos2dxBind_cocos2d__TMXLayer_get_map_tile_size);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_map_tile_size", Cocos2dxBind_cocos2d__TMXLayer_set_map_tile_size);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_tiles", Cocos2dxBind_cocos2d__TMXLayer_get_tiles);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_tiles", Cocos2dxBind_cocos2d__TMXLayer_set_tiles);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_tile_set", Cocos2dxBind_cocos2d__TMXLayer_get_tile_set);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_tile_set", Cocos2dxBind_cocos2d__TMXLayer_set_tile_set);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_layer_orientation", Cocos2dxBind_cocos2d__TMXLayer_get_layer_orientation);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_layer_orientation", Cocos2dxBind_cocos2d__TMXLayer_set_layer_orientation);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_properties_1", Cocos2dxBind_cocos2d__TMXLayer_get_properties_1);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_properties", Cocos2dxBind_cocos2d__TMXLayer_set_properties);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_1", Cocos2dxBind_cocos2d__TMXLayer_add_child_1);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_child", Cocos2dxBind_cocos2d__TMXLayer_remove_child);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_description", Cocos2dxBind_cocos2d__TMXLayer_get_description);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_texture_atlas_2", Cocos2dxBind_cocos2d__TMXLayer_get_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_texture_atlas_2", Cocos2dxBind_cocos2d__TMXLayer_set_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_descendants_2", Cocos2dxBind_cocos2d__TMXLayer_get_descendants_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "increase_atlas_capacity_2", Cocos2dxBind_cocos2d__TMXLayer_increase_atlas_capacity_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_child_at_index_2", Cocos2dxBind_cocos2d__TMXLayer_remove_child_at_index_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "append_child_2", Cocos2dxBind_cocos2d__TMXLayer_append_child_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_sprite_from_atlas_2", Cocos2dxBind_cocos2d__TMXLayer_remove_sprite_from_atlas_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "rebuild_index_in_order_2", Cocos2dxBind_cocos2d__TMXLayer_rebuild_index_in_order_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "highest_atlas_index_in_child_2", Cocos2dxBind_cocos2d__TMXLayer_highest_atlas_index_in_child_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "lowest_atlas_index_in_child_2", Cocos2dxBind_cocos2d__TMXLayer_lowest_atlas_index_in_child_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "atlas_index_for_child_2", Cocos2dxBind_cocos2d__TMXLayer_atlas_index_for_child_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "reorder_batch_2", Cocos2dxBind_cocos2d__TMXLayer_reorder_batch_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_texture_2", Cocos2dxBind_cocos2d__TMXLayer_get_texture_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_texture_2", Cocos2dxBind_cocos2d__TMXLayer_set_texture_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_blend_func_2", Cocos2dxBind_cocos2d__TMXLayer_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_blend_func_2", Cocos2dxBind_cocos2d__TMXLayer_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "visit_2", Cocos2dxBind_cocos2d__TMXLayer_visit_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_3", Cocos2dxBind_cocos2d__TMXLayer_add_child_3);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_4", Cocos2dxBind_cocos2d__TMXLayer_add_child_4);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "reorder_child_2", Cocos2dxBind_cocos2d__TMXLayer_reorder_child_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_all_children_with_cleanup_2", Cocos2dxBind_cocos2d__TMXLayer_remove_all_children_with_cleanup_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "sort_all_children_2", Cocos2dxBind_cocos2d__TMXLayer_sort_all_children_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "draw_2", Cocos2dxBind_cocos2d__TMXLayer_draw_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "insert_quad_from_sprite_2", Cocos2dxBind_cocos2d__TMXLayer_insert_quad_from_sprite_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_sprite_without_quad_2", Cocos2dxBind_cocos2d__TMXLayer_add_sprite_without_quad_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "init_with_texture_2", Cocos2dxBind_cocos2d__TMXLayer_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "init_with_file_2", Cocos2dxBind_cocos2d__TMXLayer_init_with_file_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "init_2", Cocos2dxBind_cocos2d__TMXLayer_init_2);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_local_z_order_29", Cocos2dxBind_cocos2d__TMXLayer_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_local_z_order_29", Cocos2dxBind_cocos2d__TMXLayer_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_global_z_order_27", Cocos2dxBind_cocos2d__TMXLayer_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_global_z_order_29", Cocos2dxBind_cocos2d__TMXLayer_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scale_x_23", Cocos2dxBind_cocos2d__TMXLayer_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scale_x_26", Cocos2dxBind_cocos2d__TMXLayer_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scale_y_23", Cocos2dxBind_cocos2d__TMXLayer_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scale_y_26", Cocos2dxBind_cocos2d__TMXLayer_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scale_z_29", Cocos2dxBind_cocos2d__TMXLayer_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scale_z_29", Cocos2dxBind_cocos2d__TMXLayer_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scale_45", Cocos2dxBind_cocos2d__TMXLayer_set_scale_45);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scale_26", Cocos2dxBind_cocos2d__TMXLayer_get_scale_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scale_46", Cocos2dxBind_cocos2d__TMXLayer_set_scale_46);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position_49", Cocos2dxBind_cocos2d__TMXLayer_set_position_49);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_normalized_position_29", Cocos2dxBind_cocos2d__TMXLayer_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_55", Cocos2dxBind_cocos2d__TMXLayer_get_position_55);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_normalized_position_29", Cocos2dxBind_cocos2d__TMXLayer_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position_50", Cocos2dxBind_cocos2d__TMXLayer_set_position_50);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_56", Cocos2dxBind_cocos2d__TMXLayer_get_position_56);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position_x_28", Cocos2dxBind_cocos2d__TMXLayer_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_x_28", Cocos2dxBind_cocos2d__TMXLayer_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position_y_28", Cocos2dxBind_cocos2d__TMXLayer_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_y_28", Cocos2dxBind_cocos2d__TMXLayer_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position3_d_29", Cocos2dxBind_cocos2d__TMXLayer_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position3_d_28", Cocos2dxBind_cocos2d__TMXLayer_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_position_z_28", Cocos2dxBind_cocos2d__TMXLayer_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_position_z_29", Cocos2dxBind_cocos2d__TMXLayer_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_skew_x_28", Cocos2dxBind_cocos2d__TMXLayer_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_skew_x_29", Cocos2dxBind_cocos2d__TMXLayer_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_skew_y_28", Cocos2dxBind_cocos2d__TMXLayer_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_skew_y_29", Cocos2dxBind_cocos2d__TMXLayer_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_anchor_point_26", Cocos2dxBind_cocos2d__TMXLayer_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_anchor_point_29", Cocos2dxBind_cocos2d__TMXLayer_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__TMXLayer_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_content_size_24", Cocos2dxBind_cocos2d__TMXLayer_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_content_size_26", Cocos2dxBind_cocos2d__TMXLayer_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_visible_27", Cocos2dxBind_cocos2d__TMXLayer_set_visible_27);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_visible_29", Cocos2dxBind_cocos2d__TMXLayer_is_visible_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_rotation_26", Cocos2dxBind_cocos2d__TMXLayer_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_rotation_29", Cocos2dxBind_cocos2d__TMXLayer_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_rotation3_d_29", Cocos2dxBind_cocos2d__TMXLayer_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_rotation3_d_29", Cocos2dxBind_cocos2d__TMXLayer_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_rotation_quat_29", Cocos2dxBind_cocos2d__TMXLayer_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_rotation_quat_29", Cocos2dxBind_cocos2d__TMXLayer_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__TMXLayer_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__TMXLayer_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__TMXLayer_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__TMXLayer_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__TMXLayer_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__TMXLayer_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__TMXLayer_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__TMXLayer_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_113", Cocos2dxBind_cocos2d__TMXLayer_add_child_113);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_114", Cocos2dxBind_cocos2d__TMXLayer_add_child_114);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_115", Cocos2dxBind_cocos2d__TMXLayer_add_child_115);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_child_116", Cocos2dxBind_cocos2d__TMXLayer_add_child_116);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_child_by_tag_29", Cocos2dxBind_cocos2d__TMXLayer_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_child_by_name_29", Cocos2dxBind_cocos2d__TMXLayer_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "enumerate_children_29", Cocos2dxBind_cocos2d__TMXLayer_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_children_58", Cocos2dxBind_cocos2d__TMXLayer_get_children_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_children_count_29", Cocos2dxBind_cocos2d__TMXLayer_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_parent_29", Cocos2dxBind_cocos2d__TMXLayer_set_parent_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_parent_57", Cocos2dxBind_cocos2d__TMXLayer_get_parent_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_parent_58", Cocos2dxBind_cocos2d__TMXLayer_get_parent_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_from_parent_29", Cocos2dxBind_cocos2d__TMXLayer_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__TMXLayer_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__TMXLayer_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_child_by_name_29", Cocos2dxBind_cocos2d__TMXLayer_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_all_children_28", Cocos2dxBind_cocos2d__TMXLayer_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_tag_29", Cocos2dxBind_cocos2d__TMXLayer_get_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_tag_29", Cocos2dxBind_cocos2d__TMXLayer_set_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_name_29", Cocos2dxBind_cocos2d__TMXLayer_get_name_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_name_29", Cocos2dxBind_cocos2d__TMXLayer_set_name_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_user_data_57", Cocos2dxBind_cocos2d__TMXLayer_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_user_data_58", Cocos2dxBind_cocos2d__TMXLayer_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_user_data_29", Cocos2dxBind_cocos2d__TMXLayer_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_user_object_57", Cocos2dxBind_cocos2d__TMXLayer_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_user_object_58", Cocos2dxBind_cocos2d__TMXLayer_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_user_object_29", Cocos2dxBind_cocos2d__TMXLayer_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_gl_program_29", Cocos2dxBind_cocos2d__TMXLayer_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_gl_program_28", Cocos2dxBind_cocos2d__TMXLayer_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_gl_program_state_29", Cocos2dxBind_cocos2d__TMXLayer_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_gl_program_state_28", Cocos2dxBind_cocos2d__TMXLayer_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_running_29", Cocos2dxBind_cocos2d__TMXLayer_is_running_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__TMXLayer_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "on_enter_18", Cocos2dxBind_cocos2d__TMXLayer_on_enter_18);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__TMXLayer_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "on_exit_18", Cocos2dxBind_cocos2d__TMXLayer_on_exit_18);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__TMXLayer_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "cleanup_25", Cocos2dxBind_cocos2d__TMXLayer_cleanup_25);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scene_29", Cocos2dxBind_cocos2d__TMXLayer_get_scene_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_bounding_box_26", Cocos2dxBind_cocos2d__TMXLayer_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__TMXLayer_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__TMXLayer_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_action_manager_29", Cocos2dxBind_cocos2d__TMXLayer_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_action_manager_57", Cocos2dxBind_cocos2d__TMXLayer_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_action_manager_58", Cocos2dxBind_cocos2d__TMXLayer_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "run_action_28", Cocos2dxBind_cocos2d__TMXLayer_run_action_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "stop_all_actions_29", Cocos2dxBind_cocos2d__TMXLayer_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "stop_action_29", Cocos2dxBind_cocos2d__TMXLayer_stop_action_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__TMXLayer_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__TMXLayer_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__TMXLayer_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_action_by_tag_29", Cocos2dxBind_cocos2d__TMXLayer_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__TMXLayer_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_scheduler_29", Cocos2dxBind_cocos2d__TMXLayer_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scheduler_57", Cocos2dxBind_cocos2d__TMXLayer_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_scheduler_58", Cocos2dxBind_cocos2d__TMXLayer_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_scheduled_58", Cocos2dxBind_cocos2d__TMXLayer_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_update_29", Cocos2dxBind_cocos2d__TMXLayer_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__TMXLayer_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "unschedule_update_29", Cocos2dxBind_cocos2d__TMXLayer_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_once_58", Cocos2dxBind_cocos2d__TMXLayer_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_172", Cocos2dxBind_cocos2d__TMXLayer_schedule_172);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_173", Cocos2dxBind_cocos2d__TMXLayer_schedule_173);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "schedule_174", Cocos2dxBind_cocos2d__TMXLayer_schedule_174);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "unschedule_58", Cocos2dxBind_cocos2d__TMXLayer_unschedule_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__TMXLayer_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "resume_29", Cocos2dxBind_cocos2d__TMXLayer_resume_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "pause_29", Cocos2dxBind_cocos2d__TMXLayer_pause_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_26", Cocos2dxBind_cocos2d__TMXLayer_update_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_transform_28", Cocos2dxBind_cocos2d__TMXLayer_update_transform_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__TMXLayer_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TMXLayer_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_to_node_space_29", Cocos2dxBind_cocos2d__TMXLayer_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_to_world_space_29", Cocos2dxBind_cocos2d__TMXLayer_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__TMXLayer_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__TMXLayer_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__TMXLayer_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__TMXLayer_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_additional_transform_58", Cocos2dxBind_cocos2d__TMXLayer_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_component_29", Cocos2dxBind_cocos2d__TMXLayer_get_component_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "add_component_29", Cocos2dxBind_cocos2d__TMXLayer_add_component_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_component_57", Cocos2dxBind_cocos2d__TMXLayer_remove_component_57);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_component_58", Cocos2dxBind_cocos2d__TMXLayer_remove_component_58);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_all_components_29", Cocos2dxBind_cocos2d__TMXLayer_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_physics_body_29", Cocos2dxBind_cocos2d__TMXLayer_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_physics_body_29", Cocos2dxBind_cocos2d__TMXLayer_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__TMXLayer_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__TMXLayer_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__TMXLayer_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_opacity_28", Cocos2dxBind_cocos2d__TMXLayer_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__TMXLayer_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_opacity_26", Cocos2dxBind_cocos2d__TMXLayer_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__TMXLayer_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TMXLayer_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TMXLayer_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_color_27", Cocos2dxBind_cocos2d__TMXLayer_get_color_27);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_displayed_color_29", Cocos2dxBind_cocos2d__TMXLayer_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_color_27", Cocos2dxBind_cocos2d__TMXLayer_set_color_27);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "update_displayed_color_23", Cocos2dxBind_cocos2d__TMXLayer_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TMXLayer_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TMXLayer_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__TMXLayer_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__TMXLayer_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__TMXLayer_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__TMXLayer_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__TMXLayer_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__TMXLayer_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_camera_mask_29", Cocos2dxBind_cocos2d__TMXLayer_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "set_camera_mask_22", Cocos2dxBind_cocos2d__TMXLayer_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "retain_176", Cocos2dxBind_cocos2d__TMXLayer_retain_176);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "release_176", Cocos2dxBind_cocos2d__TMXLayer_release_176);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "autorelease_176", Cocos2dxBind_cocos2d__TMXLayer_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TMXLayer", "get_reference_count_176", Cocos2dxBind_cocos2d__TMXLayer_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "TMXTiledMap", "create", Cocos2dxBind_cocos2d__TMXTiledMap_create);
            binder.bind_static_method("Cocos2d", "TMXTiledMap", "create_with_xml", Cocos2dxBind_cocos2d__TMXTiledMap_create_with_xml);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_layer", Cocos2dxBind_cocos2d__TMXTiledMap_get_layer);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_object_group", Cocos2dxBind_cocos2d__TMXTiledMap_get_object_group);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_property", Cocos2dxBind_cocos2d__TMXTiledMap_get_property);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_properties_for_gid_1", Cocos2dxBind_cocos2d__TMXTiledMap_get_properties_for_gid_1);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_properties_for_gid_2", Cocos2dxBind_cocos2d__TMXTiledMap_get_properties_for_gid_2);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_map_size", Cocos2dxBind_cocos2d__TMXTiledMap_get_map_size);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_map_size", Cocos2dxBind_cocos2d__TMXTiledMap_set_map_size);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_tile_size", Cocos2dxBind_cocos2d__TMXTiledMap_get_tile_size);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_tile_size", Cocos2dxBind_cocos2d__TMXTiledMap_set_tile_size);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_map_orientation", Cocos2dxBind_cocos2d__TMXTiledMap_get_map_orientation);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_map_orientation", Cocos2dxBind_cocos2d__TMXTiledMap_set_map_orientation);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_object_groups_1", Cocos2dxBind_cocos2d__TMXTiledMap_get_object_groups_1);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_object_groups", Cocos2dxBind_cocos2d__TMXTiledMap_set_object_groups);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_properties", Cocos2dxBind_cocos2d__TMXTiledMap_set_properties);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_description", Cocos2dxBind_cocos2d__TMXTiledMap_get_description);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "init_with_tmx_file", Cocos2dxBind_cocos2d__TMXTiledMap_init_with_tmx_file);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "init_with_xml", Cocos2dxBind_cocos2d__TMXTiledMap_init_with_xml);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_local_z_order_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_local_z_order_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_global_z_order_27", Cocos2dxBind_cocos2d__TMXTiledMap_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_global_z_order_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scale_x_23", Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scale_x_26", Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scale_y_23", Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scale_y_26", Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scale_z_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scale_z_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scale_45", Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_45);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scale_26", Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scale_46", Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_46);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position_49", Cocos2dxBind_cocos2d__TMXTiledMap_set_position_49);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_normalized_position_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position_55", Cocos2dxBind_cocos2d__TMXTiledMap_get_position_55);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_normalized_position_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position_50", Cocos2dxBind_cocos2d__TMXTiledMap_set_position_50);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position_56", Cocos2dxBind_cocos2d__TMXTiledMap_get_position_56);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position_x_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position_x_28", Cocos2dxBind_cocos2d__TMXTiledMap_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position_y_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position_y_28", Cocos2dxBind_cocos2d__TMXTiledMap_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position3_d_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position3_d_28", Cocos2dxBind_cocos2d__TMXTiledMap_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_position_z_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_position_z_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_skew_x_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_skew_x_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_skew_y_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_skew_y_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_anchor_point_26", Cocos2dxBind_cocos2d__TMXTiledMap_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_anchor_point_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_content_size_24", Cocos2dxBind_cocos2d__TMXTiledMap_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_content_size_26", Cocos2dxBind_cocos2d__TMXTiledMap_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_visible_27", Cocos2dxBind_cocos2d__TMXTiledMap_set_visible_27);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_visible_29", Cocos2dxBind_cocos2d__TMXTiledMap_is_visible_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_rotation_26", Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_rotation_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_rotation3_d_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_rotation3_d_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_rotation_quat_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_rotation_quat_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__TMXTiledMap_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__TMXTiledMap_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "add_child_113", Cocos2dxBind_cocos2d__TMXTiledMap_add_child_113);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "add_child_114", Cocos2dxBind_cocos2d__TMXTiledMap_add_child_114);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "add_child_115", Cocos2dxBind_cocos2d__TMXTiledMap_add_child_115);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "add_child_116", Cocos2dxBind_cocos2d__TMXTiledMap_add_child_116);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_child_by_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_child_by_name_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "enumerate_children_29", Cocos2dxBind_cocos2d__TMXTiledMap_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_children_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_children_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_children_count_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_parent_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_parent_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_parent_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_parent_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_from_parent_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_child_24", Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_24);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_child_by_name_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_all_children_28", Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "reorder_child_26", Cocos2dxBind_cocos2d__TMXTiledMap_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "sort_all_children_26", Cocos2dxBind_cocos2d__TMXTiledMap_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_name_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_name_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_name_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_name_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_user_data_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_user_data_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_user_data_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_user_object_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_user_object_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_user_object_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_gl_program_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_gl_program_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_gl_program_state_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_gl_program_state_28", Cocos2dxBind_cocos2d__TMXTiledMap_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_running_29", Cocos2dxBind_cocos2d__TMXTiledMap_is_running_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "on_enter_18", Cocos2dxBind_cocos2d__TMXTiledMap_on_enter_18);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__TMXTiledMap_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "on_exit_18", Cocos2dxBind_cocos2d__TMXTiledMap_on_exit_18);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__TMXTiledMap_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "cleanup_25", Cocos2dxBind_cocos2d__TMXTiledMap_cleanup_25);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "draw_27", Cocos2dxBind_cocos2d__TMXTiledMap_draw_27);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "draw_28", Cocos2dxBind_cocos2d__TMXTiledMap_draw_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "visit_31", Cocos2dxBind_cocos2d__TMXTiledMap_visit_31);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "visit_32", Cocos2dxBind_cocos2d__TMXTiledMap_visit_32);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scene_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_scene_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_bounding_box_26", Cocos2dxBind_cocos2d__TMXTiledMap_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_action_manager_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_action_manager_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_action_manager_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "run_action_28", Cocos2dxBind_cocos2d__TMXTiledMap_run_action_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "stop_all_actions_29", Cocos2dxBind_cocos2d__TMXTiledMap_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "stop_action_29", Cocos2dxBind_cocos2d__TMXTiledMap_stop_action_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__TMXTiledMap_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_action_by_tag_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_scheduler_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scheduler_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_scheduler_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_scheduled_58", Cocos2dxBind_cocos2d__TMXTiledMap_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_update_29", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "unschedule_update_29", Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_once_58", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_172", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_172);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_173", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_173);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "schedule_174", Cocos2dxBind_cocos2d__TMXTiledMap_schedule_174);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "unschedule_58", Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "resume_29", Cocos2dxBind_cocos2d__TMXTiledMap_resume_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "pause_29", Cocos2dxBind_cocos2d__TMXTiledMap_pause_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_26", Cocos2dxBind_cocos2d__TMXTiledMap_update_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_transform_28", Cocos2dxBind_cocos2d__TMXTiledMap_update_transform_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_to_node_space_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_to_world_space_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__TMXTiledMap_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_additional_transform_58", Cocos2dxBind_cocos2d__TMXTiledMap_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_component_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_component_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "add_component_29", Cocos2dxBind_cocos2d__TMXTiledMap_add_component_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_component_57", Cocos2dxBind_cocos2d__TMXTiledMap_remove_component_57);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_component_58", Cocos2dxBind_cocos2d__TMXTiledMap_remove_component_58);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_all_components_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_physics_body_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_physics_body_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__TMXTiledMap_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__TMXTiledMap_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_opacity_28", Cocos2dxBind_cocos2d__TMXTiledMap_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_opacity_26", Cocos2dxBind_cocos2d__TMXTiledMap_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__TMXTiledMap_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TMXTiledMap_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_color_27", Cocos2dxBind_cocos2d__TMXTiledMap_get_color_27);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_displayed_color_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_color_27", Cocos2dxBind_cocos2d__TMXTiledMap_set_color_27);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "update_displayed_color_23", Cocos2dxBind_cocos2d__TMXTiledMap_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TMXTiledMap_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__TMXTiledMap_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__TMXTiledMap_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__TMXTiledMap_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__TMXTiledMap_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__TMXTiledMap_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_camera_mask_29", Cocos2dxBind_cocos2d__TMXTiledMap_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "set_camera_mask_22", Cocos2dxBind_cocos2d__TMXTiledMap_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "init_13", Cocos2dxBind_cocos2d__TMXTiledMap_init_13);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "retain_176", Cocos2dxBind_cocos2d__TMXTiledMap_retain_176);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "release_176", Cocos2dxBind_cocos2d__TMXTiledMap_release_176);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "autorelease_176", Cocos2dxBind_cocos2d__TMXTiledMap_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "get_reference_count_176", Cocos2dxBind_cocos2d__TMXTiledMap_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Mesh", "create_1", Cocos2dxBind_cocos2d__Mesh_create_1);
            binder.bind_static_method("Cocos2d", "Mesh", "create_2", Cocos2dxBind_cocos2d__Mesh_create_2);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_vertex_buffer", Cocos2dxBind_cocos2d__Mesh_get_vertex_buffer);
            binder.bind_custom_method("Cocos2d", "Mesh", "has_vertex_attrib", Cocos2dxBind_cocos2d__Mesh_has_vertex_attrib);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_mesh_vertex_attrib_count", Cocos2dxBind_cocos2d__Mesh_get_mesh_vertex_attrib_count);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_mesh_vertex_attribute", Cocos2dxBind_cocos2d__Mesh_get_mesh_vertex_attribute);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_vertex_size_in_bytes", Cocos2dxBind_cocos2d__Mesh_get_vertex_size_in_bytes);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_texture_1", Cocos2dxBind_cocos2d__Mesh_set_texture_1);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_texture_2", Cocos2dxBind_cocos2d__Mesh_set_texture_2);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_texture", Cocos2dxBind_cocos2d__Mesh_get_texture);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_visible", Cocos2dxBind_cocos2d__Mesh_set_visible);
            binder.bind_custom_method("Cocos2d", "Mesh", "is_visible", Cocos2dxBind_cocos2d__Mesh_is_visible);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_skin", Cocos2dxBind_cocos2d__Mesh_get_skin);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_mesh_index_data", Cocos2dxBind_cocos2d__Mesh_get_mesh_index_data);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_gl_program_state", Cocos2dxBind_cocos2d__Mesh_get_gl_program_state);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_name", Cocos2dxBind_cocos2d__Mesh_get_name);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_blend_func", Cocos2dxBind_cocos2d__Mesh_set_blend_func);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_blend_func", Cocos2dxBind_cocos2d__Mesh_get_blend_func);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_primitive_type", Cocos2dxBind_cocos2d__Mesh_get_primitive_type);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_index_count", Cocos2dxBind_cocos2d__Mesh_get_index_count);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_index_format", Cocos2dxBind_cocos2d__Mesh_get_index_format);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_index_buffer", Cocos2dxBind_cocos2d__Mesh_get_index_buffer);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_aabb", Cocos2dxBind_cocos2d__Mesh_get_aabb);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_gl_program_state", Cocos2dxBind_cocos2d__Mesh_set_gl_program_state);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_material", Cocos2dxBind_cocos2d__Mesh_set_material);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_material", Cocos2dxBind_cocos2d__Mesh_get_material);
            binder.bind_custom_method("Cocos2d", "Mesh", "draw", Cocos2dxBind_cocos2d__Mesh_draw);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_skin", Cocos2dxBind_cocos2d__Mesh_set_skin);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_mesh_index_data", Cocos2dxBind_cocos2d__Mesh_set_mesh_index_data);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_name", Cocos2dxBind_cocos2d__Mesh_set_name);
            binder.bind_custom_method("Cocos2d", "Mesh", "calculate_aabb", Cocos2dxBind_cocos2d__Mesh_calculate_aabb);
            binder.bind_custom_method("Cocos2d", "Mesh", "set_force2_d_queue", Cocos2dxBind_cocos2d__Mesh_set_force2_d_queue);
            binder.bind_custom_method("Cocos2d", "Mesh", "retain_176", Cocos2dxBind_cocos2d__Mesh_retain_176);
            binder.bind_custom_method("Cocos2d", "Mesh", "release_176", Cocos2dxBind_cocos2d__Mesh_release_176);
            binder.bind_custom_method("Cocos2d", "Mesh", "autorelease_176", Cocos2dxBind_cocos2d__Mesh_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Mesh", "get_reference_count_176", Cocos2dxBind_cocos2d__Mesh_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "Mesh", "_id=", Cocos2dxBind_cocos2d__Mesh_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "Mesh", "_id", Cocos2dxBind_cocos2d__Mesh_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "Mesh", "_lua_id=", Cocos2dxBind_cocos2d__Mesh_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "Mesh", "_lua_id", Cocos2dxBind_cocos2d__Mesh_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "Mesh", "_script_object=", Cocos2dxBind_cocos2d__Mesh_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "Mesh", "_script_object", Cocos2dxBind_cocos2d__Mesh_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "Sprite3D", "create_1", Cocos2dxBind_cocos2d__Sprite3D_create_1);
            binder.bind_static_method("Cocos2d", "Sprite3D", "create_2", Cocos2dxBind_cocos2d__Sprite3D_create_2);
            binder.bind_static_method("Cocos2d", "Sprite3D", "create_3", Cocos2dxBind_cocos2d__Sprite3D_create_3);
            binder.bind_static_method("Cocos2d", "Sprite3D", "create_async_1", Cocos2dxBind_cocos2d__Sprite3D_create_async_1);
            binder.bind_static_method("Cocos2d", "Sprite3D", "create_async_2", Cocos2dxBind_cocos2d__Sprite3D_create_async_2);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_texture_1", Cocos2dxBind_cocos2d__Sprite3D_set_texture_1);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_texture_2", Cocos2dxBind_cocos2d__Sprite3D_set_texture_2);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh_by_index", Cocos2dxBind_cocos2d__Sprite3D_get_mesh_by_index);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh_by_name", Cocos2dxBind_cocos2d__Sprite3D_get_mesh_by_name);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh_array_by_name", Cocos2dxBind_cocos2d__Sprite3D_get_mesh_array_by_name);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh", Cocos2dxBind_cocos2d__Sprite3D_get_mesh);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh_count", Cocos2dxBind_cocos2d__Sprite3D_get_mesh_count);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_skeleton", Cocos2dxBind_cocos2d__Sprite3D_get_skeleton);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_attach_node", Cocos2dxBind_cocos2d__Sprite3D_get_attach_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_attach_node", Cocos2dxBind_cocos2d__Sprite3D_remove_attach_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_all_attach_node", Cocos2dxBind_cocos2d__Sprite3D_remove_all_attach_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_blend_func", Cocos2dxBind_cocos2d__Sprite3D_set_blend_func);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_blend_func", Cocos2dxBind_cocos2d__Sprite3D_get_blend_func);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_gl_program_state", Cocos2dxBind_cocos2d__Sprite3D_set_gl_program_state);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_gl_program", Cocos2dxBind_cocos2d__Sprite3D_set_gl_program);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_aabb", Cocos2dxBind_cocos2d__Sprite3D_get_aabb);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_aabb_recursively", Cocos2dxBind_cocos2d__Sprite3D_get_aabb_recursively);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "run_action", Cocos2dxBind_cocos2d__Sprite3D_run_action);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_force_depth_write", Cocos2dxBind_cocos2d__Sprite3D_set_force_depth_write);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_force_depth_write", Cocos2dxBind_cocos2d__Sprite3D_is_force_depth_write);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_bounding_box", Cocos2dxBind_cocos2d__Sprite3D_get_bounding_box);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_cull_face", Cocos2dxBind_cocos2d__Sprite3D_set_cull_face);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_cull_face_enabled", Cocos2dxBind_cocos2d__Sprite3D_set_cull_face_enabled);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_light_mask", Cocos2dxBind_cocos2d__Sprite3D_set_light_mask);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_light_mask", Cocos2dxBind_cocos2d__Sprite3D_get_light_mask);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "draw", Cocos2dxBind_cocos2d__Sprite3D_draw);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_material_1", Cocos2dxBind_cocos2d__Sprite3D_set_material_1);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_material_2", Cocos2dxBind_cocos2d__Sprite3D_set_material_2);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_material", Cocos2dxBind_cocos2d__Sprite3D_get_material);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_force2_d_queue", Cocos2dxBind_cocos2d__Sprite3D_set_force2_d_queue);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "init", Cocos2dxBind_cocos2d__Sprite3D_init);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "init_with_file", Cocos2dxBind_cocos2d__Sprite3D_init_with_file);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "init_from", Cocos2dxBind_cocos2d__Sprite3D_init_from);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "load_from_cache", Cocos2dxBind_cocos2d__Sprite3D_load_from_cache);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "load_from_file", Cocos2dxBind_cocos2d__Sprite3D_load_from_file);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "visit", Cocos2dxBind_cocos2d__Sprite3D_visit);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "gen_gl_program_state", Cocos2dxBind_cocos2d__Sprite3D_gen_gl_program_state);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "create_node", Cocos2dxBind_cocos2d__Sprite3D_create_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "create_attach_sprite3_d_node", Cocos2dxBind_cocos2d__Sprite3D_create_attach_sprite3_d_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "create_sprite3_d_node", Cocos2dxBind_cocos2d__Sprite3D_create_sprite3_d_node);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_mesh_index_data", Cocos2dxBind_cocos2d__Sprite3D_get_mesh_index_data);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_mesh", Cocos2dxBind_cocos2d__Sprite3D_add_mesh);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "on_aabb_dirty", Cocos2dxBind_cocos2d__Sprite3D_on_aabb_dirty);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "after_async_load", Cocos2dxBind_cocos2d__Sprite3D_after_async_load);
            binder.bind_static_method("Cocos2d", "Sprite3D", "get_aabb_recursively_imp", Cocos2dxBind_cocos2d__Sprite3D_get_aabb_recursively_imp);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_description_15", Cocos2dxBind_cocos2d__Sprite3D_get_description_15);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_local_z_order_29", Cocos2dxBind_cocos2d__Sprite3D_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_local_z_order_29", Cocos2dxBind_cocos2d__Sprite3D_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_global_z_order_27", Cocos2dxBind_cocos2d__Sprite3D_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_global_z_order_29", Cocos2dxBind_cocos2d__Sprite3D_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scale_x_23", Cocos2dxBind_cocos2d__Sprite3D_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scale_x_26", Cocos2dxBind_cocos2d__Sprite3D_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scale_y_23", Cocos2dxBind_cocos2d__Sprite3D_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scale_y_26", Cocos2dxBind_cocos2d__Sprite3D_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scale_z_29", Cocos2dxBind_cocos2d__Sprite3D_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scale_z_29", Cocos2dxBind_cocos2d__Sprite3D_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scale_45", Cocos2dxBind_cocos2d__Sprite3D_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scale_26", Cocos2dxBind_cocos2d__Sprite3D_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scale_46", Cocos2dxBind_cocos2d__Sprite3D_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position_49", Cocos2dxBind_cocos2d__Sprite3D_set_position_49);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_normalized_position_29", Cocos2dxBind_cocos2d__Sprite3D_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position_55", Cocos2dxBind_cocos2d__Sprite3D_get_position_55);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_normalized_position_29", Cocos2dxBind_cocos2d__Sprite3D_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position_50", Cocos2dxBind_cocos2d__Sprite3D_set_position_50);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position_56", Cocos2dxBind_cocos2d__Sprite3D_get_position_56);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position_x_28", Cocos2dxBind_cocos2d__Sprite3D_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position_x_28", Cocos2dxBind_cocos2d__Sprite3D_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position_y_28", Cocos2dxBind_cocos2d__Sprite3D_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position_y_28", Cocos2dxBind_cocos2d__Sprite3D_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position3_d_29", Cocos2dxBind_cocos2d__Sprite3D_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position3_d_28", Cocos2dxBind_cocos2d__Sprite3D_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_position_z_28", Cocos2dxBind_cocos2d__Sprite3D_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_position_z_29", Cocos2dxBind_cocos2d__Sprite3D_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_skew_x_28", Cocos2dxBind_cocos2d__Sprite3D_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_skew_x_29", Cocos2dxBind_cocos2d__Sprite3D_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_skew_y_28", Cocos2dxBind_cocos2d__Sprite3D_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_skew_y_29", Cocos2dxBind_cocos2d__Sprite3D_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_anchor_point_26", Cocos2dxBind_cocos2d__Sprite3D_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_anchor_point_29", Cocos2dxBind_cocos2d__Sprite3D_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Sprite3D_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_content_size_24", Cocos2dxBind_cocos2d__Sprite3D_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_content_size_26", Cocos2dxBind_cocos2d__Sprite3D_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_visible_27", Cocos2dxBind_cocos2d__Sprite3D_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_visible_29", Cocos2dxBind_cocos2d__Sprite3D_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_rotation_26", Cocos2dxBind_cocos2d__Sprite3D_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_rotation_29", Cocos2dxBind_cocos2d__Sprite3D_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Sprite3D_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Sprite3D_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Sprite3D_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Sprite3D_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Sprite3D_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Sprite3D_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Sprite3D_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Sprite3D_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Sprite3D_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Sprite3D_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Sprite3D_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Sprite3D_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_child_113", Cocos2dxBind_cocos2d__Sprite3D_add_child_113);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_child_114", Cocos2dxBind_cocos2d__Sprite3D_add_child_114);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_child_115", Cocos2dxBind_cocos2d__Sprite3D_add_child_115);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_child_116", Cocos2dxBind_cocos2d__Sprite3D_add_child_116);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Sprite3D_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_child_by_name_29", Cocos2dxBind_cocos2d__Sprite3D_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "enumerate_children_29", Cocos2dxBind_cocos2d__Sprite3D_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_children_58", Cocos2dxBind_cocos2d__Sprite3D_get_children_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_children_count_29", Cocos2dxBind_cocos2d__Sprite3D_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_parent_29", Cocos2dxBind_cocos2d__Sprite3D_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_parent_57", Cocos2dxBind_cocos2d__Sprite3D_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_parent_58", Cocos2dxBind_cocos2d__Sprite3D_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_from_parent_29", Cocos2dxBind_cocos2d__Sprite3D_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Sprite3D_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_child_24", Cocos2dxBind_cocos2d__Sprite3D_remove_child_24);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Sprite3D_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Sprite3D_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_all_children_28", Cocos2dxBind_cocos2d__Sprite3D_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__Sprite3D_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "reorder_child_26", Cocos2dxBind_cocos2d__Sprite3D_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "sort_all_children_26", Cocos2dxBind_cocos2d__Sprite3D_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_tag_29", Cocos2dxBind_cocos2d__Sprite3D_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_tag_29", Cocos2dxBind_cocos2d__Sprite3D_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_name_29", Cocos2dxBind_cocos2d__Sprite3D_get_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_name_29", Cocos2dxBind_cocos2d__Sprite3D_set_name_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_user_data_57", Cocos2dxBind_cocos2d__Sprite3D_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_user_data_58", Cocos2dxBind_cocos2d__Sprite3D_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_user_data_29", Cocos2dxBind_cocos2d__Sprite3D_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_user_object_57", Cocos2dxBind_cocos2d__Sprite3D_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_user_object_58", Cocos2dxBind_cocos2d__Sprite3D_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_user_object_29", Cocos2dxBind_cocos2d__Sprite3D_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_gl_program_29", Cocos2dxBind_cocos2d__Sprite3D_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Sprite3D_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_running_29", Cocos2dxBind_cocos2d__Sprite3D_is_running_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Sprite3D_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "on_enter_18", Cocos2dxBind_cocos2d__Sprite3D_on_enter_18);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Sprite3D_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "on_exit_18", Cocos2dxBind_cocos2d__Sprite3D_on_exit_18);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Sprite3D_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "cleanup_25", Cocos2dxBind_cocos2d__Sprite3D_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scene_29", Cocos2dxBind_cocos2d__Sprite3D_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Sprite3D_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Sprite3D_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_action_manager_29", Cocos2dxBind_cocos2d__Sprite3D_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_action_manager_57", Cocos2dxBind_cocos2d__Sprite3D_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_action_manager_58", Cocos2dxBind_cocos2d__Sprite3D_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "stop_all_actions_29", Cocos2dxBind_cocos2d__Sprite3D_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "stop_action_29", Cocos2dxBind_cocos2d__Sprite3D_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Sprite3D_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Sprite3D_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Sprite3D_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Sprite3D_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Sprite3D_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_scheduler_29", Cocos2dxBind_cocos2d__Sprite3D_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scheduler_57", Cocos2dxBind_cocos2d__Sprite3D_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_scheduler_58", Cocos2dxBind_cocos2d__Sprite3D_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_scheduled_58", Cocos2dxBind_cocos2d__Sprite3D_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_update_29", Cocos2dxBind_cocos2d__Sprite3D_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Sprite3D_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "unschedule_update_29", Cocos2dxBind_cocos2d__Sprite3D_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_once_58", Cocos2dxBind_cocos2d__Sprite3D_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_172", Cocos2dxBind_cocos2d__Sprite3D_schedule_172);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_173", Cocos2dxBind_cocos2d__Sprite3D_schedule_173);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "schedule_174", Cocos2dxBind_cocos2d__Sprite3D_schedule_174);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "unschedule_58", Cocos2dxBind_cocos2d__Sprite3D_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Sprite3D_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "resume_29", Cocos2dxBind_cocos2d__Sprite3D_resume_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "pause_29", Cocos2dxBind_cocos2d__Sprite3D_pause_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_26", Cocos2dxBind_cocos2d__Sprite3D_update_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_transform_28", Cocos2dxBind_cocos2d__Sprite3D_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Sprite3D_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Sprite3D_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Sprite3D_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Sprite3D_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Sprite3D_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Sprite3D_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Sprite3D_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Sprite3D_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_additional_transform_58", Cocos2dxBind_cocos2d__Sprite3D_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_component_29", Cocos2dxBind_cocos2d__Sprite3D_get_component_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "add_component_29", Cocos2dxBind_cocos2d__Sprite3D_add_component_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_component_57", Cocos2dxBind_cocos2d__Sprite3D_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_component_58", Cocos2dxBind_cocos2d__Sprite3D_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_all_components_29", Cocos2dxBind_cocos2d__Sprite3D_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_physics_body_29", Cocos2dxBind_cocos2d__Sprite3D_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_physics_body_29", Cocos2dxBind_cocos2d__Sprite3D_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Sprite3D_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Sprite3D_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Sprite3D_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_opacity_28", Cocos2dxBind_cocos2d__Sprite3D_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Sprite3D_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_opacity_26", Cocos2dxBind_cocos2d__Sprite3D_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Sprite3D_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Sprite3D_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Sprite3D_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_color_27", Cocos2dxBind_cocos2d__Sprite3D_get_color_27);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_displayed_color_29", Cocos2dxBind_cocos2d__Sprite3D_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_color_27", Cocos2dxBind_cocos2d__Sprite3D_set_color_27);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "update_displayed_color_23", Cocos2dxBind_cocos2d__Sprite3D_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Sprite3D_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Sprite3D_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Sprite3D_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Sprite3D_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Sprite3D_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Sprite3D_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Sprite3D_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Sprite3D_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_camera_mask_29", Cocos2dxBind_cocos2d__Sprite3D_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "set_camera_mask_22", Cocos2dxBind_cocos2d__Sprite3D_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "retain_176", Cocos2dxBind_cocos2d__Sprite3D_retain_176);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "release_176", Cocos2dxBind_cocos2d__Sprite3D_release_176);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "autorelease_176", Cocos2dxBind_cocos2d__Sprite3D_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Sprite3D", "get_reference_count_176", Cocos2dxBind_cocos2d__Sprite3D_get_reference_count_176);
            binder.bind_static_method("Cocos2dUi", "Widget", "create", Cocos2dxBind_cocos2d__ui__Widget_create);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_set_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_is_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_bright_2", Cocos2dxBind_cocos2d__ui__Widget_set_bright_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_bright_2", Cocos2dxBind_cocos2d__ui__Widget_is_bright_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_touch_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_set_touch_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_bright_style_2", Cocos2dxBind_cocos2d__ui__Widget_set_bright_style_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_touch_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_is_touch_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_highlighted_2", Cocos2dxBind_cocos2d__ui__Widget_is_highlighted_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_highlighted_2", Cocos2dxBind_cocos2d__ui__Widget_set_highlighted_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_left_boundary_2", Cocos2dxBind_cocos2d__ui__Widget_get_left_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_bottom_boundary_2", Cocos2dxBind_cocos2d__ui__Widget_get_bottom_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_right_boundary_2", Cocos2dxBind_cocos2d__ui__Widget_get_right_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_top_boundary_2", Cocos2dxBind_cocos2d__ui__Widget_get_top_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "visit_2", Cocos2dxBind_cocos2d__ui__Widget_visit_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_touch_event_listener_2", Cocos2dxBind_cocos2d__ui__Widget_add_touch_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_click_event_listener_2", Cocos2dxBind_cocos2d__ui__Widget_add_click_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_ccs_event_listener_2", Cocos2dxBind_cocos2d__ui__Widget_add_ccs_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position", Cocos2dxBind_cocos2d__ui__Widget_set_position);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position_percent_2", Cocos2dxBind_cocos2d__ui__Widget_set_position_percent_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_percent_2", Cocos2dxBind_cocos2d__ui__Widget_get_position_percent_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position_type_2", Cocos2dxBind_cocos2d__ui__Widget_set_position_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_type_2", Cocos2dxBind_cocos2d__ui__Widget_get_position_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_flipped_x_2", Cocos2dxBind_cocos2d__ui__Widget_set_flipped_x_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_flipped_x_2", Cocos2dxBind_cocos2d__ui__Widget_is_flipped_x_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_flipped_y_2", Cocos2dxBind_cocos2d__ui__Widget_set_flipped_y_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_flipped_y_2", Cocos2dxBind_cocos2d__ui__Widget_is_flipped_y_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scale_x_2", Cocos2dxBind_cocos2d__ui__Widget_set_scale_x_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scale_y_2", Cocos2dxBind_cocos2d__ui__Widget_set_scale_y_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scale_3", Cocos2dxBind_cocos2d__ui__Widget_set_scale_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scale_4", Cocos2dxBind_cocos2d__ui__Widget_set_scale_4);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scale_x_2", Cocos2dxBind_cocos2d__ui__Widget_get_scale_x_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scale_y_2", Cocos2dxBind_cocos2d__ui__Widget_get_scale_y_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scale_2", Cocos2dxBind_cocos2d__ui__Widget_get_scale_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_clipping_parent_contains_point_2", Cocos2dxBind_cocos2d__ui__Widget_is_clipping_parent_contains_point_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_touch_began_position_2", Cocos2dxBind_cocos2d__ui__Widget_get_touch_began_position_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_touch_move_position_2", Cocos2dxBind_cocos2d__ui__Widget_get_touch_move_position_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_touch_end_position_2", Cocos2dxBind_cocos2d__ui__Widget_get_touch_end_position_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_content_size", Cocos2dxBind_cocos2d__ui__Widget_set_content_size);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_size_percent_2", Cocos2dxBind_cocos2d__ui__Widget_set_size_percent_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_size_type_2", Cocos2dxBind_cocos2d__ui__Widget_set_size_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_size_type_2", Cocos2dxBind_cocos2d__ui__Widget_get_size_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_custom_size_2", Cocos2dxBind_cocos2d__ui__Widget_get_custom_size_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_layout_size_2", Cocos2dxBind_cocos2d__ui__Widget_get_layout_size_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_size_percent_2", Cocos2dxBind_cocos2d__ui__Widget_get_size_percent_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_touch_began_2", Cocos2dxBind_cocos2d__ui__Widget_on_touch_began_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_touch_moved_2", Cocos2dxBind_cocos2d__ui__Widget_on_touch_moved_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_touch_ended_2", Cocos2dxBind_cocos2d__ui__Widget_on_touch_ended_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_touch_cancelled_2", Cocos2dxBind_cocos2d__ui__Widget_on_touch_cancelled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_layout_parameter_2", Cocos2dxBind_cocos2d__ui__Widget_set_layout_parameter_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_layout_parameter_2", Cocos2dxBind_cocos2d__ui__Widget_get_layout_parameter_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "ignore_content_adapt_with_size_2", Cocos2dxBind_cocos2d__ui__Widget_ignore_content_adapt_with_size_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_ignore_content_adapt_with_size_2", Cocos2dxBind_cocos2d__ui__Widget_is_ignore_content_adapt_with_size_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_world_position_2", Cocos2dxBind_cocos2d__ui__Widget_get_world_position_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_virtual_renderer_2", Cocos2dxBind_cocos2d__ui__Widget_get_virtual_renderer_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_virtual_renderer_size_2", Cocos2dxBind_cocos2d__ui__Widget_get_virtual_renderer_size_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_description", Cocos2dxBind_cocos2d__ui__Widget_get_description);
            binder.bind_custom_method("Cocos2dUi", "Widget", "clone_2", Cocos2dxBind_cocos2d__ui__Widget_clone_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_enter", Cocos2dxBind_cocos2d__ui__Widget_on_enter);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_exit", Cocos2dxBind_cocos2d__ui__Widget_on_exit);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_size_and_position_3", Cocos2dxBind_cocos2d__ui__Widget_update_size_and_position_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_size_and_position_4", Cocos2dxBind_cocos2d__ui__Widget_update_size_and_position_4);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_action_tag_2", Cocos2dxBind_cocos2d__ui__Widget_set_action_tag_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_action_tag_2", Cocos2dxBind_cocos2d__ui__Widget_get_action_tag_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_propagate_touch_events_2", Cocos2dxBind_cocos2d__ui__Widget_set_propagate_touch_events_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_propagate_touch_events_2", Cocos2dxBind_cocos2d__ui__Widget_is_propagate_touch_events_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_swallow_touches_2", Cocos2dxBind_cocos2d__ui__Widget_set_swallow_touches_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_swallow_touches_2", Cocos2dxBind_cocos2d__ui__Widget_is_swallow_touches_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_focused_2", Cocos2dxBind_cocos2d__ui__Widget_is_focused_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_focused_2", Cocos2dxBind_cocos2d__ui__Widget_set_focused_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_focus_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_is_focus_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_focus_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_set_focus_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "find_next_focused_widget_2", Cocos2dxBind_cocos2d__ui__Widget_find_next_focused_widget_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "request_focus_2", Cocos2dxBind_cocos2d__ui__Widget_request_focus_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_current_focused_widget_2", Cocos2dxBind_cocos2d__ui__Widget_get_current_focused_widget_2);
            binder.bind_static_method("Cocos2dUi", "Widget", "enable_dpad_navigation_2", Cocos2dxBind_cocos2d__ui__Widget_enable_dpad_navigation_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_unify_size_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_set_unify_size_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_unify_size_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_is_unify_size_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_callback_name_2", Cocos2dxBind_cocos2d__ui__Widget_set_callback_name_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_callback_name_2", Cocos2dxBind_cocos2d__ui__Widget_get_callback_name_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_callback_type_2", Cocos2dxBind_cocos2d__ui__Widget_set_callback_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_callback_type_2", Cocos2dxBind_cocos2d__ui__Widget_get_callback_type_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_layout_component_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_set_layout_component_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_layout_component_enabled_2", Cocos2dxBind_cocos2d__ui__Widget_is_layout_component_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "init_2", Cocos2dxBind_cocos2d__ui__Widget_init_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "intercept_touch_event_2", Cocos2dxBind_cocos2d__ui__Widget_intercept_touch_event_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "propagate_touch_event_2", Cocos2dxBind_cocos2d__ui__Widget_propagate_touch_event_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_focus_change_2", Cocos2dxBind_cocos2d__ui__Widget_on_focus_change_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "dispatch_focus_event_2", Cocos2dxBind_cocos2d__ui__Widget_dispatch_focus_event_2);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_protected_child_7", Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_7);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_protected_child_8", Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_8);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_protected_child_9", Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_9);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ui__Widget_get_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_protected_child_3", Cocos2dxBind_cocos2d__ui__Widget_remove_protected_child_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ui__Widget_remove_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_all_protected_children_3", Cocos2dxBind_cocos2d__ui__Widget_remove_all_protected_children_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_all_protected_children_with_cleanup_3", Cocos2dxBind_cocos2d__ui__Widget_remove_all_protected_children_with_cleanup_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "reorder_protected_child_3", Cocos2dxBind_cocos2d__ui__Widget_reorder_protected_child_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "sort_all_protected_children_3", Cocos2dxBind_cocos2d__ui__Widget_sort_all_protected_children_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "cleanup_3", Cocos2dxBind_cocos2d__ui__Widget_cleanup_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_enter_transition_did_finish_3", Cocos2dxBind_cocos2d__ui__Widget_on_enter_transition_did_finish_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_exit_transition_did_start_3", Cocos2dxBind_cocos2d__ui__Widget_on_exit_transition_did_start_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_displayed_opacity_3", Cocos2dxBind_cocos2d__ui__Widget_update_displayed_opacity_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_displayed_color_3", Cocos2dxBind_cocos2d__ui__Widget_update_displayed_color_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "disable_cascade_color_3", Cocos2dxBind_cocos2d__ui__Widget_disable_cascade_color_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "disable_cascade_opacity_3", Cocos2dxBind_cocos2d__ui__Widget_disable_cascade_opacity_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_camera_mask_3", Cocos2dxBind_cocos2d__ui__Widget_set_camera_mask_3);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_local_z_order_29", Cocos2dxBind_cocos2d__ui__Widget_set_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_local_z_order_29", Cocos2dxBind_cocos2d__ui__Widget_get_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_global_z_order_27", Cocos2dxBind_cocos2d__ui__Widget_set_global_z_order_27);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_global_z_order_29", Cocos2dxBind_cocos2d__ui__Widget_get_global_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scale_z_29", Cocos2dxBind_cocos2d__ui__Widget_set_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scale_z_29", Cocos2dxBind_cocos2d__ui__Widget_get_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_normalized_position_29", Cocos2dxBind_cocos2d__ui__Widget_set_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_55", Cocos2dxBind_cocos2d__ui__Widget_get_position_55);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_normalized_position_29", Cocos2dxBind_cocos2d__ui__Widget_get_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_56", Cocos2dxBind_cocos2d__ui__Widget_get_position_56);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position_x_28", Cocos2dxBind_cocos2d__ui__Widget_set_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_x_28", Cocos2dxBind_cocos2d__ui__Widget_get_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position_y_28", Cocos2dxBind_cocos2d__ui__Widget_set_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_y_28", Cocos2dxBind_cocos2d__ui__Widget_get_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position3_d_29", Cocos2dxBind_cocos2d__ui__Widget_set_position3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position3_d_28", Cocos2dxBind_cocos2d__ui__Widget_get_position3_d_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_position_z_28", Cocos2dxBind_cocos2d__ui__Widget_set_position_z_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_position_z_29", Cocos2dxBind_cocos2d__ui__Widget_get_position_z_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_skew_x_28", Cocos2dxBind_cocos2d__ui__Widget_set_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_skew_x_29", Cocos2dxBind_cocos2d__ui__Widget_get_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_skew_y_28", Cocos2dxBind_cocos2d__ui__Widget_set_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_skew_y_29", Cocos2dxBind_cocos2d__ui__Widget_get_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_anchor_point_26", Cocos2dxBind_cocos2d__ui__Widget_set_anchor_point_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_anchor_point_29", Cocos2dxBind_cocos2d__ui__Widget_get_anchor_point_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ui__Widget_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_content_size_26", Cocos2dxBind_cocos2d__ui__Widget_get_content_size_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_visible_27", Cocos2dxBind_cocos2d__ui__Widget_set_visible_27);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_visible_29", Cocos2dxBind_cocos2d__ui__Widget_is_visible_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_rotation_26", Cocos2dxBind_cocos2d__ui__Widget_set_rotation_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_rotation_29", Cocos2dxBind_cocos2d__ui__Widget_get_rotation_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ui__Widget_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ui__Widget_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ui__Widget_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ui__Widget_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ui__Widget_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ui__Widget_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ui__Widget_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ui__Widget_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__Widget_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__Widget_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ui__Widget_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ui__Widget_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_child_113", Cocos2dxBind_cocos2d__ui__Widget_add_child_113);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_child_114", Cocos2dxBind_cocos2d__ui__Widget_add_child_114);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_child_115", Cocos2dxBind_cocos2d__ui__Widget_add_child_115);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_child_116", Cocos2dxBind_cocos2d__ui__Widget_add_child_116);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ui__Widget_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_child_by_name_29", Cocos2dxBind_cocos2d__ui__Widget_get_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "enumerate_children_29", Cocos2dxBind_cocos2d__ui__Widget_enumerate_children_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_children_58", Cocos2dxBind_cocos2d__ui__Widget_get_children_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_children_count_29", Cocos2dxBind_cocos2d__ui__Widget_get_children_count_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_parent_29", Cocos2dxBind_cocos2d__ui__Widget_set_parent_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_parent_57", Cocos2dxBind_cocos2d__ui__Widget_get_parent_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_parent_58", Cocos2dxBind_cocos2d__ui__Widget_get_parent_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_from_parent_29", Cocos2dxBind_cocos2d__ui__Widget_remove_from_parent_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ui__Widget_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_child_24", Cocos2dxBind_cocos2d__ui__Widget_remove_child_24);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ui__Widget_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ui__Widget_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_all_children_28", Cocos2dxBind_cocos2d__ui__Widget_remove_all_children_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ui__Widget_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2dUi", "Widget", "reorder_child_26", Cocos2dxBind_cocos2d__ui__Widget_reorder_child_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "sort_all_children_26", Cocos2dxBind_cocos2d__ui__Widget_sort_all_children_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_tag_29", Cocos2dxBind_cocos2d__ui__Widget_get_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_tag_29", Cocos2dxBind_cocos2d__ui__Widget_set_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_name_29", Cocos2dxBind_cocos2d__ui__Widget_get_name_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_name_29", Cocos2dxBind_cocos2d__ui__Widget_set_name_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_user_data_57", Cocos2dxBind_cocos2d__ui__Widget_get_user_data_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_user_data_58", Cocos2dxBind_cocos2d__ui__Widget_get_user_data_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_user_data_29", Cocos2dxBind_cocos2d__ui__Widget_set_user_data_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_user_object_57", Cocos2dxBind_cocos2d__ui__Widget_get_user_object_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_user_object_58", Cocos2dxBind_cocos2d__ui__Widget_get_user_object_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_user_object_29", Cocos2dxBind_cocos2d__ui__Widget_set_user_object_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_gl_program_29", Cocos2dxBind_cocos2d__ui__Widget_get_gl_program_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_gl_program_28", Cocos2dxBind_cocos2d__ui__Widget_set_gl_program_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ui__Widget_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ui__Widget_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_running_29", Cocos2dxBind_cocos2d__ui__Widget_is_running_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ui__Widget_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "draw_27", Cocos2dxBind_cocos2d__ui__Widget_draw_27);
            binder.bind_custom_method("Cocos2dUi", "Widget", "draw_28", Cocos2dxBind_cocos2d__ui__Widget_draw_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scene_29", Cocos2dxBind_cocos2d__ui__Widget_get_scene_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_bounding_box_26", Cocos2dxBind_cocos2d__ui__Widget_get_bounding_box_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__Widget_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__Widget_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_action_manager_29", Cocos2dxBind_cocos2d__ui__Widget_set_action_manager_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_action_manager_57", Cocos2dxBind_cocos2d__ui__Widget_get_action_manager_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_action_manager_58", Cocos2dxBind_cocos2d__ui__Widget_get_action_manager_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "run_action_28", Cocos2dxBind_cocos2d__ui__Widget_run_action_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "stop_all_actions_29", Cocos2dxBind_cocos2d__ui__Widget_stop_all_actions_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "stop_action_29", Cocos2dxBind_cocos2d__ui__Widget_stop_action_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ui__Widget_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ui__Widget_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ui__Widget_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ui__Widget_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ui__Widget_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_scheduler_29", Cocos2dxBind_cocos2d__ui__Widget_set_scheduler_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scheduler_57", Cocos2dxBind_cocos2d__ui__Widget_get_scheduler_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_scheduler_58", Cocos2dxBind_cocos2d__ui__Widget_get_scheduler_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_scheduled_58", Cocos2dxBind_cocos2d__ui__Widget_is_scheduled_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_update_29", Cocos2dxBind_cocos2d__ui__Widget_schedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ui__Widget_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "unschedule_update_29", Cocos2dxBind_cocos2d__ui__Widget_unschedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_once_58", Cocos2dxBind_cocos2d__ui__Widget_schedule_once_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_172", Cocos2dxBind_cocos2d__ui__Widget_schedule_172);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_173", Cocos2dxBind_cocos2d__ui__Widget_schedule_173);
            binder.bind_custom_method("Cocos2dUi", "Widget", "schedule_174", Cocos2dxBind_cocos2d__ui__Widget_schedule_174);
            binder.bind_custom_method("Cocos2dUi", "Widget", "unschedule_58", Cocos2dxBind_cocos2d__ui__Widget_unschedule_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ui__Widget_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "resume_29", Cocos2dxBind_cocos2d__ui__Widget_resume_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "pause_29", Cocos2dxBind_cocos2d__ui__Widget_pause_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_26", Cocos2dxBind_cocos2d__ui__Widget_update_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_transform_28", Cocos2dxBind_cocos2d__ui__Widget_update_transform_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ui__Widget_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__Widget_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ui__Widget_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ui__Widget_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__Widget_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ui__Widget_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ui__Widget_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__Widget_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_additional_transform_58", Cocos2dxBind_cocos2d__ui__Widget_set_additional_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_component_29", Cocos2dxBind_cocos2d__ui__Widget_get_component_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "add_component_29", Cocos2dxBind_cocos2d__ui__Widget_add_component_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_component_57", Cocos2dxBind_cocos2d__ui__Widget_remove_component_57);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_component_58", Cocos2dxBind_cocos2d__ui__Widget_remove_component_58);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_all_components_29", Cocos2dxBind_cocos2d__ui__Widget_remove_all_components_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_physics_body_29", Cocos2dxBind_cocos2d__ui__Widget_set_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_physics_body_29", Cocos2dxBind_cocos2d__ui__Widget_get_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ui__Widget_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ui__Widget_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ui__Widget_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_opacity_28", Cocos2dxBind_cocos2d__ui__Widget_get_opacity_28);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ui__Widget_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_opacity_26", Cocos2dxBind_cocos2d__ui__Widget_set_opacity_26);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__Widget_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__Widget_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_color_27", Cocos2dxBind_cocos2d__ui__Widget_get_color_27);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_displayed_color_29", Cocos2dxBind_cocos2d__ui__Widget_get_displayed_color_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_color_27", Cocos2dxBind_cocos2d__ui__Widget_set_color_27);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__Widget_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__Widget_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__Widget_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "Widget", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__Widget_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ui__Widget_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ui__Widget_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ui__Widget_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ui__Widget_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_camera_mask_29", Cocos2dxBind_cocos2d__ui__Widget_get_camera_mask_29);
            binder.bind_custom_method("Cocos2dUi", "Widget", "retain_176", Cocos2dxBind_cocos2d__ui__Widget_retain_176);
            binder.bind_custom_method("Cocos2dUi", "Widget", "release_176", Cocos2dxBind_cocos2d__ui__Widget_release_176);
            binder.bind_custom_method("Cocos2dUi", "Widget", "autorelease_176", Cocos2dxBind_cocos2d__ui__Widget_autorelease_176);
            binder.bind_custom_method("Cocos2dUi", "Widget", "get_reference_count_176", Cocos2dxBind_cocos2d__ui__Widget_get_reference_count_176);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_focus_changed=", Cocos2dxBind_cocos2d__ui__Widget_accessor_set_on_focus_changed);
            binder.bind_custom_method("Cocos2dUi", "Widget", "on_next_focused_widget=", Cocos2dxBind_cocos2d__ui__Widget_accessor_set_on_next_focused_widget);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_1);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_2);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_3", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_3);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_4", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_4);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_5", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_5);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_with_sprite_frame_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_1);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_with_sprite_frame_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_2);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_with_sprite_frame_name_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_name_1);
            binder.bind_static_method("Cocos2dUi", "Scale9Sprite", "create_with_sprite_frame_name_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_name_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_file_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_file_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_file_3", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_3);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_file_4", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_4);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_sprite_frame_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_sprite_frame_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_sprite_frame_name_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_name_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_with_sprite_frame_name_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_name_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_3", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_3);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "init_4", Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_4);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_blend_func", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_blend_func);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_blend_func", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_blend_func);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "resizable_sprite_with_cap_insets", Cocos2dxBind_cocos2d__ui__Scale9Sprite_resizable_sprite_with_cap_insets);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_with_sprite_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_with_sprite_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_with_sprite_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_with_sprite_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_sprite_frame", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_sprite_frame);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_content_size", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_content_size);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_anchor_point", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_anchor_point);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_state", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_state);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_state", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_state);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_original_size", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_original_size);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_preferred_size", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_preferred_size);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_preferred_size", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_preferred_size);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_cap_insets", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cap_insets);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_cap_insets", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_cap_insets);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_inset_left", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_left);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_inset_left", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_left);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_inset_top", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_top);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_inset_top", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_top);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_inset_right", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_right);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_inset_right", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_right);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_inset_bottom", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_bottom);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_inset_bottom", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_bottom);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale9_enabled", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale9_enabled);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_scale9_enabled", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_scale9_enabled);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "visit", Cocos2dxBind_cocos2d__ui__Scale9Sprite_visit);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "cleanup", Cocos2dxBind_cocos2d__ui__Scale9Sprite_cleanup);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "on_enter", Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_enter);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "on_enter_transition_did_finish", Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_enter_transition_did_finish);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "on_exit", Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_exit);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "on_exit_transition_did_start", Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_exit_transition_did_start);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_displayed_opacity", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_displayed_opacity);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_displayed_color", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_displayed_color);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "disable_cascade_color", Cocos2dxBind_cocos2d__ui__Scale9Sprite_disable_cascade_color);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "disable_cascade_opacity", Cocos2dxBind_cocos2d__ui__Scale9Sprite_disable_cascade_opacity);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_sprite", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_sprite);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_flipped_x", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_flipped_x);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_flipped_x", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_flipped_x);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_flipped_y", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_flipped_y);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_flipped_y", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_flipped_y);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale_x", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_x);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale_y", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_y);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale_1", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_1);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale_2", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_2);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scale_x", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_x);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scale_y", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_y);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scale", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_camera_mask", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_camera_mask);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_description_15", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_description_15);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_local_z_order_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_local_z_order_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_global_z_order_27", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_global_z_order_27);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_global_z_order_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_global_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scale_z_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scale_z_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position_49", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_49);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_normalized_position_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position_55", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_55);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_normalized_position_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position_50", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_50);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position_56", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_56);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position_x_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position_x_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position_y_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position_y_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position3_d_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position3_d_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position3_d_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_position_z_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_z_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_position_z_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_z_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_skew_x_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_skew_x_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_skew_y_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_skew_y_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_anchor_point_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_anchor_point_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_content_size_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_content_size_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_visible_27", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_visible_27);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_visible_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_visible_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_rotation_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_rotation_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "add_child_113", Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_113);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "add_child_114", Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_114);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "add_child_115", Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_115);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "add_child_116", Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_116);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_child_by_name_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "enumerate_children_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_enumerate_children_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_children_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_children_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_children_count_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_children_count_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_parent_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_parent_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_parent_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_parent_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_from_parent_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_parent_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_child_24", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_24);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_all_children_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_children_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "reorder_child_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_reorder_child_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "sort_all_children_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_sort_all_children_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_name_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_name_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_name_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_name_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_user_data_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_data_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_user_data_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_data_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_user_data_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_user_data_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_user_object_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_object_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_user_object_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_object_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_user_object_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_user_object_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_gl_program_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_gl_program_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_gl_program_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_gl_program_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_running_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_running_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "draw_27", Cocos2dxBind_cocos2d__ui__Scale9Sprite_draw_27);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "draw_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_draw_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scene_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scene_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_bounding_box_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_bounding_box_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_action_manager_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_action_manager_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_action_manager_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_manager_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_action_manager_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_manager_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "run_action_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_run_action_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "stop_all_actions_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_all_actions_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "stop_action_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_action_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_scheduler_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scheduler_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scheduler_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scheduler_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_scheduler_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scheduler_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_scheduled_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_scheduled_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_update_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "unschedule_update_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_once_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_once_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_172", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_172);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_173", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_173);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "schedule_174", Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_174);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "unschedule_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "resume_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_resume_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "pause_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_pause_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_transform_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_transform_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_additional_transform_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_additional_transform_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_component_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_component_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "add_component_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_component_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_component_57", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_component_57);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_component_58", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_component_58);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_all_components_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_components_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_physics_body_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_physics_body_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_opacity_28", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_opacity_28);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_opacity_26", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_opacity_26);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_color_27", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_color_27);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_displayed_color_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_displayed_color_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_color_27", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_color_27);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_camera_mask_29", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_camera_mask_29);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "retain_176", Cocos2dxBind_cocos2d__ui__Scale9Sprite_retain_176);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "release_176", Cocos2dxBind_cocos2d__ui__Scale9Sprite_release_176);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "autorelease_176", Cocos2dxBind_cocos2d__ui__Scale9Sprite_autorelease_176);
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "get_reference_count_176", Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_reference_count_176);
            binder.bind_static_method("Cocos2dUi", "EditBox", "create_1", Cocos2dxBind_cocos2d__ui__EditBox_create_1);
            binder.bind_static_method("Cocos2dUi", "EditBox", "create_2", Cocos2dxBind_cocos2d__ui__EditBox_create_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "init_with_size_and_background_sprite_1", Cocos2dxBind_cocos2d__ui__EditBox_init_with_size_and_background_sprite_1);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "init_with_size_and_background_sprite_2", Cocos2dxBind_cocos2d__ui__EditBox_init_with_size_and_background_sprite_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_delegate", Cocos2dxBind_cocos2d__ui__EditBox_set_delegate);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_delegate", Cocos2dxBind_cocos2d__ui__EditBox_get_delegate);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "register_script_edit_box_handler", Cocos2dxBind_cocos2d__ui__EditBox_register_script_edit_box_handler);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "unregister_script_edit_box_handler", Cocos2dxBind_cocos2d__ui__EditBox_unregister_script_edit_box_handler);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_script_edit_box_handler", Cocos2dxBind_cocos2d__ui__EditBox_get_script_edit_box_handler);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_text", Cocos2dxBind_cocos2d__ui__EditBox_set_text);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_text", Cocos2dxBind_cocos2d__ui__EditBox_get_text);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_font", Cocos2dxBind_cocos2d__ui__EditBox_set_font);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_font_name", Cocos2dxBind_cocos2d__ui__EditBox_set_font_name);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_font_size", Cocos2dxBind_cocos2d__ui__EditBox_set_font_size);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_font_color_1", Cocos2dxBind_cocos2d__ui__EditBox_set_font_color_1);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_font_color_2", Cocos2dxBind_cocos2d__ui__EditBox_set_font_color_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_placeholder_font", Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_placeholder_font_name", Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_name);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_placeholder_font_size", Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_size);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_placeholder_font_color_1", Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_color_1);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_placeholder_font_color_2", Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_color_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_place_holder", Cocos2dxBind_cocos2d__ui__EditBox_set_place_holder);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_place_holder", Cocos2dxBind_cocos2d__ui__EditBox_get_place_holder);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_input_mode", Cocos2dxBind_cocos2d__ui__EditBox_set_input_mode);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_max_length", Cocos2dxBind_cocos2d__ui__EditBox_set_max_length);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_max_length", Cocos2dxBind_cocos2d__ui__EditBox_get_max_length);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_input_flag", Cocos2dxBind_cocos2d__ui__EditBox_set_input_flag);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_return_type", Cocos2dxBind_cocos2d__ui__EditBox_set_return_type);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position", Cocos2dxBind_cocos2d__ui__EditBox_set_position);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_visible", Cocos2dxBind_cocos2d__ui__EditBox_set_visible);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_content_size", Cocos2dxBind_cocos2d__ui__EditBox_set_content_size);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_anchor_point", Cocos2dxBind_cocos2d__ui__EditBox_set_anchor_point);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_description", Cocos2dxBind_cocos2d__ui__EditBox_get_description);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "draw", Cocos2dxBind_cocos2d__ui__EditBox_draw);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_enter", Cocos2dxBind_cocos2d__ui__EditBox_on_enter);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_exit", Cocos2dxBind_cocos2d__ui__EditBox_on_exit);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "touch_down_action", Cocos2dxBind_cocos2d__ui__EditBox_touch_down_action);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_set_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_is_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_bright_2", Cocos2dxBind_cocos2d__ui__EditBox_set_bright_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_bright_2", Cocos2dxBind_cocos2d__ui__EditBox_is_bright_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_touch_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_set_touch_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_bright_style_2", Cocos2dxBind_cocos2d__ui__EditBox_set_bright_style_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_touch_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_is_touch_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_highlighted_2", Cocos2dxBind_cocos2d__ui__EditBox_is_highlighted_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_highlighted_2", Cocos2dxBind_cocos2d__ui__EditBox_set_highlighted_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_left_boundary_2", Cocos2dxBind_cocos2d__ui__EditBox_get_left_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_bottom_boundary_2", Cocos2dxBind_cocos2d__ui__EditBox_get_bottom_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_right_boundary_2", Cocos2dxBind_cocos2d__ui__EditBox_get_right_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_top_boundary_2", Cocos2dxBind_cocos2d__ui__EditBox_get_top_boundary_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "visit_2", Cocos2dxBind_cocos2d__ui__EditBox_visit_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_touch_event_listener_2", Cocos2dxBind_cocos2d__ui__EditBox_add_touch_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_click_event_listener_2", Cocos2dxBind_cocos2d__ui__EditBox_add_click_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_ccs_event_listener_2", Cocos2dxBind_cocos2d__ui__EditBox_add_ccs_event_listener_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position_percent_2", Cocos2dxBind_cocos2d__ui__EditBox_set_position_percent_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_percent_2", Cocos2dxBind_cocos2d__ui__EditBox_get_position_percent_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position_type_2", Cocos2dxBind_cocos2d__ui__EditBox_set_position_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_type_2", Cocos2dxBind_cocos2d__ui__EditBox_get_position_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_flipped_x_2", Cocos2dxBind_cocos2d__ui__EditBox_set_flipped_x_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_flipped_x_2", Cocos2dxBind_cocos2d__ui__EditBox_is_flipped_x_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_flipped_y_2", Cocos2dxBind_cocos2d__ui__EditBox_set_flipped_y_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_flipped_y_2", Cocos2dxBind_cocos2d__ui__EditBox_is_flipped_y_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scale_x_2", Cocos2dxBind_cocos2d__ui__EditBox_set_scale_x_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scale_y_2", Cocos2dxBind_cocos2d__ui__EditBox_set_scale_y_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scale_3", Cocos2dxBind_cocos2d__ui__EditBox_set_scale_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scale_4", Cocos2dxBind_cocos2d__ui__EditBox_set_scale_4);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scale_x_2", Cocos2dxBind_cocos2d__ui__EditBox_get_scale_x_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scale_y_2", Cocos2dxBind_cocos2d__ui__EditBox_get_scale_y_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scale_2", Cocos2dxBind_cocos2d__ui__EditBox_get_scale_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_clipping_parent_contains_point_2", Cocos2dxBind_cocos2d__ui__EditBox_is_clipping_parent_contains_point_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_touch_began_position_2", Cocos2dxBind_cocos2d__ui__EditBox_get_touch_began_position_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_touch_move_position_2", Cocos2dxBind_cocos2d__ui__EditBox_get_touch_move_position_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_touch_end_position_2", Cocos2dxBind_cocos2d__ui__EditBox_get_touch_end_position_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_size_percent_2", Cocos2dxBind_cocos2d__ui__EditBox_set_size_percent_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_size_type_2", Cocos2dxBind_cocos2d__ui__EditBox_set_size_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_size_type_2", Cocos2dxBind_cocos2d__ui__EditBox_get_size_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_custom_size_2", Cocos2dxBind_cocos2d__ui__EditBox_get_custom_size_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_layout_size_2", Cocos2dxBind_cocos2d__ui__EditBox_get_layout_size_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_size_percent_2", Cocos2dxBind_cocos2d__ui__EditBox_get_size_percent_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_touch_began_2", Cocos2dxBind_cocos2d__ui__EditBox_on_touch_began_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_touch_moved_2", Cocos2dxBind_cocos2d__ui__EditBox_on_touch_moved_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_touch_ended_2", Cocos2dxBind_cocos2d__ui__EditBox_on_touch_ended_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_touch_cancelled_2", Cocos2dxBind_cocos2d__ui__EditBox_on_touch_cancelled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_layout_parameter_2", Cocos2dxBind_cocos2d__ui__EditBox_set_layout_parameter_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_layout_parameter_2", Cocos2dxBind_cocos2d__ui__EditBox_get_layout_parameter_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "ignore_content_adapt_with_size_2", Cocos2dxBind_cocos2d__ui__EditBox_ignore_content_adapt_with_size_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_ignore_content_adapt_with_size_2", Cocos2dxBind_cocos2d__ui__EditBox_is_ignore_content_adapt_with_size_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_world_position_2", Cocos2dxBind_cocos2d__ui__EditBox_get_world_position_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_virtual_renderer_2", Cocos2dxBind_cocos2d__ui__EditBox_get_virtual_renderer_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_virtual_renderer_size_2", Cocos2dxBind_cocos2d__ui__EditBox_get_virtual_renderer_size_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "clone_2", Cocos2dxBind_cocos2d__ui__EditBox_clone_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_size_and_position_3", Cocos2dxBind_cocos2d__ui__EditBox_update_size_and_position_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_size_and_position_4", Cocos2dxBind_cocos2d__ui__EditBox_update_size_and_position_4);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_action_tag_2", Cocos2dxBind_cocos2d__ui__EditBox_set_action_tag_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_action_tag_2", Cocos2dxBind_cocos2d__ui__EditBox_get_action_tag_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_propagate_touch_events_2", Cocos2dxBind_cocos2d__ui__EditBox_set_propagate_touch_events_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_propagate_touch_events_2", Cocos2dxBind_cocos2d__ui__EditBox_is_propagate_touch_events_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_swallow_touches_2", Cocos2dxBind_cocos2d__ui__EditBox_set_swallow_touches_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_swallow_touches_2", Cocos2dxBind_cocos2d__ui__EditBox_is_swallow_touches_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_focused_2", Cocos2dxBind_cocos2d__ui__EditBox_is_focused_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_focused_2", Cocos2dxBind_cocos2d__ui__EditBox_set_focused_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_focus_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_is_focus_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_focus_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_set_focus_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "find_next_focused_widget_2", Cocos2dxBind_cocos2d__ui__EditBox_find_next_focused_widget_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "request_focus_2", Cocos2dxBind_cocos2d__ui__EditBox_request_focus_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_current_focused_widget_2", Cocos2dxBind_cocos2d__ui__EditBox_get_current_focused_widget_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_unify_size_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_set_unify_size_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_unify_size_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_is_unify_size_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_callback_name_2", Cocos2dxBind_cocos2d__ui__EditBox_set_callback_name_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_callback_name_2", Cocos2dxBind_cocos2d__ui__EditBox_get_callback_name_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_callback_type_2", Cocos2dxBind_cocos2d__ui__EditBox_set_callback_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_callback_type_2", Cocos2dxBind_cocos2d__ui__EditBox_get_callback_type_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_layout_component_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_set_layout_component_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_layout_component_enabled_2", Cocos2dxBind_cocos2d__ui__EditBox_is_layout_component_enabled_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "init_2", Cocos2dxBind_cocos2d__ui__EditBox_init_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "intercept_touch_event_2", Cocos2dxBind_cocos2d__ui__EditBox_intercept_touch_event_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "propagate_touch_event_2", Cocos2dxBind_cocos2d__ui__EditBox_propagate_touch_event_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_focus_change_2", Cocos2dxBind_cocos2d__ui__EditBox_on_focus_change_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "dispatch_focus_event_2", Cocos2dxBind_cocos2d__ui__EditBox_dispatch_focus_event_2);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_protected_child_7", Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_7);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_protected_child_8", Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_8);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_protected_child_9", Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_9);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ui__EditBox_get_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_protected_child_3", Cocos2dxBind_cocos2d__ui__EditBox_remove_protected_child_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ui__EditBox_remove_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_all_protected_children_3", Cocos2dxBind_cocos2d__ui__EditBox_remove_all_protected_children_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_all_protected_children_with_cleanup_3", Cocos2dxBind_cocos2d__ui__EditBox_remove_all_protected_children_with_cleanup_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "reorder_protected_child_3", Cocos2dxBind_cocos2d__ui__EditBox_reorder_protected_child_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "sort_all_protected_children_3", Cocos2dxBind_cocos2d__ui__EditBox_sort_all_protected_children_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "cleanup_3", Cocos2dxBind_cocos2d__ui__EditBox_cleanup_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_enter_transition_did_finish_3", Cocos2dxBind_cocos2d__ui__EditBox_on_enter_transition_did_finish_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_exit_transition_did_start_3", Cocos2dxBind_cocos2d__ui__EditBox_on_exit_transition_did_start_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_displayed_opacity_3", Cocos2dxBind_cocos2d__ui__EditBox_update_displayed_opacity_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_displayed_color_3", Cocos2dxBind_cocos2d__ui__EditBox_update_displayed_color_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "disable_cascade_color_3", Cocos2dxBind_cocos2d__ui__EditBox_disable_cascade_color_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "disable_cascade_opacity_3", Cocos2dxBind_cocos2d__ui__EditBox_disable_cascade_opacity_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_camera_mask_3", Cocos2dxBind_cocos2d__ui__EditBox_set_camera_mask_3);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_local_z_order_29", Cocos2dxBind_cocos2d__ui__EditBox_set_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_local_z_order_29", Cocos2dxBind_cocos2d__ui__EditBox_get_local_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_global_z_order_27", Cocos2dxBind_cocos2d__ui__EditBox_set_global_z_order_27);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_global_z_order_29", Cocos2dxBind_cocos2d__ui__EditBox_get_global_z_order_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scale_z_29", Cocos2dxBind_cocos2d__ui__EditBox_set_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scale_z_29", Cocos2dxBind_cocos2d__ui__EditBox_get_scale_z_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_normalized_position_29", Cocos2dxBind_cocos2d__ui__EditBox_set_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_55", Cocos2dxBind_cocos2d__ui__EditBox_get_position_55);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_normalized_position_29", Cocos2dxBind_cocos2d__ui__EditBox_get_normalized_position_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_56", Cocos2dxBind_cocos2d__ui__EditBox_get_position_56);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position_x_28", Cocos2dxBind_cocos2d__ui__EditBox_set_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_x_28", Cocos2dxBind_cocos2d__ui__EditBox_get_position_x_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position_y_28", Cocos2dxBind_cocos2d__ui__EditBox_set_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_y_28", Cocos2dxBind_cocos2d__ui__EditBox_get_position_y_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position3_d_29", Cocos2dxBind_cocos2d__ui__EditBox_set_position3_d_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position3_d_28", Cocos2dxBind_cocos2d__ui__EditBox_get_position3_d_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_position_z_28", Cocos2dxBind_cocos2d__ui__EditBox_set_position_z_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_position_z_29", Cocos2dxBind_cocos2d__ui__EditBox_get_position_z_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_skew_x_28", Cocos2dxBind_cocos2d__ui__EditBox_set_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_skew_x_29", Cocos2dxBind_cocos2d__ui__EditBox_get_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_skew_y_28", Cocos2dxBind_cocos2d__ui__EditBox_set_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_skew_y_29", Cocos2dxBind_cocos2d__ui__EditBox_get_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_anchor_point_29", Cocos2dxBind_cocos2d__ui__EditBox_get_anchor_point_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ui__EditBox_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_content_size_26", Cocos2dxBind_cocos2d__ui__EditBox_get_content_size_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_visible_29", Cocos2dxBind_cocos2d__ui__EditBox_is_visible_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_rotation_26", Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_rotation_29", Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ui__EditBox_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ui__EditBox_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__EditBox_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ui__EditBox_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ui__EditBox_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ui__EditBox_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_child_113", Cocos2dxBind_cocos2d__ui__EditBox_add_child_113);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_child_114", Cocos2dxBind_cocos2d__ui__EditBox_add_child_114);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_child_115", Cocos2dxBind_cocos2d__ui__EditBox_add_child_115);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_child_116", Cocos2dxBind_cocos2d__ui__EditBox_add_child_116);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_child_by_name_29", Cocos2dxBind_cocos2d__ui__EditBox_get_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "enumerate_children_29", Cocos2dxBind_cocos2d__ui__EditBox_enumerate_children_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_children_58", Cocos2dxBind_cocos2d__ui__EditBox_get_children_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_children_count_29", Cocos2dxBind_cocos2d__ui__EditBox_get_children_count_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_parent_29", Cocos2dxBind_cocos2d__ui__EditBox_set_parent_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_parent_57", Cocos2dxBind_cocos2d__ui__EditBox_get_parent_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_parent_58", Cocos2dxBind_cocos2d__ui__EditBox_get_parent_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_from_parent_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_from_parent_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_child_24", Cocos2dxBind_cocos2d__ui__EditBox_remove_child_24);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_all_children_28", Cocos2dxBind_cocos2d__ui__EditBox_remove_all_children_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ui__EditBox_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "reorder_child_26", Cocos2dxBind_cocos2d__ui__EditBox_reorder_child_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "sort_all_children_26", Cocos2dxBind_cocos2d__ui__EditBox_sort_all_children_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_get_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_set_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_name_29", Cocos2dxBind_cocos2d__ui__EditBox_get_name_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_name_29", Cocos2dxBind_cocos2d__ui__EditBox_set_name_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_user_data_57", Cocos2dxBind_cocos2d__ui__EditBox_get_user_data_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_user_data_58", Cocos2dxBind_cocos2d__ui__EditBox_get_user_data_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_user_data_29", Cocos2dxBind_cocos2d__ui__EditBox_set_user_data_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_user_object_57", Cocos2dxBind_cocos2d__ui__EditBox_get_user_object_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_user_object_58", Cocos2dxBind_cocos2d__ui__EditBox_get_user_object_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_user_object_29", Cocos2dxBind_cocos2d__ui__EditBox_set_user_object_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_gl_program_29", Cocos2dxBind_cocos2d__ui__EditBox_get_gl_program_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_gl_program_28", Cocos2dxBind_cocos2d__ui__EditBox_set_gl_program_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ui__EditBox_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ui__EditBox_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_running_29", Cocos2dxBind_cocos2d__ui__EditBox_is_running_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scene_29", Cocos2dxBind_cocos2d__ui__EditBox_get_scene_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_bounding_box_26", Cocos2dxBind_cocos2d__ui__EditBox_get_bounding_box_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__EditBox_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ui__EditBox_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_action_manager_29", Cocos2dxBind_cocos2d__ui__EditBox_set_action_manager_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_action_manager_57", Cocos2dxBind_cocos2d__ui__EditBox_get_action_manager_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_action_manager_58", Cocos2dxBind_cocos2d__ui__EditBox_get_action_manager_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "run_action_28", Cocos2dxBind_cocos2d__ui__EditBox_run_action_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "stop_all_actions_29", Cocos2dxBind_cocos2d__ui__EditBox_stop_all_actions_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "stop_action_29", Cocos2dxBind_cocos2d__ui__EditBox_stop_action_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ui__EditBox_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ui__EditBox_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ui__EditBox_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_scheduler_29", Cocos2dxBind_cocos2d__ui__EditBox_set_scheduler_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scheduler_57", Cocos2dxBind_cocos2d__ui__EditBox_get_scheduler_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_scheduler_58", Cocos2dxBind_cocos2d__ui__EditBox_get_scheduler_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_scheduled_58", Cocos2dxBind_cocos2d__ui__EditBox_is_scheduled_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_update_29", Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "unschedule_update_29", Cocos2dxBind_cocos2d__ui__EditBox_unschedule_update_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_once_58", Cocos2dxBind_cocos2d__ui__EditBox_schedule_once_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_172", Cocos2dxBind_cocos2d__ui__EditBox_schedule_172);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_173", Cocos2dxBind_cocos2d__ui__EditBox_schedule_173);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "schedule_174", Cocos2dxBind_cocos2d__ui__EditBox_schedule_174);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "unschedule_58", Cocos2dxBind_cocos2d__ui__EditBox_unschedule_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ui__EditBox_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "resume_29", Cocos2dxBind_cocos2d__ui__EditBox_resume_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "pause_29", Cocos2dxBind_cocos2d__ui__EditBox_pause_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_26", Cocos2dxBind_cocos2d__ui__EditBox_update_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_transform_28", Cocos2dxBind_cocos2d__ui__EditBox_update_transform_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ui__EditBox_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_additional_transform_58", Cocos2dxBind_cocos2d__ui__EditBox_set_additional_transform_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_component_29", Cocos2dxBind_cocos2d__ui__EditBox_get_component_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "add_component_29", Cocos2dxBind_cocos2d__ui__EditBox_add_component_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_component_57", Cocos2dxBind_cocos2d__ui__EditBox_remove_component_57);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_component_58", Cocos2dxBind_cocos2d__ui__EditBox_remove_component_58);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_all_components_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_all_components_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_physics_body_29", Cocos2dxBind_cocos2d__ui__EditBox_set_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_physics_body_29", Cocos2dxBind_cocos2d__ui__EditBox_get_physics_body_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ui__EditBox_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ui__EditBox_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ui__EditBox_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_opacity_28", Cocos2dxBind_cocos2d__ui__EditBox_get_opacity_28);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ui__EditBox_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_opacity_26", Cocos2dxBind_cocos2d__ui__EditBox_set_opacity_26);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__EditBox_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ui__EditBox_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_color_27", Cocos2dxBind_cocos2d__ui__EditBox_get_color_27);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_displayed_color_29", Cocos2dxBind_cocos2d__ui__EditBox_get_displayed_color_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_color_27", Cocos2dxBind_cocos2d__ui__EditBox_set_color_27);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__EditBox_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ui__EditBox_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__EditBox_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ui__EditBox_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ui__EditBox_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ui__EditBox_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ui__EditBox_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ui__EditBox_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_camera_mask_29", Cocos2dxBind_cocos2d__ui__EditBox_get_camera_mask_29);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "retain_176", Cocos2dxBind_cocos2d__ui__EditBox_retain_176);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "release_176", Cocos2dxBind_cocos2d__ui__EditBox_release_176);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "autorelease_176", Cocos2dxBind_cocos2d__ui__EditBox_autorelease_176);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "get_reference_count_176", Cocos2dxBind_cocos2d__ui__EditBox_get_reference_count_176);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_focus_changed=", Cocos2dxBind_cocos2d__ui__EditBox_accessor_set_on_focus_changed);
            binder.bind_custom_method("Cocos2dUi", "EditBox", "on_next_focused_widget=", Cocos2dxBind_cocos2d__ui__EditBox_accessor_set_on_next_focused_widget);
            binder.bind_static_method("Cocosdenshion", "SimpleAudioEngine", "get_instance", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_instance);
            binder.bind_static_method("Cocosdenshion", "SimpleAudioEngine", "end", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_end);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "preload_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_preload_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "play_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_play_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "stop_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "pause_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "resume_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "rewind_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_rewind_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "will_play_background_music", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_will_play_background_music);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "is_background_music_playing", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_is_background_music_playing);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "get_background_music_volume", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_background_music_volume);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "set_background_music_volume", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_set_background_music_volume);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "get_effects_volume", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_effects_volume);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "set_effects_volume", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_set_effects_volume);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "play_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_play_effect);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "pause_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_effect);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "pause_all_effects", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_all_effects);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "resume_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_effect);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "resume_all_effects", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_all_effects);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "stop_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_effect);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "stop_all_effects", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_all_effects);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "preload_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_preload_effect);
            binder.bind_custom_method("Cocosdenshion", "SimpleAudioEngine", "unload_effect", Cocos2dxBind_CocosDenshion__SimpleAudioEngine_unload_effect);
            binder.bind_custom_method("Cocos2d", "Color4B", "r=", Cocos2dxBind_cocos2d__Color4B_accessor_set_r);
            binder.bind_custom_method("Cocos2d", "Color4B", "r", Cocos2dxBind_cocos2d__Color4B_accessor_get_r);
            binder.bind_custom_method("Cocos2d", "Color4B", "g=", Cocos2dxBind_cocos2d__Color4B_accessor_set_g);
            binder.bind_custom_method("Cocos2d", "Color4B", "g", Cocos2dxBind_cocos2d__Color4B_accessor_get_g);
            binder.bind_custom_method("Cocos2d", "Color4B", "b=", Cocos2dxBind_cocos2d__Color4B_accessor_set_b);
            binder.bind_custom_method("Cocos2d", "Color4B", "b", Cocos2dxBind_cocos2d__Color4B_accessor_get_b);
            binder.bind_custom_method("Cocos2d", "Color4B", "a=", Cocos2dxBind_cocos2d__Color4B_accessor_set_a);
            binder.bind_custom_method("Cocos2d", "Color4B", "a", Cocos2dxBind_cocos2d__Color4B_accessor_get_a);
            binder.bind_custom_method("Cocos2d", "Tex2F", "u=", Cocos2dxBind_cocos2d__Tex2F_accessor_set_u);
            binder.bind_custom_method("Cocos2d", "Tex2F", "u", Cocos2dxBind_cocos2d__Tex2F_accessor_get_u);
            binder.bind_custom_method("Cocos2d", "Tex2F", "v=", Cocos2dxBind_cocos2d__Tex2F_accessor_set_v);
            binder.bind_custom_method("Cocos2d", "Tex2F", "v", Cocos2dxBind_cocos2d__Tex2F_accessor_get_v);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "get_type_5", Cocos2dxBind_cocos2d__EventKeyboard_get_type_5);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "stop_propagation_5", Cocos2dxBind_cocos2d__EventKeyboard_stop_propagation_5);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "is_stopped_5", Cocos2dxBind_cocos2d__EventKeyboard_is_stopped_5);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "get_current_target_5", Cocos2dxBind_cocos2d__EventKeyboard_get_current_target_5);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "retain_176", Cocos2dxBind_cocos2d__EventKeyboard_retain_176);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "release_176", Cocos2dxBind_cocos2d__EventKeyboard_release_176);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "autorelease_176", Cocos2dxBind_cocos2d__EventKeyboard_autorelease_176);
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "get_reference_count_176", Cocos2dxBind_cocos2d__EventKeyboard_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "font_file_path=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_font_file_path);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "font_file_path", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_font_file_path);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "font_size=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_font_size);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "font_size", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_font_size);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "glyphs=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_glyphs);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "glyphs", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_glyphs);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "custom_glyphs=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_custom_glyphs);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "custom_glyphs", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_custom_glyphs);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "distance_field_enabled=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_distance_field_enabled);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "distance_field_enabled", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_distance_field_enabled);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "outline_size=", Cocos2dxBind_cocos2d___ttfConfig_accessor_set_outline_size);
            binder.bind_custom_method("Cocos2d", "_ttfConfig", "outline_size", Cocos2dxBind_cocos2d___ttfConfig_accessor_get_outline_size);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "density=", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_density);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "density", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_density);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "restitution=", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_restitution);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "restitution", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_restitution);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "friction=", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_friction);
            binder.bind_custom_method("Cocos2d", "PhysicsMaterial", "friction", Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_friction);
            binder.bind_custom_method("Cocos2d", "PhysicsContactData", "count=", Cocos2dxBind_cocos2d__PhysicsContactData_accessor_set_count);
            binder.bind_custom_method("Cocos2d", "PhysicsContactData", "count", Cocos2dxBind_cocos2d__PhysicsContactData_accessor_get_count);
            binder.bind_custom_method("Cocos2d", "PhysicsContactData", "normal=", Cocos2dxBind_cocos2d__PhysicsContactData_accessor_set_normal);
            binder.bind_custom_method("Cocos2d", "PhysicsContactData", "normal", Cocos2dxBind_cocos2d__PhysicsContactData_accessor_get_normal);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "shape=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "shape", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "start=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_start);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "start", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_start);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "end=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_end);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "end", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_end);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "contact=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_contact);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "contact", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_contact);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "normal=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_normal);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "normal", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_normal);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "fraction=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_fraction);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "fraction", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_fraction);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "data=", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_data);
            binder.bind_custom_method("Cocos2d", "PhysicsRayCastInfo", "data", Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_data);

          }

    }
}
