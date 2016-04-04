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
        
        MrubyRef Cocos2dxBind_cocos2d__LabelAtlas_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__LabelAtlas_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__LabelAtlas_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__LabelAtlas_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__LabelAtlas_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__LabelAtlas_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__LabelAtlas_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__LabelAtlas_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__LabelAtlas_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__LabelAtlas_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__LabelAtlas_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__LabelAtlas_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__LabelAtlas_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__LabelAtlas_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__LabelAtlas_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__LabelAtlas_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__LabelAtlas_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__LabelAtlas_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__LabelAtlas_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__LabelAtlas_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__LabelAtlas_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__LabelAtlas_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LabelAtlas_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LabelAtlas_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__LabelAtlas_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__LabelAtlas_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__LabelAtlas_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__LabelAtlas_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__LabelAtlas_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__LabelAtlas_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__LabelAtlas_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__LabelAtlas_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__LabelAtlas_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__LabelAtlas_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__LabelAtlas_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__LabelAtlas_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__LabelAtlas_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__LabelAtlas_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> Cocos2dxBind_cocos2d__MotionStreak_create_1(float a0, float a1, float a2, cocos2d::Color3B a3, std::string a4)
        {

            return cocos2d::MotionStreak::create(a0, a1, a2, a3, a4);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> Cocos2dxBind_cocos2d__MotionStreak_create_2(float a0, float a1, float a2, cocos2d::Color3B a3, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a4)
        {

            return cocos2d::MotionStreak::create(a0, a1, a2, a3, a4.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_tint_with_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Color3B a0)
        {

            c->tintWithColor(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_reset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->reset();
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_fast_mode(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isFastMode();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_fast_mode(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setFastMode(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_stroke(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getStroke();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_stroke(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setStroke(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_starting_position_initialized(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isStartingPositionInitialized();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_starting_position_initialized(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setStartingPositionInitialized(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_get_position_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPosition();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_get_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setPositionX(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_position_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPositionX();
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_position_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPositionY();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__MotionStreak_get_position3_d(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__MotionStreak_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__MotionStreak_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getBlendFunc();
        }

        int Cocos2dxBind_cocos2d__MotionStreak_get_opacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getOpacity();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_opacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_opacity_modify_rgb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_opacity_modify_rgb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isOpacityModifyRGB();
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_init_with_fade_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0, float a1, float a2, cocos2d::Color3B a3, std::string a4)
        {

            return c->initWithFade(a0, a1, a2, a3, a4);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_init_with_fade_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0, float a1, float a2, cocos2d::Color3B a3, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a4)
        {

            return c->initWithFade(a0, a1, a2, a3, a4.get());
        }

        std::string Cocos2dxBind_cocos2d__MotionStreak_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__MotionStreak_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__MotionStreak_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__MotionStreak_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__MotionStreak_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__MotionStreak_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__MotionStreak_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MotionStreak_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MotionStreak_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__MotionStreak_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__MotionStreak_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__MotionStreak_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__MotionStreak_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__MotionStreak_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__MotionStreak_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__MotionStreak_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__MotionStreak_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__MotionStreak_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__MotionStreak_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__MotionStreak_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__MotionStreak_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__MotionStreak_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__MotionStreak_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__MotionStreak_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__MotionStreak_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__MotionStreak_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__MotionStreak_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__MotionStreak_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__MotionStreak_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__MotionStreak_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__MotionStreak_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__MotionStreak_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__MotionStreak_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__MotionStreak_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__MotionStreak_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__MotionStreak_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__MotionStreak_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__MotionStreak_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__MotionStreak_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__MotionStreak_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__MotionStreak_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__MotionStreak_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__MotionStreak_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__MotionStreak_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__MotionStreak_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__MotionStreak_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__MotionStreak_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__MotionStreak_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__MotionStreak_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__MotionStreak_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__MotionStreak_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__MotionStreak_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__MotionStreak_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> Cocos2dxBind_cocos2d__ParticleSystem_create(std::string a0)
        {

            return cocos2d::ParticleSystem::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> Cocos2dxBind_cocos2d__ParticleSystem_create_with_total_particles(int a0)
        {

            return cocos2d::ParticleSystem::createWithTotalParticles(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_add_particle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->addParticle();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_init_particle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::sParticle * a0)
        {

            c->initParticle(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_system_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->stopSystem();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_reset_system_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->resetSystem();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_full_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isFull();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_quad_with_particle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::sParticle * a0, cocos2d::Vec2 a1)
        {

            c->updateQuadWithParticle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_post_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->postStep();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_with_no_time_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->updateWithNoTime();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_auto_remove_on_finish_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isAutoRemoveOnFinish();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_auto_remove_on_finish_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setAutoRemoveOnFinish(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_gravity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getGravity();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_gravity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setGravity(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_speed_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getSpeed();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_speed_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setSpeed(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_speed_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getSpeedVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_speed_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setSpeedVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_tangential_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getTangentialAccel();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_tangential_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setTangentialAccel(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_tangential_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getTangentialAccelVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_tangential_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setTangentialAccelVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_radial_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRadialAccel();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_radial_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRadialAccel(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_radial_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRadialAccelVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_radial_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRadialAccelVar(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_is_dir_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotationIsDir();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_is_dir_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setRotationIsDir(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartRadius();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartRadius(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartRadiusVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartRadiusVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndRadius();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndRadius(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndRadiusVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndRadiusVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_rotate_per_second_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotatePerSecond();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotate_per_second_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRotatePerSecond(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_rotate_per_second_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotatePerSecondVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotate_per_second_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRotatePerSecondVar(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRotation(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setScaleY(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_active_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isActive();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_blend_additive_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isBlendAdditive();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_blend_additive_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setBlendAdditive(a0);
        }

        cocos2d::ParticleBatchNode* Cocos2dxBind_cocos2d__ParticleSystem_get_batch_node_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getBatchNode();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_batch_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::ParticleBatchNode * a0)
        {

            c->setBatchNode(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_atlas_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getAtlasIndex();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_atlas_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setAtlasIndex(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ParticleSystem_get_particle_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getParticleCount();
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setDuration(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_source_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getSourcePosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_source_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setSourcePosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_pos_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPosVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_pos_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setPosVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_life_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getLife();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_life_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setLife(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_life_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getLifeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_life_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setLifeVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_angle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getAngle();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_angle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setAngle(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_angle_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getAngleVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_angle_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setAngleVar(a0);
        }

        cocos2d::ParticleSystem::Mode Cocos2dxBind_cocos2d__ParticleSystem_get_emitter_mode_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEmitterMode();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_emitter_mode_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setEmitterMode((cocos2d::ParticleSystem::Mode)a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartSize(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartSizeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartSizeVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndSize(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndSizeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndSizeVar(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystem_get_start_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color4F a0)
        {

            c->setStartColor(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystem_get_start_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartColorVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color4F a0)
        {

            c->setStartColorVar(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystem_get_end_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color4F a0)
        {

            c->setEndColor(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystem_get_end_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndColorVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color4F a0)
        {

            c->setEndColorVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartSpin();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartSpin(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_start_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getStartSpinVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_start_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setStartSpinVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndSpin();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndSpin(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_end_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEndSpinVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_end_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEndSpinVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_emission_rate_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEmissionRate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_emission_rate_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setEmissionRate(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_total_particles_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getTotalParticles();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_total_particles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setTotalParticles(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isOpacityModifyRGB();
        }

        cocos2d::ParticleSystem::PositionType Cocos2dxBind_cocos2d__ParticleSystem_get_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPositionType();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setPositionType((cocos2d::ParticleSystem::PositionType)a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_on_enter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_on_exit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__ParticleSystem_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__ParticleSystem_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getBlendFunc();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            return c->initWithFile(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_init_with_total_particles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            return c->initWithTotalParticles(a0);
        }

        std::string Cocos2dxBind_cocos2d__ParticleSystem_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getGlobalZOrder();
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScaleZ();
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ParticleSystem_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ParticleSystem_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isVisible();
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ParticleSystem_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystem_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystem_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ParticleSystem_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__ParticleSystem_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystem_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ParticleSystem_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ParticleSystem_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ParticleSystem_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ParticleSystem_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ParticleSystem_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ParticleSystem_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ParticleSystem_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ParticleSystem_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ParticleSystem_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ParticleSystem_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ParticleSystem_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ParticleSystem_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ParticleSystem_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ParticleSystem_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ParticleSystem_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__ParticleSystem_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ParticleSystem_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ParticleSystem_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystem_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystem_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ParticleSystem_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ParticleSystem_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystem_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ParticleSystem_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ParticleSystem_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ParticleSystem_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ParticleSystem_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ParticleSystem_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystem_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ParticleSystem_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ParticleSystem_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ParticleSystem_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ParticleSystem_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ParticleSystem_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> Cocos2dxBind_cocos2d__ParticleSystemQuad_create_1()
        {

            return cocos2d::ParticleSystemQuad::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> Cocos2dxBind_cocos2d__ParticleSystemQuad_create_with_total_particles(int a0)
        {

            return cocos2d::ParticleSystemQuad::createWithTotalParticles(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> Cocos2dxBind_cocos2d__ParticleSystemQuad_create_2(std::string a0)
        {

            return cocos2d::ParticleSystemQuad::create(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_display_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            c->setDisplayFrame(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_texture_with_rect(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, cocos2d::Rect a1)
        {

            c->setTextureWithRect(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_listen_renderer_recreated(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventCustom> a0)
        {

            c->listenRendererRecreated(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_quad_with_particle(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::sParticle * a0, cocos2d::Vec2 a1)
        {

            c->updateQuadWithParticle(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_post_step(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->postStep();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_batch_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::ParticleBatchNode * a0)
        {

            c->setBatchNode(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_total_particles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setTotalParticles(a0);
        }

        std::string Cocos2dxBind_cocos2d__ParticleSystemQuad_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getDescription();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_init_with_total_particles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            return c->initWithTotalParticles(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_add_particle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->addParticle();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_init_particle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::sParticle * a0)
        {

            c->initParticle(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_system_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->stopSystem();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_reset_system_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->resetSystem();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_full_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isFull();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_with_no_time_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->updateWithNoTime();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_auto_remove_on_finish_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isAutoRemoveOnFinish();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_auto_remove_on_finish_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setAutoRemoveOnFinish(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gravity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getGravity();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gravity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setGravity(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_speed_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getSpeed();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_speed_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setSpeed(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_speed_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getSpeedVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_speed_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setSpeedVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tangential_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getTangentialAccel();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tangential_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setTangentialAccel(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tangential_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getTangentialAccelVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tangential_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setTangentialAccelVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_radial_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRadialAccel();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_radial_accel_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRadialAccel(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_radial_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRadialAccelVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_radial_accel_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRadialAccelVar(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_is_dir_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotationIsDir();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_is_dir_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setRotationIsDir(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartRadius();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartRadius(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartRadiusVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartRadiusVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndRadius();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_radius_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndRadius(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndRadiusVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_radius_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndRadiusVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotate_per_second_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotatePerSecond();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotate_per_second_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRotatePerSecond(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotate_per_second_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotatePerSecondVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotate_per_second_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRotatePerSecondVar(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRotation(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setScaleY(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_active_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isActive();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_blend_additive_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isBlendAdditive();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_blend_additive_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setBlendAdditive(a0);
        }

        cocos2d::ParticleBatchNode* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_batch_node_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getBatchNode();
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_atlas_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getAtlasIndex();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_atlas_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setAtlasIndex(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_particle_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getParticleCount();
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getDuration();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_duration_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setDuration(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_source_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getSourcePosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_source_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setSourcePosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_pos_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPosVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_pos_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setPosVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_life_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getLife();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_life_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setLife(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_life_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getLifeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_life_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setLifeVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_angle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getAngle();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_angle_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setAngle(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_angle_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getAngleVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_angle_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setAngleVar(a0);
        }

        cocos2d::ParticleSystem::Mode Cocos2dxBind_cocos2d__ParticleSystemQuad_get_emitter_mode_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEmitterMode();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_emitter_mode_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setEmitterMode((cocos2d::ParticleSystem::Mode)a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartSize(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartSizeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartSizeVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndSize(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndSizeVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_size_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndSizeVar(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color4F a0)
        {

            c->setStartColor(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartColorVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color4F a0)
        {

            c->setStartColorVar(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndColor();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color4F a0)
        {

            c->setEndColor(a0);
        }

        cocos2d::Color4F Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndColorVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_color_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Color4F a0)
        {

            c->setEndColorVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartSpin();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartSpin(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getStartSpinVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setStartSpinVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndSpin();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_spin_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndSpin(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEndSpinVar();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_spin_var_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEndSpinVar(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_emission_rate_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getEmissionRate();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_emission_rate_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setEmissionRate(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_total_particles_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getTotalParticles();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_opacity_modify_rgb_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isOpacityModifyRGB();
        }

        cocos2d::ParticleSystem::PositionType Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPositionType();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setPositionType((cocos2d::ParticleSystem::PositionType)a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_on_enter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_on_exit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_update_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->update(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__ParticleSystemQuad_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getBlendFunc();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            return c->initWithFile(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getGlobalZOrder();
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScaleZ();
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ParticleSystemQuad_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isVisible();
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ParticleSystemQuad_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ParticleSystemQuad_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__ParticleSystemQuad_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ParticleSystemQuad_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ParticleSystemQuad_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> c)
        {

            return c->getUserData();
        }



        
        bool Cocos2dxBind_EaseCubicActionInOut_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ActionInstant_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Show_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Hide_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ToggleVisibility_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_RemoveSelf_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FlipX_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FlipY_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Place_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CallFunc_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_CallFuncN_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_GridAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Grid3DAction_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AccelDeccelAmplitude_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AccelAmplitude_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_DeccelAmplitude_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_8(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("Cocos2d", "FadeOutTRTiles", "create", Cocos2dxBind_cocos2d__FadeOutTRTiles_create);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "test_func", Cocos2dxBind_cocos2d__FadeOutTRTiles_test_func);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "turn_on_tile_4", Cocos2dxBind_cocos2d__FadeOutTRTiles_turn_on_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "turn_off_tile_4", Cocos2dxBind_cocos2d__FadeOutTRTiles_turn_off_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "transform_tile_2", Cocos2dxBind_cocos2d__FadeOutTRTiles_transform_tile_2);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "update_4", Cocos2dxBind_cocos2d__FadeOutTRTiles_update_4);
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "clone", Cocos2dxBind_cocos2d__FadeOutTRTiles_clone);
            binder.bind_static_method("Cocos2d", "FadeOutBLTiles", "create", Cocos2dxBind_cocos2d__FadeOutBLTiles_create);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "test_func", Cocos2dxBind_cocos2d__FadeOutBLTiles_test_func);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "clone", Cocos2dxBind_cocos2d__FadeOutBLTiles_clone);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "turn_on_tile_4", Cocos2dxBind_cocos2d__FadeOutBLTiles_turn_on_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "turn_off_tile_4", Cocos2dxBind_cocos2d__FadeOutBLTiles_turn_off_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "transform_tile_2", Cocos2dxBind_cocos2d__FadeOutBLTiles_transform_tile_2);
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "update_4", Cocos2dxBind_cocos2d__FadeOutBLTiles_update_4);
            binder.bind_static_method("Cocos2d", "FadeOutUpTiles", "create", Cocos2dxBind_cocos2d__FadeOutUpTiles_create);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "transform_tile_2", Cocos2dxBind_cocos2d__FadeOutUpTiles_transform_tile_2);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "clone", Cocos2dxBind_cocos2d__FadeOutUpTiles_clone);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "test_func", Cocos2dxBind_cocos2d__FadeOutUpTiles_test_func);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "turn_on_tile_4", Cocos2dxBind_cocos2d__FadeOutUpTiles_turn_on_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "turn_off_tile_4", Cocos2dxBind_cocos2d__FadeOutUpTiles_turn_off_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "update_4", Cocos2dxBind_cocos2d__FadeOutUpTiles_update_4);
            binder.bind_static_method("Cocos2d", "FadeOutDownTiles", "create", Cocos2dxBind_cocos2d__FadeOutDownTiles_create);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "clone", Cocos2dxBind_cocos2d__FadeOutDownTiles_clone);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "test_func", Cocos2dxBind_cocos2d__FadeOutDownTiles_test_func);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "transform_tile_2", Cocos2dxBind_cocos2d__FadeOutDownTiles_transform_tile_2);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "turn_on_tile_4", Cocos2dxBind_cocos2d__FadeOutDownTiles_turn_on_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "turn_off_tile_4", Cocos2dxBind_cocos2d__FadeOutDownTiles_turn_off_tile_4);
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "update_4", Cocos2dxBind_cocos2d__FadeOutDownTiles_update_4);
            binder.bind_static_method("Cocos2d", "TurnOffTiles", "create_1", Cocos2dxBind_cocos2d__TurnOffTiles_create_1);
            binder.bind_static_method("Cocos2d", "TurnOffTiles", "create_2", Cocos2dxBind_cocos2d__TurnOffTiles_create_2);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "shuffle", Cocos2dxBind_cocos2d__TurnOffTiles_shuffle);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "turn_on_tile", Cocos2dxBind_cocos2d__TurnOffTiles_turn_on_tile);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "turn_off_tile", Cocos2dxBind_cocos2d__TurnOffTiles_turn_off_tile);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "clone", Cocos2dxBind_cocos2d__TurnOffTiles_clone);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "start_with_target", Cocos2dxBind_cocos2d__TurnOffTiles_start_with_target);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "update", Cocos2dxBind_cocos2d__TurnOffTiles_update);
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "init_with_duration", Cocos2dxBind_cocos2d__TurnOffTiles_init_with_duration);
            binder.bind_static_method("Cocos2d", "WavesTiles3D", "create", Cocos2dxBind_cocos2d__WavesTiles3D_create);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "get_amplitude", Cocos2dxBind_cocos2d__WavesTiles3D_get_amplitude);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "set_amplitude", Cocos2dxBind_cocos2d__WavesTiles3D_set_amplitude);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "get_amplitude_rate", Cocos2dxBind_cocos2d__WavesTiles3D_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "set_amplitude_rate", Cocos2dxBind_cocos2d__WavesTiles3D_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "clone", Cocos2dxBind_cocos2d__WavesTiles3D_clone);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "update", Cocos2dxBind_cocos2d__WavesTiles3D_update);
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "init_with_duration", Cocos2dxBind_cocos2d__WavesTiles3D_init_with_duration);
            binder.bind_static_method("Cocos2d", "JumpTiles3D", "create", Cocos2dxBind_cocos2d__JumpTiles3D_create);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "get_amplitude", Cocos2dxBind_cocos2d__JumpTiles3D_get_amplitude);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "set_amplitude", Cocos2dxBind_cocos2d__JumpTiles3D_set_amplitude);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "get_amplitude_rate", Cocos2dxBind_cocos2d__JumpTiles3D_get_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "set_amplitude_rate", Cocos2dxBind_cocos2d__JumpTiles3D_set_amplitude_rate);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "clone", Cocos2dxBind_cocos2d__JumpTiles3D_clone);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "update", Cocos2dxBind_cocos2d__JumpTiles3D_update);
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "init_with_duration", Cocos2dxBind_cocos2d__JumpTiles3D_init_with_duration);
            binder.bind_static_method("Cocos2d", "SplitRows", "create", Cocos2dxBind_cocos2d__SplitRows_create);
            binder.bind_custom_method("Cocos2d", "SplitRows", "clone", Cocos2dxBind_cocos2d__SplitRows_clone);
            binder.bind_custom_method("Cocos2d", "SplitRows", "update", Cocos2dxBind_cocos2d__SplitRows_update);
            binder.bind_custom_method("Cocos2d", "SplitRows", "start_with_target", Cocos2dxBind_cocos2d__SplitRows_start_with_target);
            binder.bind_custom_method("Cocos2d", "SplitRows", "init_with_duration", Cocos2dxBind_cocos2d__SplitRows_init_with_duration);
            binder.bind_static_method("Cocos2d", "SplitCols", "create", Cocos2dxBind_cocos2d__SplitCols_create);
            binder.bind_custom_method("Cocos2d", "SplitCols", "clone", Cocos2dxBind_cocos2d__SplitCols_clone);
            binder.bind_custom_method("Cocos2d", "SplitCols", "update", Cocos2dxBind_cocos2d__SplitCols_update);
            binder.bind_custom_method("Cocos2d", "SplitCols", "start_with_target", Cocos2dxBind_cocos2d__SplitCols_start_with_target);
            binder.bind_custom_method("Cocos2d", "SplitCols", "init_with_duration", Cocos2dxBind_cocos2d__SplitCols_init_with_duration);
            binder.bind_static_method("Cocos2d", "AtlasNode", "create", Cocos2dxBind_cocos2d__AtlasNode_create);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_atlas_values", Cocos2dxBind_cocos2d__AtlasNode_update_atlas_values);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_texture_atlas_2", Cocos2dxBind_cocos2d__AtlasNode_set_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_texture_atlas_2", Cocos2dxBind_cocos2d__AtlasNode_get_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_quads_to_draw_2", Cocos2dxBind_cocos2d__AtlasNode_set_quads_to_draw_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_quads_to_draw_2", Cocos2dxBind_cocos2d__AtlasNode_get_quads_to_draw_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "draw_2", Cocos2dxBind_cocos2d__AtlasNode_draw_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_texture_2", Cocos2dxBind_cocos2d__AtlasNode_get_texture_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_texture_2", Cocos2dxBind_cocos2d__AtlasNode_set_texture_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__AtlasNode_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__AtlasNode_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_color_2", Cocos2dxBind_cocos2d__AtlasNode_get_color_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_color_2", Cocos2dxBind_cocos2d__AtlasNode_set_color_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_opacity_2", Cocos2dxBind_cocos2d__AtlasNode_set_opacity_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_blend_func_2", Cocos2dxBind_cocos2d__AtlasNode_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_blend_func_2", Cocos2dxBind_cocos2d__AtlasNode_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "init_with_tile_file_2", Cocos2dxBind_cocos2d__AtlasNode_init_with_tile_file_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "init_with_texture_2", Cocos2dxBind_cocos2d__AtlasNode_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_description_15", Cocos2dxBind_cocos2d__AtlasNode_get_description_15);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_local_z_order_29", Cocos2dxBind_cocos2d__AtlasNode_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_local_z_order_29", Cocos2dxBind_cocos2d__AtlasNode_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_global_z_order_27", Cocos2dxBind_cocos2d__AtlasNode_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_global_z_order_29", Cocos2dxBind_cocos2d__AtlasNode_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scale_x_23", Cocos2dxBind_cocos2d__AtlasNode_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scale_x_26", Cocos2dxBind_cocos2d__AtlasNode_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scale_y_23", Cocos2dxBind_cocos2d__AtlasNode_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scale_y_26", Cocos2dxBind_cocos2d__AtlasNode_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scale_z_29", Cocos2dxBind_cocos2d__AtlasNode_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scale_z_29", Cocos2dxBind_cocos2d__AtlasNode_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scale_45", Cocos2dxBind_cocos2d__AtlasNode_set_scale_45);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scale_26", Cocos2dxBind_cocos2d__AtlasNode_get_scale_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scale_46", Cocos2dxBind_cocos2d__AtlasNode_set_scale_46);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position_49", Cocos2dxBind_cocos2d__AtlasNode_set_position_49);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_normalized_position_29", Cocos2dxBind_cocos2d__AtlasNode_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position_55", Cocos2dxBind_cocos2d__AtlasNode_get_position_55);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_normalized_position_29", Cocos2dxBind_cocos2d__AtlasNode_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position_50", Cocos2dxBind_cocos2d__AtlasNode_set_position_50);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position_56", Cocos2dxBind_cocos2d__AtlasNode_get_position_56);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position_x_28", Cocos2dxBind_cocos2d__AtlasNode_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position_x_28", Cocos2dxBind_cocos2d__AtlasNode_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position_y_28", Cocos2dxBind_cocos2d__AtlasNode_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position_y_28", Cocos2dxBind_cocos2d__AtlasNode_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position3_d_29", Cocos2dxBind_cocos2d__AtlasNode_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position3_d_28", Cocos2dxBind_cocos2d__AtlasNode_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_position_z_28", Cocos2dxBind_cocos2d__AtlasNode_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_position_z_29", Cocos2dxBind_cocos2d__AtlasNode_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_skew_x_28", Cocos2dxBind_cocos2d__AtlasNode_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_skew_x_29", Cocos2dxBind_cocos2d__AtlasNode_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_skew_y_28", Cocos2dxBind_cocos2d__AtlasNode_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_skew_y_29", Cocos2dxBind_cocos2d__AtlasNode_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_anchor_point_26", Cocos2dxBind_cocos2d__AtlasNode_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_anchor_point_29", Cocos2dxBind_cocos2d__AtlasNode_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__AtlasNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_content_size_24", Cocos2dxBind_cocos2d__AtlasNode_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_content_size_26", Cocos2dxBind_cocos2d__AtlasNode_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_visible_27", Cocos2dxBind_cocos2d__AtlasNode_set_visible_27);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_visible_29", Cocos2dxBind_cocos2d__AtlasNode_is_visible_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_rotation_26", Cocos2dxBind_cocos2d__AtlasNode_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_rotation_29", Cocos2dxBind_cocos2d__AtlasNode_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_rotation3_d_29", Cocos2dxBind_cocos2d__AtlasNode_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_rotation3_d_29", Cocos2dxBind_cocos2d__AtlasNode_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_rotation_quat_29", Cocos2dxBind_cocos2d__AtlasNode_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_rotation_quat_29", Cocos2dxBind_cocos2d__AtlasNode_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__AtlasNode_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__AtlasNode_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__AtlasNode_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__AtlasNode_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__AtlasNode_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__AtlasNode_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__AtlasNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__AtlasNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "add_child_113", Cocos2dxBind_cocos2d__AtlasNode_add_child_113);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "add_child_114", Cocos2dxBind_cocos2d__AtlasNode_add_child_114);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "add_child_115", Cocos2dxBind_cocos2d__AtlasNode_add_child_115);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "add_child_116", Cocos2dxBind_cocos2d__AtlasNode_add_child_116);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_child_by_tag_29", Cocos2dxBind_cocos2d__AtlasNode_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_child_by_name_29", Cocos2dxBind_cocos2d__AtlasNode_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "enumerate_children_29", Cocos2dxBind_cocos2d__AtlasNode_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_children_58", Cocos2dxBind_cocos2d__AtlasNode_get_children_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_children_count_29", Cocos2dxBind_cocos2d__AtlasNode_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_parent_29", Cocos2dxBind_cocos2d__AtlasNode_set_parent_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_parent_57", Cocos2dxBind_cocos2d__AtlasNode_get_parent_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_parent_58", Cocos2dxBind_cocos2d__AtlasNode_get_parent_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_from_parent_29", Cocos2dxBind_cocos2d__AtlasNode_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__AtlasNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_child_24", Cocos2dxBind_cocos2d__AtlasNode_remove_child_24);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__AtlasNode_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_child_by_name_29", Cocos2dxBind_cocos2d__AtlasNode_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_all_children_28", Cocos2dxBind_cocos2d__AtlasNode_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__AtlasNode_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "reorder_child_26", Cocos2dxBind_cocos2d__AtlasNode_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "sort_all_children_26", Cocos2dxBind_cocos2d__AtlasNode_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_tag_29", Cocos2dxBind_cocos2d__AtlasNode_get_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_tag_29", Cocos2dxBind_cocos2d__AtlasNode_set_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_name_29", Cocos2dxBind_cocos2d__AtlasNode_get_name_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_name_29", Cocos2dxBind_cocos2d__AtlasNode_set_name_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_user_data_57", Cocos2dxBind_cocos2d__AtlasNode_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_user_data_58", Cocos2dxBind_cocos2d__AtlasNode_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_user_data_29", Cocos2dxBind_cocos2d__AtlasNode_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_user_object_57", Cocos2dxBind_cocos2d__AtlasNode_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_user_object_58", Cocos2dxBind_cocos2d__AtlasNode_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_user_object_29", Cocos2dxBind_cocos2d__AtlasNode_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_gl_program_29", Cocos2dxBind_cocos2d__AtlasNode_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_gl_program_28", Cocos2dxBind_cocos2d__AtlasNode_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_gl_program_state_29", Cocos2dxBind_cocos2d__AtlasNode_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_gl_program_state_28", Cocos2dxBind_cocos2d__AtlasNode_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_running_29", Cocos2dxBind_cocos2d__AtlasNode_is_running_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__AtlasNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "on_enter_18", Cocos2dxBind_cocos2d__AtlasNode_on_enter_18);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__AtlasNode_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "on_exit_18", Cocos2dxBind_cocos2d__AtlasNode_on_exit_18);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__AtlasNode_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "cleanup_25", Cocos2dxBind_cocos2d__AtlasNode_cleanup_25);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "visit_31", Cocos2dxBind_cocos2d__AtlasNode_visit_31);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "visit_32", Cocos2dxBind_cocos2d__AtlasNode_visit_32);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scene_29", Cocos2dxBind_cocos2d__AtlasNode_get_scene_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_bounding_box_26", Cocos2dxBind_cocos2d__AtlasNode_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__AtlasNode_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__AtlasNode_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_action_manager_29", Cocos2dxBind_cocos2d__AtlasNode_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_action_manager_57", Cocos2dxBind_cocos2d__AtlasNode_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_action_manager_58", Cocos2dxBind_cocos2d__AtlasNode_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "run_action_28", Cocos2dxBind_cocos2d__AtlasNode_run_action_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "stop_all_actions_29", Cocos2dxBind_cocos2d__AtlasNode_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "stop_action_29", Cocos2dxBind_cocos2d__AtlasNode_stop_action_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__AtlasNode_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__AtlasNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__AtlasNode_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_action_by_tag_29", Cocos2dxBind_cocos2d__AtlasNode_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__AtlasNode_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_scheduler_29", Cocos2dxBind_cocos2d__AtlasNode_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scheduler_57", Cocos2dxBind_cocos2d__AtlasNode_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_scheduler_58", Cocos2dxBind_cocos2d__AtlasNode_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_scheduled_58", Cocos2dxBind_cocos2d__AtlasNode_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_update_29", Cocos2dxBind_cocos2d__AtlasNode_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__AtlasNode_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "unschedule_update_29", Cocos2dxBind_cocos2d__AtlasNode_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_once_58", Cocos2dxBind_cocos2d__AtlasNode_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_172", Cocos2dxBind_cocos2d__AtlasNode_schedule_172);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_173", Cocos2dxBind_cocos2d__AtlasNode_schedule_173);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "schedule_174", Cocos2dxBind_cocos2d__AtlasNode_schedule_174);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "unschedule_58", Cocos2dxBind_cocos2d__AtlasNode_unschedule_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__AtlasNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "resume_29", Cocos2dxBind_cocos2d__AtlasNode_resume_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "pause_29", Cocos2dxBind_cocos2d__AtlasNode_pause_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_26", Cocos2dxBind_cocos2d__AtlasNode_update_26);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_transform_28", Cocos2dxBind_cocos2d__AtlasNode_update_transform_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__AtlasNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__AtlasNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_to_node_space_29", Cocos2dxBind_cocos2d__AtlasNode_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_to_world_space_29", Cocos2dxBind_cocos2d__AtlasNode_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__AtlasNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__AtlasNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__AtlasNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__AtlasNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_additional_transform_58", Cocos2dxBind_cocos2d__AtlasNode_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_component_29", Cocos2dxBind_cocos2d__AtlasNode_get_component_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "add_component_29", Cocos2dxBind_cocos2d__AtlasNode_add_component_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_component_57", Cocos2dxBind_cocos2d__AtlasNode_remove_component_57);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_component_58", Cocos2dxBind_cocos2d__AtlasNode_remove_component_58);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_all_components_29", Cocos2dxBind_cocos2d__AtlasNode_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_physics_body_29", Cocos2dxBind_cocos2d__AtlasNode_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_physics_body_29", Cocos2dxBind_cocos2d__AtlasNode_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__AtlasNode_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__AtlasNode_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__AtlasNode_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_opacity_28", Cocos2dxBind_cocos2d__AtlasNode_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__AtlasNode_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__AtlasNode_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__AtlasNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__AtlasNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_displayed_color_29", Cocos2dxBind_cocos2d__AtlasNode_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "update_displayed_color_23", Cocos2dxBind_cocos2d__AtlasNode_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__AtlasNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__AtlasNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__AtlasNode_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__AtlasNode_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__AtlasNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__AtlasNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_camera_mask_29", Cocos2dxBind_cocos2d__AtlasNode_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "set_camera_mask_22", Cocos2dxBind_cocos2d__AtlasNode_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "init_13", Cocos2dxBind_cocos2d__AtlasNode_init_13);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "retain_176", Cocos2dxBind_cocos2d__AtlasNode_retain_176);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "release_176", Cocos2dxBind_cocos2d__AtlasNode_release_176);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "autorelease_176", Cocos2dxBind_cocos2d__AtlasNode_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AtlasNode", "get_reference_count_176", Cocos2dxBind_cocos2d__AtlasNode_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ClippingNode", "create_1", Cocos2dxBind_cocos2d__ClippingNode_create_1);
            binder.bind_static_method("Cocos2d", "ClippingNode", "create_2", Cocos2dxBind_cocos2d__ClippingNode_create_2);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_stencil", Cocos2dxBind_cocos2d__ClippingNode_get_stencil);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_stencil", Cocos2dxBind_cocos2d__ClippingNode_set_stencil);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "has_content", Cocos2dxBind_cocos2d__ClippingNode_has_content);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_alpha_threshold", Cocos2dxBind_cocos2d__ClippingNode_get_alpha_threshold);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_alpha_threshold", Cocos2dxBind_cocos2d__ClippingNode_set_alpha_threshold);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_inverted", Cocos2dxBind_cocos2d__ClippingNode_is_inverted);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_inverted", Cocos2dxBind_cocos2d__ClippingNode_set_inverted);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "on_enter", Cocos2dxBind_cocos2d__ClippingNode_on_enter);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "on_enter_transition_did_finish", Cocos2dxBind_cocos2d__ClippingNode_on_enter_transition_did_finish);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "on_exit_transition_did_start", Cocos2dxBind_cocos2d__ClippingNode_on_exit_transition_did_start);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "on_exit", Cocos2dxBind_cocos2d__ClippingNode_on_exit);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "visit", Cocos2dxBind_cocos2d__ClippingNode_visit);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_camera_mask", Cocos2dxBind_cocos2d__ClippingNode_set_camera_mask);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "init_1", Cocos2dxBind_cocos2d__ClippingNode_init_1);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "init_2", Cocos2dxBind_cocos2d__ClippingNode_init_2);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_description_15", Cocos2dxBind_cocos2d__ClippingNode_get_description_15);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_local_z_order_29", Cocos2dxBind_cocos2d__ClippingNode_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_local_z_order_29", Cocos2dxBind_cocos2d__ClippingNode_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_global_z_order_27", Cocos2dxBind_cocos2d__ClippingNode_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_global_z_order_29", Cocos2dxBind_cocos2d__ClippingNode_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scale_x_23", Cocos2dxBind_cocos2d__ClippingNode_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scale_x_26", Cocos2dxBind_cocos2d__ClippingNode_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scale_y_23", Cocos2dxBind_cocos2d__ClippingNode_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scale_y_26", Cocos2dxBind_cocos2d__ClippingNode_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scale_z_29", Cocos2dxBind_cocos2d__ClippingNode_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scale_z_29", Cocos2dxBind_cocos2d__ClippingNode_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scale_45", Cocos2dxBind_cocos2d__ClippingNode_set_scale_45);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scale_26", Cocos2dxBind_cocos2d__ClippingNode_get_scale_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scale_46", Cocos2dxBind_cocos2d__ClippingNode_set_scale_46);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position_49", Cocos2dxBind_cocos2d__ClippingNode_set_position_49);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_normalized_position_29", Cocos2dxBind_cocos2d__ClippingNode_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position_55", Cocos2dxBind_cocos2d__ClippingNode_get_position_55);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_normalized_position_29", Cocos2dxBind_cocos2d__ClippingNode_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position_50", Cocos2dxBind_cocos2d__ClippingNode_set_position_50);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position_56", Cocos2dxBind_cocos2d__ClippingNode_get_position_56);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position_x_28", Cocos2dxBind_cocos2d__ClippingNode_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position_x_28", Cocos2dxBind_cocos2d__ClippingNode_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position_y_28", Cocos2dxBind_cocos2d__ClippingNode_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position_y_28", Cocos2dxBind_cocos2d__ClippingNode_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position3_d_29", Cocos2dxBind_cocos2d__ClippingNode_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position3_d_28", Cocos2dxBind_cocos2d__ClippingNode_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_position_z_28", Cocos2dxBind_cocos2d__ClippingNode_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_position_z_29", Cocos2dxBind_cocos2d__ClippingNode_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_skew_x_28", Cocos2dxBind_cocos2d__ClippingNode_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_skew_x_29", Cocos2dxBind_cocos2d__ClippingNode_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_skew_y_28", Cocos2dxBind_cocos2d__ClippingNode_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_skew_y_29", Cocos2dxBind_cocos2d__ClippingNode_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_anchor_point_26", Cocos2dxBind_cocos2d__ClippingNode_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_anchor_point_29", Cocos2dxBind_cocos2d__ClippingNode_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ClippingNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_content_size_24", Cocos2dxBind_cocos2d__ClippingNode_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_content_size_26", Cocos2dxBind_cocos2d__ClippingNode_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_visible_27", Cocos2dxBind_cocos2d__ClippingNode_set_visible_27);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_visible_29", Cocos2dxBind_cocos2d__ClippingNode_is_visible_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_rotation_26", Cocos2dxBind_cocos2d__ClippingNode_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_rotation_29", Cocos2dxBind_cocos2d__ClippingNode_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ClippingNode_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ClippingNode_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ClippingNode_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ClippingNode_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ClippingNode_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ClippingNode_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ClippingNode_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ClippingNode_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ClippingNode_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ClippingNode_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ClippingNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ClippingNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "add_child_113", Cocos2dxBind_cocos2d__ClippingNode_add_child_113);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "add_child_114", Cocos2dxBind_cocos2d__ClippingNode_add_child_114);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "add_child_115", Cocos2dxBind_cocos2d__ClippingNode_add_child_115);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "add_child_116", Cocos2dxBind_cocos2d__ClippingNode_add_child_116);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ClippingNode_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_child_by_name_29", Cocos2dxBind_cocos2d__ClippingNode_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "enumerate_children_29", Cocos2dxBind_cocos2d__ClippingNode_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_children_58", Cocos2dxBind_cocos2d__ClippingNode_get_children_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_children_count_29", Cocos2dxBind_cocos2d__ClippingNode_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_parent_29", Cocos2dxBind_cocos2d__ClippingNode_set_parent_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_parent_57", Cocos2dxBind_cocos2d__ClippingNode_get_parent_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_parent_58", Cocos2dxBind_cocos2d__ClippingNode_get_parent_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_from_parent_29", Cocos2dxBind_cocos2d__ClippingNode_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ClippingNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_child_24", Cocos2dxBind_cocos2d__ClippingNode_remove_child_24);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ClippingNode_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ClippingNode_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_all_children_28", Cocos2dxBind_cocos2d__ClippingNode_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ClippingNode_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "reorder_child_26", Cocos2dxBind_cocos2d__ClippingNode_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "sort_all_children_26", Cocos2dxBind_cocos2d__ClippingNode_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_tag_29", Cocos2dxBind_cocos2d__ClippingNode_get_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_tag_29", Cocos2dxBind_cocos2d__ClippingNode_set_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_name_29", Cocos2dxBind_cocos2d__ClippingNode_get_name_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_name_29", Cocos2dxBind_cocos2d__ClippingNode_set_name_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_user_data_57", Cocos2dxBind_cocos2d__ClippingNode_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_user_data_58", Cocos2dxBind_cocos2d__ClippingNode_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_user_data_29", Cocos2dxBind_cocos2d__ClippingNode_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_user_object_57", Cocos2dxBind_cocos2d__ClippingNode_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_user_object_58", Cocos2dxBind_cocos2d__ClippingNode_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_user_object_29", Cocos2dxBind_cocos2d__ClippingNode_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_gl_program_29", Cocos2dxBind_cocos2d__ClippingNode_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_gl_program_28", Cocos2dxBind_cocos2d__ClippingNode_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ClippingNode_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ClippingNode_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_running_29", Cocos2dxBind_cocos2d__ClippingNode_is_running_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ClippingNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "cleanup_25", Cocos2dxBind_cocos2d__ClippingNode_cleanup_25);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "draw_27", Cocos2dxBind_cocos2d__ClippingNode_draw_27);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "draw_28", Cocos2dxBind_cocos2d__ClippingNode_draw_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scene_29", Cocos2dxBind_cocos2d__ClippingNode_get_scene_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_bounding_box_26", Cocos2dxBind_cocos2d__ClippingNode_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ClippingNode_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ClippingNode_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_action_manager_29", Cocos2dxBind_cocos2d__ClippingNode_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_action_manager_57", Cocos2dxBind_cocos2d__ClippingNode_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_action_manager_58", Cocos2dxBind_cocos2d__ClippingNode_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "run_action_28", Cocos2dxBind_cocos2d__ClippingNode_run_action_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "stop_all_actions_29", Cocos2dxBind_cocos2d__ClippingNode_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "stop_action_29", Cocos2dxBind_cocos2d__ClippingNode_stop_action_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ClippingNode_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ClippingNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ClippingNode_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ClippingNode_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ClippingNode_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_scheduler_29", Cocos2dxBind_cocos2d__ClippingNode_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scheduler_57", Cocos2dxBind_cocos2d__ClippingNode_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_scheduler_58", Cocos2dxBind_cocos2d__ClippingNode_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_scheduled_58", Cocos2dxBind_cocos2d__ClippingNode_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_update_29", Cocos2dxBind_cocos2d__ClippingNode_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ClippingNode_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "unschedule_update_29", Cocos2dxBind_cocos2d__ClippingNode_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_once_58", Cocos2dxBind_cocos2d__ClippingNode_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_172", Cocos2dxBind_cocos2d__ClippingNode_schedule_172);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_173", Cocos2dxBind_cocos2d__ClippingNode_schedule_173);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "schedule_174", Cocos2dxBind_cocos2d__ClippingNode_schedule_174);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "unschedule_58", Cocos2dxBind_cocos2d__ClippingNode_unschedule_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ClippingNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "resume_29", Cocos2dxBind_cocos2d__ClippingNode_resume_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "pause_29", Cocos2dxBind_cocos2d__ClippingNode_pause_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_26", Cocos2dxBind_cocos2d__ClippingNode_update_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_transform_28", Cocos2dxBind_cocos2d__ClippingNode_update_transform_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ClippingNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ClippingNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ClippingNode_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ClippingNode_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ClippingNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ClippingNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ClippingNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ClippingNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_additional_transform_58", Cocos2dxBind_cocos2d__ClippingNode_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_component_29", Cocos2dxBind_cocos2d__ClippingNode_get_component_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "add_component_29", Cocos2dxBind_cocos2d__ClippingNode_add_component_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_component_57", Cocos2dxBind_cocos2d__ClippingNode_remove_component_57);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_component_58", Cocos2dxBind_cocos2d__ClippingNode_remove_component_58);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_all_components_29", Cocos2dxBind_cocos2d__ClippingNode_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_physics_body_29", Cocos2dxBind_cocos2d__ClippingNode_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_physics_body_29", Cocos2dxBind_cocos2d__ClippingNode_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ClippingNode_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ClippingNode_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ClippingNode_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_opacity_28", Cocos2dxBind_cocos2d__ClippingNode_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ClippingNode_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_opacity_26", Cocos2dxBind_cocos2d__ClippingNode_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__ClippingNode_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ClippingNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ClippingNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_color_27", Cocos2dxBind_cocos2d__ClippingNode_get_color_27);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_displayed_color_29", Cocos2dxBind_cocos2d__ClippingNode_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_color_27", Cocos2dxBind_cocos2d__ClippingNode_set_color_27);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "update_displayed_color_23", Cocos2dxBind_cocos2d__ClippingNode_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ClippingNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ClippingNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ClippingNode_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ClippingNode_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ClippingNode_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ClippingNode_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ClippingNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ClippingNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_camera_mask_29", Cocos2dxBind_cocos2d__ClippingNode_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "retain_176", Cocos2dxBind_cocos2d__ClippingNode_retain_176);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "release_176", Cocos2dxBind_cocos2d__ClippingNode_release_176);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "autorelease_176", Cocos2dxBind_cocos2d__ClippingNode_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ClippingNode", "get_reference_count_176", Cocos2dxBind_cocos2d__ClippingNode_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "LabelAtlas", "create_1", Cocos2dxBind_cocos2d__LabelAtlas_create_1);
            binder.bind_static_method("Cocos2d", "LabelAtlas", "create_2", Cocos2dxBind_cocos2d__LabelAtlas_create_2);
            binder.bind_static_method("Cocos2d", "LabelAtlas", "create_3", Cocos2dxBind_cocos2d__LabelAtlas_create_3);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_with_string_1", Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_1);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_with_string_2", Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_with_string_3", Cocos2dxBind_cocos2d__LabelAtlas_init_with_string_3);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_string", Cocos2dxBind_cocos2d__LabelAtlas_set_string);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_string", Cocos2dxBind_cocos2d__LabelAtlas_get_string);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_atlas_values", Cocos2dxBind_cocos2d__LabelAtlas_update_atlas_values);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_description", Cocos2dxBind_cocos2d__LabelAtlas_get_description);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_texture_atlas_2", Cocos2dxBind_cocos2d__LabelAtlas_set_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_texture_atlas_2", Cocos2dxBind_cocos2d__LabelAtlas_get_texture_atlas_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_quads_to_draw_2", Cocos2dxBind_cocos2d__LabelAtlas_set_quads_to_draw_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_quads_to_draw_2", Cocos2dxBind_cocos2d__LabelAtlas_get_quads_to_draw_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "draw_2", Cocos2dxBind_cocos2d__LabelAtlas_draw_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_texture_2", Cocos2dxBind_cocos2d__LabelAtlas_get_texture_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_texture_2", Cocos2dxBind_cocos2d__LabelAtlas_set_texture_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__LabelAtlas_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__LabelAtlas_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_color_2", Cocos2dxBind_cocos2d__LabelAtlas_get_color_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_color_2", Cocos2dxBind_cocos2d__LabelAtlas_set_color_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_opacity_2", Cocos2dxBind_cocos2d__LabelAtlas_set_opacity_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_blend_func_2", Cocos2dxBind_cocos2d__LabelAtlas_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_blend_func_2", Cocos2dxBind_cocos2d__LabelAtlas_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_with_tile_file_2", Cocos2dxBind_cocos2d__LabelAtlas_init_with_tile_file_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_with_texture_2", Cocos2dxBind_cocos2d__LabelAtlas_init_with_texture_2);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_local_z_order_29", Cocos2dxBind_cocos2d__LabelAtlas_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_local_z_order_29", Cocos2dxBind_cocos2d__LabelAtlas_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_global_z_order_27", Cocos2dxBind_cocos2d__LabelAtlas_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_global_z_order_29", Cocos2dxBind_cocos2d__LabelAtlas_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scale_x_23", Cocos2dxBind_cocos2d__LabelAtlas_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scale_x_26", Cocos2dxBind_cocos2d__LabelAtlas_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scale_y_23", Cocos2dxBind_cocos2d__LabelAtlas_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scale_y_26", Cocos2dxBind_cocos2d__LabelAtlas_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scale_z_29", Cocos2dxBind_cocos2d__LabelAtlas_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scale_z_29", Cocos2dxBind_cocos2d__LabelAtlas_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scale_45", Cocos2dxBind_cocos2d__LabelAtlas_set_scale_45);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scale_26", Cocos2dxBind_cocos2d__LabelAtlas_get_scale_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scale_46", Cocos2dxBind_cocos2d__LabelAtlas_set_scale_46);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position_49", Cocos2dxBind_cocos2d__LabelAtlas_set_position_49);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_normalized_position_29", Cocos2dxBind_cocos2d__LabelAtlas_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position_55", Cocos2dxBind_cocos2d__LabelAtlas_get_position_55);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_normalized_position_29", Cocos2dxBind_cocos2d__LabelAtlas_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position_50", Cocos2dxBind_cocos2d__LabelAtlas_set_position_50);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position_56", Cocos2dxBind_cocos2d__LabelAtlas_get_position_56);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position_x_28", Cocos2dxBind_cocos2d__LabelAtlas_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position_x_28", Cocos2dxBind_cocos2d__LabelAtlas_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position_y_28", Cocos2dxBind_cocos2d__LabelAtlas_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position_y_28", Cocos2dxBind_cocos2d__LabelAtlas_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position3_d_29", Cocos2dxBind_cocos2d__LabelAtlas_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position3_d_28", Cocos2dxBind_cocos2d__LabelAtlas_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_position_z_28", Cocos2dxBind_cocos2d__LabelAtlas_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_position_z_29", Cocos2dxBind_cocos2d__LabelAtlas_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_skew_x_28", Cocos2dxBind_cocos2d__LabelAtlas_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_skew_x_29", Cocos2dxBind_cocos2d__LabelAtlas_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_skew_y_28", Cocos2dxBind_cocos2d__LabelAtlas_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_skew_y_29", Cocos2dxBind_cocos2d__LabelAtlas_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_anchor_point_26", Cocos2dxBind_cocos2d__LabelAtlas_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_anchor_point_29", Cocos2dxBind_cocos2d__LabelAtlas_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__LabelAtlas_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_content_size_24", Cocos2dxBind_cocos2d__LabelAtlas_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_content_size_26", Cocos2dxBind_cocos2d__LabelAtlas_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_visible_27", Cocos2dxBind_cocos2d__LabelAtlas_set_visible_27);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_visible_29", Cocos2dxBind_cocos2d__LabelAtlas_is_visible_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_rotation_26", Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_rotation_29", Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_rotation3_d_29", Cocos2dxBind_cocos2d__LabelAtlas_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_rotation3_d_29", Cocos2dxBind_cocos2d__LabelAtlas_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_rotation_quat_29", Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_rotation_quat_29", Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__LabelAtlas_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__LabelAtlas_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__LabelAtlas_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__LabelAtlas_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__LabelAtlas_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__LabelAtlas_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "add_child_113", Cocos2dxBind_cocos2d__LabelAtlas_add_child_113);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "add_child_114", Cocos2dxBind_cocos2d__LabelAtlas_add_child_114);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "add_child_115", Cocos2dxBind_cocos2d__LabelAtlas_add_child_115);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "add_child_116", Cocos2dxBind_cocos2d__LabelAtlas_add_child_116);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_child_by_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_child_by_name_29", Cocos2dxBind_cocos2d__LabelAtlas_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "enumerate_children_29", Cocos2dxBind_cocos2d__LabelAtlas_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_children_58", Cocos2dxBind_cocos2d__LabelAtlas_get_children_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_children_count_29", Cocos2dxBind_cocos2d__LabelAtlas_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_parent_29", Cocos2dxBind_cocos2d__LabelAtlas_set_parent_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_parent_57", Cocos2dxBind_cocos2d__LabelAtlas_get_parent_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_parent_58", Cocos2dxBind_cocos2d__LabelAtlas_get_parent_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_from_parent_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_child_24", Cocos2dxBind_cocos2d__LabelAtlas_remove_child_24);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_child_by_name_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_all_children_28", Cocos2dxBind_cocos2d__LabelAtlas_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__LabelAtlas_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "reorder_child_26", Cocos2dxBind_cocos2d__LabelAtlas_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "sort_all_children_26", Cocos2dxBind_cocos2d__LabelAtlas_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_get_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_set_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_name_29", Cocos2dxBind_cocos2d__LabelAtlas_get_name_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_name_29", Cocos2dxBind_cocos2d__LabelAtlas_set_name_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_user_data_57", Cocos2dxBind_cocos2d__LabelAtlas_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_user_data_58", Cocos2dxBind_cocos2d__LabelAtlas_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_user_data_29", Cocos2dxBind_cocos2d__LabelAtlas_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_user_object_57", Cocos2dxBind_cocos2d__LabelAtlas_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_user_object_58", Cocos2dxBind_cocos2d__LabelAtlas_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_user_object_29", Cocos2dxBind_cocos2d__LabelAtlas_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_gl_program_29", Cocos2dxBind_cocos2d__LabelAtlas_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_gl_program_28", Cocos2dxBind_cocos2d__LabelAtlas_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_gl_program_state_29", Cocos2dxBind_cocos2d__LabelAtlas_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_gl_program_state_28", Cocos2dxBind_cocos2d__LabelAtlas_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_running_29", Cocos2dxBind_cocos2d__LabelAtlas_is_running_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "on_enter_18", Cocos2dxBind_cocos2d__LabelAtlas_on_enter_18);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__LabelAtlas_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "on_exit_18", Cocos2dxBind_cocos2d__LabelAtlas_on_exit_18);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__LabelAtlas_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "cleanup_25", Cocos2dxBind_cocos2d__LabelAtlas_cleanup_25);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "visit_31", Cocos2dxBind_cocos2d__LabelAtlas_visit_31);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "visit_32", Cocos2dxBind_cocos2d__LabelAtlas_visit_32);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scene_29", Cocos2dxBind_cocos2d__LabelAtlas_get_scene_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_bounding_box_26", Cocos2dxBind_cocos2d__LabelAtlas_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__LabelAtlas_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__LabelAtlas_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_action_manager_29", Cocos2dxBind_cocos2d__LabelAtlas_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_action_manager_57", Cocos2dxBind_cocos2d__LabelAtlas_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_action_manager_58", Cocos2dxBind_cocos2d__LabelAtlas_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "run_action_28", Cocos2dxBind_cocos2d__LabelAtlas_run_action_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "stop_all_actions_29", Cocos2dxBind_cocos2d__LabelAtlas_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "stop_action_29", Cocos2dxBind_cocos2d__LabelAtlas_stop_action_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__LabelAtlas_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_action_by_tag_29", Cocos2dxBind_cocos2d__LabelAtlas_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__LabelAtlas_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_scheduler_29", Cocos2dxBind_cocos2d__LabelAtlas_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scheduler_57", Cocos2dxBind_cocos2d__LabelAtlas_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_scheduler_58", Cocos2dxBind_cocos2d__LabelAtlas_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_scheduled_58", Cocos2dxBind_cocos2d__LabelAtlas_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_update_29", Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__LabelAtlas_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "unschedule_update_29", Cocos2dxBind_cocos2d__LabelAtlas_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_once_58", Cocos2dxBind_cocos2d__LabelAtlas_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_172", Cocos2dxBind_cocos2d__LabelAtlas_schedule_172);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_173", Cocos2dxBind_cocos2d__LabelAtlas_schedule_173);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "schedule_174", Cocos2dxBind_cocos2d__LabelAtlas_schedule_174);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "unschedule_58", Cocos2dxBind_cocos2d__LabelAtlas_unschedule_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__LabelAtlas_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "resume_29", Cocos2dxBind_cocos2d__LabelAtlas_resume_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "pause_29", Cocos2dxBind_cocos2d__LabelAtlas_pause_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_26", Cocos2dxBind_cocos2d__LabelAtlas_update_26);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_transform_28", Cocos2dxBind_cocos2d__LabelAtlas_update_transform_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_to_node_space_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_to_world_space_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__LabelAtlas_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_additional_transform_58", Cocos2dxBind_cocos2d__LabelAtlas_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_component_29", Cocos2dxBind_cocos2d__LabelAtlas_get_component_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "add_component_29", Cocos2dxBind_cocos2d__LabelAtlas_add_component_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_component_57", Cocos2dxBind_cocos2d__LabelAtlas_remove_component_57);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_component_58", Cocos2dxBind_cocos2d__LabelAtlas_remove_component_58);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_all_components_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_physics_body_29", Cocos2dxBind_cocos2d__LabelAtlas_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_physics_body_29", Cocos2dxBind_cocos2d__LabelAtlas_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__LabelAtlas_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__LabelAtlas_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__LabelAtlas_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_opacity_28", Cocos2dxBind_cocos2d__LabelAtlas_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__LabelAtlas_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__LabelAtlas_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__LabelAtlas_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__LabelAtlas_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_displayed_color_29", Cocos2dxBind_cocos2d__LabelAtlas_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "update_displayed_color_23", Cocos2dxBind_cocos2d__LabelAtlas_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__LabelAtlas_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__LabelAtlas_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__LabelAtlas_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__LabelAtlas_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__LabelAtlas_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__LabelAtlas_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_camera_mask_29", Cocos2dxBind_cocos2d__LabelAtlas_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "set_camera_mask_22", Cocos2dxBind_cocos2d__LabelAtlas_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "init_13", Cocos2dxBind_cocos2d__LabelAtlas_init_13);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "retain_176", Cocos2dxBind_cocos2d__LabelAtlas_retain_176);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "release_176", Cocos2dxBind_cocos2d__LabelAtlas_release_176);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "autorelease_176", Cocos2dxBind_cocos2d__LabelAtlas_autorelease_176);
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "get_reference_count_176", Cocos2dxBind_cocos2d__LabelAtlas_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "MotionStreak", "create_1", Cocos2dxBind_cocos2d__MotionStreak_create_1);
            binder.bind_static_method("Cocos2d", "MotionStreak", "create_2", Cocos2dxBind_cocos2d__MotionStreak_create_2);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "tint_with_color", Cocos2dxBind_cocos2d__MotionStreak_tint_with_color);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "reset", Cocos2dxBind_cocos2d__MotionStreak_reset);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_fast_mode", Cocos2dxBind_cocos2d__MotionStreak_is_fast_mode);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_fast_mode", Cocos2dxBind_cocos2d__MotionStreak_set_fast_mode);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_stroke", Cocos2dxBind_cocos2d__MotionStreak_get_stroke);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_stroke", Cocos2dxBind_cocos2d__MotionStreak_set_stroke);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_starting_position_initialized", Cocos2dxBind_cocos2d__MotionStreak_is_starting_position_initialized);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_starting_position_initialized", Cocos2dxBind_cocos2d__MotionStreak_set_starting_position_initialized);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position_1", Cocos2dxBind_cocos2d__MotionStreak_set_position_1);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position_2", Cocos2dxBind_cocos2d__MotionStreak_set_position_2);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position_1", Cocos2dxBind_cocos2d__MotionStreak_get_position_1);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position_2", Cocos2dxBind_cocos2d__MotionStreak_get_position_2);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position_x", Cocos2dxBind_cocos2d__MotionStreak_set_position_x);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position_y", Cocos2dxBind_cocos2d__MotionStreak_set_position_y);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position_x", Cocos2dxBind_cocos2d__MotionStreak_get_position_x);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position_y", Cocos2dxBind_cocos2d__MotionStreak_get_position_y);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position3_d", Cocos2dxBind_cocos2d__MotionStreak_get_position3_d);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "draw", Cocos2dxBind_cocos2d__MotionStreak_draw);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update", Cocos2dxBind_cocos2d__MotionStreak_update);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_texture", Cocos2dxBind_cocos2d__MotionStreak_get_texture);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_texture", Cocos2dxBind_cocos2d__MotionStreak_set_texture);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_blend_func", Cocos2dxBind_cocos2d__MotionStreak_set_blend_func);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_blend_func", Cocos2dxBind_cocos2d__MotionStreak_get_blend_func);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_opacity", Cocos2dxBind_cocos2d__MotionStreak_get_opacity);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_opacity", Cocos2dxBind_cocos2d__MotionStreak_set_opacity);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_opacity_modify_rgb", Cocos2dxBind_cocos2d__MotionStreak_set_opacity_modify_rgb);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_opacity_modify_rgb", Cocos2dxBind_cocos2d__MotionStreak_is_opacity_modify_rgb);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "init_with_fade_1", Cocos2dxBind_cocos2d__MotionStreak_init_with_fade_1);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "init_with_fade_2", Cocos2dxBind_cocos2d__MotionStreak_init_with_fade_2);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_description_15", Cocos2dxBind_cocos2d__MotionStreak_get_description_15);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_local_z_order_29", Cocos2dxBind_cocos2d__MotionStreak_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_local_z_order_29", Cocos2dxBind_cocos2d__MotionStreak_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_global_z_order_27", Cocos2dxBind_cocos2d__MotionStreak_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_global_z_order_29", Cocos2dxBind_cocos2d__MotionStreak_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scale_x_23", Cocos2dxBind_cocos2d__MotionStreak_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scale_x_26", Cocos2dxBind_cocos2d__MotionStreak_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scale_y_23", Cocos2dxBind_cocos2d__MotionStreak_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scale_y_26", Cocos2dxBind_cocos2d__MotionStreak_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scale_z_29", Cocos2dxBind_cocos2d__MotionStreak_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scale_z_29", Cocos2dxBind_cocos2d__MotionStreak_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scale_45", Cocos2dxBind_cocos2d__MotionStreak_set_scale_45);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scale_26", Cocos2dxBind_cocos2d__MotionStreak_get_scale_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scale_46", Cocos2dxBind_cocos2d__MotionStreak_set_scale_46);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_normalized_position_29", Cocos2dxBind_cocos2d__MotionStreak_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_normalized_position_29", Cocos2dxBind_cocos2d__MotionStreak_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position3_d_29", Cocos2dxBind_cocos2d__MotionStreak_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_position_z_28", Cocos2dxBind_cocos2d__MotionStreak_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_position_z_29", Cocos2dxBind_cocos2d__MotionStreak_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_skew_x_28", Cocos2dxBind_cocos2d__MotionStreak_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_skew_x_29", Cocos2dxBind_cocos2d__MotionStreak_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_skew_y_28", Cocos2dxBind_cocos2d__MotionStreak_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_skew_y_29", Cocos2dxBind_cocos2d__MotionStreak_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_anchor_point_26", Cocos2dxBind_cocos2d__MotionStreak_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_anchor_point_29", Cocos2dxBind_cocos2d__MotionStreak_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__MotionStreak_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_content_size_24", Cocos2dxBind_cocos2d__MotionStreak_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_content_size_26", Cocos2dxBind_cocos2d__MotionStreak_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_visible_27", Cocos2dxBind_cocos2d__MotionStreak_set_visible_27);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_visible_29", Cocos2dxBind_cocos2d__MotionStreak_is_visible_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_rotation_26", Cocos2dxBind_cocos2d__MotionStreak_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_rotation_29", Cocos2dxBind_cocos2d__MotionStreak_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_rotation3_d_29", Cocos2dxBind_cocos2d__MotionStreak_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_rotation3_d_29", Cocos2dxBind_cocos2d__MotionStreak_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_rotation_quat_29", Cocos2dxBind_cocos2d__MotionStreak_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_rotation_quat_29", Cocos2dxBind_cocos2d__MotionStreak_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__MotionStreak_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__MotionStreak_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__MotionStreak_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__MotionStreak_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__MotionStreak_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__MotionStreak_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__MotionStreak_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__MotionStreak_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "add_child_113", Cocos2dxBind_cocos2d__MotionStreak_add_child_113);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "add_child_114", Cocos2dxBind_cocos2d__MotionStreak_add_child_114);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "add_child_115", Cocos2dxBind_cocos2d__MotionStreak_add_child_115);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "add_child_116", Cocos2dxBind_cocos2d__MotionStreak_add_child_116);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_child_by_tag_29", Cocos2dxBind_cocos2d__MotionStreak_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_child_by_name_29", Cocos2dxBind_cocos2d__MotionStreak_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "enumerate_children_29", Cocos2dxBind_cocos2d__MotionStreak_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_children_58", Cocos2dxBind_cocos2d__MotionStreak_get_children_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_children_count_29", Cocos2dxBind_cocos2d__MotionStreak_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_parent_29", Cocos2dxBind_cocos2d__MotionStreak_set_parent_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_parent_57", Cocos2dxBind_cocos2d__MotionStreak_get_parent_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_parent_58", Cocos2dxBind_cocos2d__MotionStreak_get_parent_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_from_parent_29", Cocos2dxBind_cocos2d__MotionStreak_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__MotionStreak_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_child_24", Cocos2dxBind_cocos2d__MotionStreak_remove_child_24);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__MotionStreak_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_child_by_name_29", Cocos2dxBind_cocos2d__MotionStreak_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_all_children_28", Cocos2dxBind_cocos2d__MotionStreak_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__MotionStreak_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "reorder_child_26", Cocos2dxBind_cocos2d__MotionStreak_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "sort_all_children_26", Cocos2dxBind_cocos2d__MotionStreak_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_tag_29", Cocos2dxBind_cocos2d__MotionStreak_get_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_tag_29", Cocos2dxBind_cocos2d__MotionStreak_set_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_name_29", Cocos2dxBind_cocos2d__MotionStreak_get_name_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_name_29", Cocos2dxBind_cocos2d__MotionStreak_set_name_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_user_data_57", Cocos2dxBind_cocos2d__MotionStreak_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_user_data_58", Cocos2dxBind_cocos2d__MotionStreak_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_user_data_29", Cocos2dxBind_cocos2d__MotionStreak_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_user_object_57", Cocos2dxBind_cocos2d__MotionStreak_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_user_object_58", Cocos2dxBind_cocos2d__MotionStreak_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_user_object_29", Cocos2dxBind_cocos2d__MotionStreak_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_gl_program_29", Cocos2dxBind_cocos2d__MotionStreak_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_gl_program_28", Cocos2dxBind_cocos2d__MotionStreak_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_gl_program_state_29", Cocos2dxBind_cocos2d__MotionStreak_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_gl_program_state_28", Cocos2dxBind_cocos2d__MotionStreak_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_running_29", Cocos2dxBind_cocos2d__MotionStreak_is_running_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__MotionStreak_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "on_enter_18", Cocos2dxBind_cocos2d__MotionStreak_on_enter_18);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__MotionStreak_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "on_exit_18", Cocos2dxBind_cocos2d__MotionStreak_on_exit_18);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__MotionStreak_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "cleanup_25", Cocos2dxBind_cocos2d__MotionStreak_cleanup_25);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "visit_31", Cocos2dxBind_cocos2d__MotionStreak_visit_31);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "visit_32", Cocos2dxBind_cocos2d__MotionStreak_visit_32);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scene_29", Cocos2dxBind_cocos2d__MotionStreak_get_scene_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_bounding_box_26", Cocos2dxBind_cocos2d__MotionStreak_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__MotionStreak_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__MotionStreak_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_action_manager_29", Cocos2dxBind_cocos2d__MotionStreak_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_action_manager_57", Cocos2dxBind_cocos2d__MotionStreak_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_action_manager_58", Cocos2dxBind_cocos2d__MotionStreak_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "run_action_28", Cocos2dxBind_cocos2d__MotionStreak_run_action_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "stop_all_actions_29", Cocos2dxBind_cocos2d__MotionStreak_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "stop_action_29", Cocos2dxBind_cocos2d__MotionStreak_stop_action_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__MotionStreak_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__MotionStreak_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__MotionStreak_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_action_by_tag_29", Cocos2dxBind_cocos2d__MotionStreak_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__MotionStreak_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_scheduler_29", Cocos2dxBind_cocos2d__MotionStreak_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scheduler_57", Cocos2dxBind_cocos2d__MotionStreak_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_scheduler_58", Cocos2dxBind_cocos2d__MotionStreak_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_scheduled_58", Cocos2dxBind_cocos2d__MotionStreak_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_update_29", Cocos2dxBind_cocos2d__MotionStreak_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__MotionStreak_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "unschedule_update_29", Cocos2dxBind_cocos2d__MotionStreak_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_once_58", Cocos2dxBind_cocos2d__MotionStreak_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_172", Cocos2dxBind_cocos2d__MotionStreak_schedule_172);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_173", Cocos2dxBind_cocos2d__MotionStreak_schedule_173);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "schedule_174", Cocos2dxBind_cocos2d__MotionStreak_schedule_174);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "unschedule_58", Cocos2dxBind_cocos2d__MotionStreak_unschedule_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__MotionStreak_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "resume_29", Cocos2dxBind_cocos2d__MotionStreak_resume_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "pause_29", Cocos2dxBind_cocos2d__MotionStreak_pause_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update_transform_28", Cocos2dxBind_cocos2d__MotionStreak_update_transform_28);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__MotionStreak_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__MotionStreak_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_to_node_space_29", Cocos2dxBind_cocos2d__MotionStreak_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_to_world_space_29", Cocos2dxBind_cocos2d__MotionStreak_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__MotionStreak_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__MotionStreak_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__MotionStreak_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__MotionStreak_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_additional_transform_58", Cocos2dxBind_cocos2d__MotionStreak_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_component_29", Cocos2dxBind_cocos2d__MotionStreak_get_component_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "add_component_29", Cocos2dxBind_cocos2d__MotionStreak_add_component_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_component_57", Cocos2dxBind_cocos2d__MotionStreak_remove_component_57);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_component_58", Cocos2dxBind_cocos2d__MotionStreak_remove_component_58);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_all_components_29", Cocos2dxBind_cocos2d__MotionStreak_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_physics_body_29", Cocos2dxBind_cocos2d__MotionStreak_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_physics_body_29", Cocos2dxBind_cocos2d__MotionStreak_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__MotionStreak_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__MotionStreak_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__MotionStreak_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__MotionStreak_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__MotionStreak_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__MotionStreak_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__MotionStreak_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_color_27", Cocos2dxBind_cocos2d__MotionStreak_get_color_27);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_displayed_color_29", Cocos2dxBind_cocos2d__MotionStreak_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_color_27", Cocos2dxBind_cocos2d__MotionStreak_set_color_27);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "update_displayed_color_23", Cocos2dxBind_cocos2d__MotionStreak_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__MotionStreak_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__MotionStreak_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__MotionStreak_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__MotionStreak_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__MotionStreak_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__MotionStreak_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_camera_mask_29", Cocos2dxBind_cocos2d__MotionStreak_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "set_camera_mask_22", Cocos2dxBind_cocos2d__MotionStreak_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "init_13", Cocos2dxBind_cocos2d__MotionStreak_init_13);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "retain_176", Cocos2dxBind_cocos2d__MotionStreak_retain_176);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "release_176", Cocos2dxBind_cocos2d__MotionStreak_release_176);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "autorelease_176", Cocos2dxBind_cocos2d__MotionStreak_autorelease_176);
            binder.bind_custom_method("Cocos2d", "MotionStreak", "get_reference_count_176", Cocos2dxBind_cocos2d__MotionStreak_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ParticleSystem", "create", Cocos2dxBind_cocos2d__ParticleSystem_create);
            binder.bind_static_method("Cocos2d", "ParticleSystem", "create_with_total_particles", Cocos2dxBind_cocos2d__ParticleSystem_create_with_total_particles);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_particle_2", Cocos2dxBind_cocos2d__ParticleSystem_add_particle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "init_particle_2", Cocos2dxBind_cocos2d__ParticleSystem_init_particle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_system_2", Cocos2dxBind_cocos2d__ParticleSystem_stop_system_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "reset_system_2", Cocos2dxBind_cocos2d__ParticleSystem_reset_system_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_full_2", Cocos2dxBind_cocos2d__ParticleSystem_is_full_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_quad_with_particle", Cocos2dxBind_cocos2d__ParticleSystem_update_quad_with_particle);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "post_step", Cocos2dxBind_cocos2d__ParticleSystem_post_step);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_with_no_time_2", Cocos2dxBind_cocos2d__ParticleSystem_update_with_no_time_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_auto_remove_on_finish_2", Cocos2dxBind_cocos2d__ParticleSystem_is_auto_remove_on_finish_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_auto_remove_on_finish_2", Cocos2dxBind_cocos2d__ParticleSystem_set_auto_remove_on_finish_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_gravity_2", Cocos2dxBind_cocos2d__ParticleSystem_get_gravity_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_gravity_2", Cocos2dxBind_cocos2d__ParticleSystem_set_gravity_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_speed_2", Cocos2dxBind_cocos2d__ParticleSystem_get_speed_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_speed_2", Cocos2dxBind_cocos2d__ParticleSystem_set_speed_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_speed_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_speed_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_speed_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_speed_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_tangential_accel_2", Cocos2dxBind_cocos2d__ParticleSystem_get_tangential_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_tangential_accel_2", Cocos2dxBind_cocos2d__ParticleSystem_set_tangential_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_tangential_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_tangential_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_tangential_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_tangential_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_radial_accel_2", Cocos2dxBind_cocos2d__ParticleSystem_get_radial_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_radial_accel_2", Cocos2dxBind_cocos2d__ParticleSystem_set_radial_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_radial_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_radial_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_radial_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_radial_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation_is_dir_2", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_is_dir_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation_is_dir_2", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_is_dir_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_radius_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_radius_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_radius_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_radius_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotate_per_second_2", Cocos2dxBind_cocos2d__ParticleSystem_get_rotate_per_second_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotate_per_second_2", Cocos2dxBind_cocos2d__ParticleSystem_set_rotate_per_second_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotate_per_second_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_rotate_per_second_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotate_per_second_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_rotate_per_second_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_scale_2", Cocos2dxBind_cocos2d__ParticleSystem_set_scale_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation_2", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_scale_x_2", Cocos2dxBind_cocos2d__ParticleSystem_set_scale_x_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_scale_y_2", Cocos2dxBind_cocos2d__ParticleSystem_set_scale_y_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_active_2", Cocos2dxBind_cocos2d__ParticleSystem_is_active_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_blend_additive_2", Cocos2dxBind_cocos2d__ParticleSystem_is_blend_additive_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_blend_additive_2", Cocos2dxBind_cocos2d__ParticleSystem_set_blend_additive_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_batch_node_2", Cocos2dxBind_cocos2d__ParticleSystem_get_batch_node_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_batch_node", Cocos2dxBind_cocos2d__ParticleSystem_set_batch_node);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_atlas_index_2", Cocos2dxBind_cocos2d__ParticleSystem_get_atlas_index_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_atlas_index_2", Cocos2dxBind_cocos2d__ParticleSystem_set_atlas_index_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_particle_count_2", Cocos2dxBind_cocos2d__ParticleSystem_get_particle_count_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_duration_2", Cocos2dxBind_cocos2d__ParticleSystem_get_duration_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_duration_2", Cocos2dxBind_cocos2d__ParticleSystem_set_duration_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_source_position_2", Cocos2dxBind_cocos2d__ParticleSystem_get_source_position_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_source_position_2", Cocos2dxBind_cocos2d__ParticleSystem_set_source_position_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_pos_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_pos_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_pos_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_pos_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_life_2", Cocos2dxBind_cocos2d__ParticleSystem_get_life_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_life_2", Cocos2dxBind_cocos2d__ParticleSystem_set_life_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_life_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_life_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_life_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_life_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_angle_2", Cocos2dxBind_cocos2d__ParticleSystem_get_angle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_angle_2", Cocos2dxBind_cocos2d__ParticleSystem_set_angle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_angle_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_angle_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_angle_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_angle_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_emitter_mode_2", Cocos2dxBind_cocos2d__ParticleSystem_get_emitter_mode_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_emitter_mode_2", Cocos2dxBind_cocos2d__ParticleSystem_set_emitter_mode_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_size_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_size_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_size_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_size_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_size_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_size_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_size_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_size_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_color_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_color_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_color_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_color_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_color_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_color_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_color_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_color_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_spin_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_spin_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_start_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_start_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_start_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_start_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_spin_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_spin_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_end_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystem_get_end_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_end_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystem_set_end_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_emission_rate_2", Cocos2dxBind_cocos2d__ParticleSystem_get_emission_rate_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_emission_rate_2", Cocos2dxBind_cocos2d__ParticleSystem_set_emission_rate_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_total_particles_2", Cocos2dxBind_cocos2d__ParticleSystem_get_total_particles_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_total_particles", Cocos2dxBind_cocos2d__ParticleSystem_set_total_particles);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__ParticleSystem_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__ParticleSystem_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_type_2", Cocos2dxBind_cocos2d__ParticleSystem_get_position_type_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_type_2", Cocos2dxBind_cocos2d__ParticleSystem_set_position_type_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "on_enter_2", Cocos2dxBind_cocos2d__ParticleSystem_on_enter_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "on_exit_2", Cocos2dxBind_cocos2d__ParticleSystem_on_exit_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_2", Cocos2dxBind_cocos2d__ParticleSystem_update_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_texture_2", Cocos2dxBind_cocos2d__ParticleSystem_get_texture_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_texture", Cocos2dxBind_cocos2d__ParticleSystem_set_texture);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_blend_func_2", Cocos2dxBind_cocos2d__ParticleSystem_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_blend_func_2", Cocos2dxBind_cocos2d__ParticleSystem_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "init_2", Cocos2dxBind_cocos2d__ParticleSystem_init_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "init_with_file_2", Cocos2dxBind_cocos2d__ParticleSystem_init_with_file_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "init_with_total_particles", Cocos2dxBind_cocos2d__ParticleSystem_init_with_total_particles);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_description_15", Cocos2dxBind_cocos2d__ParticleSystem_get_description_15);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_local_z_order_29", Cocos2dxBind_cocos2d__ParticleSystem_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_local_z_order_29", Cocos2dxBind_cocos2d__ParticleSystem_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_global_z_order_27", Cocos2dxBind_cocos2d__ParticleSystem_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_global_z_order_29", Cocos2dxBind_cocos2d__ParticleSystem_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scale_x_26", Cocos2dxBind_cocos2d__ParticleSystem_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scale_y_26", Cocos2dxBind_cocos2d__ParticleSystem_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_scale_z_29", Cocos2dxBind_cocos2d__ParticleSystem_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scale_z_29", Cocos2dxBind_cocos2d__ParticleSystem_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scale_26", Cocos2dxBind_cocos2d__ParticleSystem_get_scale_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_49", Cocos2dxBind_cocos2d__ParticleSystem_set_position_49);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_normalized_position_29", Cocos2dxBind_cocos2d__ParticleSystem_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_55", Cocos2dxBind_cocos2d__ParticleSystem_get_position_55);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_normalized_position_29", Cocos2dxBind_cocos2d__ParticleSystem_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_50", Cocos2dxBind_cocos2d__ParticleSystem_set_position_50);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_56", Cocos2dxBind_cocos2d__ParticleSystem_get_position_56);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_x_28", Cocos2dxBind_cocos2d__ParticleSystem_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_x_28", Cocos2dxBind_cocos2d__ParticleSystem_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_y_28", Cocos2dxBind_cocos2d__ParticleSystem_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_y_28", Cocos2dxBind_cocos2d__ParticleSystem_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position3_d_29", Cocos2dxBind_cocos2d__ParticleSystem_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position3_d_28", Cocos2dxBind_cocos2d__ParticleSystem_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_position_z_28", Cocos2dxBind_cocos2d__ParticleSystem_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_position_z_29", Cocos2dxBind_cocos2d__ParticleSystem_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_skew_x_28", Cocos2dxBind_cocos2d__ParticleSystem_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_skew_x_29", Cocos2dxBind_cocos2d__ParticleSystem_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_skew_y_28", Cocos2dxBind_cocos2d__ParticleSystem_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_skew_y_29", Cocos2dxBind_cocos2d__ParticleSystem_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_anchor_point_26", Cocos2dxBind_cocos2d__ParticleSystem_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_anchor_point_29", Cocos2dxBind_cocos2d__ParticleSystem_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ParticleSystem_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_content_size_24", Cocos2dxBind_cocos2d__ParticleSystem_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_content_size_26", Cocos2dxBind_cocos2d__ParticleSystem_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_visible_27", Cocos2dxBind_cocos2d__ParticleSystem_set_visible_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_visible_29", Cocos2dxBind_cocos2d__ParticleSystem_is_visible_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation_29", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ParticleSystem_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ParticleSystem_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ParticleSystem_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ParticleSystem_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ParticleSystem_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ParticleSystem_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_child_113", Cocos2dxBind_cocos2d__ParticleSystem_add_child_113);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_child_114", Cocos2dxBind_cocos2d__ParticleSystem_add_child_114);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_child_115", Cocos2dxBind_cocos2d__ParticleSystem_add_child_115);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_child_116", Cocos2dxBind_cocos2d__ParticleSystem_add_child_116);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_child_by_name_29", Cocos2dxBind_cocos2d__ParticleSystem_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "enumerate_children_29", Cocos2dxBind_cocos2d__ParticleSystem_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_children_58", Cocos2dxBind_cocos2d__ParticleSystem_get_children_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_children_count_29", Cocos2dxBind_cocos2d__ParticleSystem_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_parent_29", Cocos2dxBind_cocos2d__ParticleSystem_set_parent_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_parent_57", Cocos2dxBind_cocos2d__ParticleSystem_get_parent_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_parent_58", Cocos2dxBind_cocos2d__ParticleSystem_get_parent_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_from_parent_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_child_24", Cocos2dxBind_cocos2d__ParticleSystem_remove_child_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_all_children_28", Cocos2dxBind_cocos2d__ParticleSystem_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ParticleSystem_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "reorder_child_26", Cocos2dxBind_cocos2d__ParticleSystem_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "sort_all_children_26", Cocos2dxBind_cocos2d__ParticleSystem_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_get_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_set_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_name_29", Cocos2dxBind_cocos2d__ParticleSystem_get_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_name_29", Cocos2dxBind_cocos2d__ParticleSystem_set_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_user_data_57", Cocos2dxBind_cocos2d__ParticleSystem_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_user_data_58", Cocos2dxBind_cocos2d__ParticleSystem_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_user_data_29", Cocos2dxBind_cocos2d__ParticleSystem_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_user_object_57", Cocos2dxBind_cocos2d__ParticleSystem_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_user_object_58", Cocos2dxBind_cocos2d__ParticleSystem_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_user_object_29", Cocos2dxBind_cocos2d__ParticleSystem_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_gl_program_29", Cocos2dxBind_cocos2d__ParticleSystem_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_gl_program_28", Cocos2dxBind_cocos2d__ParticleSystem_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ParticleSystem_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ParticleSystem_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_running_29", Cocos2dxBind_cocos2d__ParticleSystem_is_running_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__ParticleSystem_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__ParticleSystem_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "cleanup_25", Cocos2dxBind_cocos2d__ParticleSystem_cleanup_25);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "draw_27", Cocos2dxBind_cocos2d__ParticleSystem_draw_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "draw_28", Cocos2dxBind_cocos2d__ParticleSystem_draw_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "visit_31", Cocos2dxBind_cocos2d__ParticleSystem_visit_31);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "visit_32", Cocos2dxBind_cocos2d__ParticleSystem_visit_32);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scene_29", Cocos2dxBind_cocos2d__ParticleSystem_get_scene_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_bounding_box_26", Cocos2dxBind_cocos2d__ParticleSystem_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ParticleSystem_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ParticleSystem_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_action_manager_29", Cocos2dxBind_cocos2d__ParticleSystem_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_action_manager_57", Cocos2dxBind_cocos2d__ParticleSystem_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_action_manager_58", Cocos2dxBind_cocos2d__ParticleSystem_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "run_action_28", Cocos2dxBind_cocos2d__ParticleSystem_run_action_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_all_actions_29", Cocos2dxBind_cocos2d__ParticleSystem_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_action_29", Cocos2dxBind_cocos2d__ParticleSystem_stop_action_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ParticleSystem_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystem_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ParticleSystem_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_scheduler_29", Cocos2dxBind_cocos2d__ParticleSystem_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scheduler_57", Cocos2dxBind_cocos2d__ParticleSystem_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_scheduler_58", Cocos2dxBind_cocos2d__ParticleSystem_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_scheduled_58", Cocos2dxBind_cocos2d__ParticleSystem_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_update_29", Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ParticleSystem_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "unschedule_update_29", Cocos2dxBind_cocos2d__ParticleSystem_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_once_58", Cocos2dxBind_cocos2d__ParticleSystem_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_172", Cocos2dxBind_cocos2d__ParticleSystem_schedule_172);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_173", Cocos2dxBind_cocos2d__ParticleSystem_schedule_173);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "schedule_174", Cocos2dxBind_cocos2d__ParticleSystem_schedule_174);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "unschedule_58", Cocos2dxBind_cocos2d__ParticleSystem_unschedule_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ParticleSystem_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "resume_29", Cocos2dxBind_cocos2d__ParticleSystem_resume_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "pause_29", Cocos2dxBind_cocos2d__ParticleSystem_pause_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_transform_28", Cocos2dxBind_cocos2d__ParticleSystem_update_transform_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystem_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_additional_transform_58", Cocos2dxBind_cocos2d__ParticleSystem_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_component_29", Cocos2dxBind_cocos2d__ParticleSystem_get_component_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "add_component_29", Cocos2dxBind_cocos2d__ParticleSystem_add_component_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_component_57", Cocos2dxBind_cocos2d__ParticleSystem_remove_component_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_component_58", Cocos2dxBind_cocos2d__ParticleSystem_remove_component_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_all_components_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_physics_body_29", Cocos2dxBind_cocos2d__ParticleSystem_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_physics_body_29", Cocos2dxBind_cocos2d__ParticleSystem_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ParticleSystem_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ParticleSystem_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ParticleSystem_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_opacity_28", Cocos2dxBind_cocos2d__ParticleSystem_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ParticleSystem_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_opacity_26", Cocos2dxBind_cocos2d__ParticleSystem_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__ParticleSystem_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ParticleSystem_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ParticleSystem_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_color_27", Cocos2dxBind_cocos2d__ParticleSystem_get_color_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_displayed_color_29", Cocos2dxBind_cocos2d__ParticleSystem_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_color_27", Cocos2dxBind_cocos2d__ParticleSystem_set_color_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "update_displayed_color_23", Cocos2dxBind_cocos2d__ParticleSystem_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ParticleSystem_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ParticleSystem_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ParticleSystem_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ParticleSystem_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ParticleSystem_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ParticleSystem_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_camera_mask_29", Cocos2dxBind_cocos2d__ParticleSystem_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "set_camera_mask_22", Cocos2dxBind_cocos2d__ParticleSystem_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "retain_176", Cocos2dxBind_cocos2d__ParticleSystem_retain_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "release_176", Cocos2dxBind_cocos2d__ParticleSystem_release_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "autorelease_176", Cocos2dxBind_cocos2d__ParticleSystem_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "get_reference_count_176", Cocos2dxBind_cocos2d__ParticleSystem_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ParticleSystemQuad", "create_1", Cocos2dxBind_cocos2d__ParticleSystemQuad_create_1);
            binder.bind_static_method("Cocos2d", "ParticleSystemQuad", "create_with_total_particles", Cocos2dxBind_cocos2d__ParticleSystemQuad_create_with_total_particles);
            binder.bind_static_method("Cocos2d", "ParticleSystemQuad", "create_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_create_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_display_frame", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_display_frame);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_texture_with_rect", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_texture_with_rect);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "listen_renderer_recreated", Cocos2dxBind_cocos2d__ParticleSystemQuad_listen_renderer_recreated);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_texture", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_texture);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_quad_with_particle", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_quad_with_particle);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "post_step", Cocos2dxBind_cocos2d__ParticleSystemQuad_post_step);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "draw", Cocos2dxBind_cocos2d__ParticleSystemQuad_draw);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_batch_node", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_batch_node);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_total_particles", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_total_particles);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_description", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_description);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "init_with_total_particles", Cocos2dxBind_cocos2d__ParticleSystemQuad_init_with_total_particles);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_particle_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_particle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "init_particle_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_init_particle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_system_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_system_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "reset_system_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_reset_system_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_full_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_full_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_with_no_time_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_with_no_time_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_auto_remove_on_finish_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_auto_remove_on_finish_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_auto_remove_on_finish_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_auto_remove_on_finish_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_gravity_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gravity_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_gravity_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gravity_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_speed_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_speed_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_speed_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_speed_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_speed_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_speed_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_speed_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_speed_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_tangential_accel_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tangential_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_tangential_accel_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tangential_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_tangential_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tangential_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_tangential_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tangential_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_radial_accel_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_radial_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_radial_accel_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_radial_accel_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_radial_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_radial_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_radial_accel_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_radial_accel_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation_is_dir_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_is_dir_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation_is_dir_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_is_dir_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_radius_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_radius_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_radius_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_radius_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_radius_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_radius_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_radius_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotate_per_second_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotate_per_second_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotate_per_second_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotate_per_second_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotate_per_second_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotate_per_second_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotate_per_second_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotate_per_second_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_scale_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_scale_x_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_x_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_scale_y_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_y_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_active_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_active_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_blend_additive_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_blend_additive_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_blend_additive_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_blend_additive_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_batch_node_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_batch_node_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_atlas_index_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_atlas_index_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_atlas_index_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_atlas_index_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_particle_count_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_particle_count_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_duration_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_duration_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_duration_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_duration_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_source_position_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_source_position_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_source_position_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_source_position_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_pos_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_pos_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_pos_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_pos_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_life_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_life_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_life_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_life_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_life_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_life_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_life_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_life_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_angle_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_angle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_angle_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_angle_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_angle_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_angle_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_angle_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_angle_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_emitter_mode_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_emitter_mode_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_emitter_mode_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_emitter_mode_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_size_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_size_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_size_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_size_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_size_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_size_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_size_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_size_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_size_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_size_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_color_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_color_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_color_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_color_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_color_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_color_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_color_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_color_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_color_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_color_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_spin_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_spin_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_start_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_start_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_start_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_start_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_spin_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_spin_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_spin_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_end_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_end_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_end_spin_var_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_end_spin_var_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_emission_rate_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_emission_rate_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_emission_rate_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_emission_rate_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_total_particles_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_total_particles_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_opacity_modify_rgb_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_opacity_modify_rgb_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_type_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_type_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_type_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_type_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "on_enter_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_on_enter_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "on_exit_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_on_exit_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_texture_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_texture_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_blend_func_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_blend_func_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_blend_func_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_blend_func_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "init_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_init_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "init_with_file_2", Cocos2dxBind_cocos2d__ParticleSystemQuad_init_with_file_2);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_local_z_order_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_local_z_order_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_global_z_order_27", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_global_z_order_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scale_x_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scale_y_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_scale_z_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scale_z_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scale_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scale_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_49", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_49);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_normalized_position_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_55", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_55);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_normalized_position_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_50", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_50);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_56", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_56);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_x_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_x_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_y_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_y_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position3_d_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position3_d_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_position_z_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_position_z_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_skew_x_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_skew_x_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_skew_y_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_skew_y_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_anchor_point_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_anchor_point_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_content_size_24", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_content_size_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_visible_27", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_visible_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_visible_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_visible_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_child_113", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_113);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_child_114", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_114);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_child_115", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_115);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_child_116", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_child_116);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_child_by_name_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "enumerate_children_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_children_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_children_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_children_count_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_parent_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_parent_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_parent_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_parent_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_from_parent_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_child_24", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_all_children_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "reorder_child_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "sort_all_children_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_name_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_name_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_name_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_user_data_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_user_data_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_user_data_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_user_object_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_user_object_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_user_object_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_gl_program_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_gl_program_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_running_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_running_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__ParticleSystemQuad_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__ParticleSystemQuad_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "cleanup_25", Cocos2dxBind_cocos2d__ParticleSystemQuad_cleanup_25);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "visit_31", Cocos2dxBind_cocos2d__ParticleSystemQuad_visit_31);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "visit_32", Cocos2dxBind_cocos2d__ParticleSystemQuad_visit_32);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scene_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scene_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_bounding_box_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_action_manager_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_action_manager_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_action_manager_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "run_action_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_run_action_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_all_actions_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_action_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_action_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_scheduler_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scheduler_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_scheduler_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_scheduled_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_update_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "unschedule_update_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_once_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_172", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_172);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_173", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_173);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "schedule_174", Cocos2dxBind_cocos2d__ParticleSystemQuad_schedule_174);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "unschedule_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "resume_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_resume_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "pause_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_pause_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_transform_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_transform_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_additional_transform_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_component_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_component_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "add_component_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_add_component_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_component_57", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_component_57);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_component_58", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_component_58);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_all_components_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_physics_body_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_physics_body_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_opacity_28", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_opacity_26", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_color_27", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_color_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_displayed_color_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_color_27", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_color_27);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "update_displayed_color_23", Cocos2dxBind_cocos2d__ParticleSystemQuad_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_camera_mask_29", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "set_camera_mask_22", Cocos2dxBind_cocos2d__ParticleSystemQuad_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "retain_176", Cocos2dxBind_cocos2d__ParticleSystemQuad_retain_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "release_176", Cocos2dxBind_cocos2d__ParticleSystemQuad_release_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "autorelease_176", Cocos2dxBind_cocos2d__ParticleSystemQuad_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "get_reference_count_176", Cocos2dxBind_cocos2d__ParticleSystemQuad_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "ProtectedNode", "create", Cocos2dxBind_cocos2d__ProtectedNode_create);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_protected_child_7", Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_7);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_protected_child_8", Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_8);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_protected_child_9", Cocos2dxBind_cocos2d__ProtectedNode_add_protected_child_9);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ProtectedNode_get_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_protected_child_3", Cocos2dxBind_cocos2d__ProtectedNode_remove_protected_child_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_protected_child_by_tag_3", Cocos2dxBind_cocos2d__ProtectedNode_remove_protected_child_by_tag_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_all_protected_children_3", Cocos2dxBind_cocos2d__ProtectedNode_remove_all_protected_children_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_all_protected_children_with_cleanup_3", Cocos2dxBind_cocos2d__ProtectedNode_remove_all_protected_children_with_cleanup_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "reorder_protected_child_3", Cocos2dxBind_cocos2d__ProtectedNode_reorder_protected_child_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "sort_all_protected_children_3", Cocos2dxBind_cocos2d__ProtectedNode_sort_all_protected_children_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "visit", Cocos2dxBind_cocos2d__ProtectedNode_visit);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "cleanup_3", Cocos2dxBind_cocos2d__ProtectedNode_cleanup_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "on_enter", Cocos2dxBind_cocos2d__ProtectedNode_on_enter);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "on_enter_transition_did_finish_3", Cocos2dxBind_cocos2d__ProtectedNode_on_enter_transition_did_finish_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "on_exit", Cocos2dxBind_cocos2d__ProtectedNode_on_exit);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "on_exit_transition_did_start_3", Cocos2dxBind_cocos2d__ProtectedNode_on_exit_transition_did_start_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_displayed_opacity_3", Cocos2dxBind_cocos2d__ProtectedNode_update_displayed_opacity_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_displayed_color_3", Cocos2dxBind_cocos2d__ProtectedNode_update_displayed_color_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "disable_cascade_color_3", Cocos2dxBind_cocos2d__ProtectedNode_disable_cascade_color_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "disable_cascade_opacity_3", Cocos2dxBind_cocos2d__ProtectedNode_disable_cascade_opacity_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_camera_mask_3", Cocos2dxBind_cocos2d__ProtectedNode_set_camera_mask_3);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_description_15", Cocos2dxBind_cocos2d__ProtectedNode_get_description_15);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_local_z_order_29", Cocos2dxBind_cocos2d__ProtectedNode_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_local_z_order_29", Cocos2dxBind_cocos2d__ProtectedNode_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_global_z_order_27", Cocos2dxBind_cocos2d__ProtectedNode_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_global_z_order_29", Cocos2dxBind_cocos2d__ProtectedNode_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scale_x_23", Cocos2dxBind_cocos2d__ProtectedNode_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scale_x_26", Cocos2dxBind_cocos2d__ProtectedNode_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scale_y_23", Cocos2dxBind_cocos2d__ProtectedNode_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scale_y_26", Cocos2dxBind_cocos2d__ProtectedNode_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scale_z_29", Cocos2dxBind_cocos2d__ProtectedNode_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scale_z_29", Cocos2dxBind_cocos2d__ProtectedNode_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scale_45", Cocos2dxBind_cocos2d__ProtectedNode_set_scale_45);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scale_26", Cocos2dxBind_cocos2d__ProtectedNode_get_scale_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scale_46", Cocos2dxBind_cocos2d__ProtectedNode_set_scale_46);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position_49", Cocos2dxBind_cocos2d__ProtectedNode_set_position_49);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_normalized_position_29", Cocos2dxBind_cocos2d__ProtectedNode_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position_55", Cocos2dxBind_cocos2d__ProtectedNode_get_position_55);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_normalized_position_29", Cocos2dxBind_cocos2d__ProtectedNode_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position_50", Cocos2dxBind_cocos2d__ProtectedNode_set_position_50);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position_56", Cocos2dxBind_cocos2d__ProtectedNode_get_position_56);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position_x_28", Cocos2dxBind_cocos2d__ProtectedNode_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position_x_28", Cocos2dxBind_cocos2d__ProtectedNode_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position_y_28", Cocos2dxBind_cocos2d__ProtectedNode_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position_y_28", Cocos2dxBind_cocos2d__ProtectedNode_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position3_d_29", Cocos2dxBind_cocos2d__ProtectedNode_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position3_d_28", Cocos2dxBind_cocos2d__ProtectedNode_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_position_z_28", Cocos2dxBind_cocos2d__ProtectedNode_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_position_z_29", Cocos2dxBind_cocos2d__ProtectedNode_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_skew_x_28", Cocos2dxBind_cocos2d__ProtectedNode_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_skew_x_29", Cocos2dxBind_cocos2d__ProtectedNode_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_skew_y_28", Cocos2dxBind_cocos2d__ProtectedNode_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_skew_y_29", Cocos2dxBind_cocos2d__ProtectedNode_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_anchor_point_26", Cocos2dxBind_cocos2d__ProtectedNode_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_anchor_point_29", Cocos2dxBind_cocos2d__ProtectedNode_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__ProtectedNode_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_content_size_24", Cocos2dxBind_cocos2d__ProtectedNode_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_content_size_26", Cocos2dxBind_cocos2d__ProtectedNode_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_visible_27", Cocos2dxBind_cocos2d__ProtectedNode_set_visible_27);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_visible_29", Cocos2dxBind_cocos2d__ProtectedNode_is_visible_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_rotation_26", Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_rotation_29", Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_rotation3_d_29", Cocos2dxBind_cocos2d__ProtectedNode_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_rotation3_d_29", Cocos2dxBind_cocos2d__ProtectedNode_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_rotation_quat_29", Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_rotation_quat_29", Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__ProtectedNode_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__ProtectedNode_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__ProtectedNode_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__ProtectedNode_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__ProtectedNode_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__ProtectedNode_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_child_113", Cocos2dxBind_cocos2d__ProtectedNode_add_child_113);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_child_114", Cocos2dxBind_cocos2d__ProtectedNode_add_child_114);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_child_115", Cocos2dxBind_cocos2d__ProtectedNode_add_child_115);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_child_116", Cocos2dxBind_cocos2d__ProtectedNode_add_child_116);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_child_by_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_child_by_name_29", Cocos2dxBind_cocos2d__ProtectedNode_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "enumerate_children_29", Cocos2dxBind_cocos2d__ProtectedNode_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_children_58", Cocos2dxBind_cocos2d__ProtectedNode_get_children_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_children_count_29", Cocos2dxBind_cocos2d__ProtectedNode_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_parent_29", Cocos2dxBind_cocos2d__ProtectedNode_set_parent_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_parent_57", Cocos2dxBind_cocos2d__ProtectedNode_get_parent_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_parent_58", Cocos2dxBind_cocos2d__ProtectedNode_get_parent_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_from_parent_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_child_24", Cocos2dxBind_cocos2d__ProtectedNode_remove_child_24);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_child_by_name_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_all_children_28", Cocos2dxBind_cocos2d__ProtectedNode_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__ProtectedNode_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "reorder_child_26", Cocos2dxBind_cocos2d__ProtectedNode_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "sort_all_children_26", Cocos2dxBind_cocos2d__ProtectedNode_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_get_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_set_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_name_29", Cocos2dxBind_cocos2d__ProtectedNode_get_name_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_name_29", Cocos2dxBind_cocos2d__ProtectedNode_set_name_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_user_data_57", Cocos2dxBind_cocos2d__ProtectedNode_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_user_data_58", Cocos2dxBind_cocos2d__ProtectedNode_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_user_data_29", Cocos2dxBind_cocos2d__ProtectedNode_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_user_object_57", Cocos2dxBind_cocos2d__ProtectedNode_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_user_object_58", Cocos2dxBind_cocos2d__ProtectedNode_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_user_object_29", Cocos2dxBind_cocos2d__ProtectedNode_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_gl_program_29", Cocos2dxBind_cocos2d__ProtectedNode_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_gl_program_28", Cocos2dxBind_cocos2d__ProtectedNode_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_gl_program_state_29", Cocos2dxBind_cocos2d__ProtectedNode_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_gl_program_state_28", Cocos2dxBind_cocos2d__ProtectedNode_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_running_29", Cocos2dxBind_cocos2d__ProtectedNode_is_running_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "draw_27", Cocos2dxBind_cocos2d__ProtectedNode_draw_27);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "draw_28", Cocos2dxBind_cocos2d__ProtectedNode_draw_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scene_29", Cocos2dxBind_cocos2d__ProtectedNode_get_scene_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_bounding_box_26", Cocos2dxBind_cocos2d__ProtectedNode_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__ProtectedNode_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__ProtectedNode_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_action_manager_29", Cocos2dxBind_cocos2d__ProtectedNode_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_action_manager_57", Cocos2dxBind_cocos2d__ProtectedNode_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_action_manager_58", Cocos2dxBind_cocos2d__ProtectedNode_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "run_action_28", Cocos2dxBind_cocos2d__ProtectedNode_run_action_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "stop_all_actions_29", Cocos2dxBind_cocos2d__ProtectedNode_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "stop_action_29", Cocos2dxBind_cocos2d__ProtectedNode_stop_action_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__ProtectedNode_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_action_by_tag_29", Cocos2dxBind_cocos2d__ProtectedNode_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__ProtectedNode_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_scheduler_29", Cocos2dxBind_cocos2d__ProtectedNode_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scheduler_57", Cocos2dxBind_cocos2d__ProtectedNode_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_scheduler_58", Cocos2dxBind_cocos2d__ProtectedNode_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_scheduled_58", Cocos2dxBind_cocos2d__ProtectedNode_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_update_29", Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__ProtectedNode_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "unschedule_update_29", Cocos2dxBind_cocos2d__ProtectedNode_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_once_58", Cocos2dxBind_cocos2d__ProtectedNode_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_172", Cocos2dxBind_cocos2d__ProtectedNode_schedule_172);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_173", Cocos2dxBind_cocos2d__ProtectedNode_schedule_173);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "schedule_174", Cocos2dxBind_cocos2d__ProtectedNode_schedule_174);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "unschedule_58", Cocos2dxBind_cocos2d__ProtectedNode_unschedule_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__ProtectedNode_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "resume_29", Cocos2dxBind_cocos2d__ProtectedNode_resume_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "pause_29", Cocos2dxBind_cocos2d__ProtectedNode_pause_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_26", Cocos2dxBind_cocos2d__ProtectedNode_update_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_transform_28", Cocos2dxBind_cocos2d__ProtectedNode_update_transform_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_to_node_space_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_to_world_space_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__ProtectedNode_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_additional_transform_58", Cocos2dxBind_cocos2d__ProtectedNode_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_component_29", Cocos2dxBind_cocos2d__ProtectedNode_get_component_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "add_component_29", Cocos2dxBind_cocos2d__ProtectedNode_add_component_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_component_57", Cocos2dxBind_cocos2d__ProtectedNode_remove_component_57);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_component_58", Cocos2dxBind_cocos2d__ProtectedNode_remove_component_58);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_all_components_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_physics_body_29", Cocos2dxBind_cocos2d__ProtectedNode_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_physics_body_29", Cocos2dxBind_cocos2d__ProtectedNode_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__ProtectedNode_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__ProtectedNode_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__ProtectedNode_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_opacity_28", Cocos2dxBind_cocos2d__ProtectedNode_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__ProtectedNode_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_opacity_26", Cocos2dxBind_cocos2d__ProtectedNode_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ProtectedNode_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__ProtectedNode_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_color_27", Cocos2dxBind_cocos2d__ProtectedNode_get_color_27);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_displayed_color_29", Cocos2dxBind_cocos2d__ProtectedNode_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_color_27", Cocos2dxBind_cocos2d__ProtectedNode_set_color_27);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ProtectedNode_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__ProtectedNode_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ProtectedNode_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__ProtectedNode_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__ProtectedNode_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__ProtectedNode_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__ProtectedNode_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__ProtectedNode_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_camera_mask_29", Cocos2dxBind_cocos2d__ProtectedNode_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "init_13", Cocos2dxBind_cocos2d__ProtectedNode_init_13);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "retain_176", Cocos2dxBind_cocos2d__ProtectedNode_retain_176);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "release_176", Cocos2dxBind_cocos2d__ProtectedNode_release_176);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "autorelease_176", Cocos2dxBind_cocos2d__ProtectedNode_autorelease_176);
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "get_reference_count_176", Cocos2dxBind_cocos2d__ProtectedNode_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "RenderTexture", "create_1", Cocos2dxBind_cocos2d__RenderTexture_create_1);
            binder.bind_static_method("Cocos2d", "RenderTexture", "create_2", Cocos2dxBind_cocos2d__RenderTexture_create_2);
            binder.bind_static_method("Cocos2d", "RenderTexture", "create_3", Cocos2dxBind_cocos2d__RenderTexture_create_3);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "begin", Cocos2dxBind_cocos2d__RenderTexture_begin);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "begin_with_clear_1", Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_1);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "begin_with_clear_2", Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_2);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "begin_with_clear_3", Cocos2dxBind_cocos2d__RenderTexture_begin_with_clear_3);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "end_to_lua", Cocos2dxBind_cocos2d__RenderTexture_end_to_lua);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "end", Cocos2dxBind_cocos2d__RenderTexture_end);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "clear", Cocos2dxBind_cocos2d__RenderTexture_clear);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "clear_depth", Cocos2dxBind_cocos2d__RenderTexture_clear_depth);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "clear_stencil", Cocos2dxBind_cocos2d__RenderTexture_clear_stencil);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "new_image", Cocos2dxBind_cocos2d__RenderTexture_new_image);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "save_to_file_1", Cocos2dxBind_cocos2d__RenderTexture_save_to_file_1);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "save_to_file_2", Cocos2dxBind_cocos2d__RenderTexture_save_to_file_2);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "listen_to_background", Cocos2dxBind_cocos2d__RenderTexture_listen_to_background);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "listen_to_foreground", Cocos2dxBind_cocos2d__RenderTexture_listen_to_foreground);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_clear_flags", Cocos2dxBind_cocos2d__RenderTexture_get_clear_flags);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_clear_flags", Cocos2dxBind_cocos2d__RenderTexture_set_clear_flags);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_clear_color", Cocos2dxBind_cocos2d__RenderTexture_get_clear_color);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_clear_color", Cocos2dxBind_cocos2d__RenderTexture_set_clear_color);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_clear_depth", Cocos2dxBind_cocos2d__RenderTexture_get_clear_depth);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_clear_depth", Cocos2dxBind_cocos2d__RenderTexture_set_clear_depth);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_clear_stencil", Cocos2dxBind_cocos2d__RenderTexture_get_clear_stencil);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_clear_stencil", Cocos2dxBind_cocos2d__RenderTexture_set_clear_stencil);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_auto_draw", Cocos2dxBind_cocos2d__RenderTexture_is_auto_draw);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_auto_draw", Cocos2dxBind_cocos2d__RenderTexture_set_auto_draw);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_sprite", Cocos2dxBind_cocos2d__RenderTexture_get_sprite);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_sprite", Cocos2dxBind_cocos2d__RenderTexture_set_sprite);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "visit", Cocos2dxBind_cocos2d__RenderTexture_visit);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "draw", Cocos2dxBind_cocos2d__RenderTexture_draw);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_keep_matrix", Cocos2dxBind_cocos2d__RenderTexture_set_keep_matrix);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_virtual_viewport", Cocos2dxBind_cocos2d__RenderTexture_set_virtual_viewport);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "init_with_width_and_height_1", Cocos2dxBind_cocos2d__RenderTexture_init_with_width_and_height_1);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "init_with_width_and_height_2", Cocos2dxBind_cocos2d__RenderTexture_init_with_width_and_height_2);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_description_15", Cocos2dxBind_cocos2d__RenderTexture_get_description_15);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_local_z_order_29", Cocos2dxBind_cocos2d__RenderTexture_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_local_z_order_29", Cocos2dxBind_cocos2d__RenderTexture_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_global_z_order_27", Cocos2dxBind_cocos2d__RenderTexture_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_global_z_order_29", Cocos2dxBind_cocos2d__RenderTexture_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scale_x_23", Cocos2dxBind_cocos2d__RenderTexture_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scale_x_26", Cocos2dxBind_cocos2d__RenderTexture_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scale_y_23", Cocos2dxBind_cocos2d__RenderTexture_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scale_y_26", Cocos2dxBind_cocos2d__RenderTexture_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scale_z_29", Cocos2dxBind_cocos2d__RenderTexture_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scale_z_29", Cocos2dxBind_cocos2d__RenderTexture_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scale_45", Cocos2dxBind_cocos2d__RenderTexture_set_scale_45);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scale_26", Cocos2dxBind_cocos2d__RenderTexture_get_scale_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scale_46", Cocos2dxBind_cocos2d__RenderTexture_set_scale_46);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position_49", Cocos2dxBind_cocos2d__RenderTexture_set_position_49);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_normalized_position_29", Cocos2dxBind_cocos2d__RenderTexture_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position_55", Cocos2dxBind_cocos2d__RenderTexture_get_position_55);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_normalized_position_29", Cocos2dxBind_cocos2d__RenderTexture_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position_50", Cocos2dxBind_cocos2d__RenderTexture_set_position_50);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position_56", Cocos2dxBind_cocos2d__RenderTexture_get_position_56);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position_x_28", Cocos2dxBind_cocos2d__RenderTexture_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position_x_28", Cocos2dxBind_cocos2d__RenderTexture_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position_y_28", Cocos2dxBind_cocos2d__RenderTexture_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position_y_28", Cocos2dxBind_cocos2d__RenderTexture_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position3_d_29", Cocos2dxBind_cocos2d__RenderTexture_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position3_d_28", Cocos2dxBind_cocos2d__RenderTexture_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_position_z_28", Cocos2dxBind_cocos2d__RenderTexture_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_position_z_29", Cocos2dxBind_cocos2d__RenderTexture_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_skew_x_28", Cocos2dxBind_cocos2d__RenderTexture_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_skew_x_29", Cocos2dxBind_cocos2d__RenderTexture_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_skew_y_28", Cocos2dxBind_cocos2d__RenderTexture_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_skew_y_29", Cocos2dxBind_cocos2d__RenderTexture_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_anchor_point_26", Cocos2dxBind_cocos2d__RenderTexture_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_anchor_point_29", Cocos2dxBind_cocos2d__RenderTexture_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__RenderTexture_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_content_size_24", Cocos2dxBind_cocos2d__RenderTexture_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_content_size_26", Cocos2dxBind_cocos2d__RenderTexture_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_visible_27", Cocos2dxBind_cocos2d__RenderTexture_set_visible_27);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_visible_29", Cocos2dxBind_cocos2d__RenderTexture_is_visible_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_rotation_26", Cocos2dxBind_cocos2d__RenderTexture_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_rotation_29", Cocos2dxBind_cocos2d__RenderTexture_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_rotation3_d_29", Cocos2dxBind_cocos2d__RenderTexture_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_rotation3_d_29", Cocos2dxBind_cocos2d__RenderTexture_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_rotation_quat_29", Cocos2dxBind_cocos2d__RenderTexture_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_rotation_quat_29", Cocos2dxBind_cocos2d__RenderTexture_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__RenderTexture_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__RenderTexture_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__RenderTexture_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__RenderTexture_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__RenderTexture_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__RenderTexture_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__RenderTexture_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__RenderTexture_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "add_child_113", Cocos2dxBind_cocos2d__RenderTexture_add_child_113);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "add_child_114", Cocos2dxBind_cocos2d__RenderTexture_add_child_114);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "add_child_115", Cocos2dxBind_cocos2d__RenderTexture_add_child_115);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "add_child_116", Cocos2dxBind_cocos2d__RenderTexture_add_child_116);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_child_by_tag_29", Cocos2dxBind_cocos2d__RenderTexture_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_child_by_name_29", Cocos2dxBind_cocos2d__RenderTexture_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "enumerate_children_29", Cocos2dxBind_cocos2d__RenderTexture_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_children_58", Cocos2dxBind_cocos2d__RenderTexture_get_children_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_children_count_29", Cocos2dxBind_cocos2d__RenderTexture_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_parent_29", Cocos2dxBind_cocos2d__RenderTexture_set_parent_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_parent_57", Cocos2dxBind_cocos2d__RenderTexture_get_parent_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_parent_58", Cocos2dxBind_cocos2d__RenderTexture_get_parent_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_from_parent_29", Cocos2dxBind_cocos2d__RenderTexture_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__RenderTexture_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_child_24", Cocos2dxBind_cocos2d__RenderTexture_remove_child_24);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__RenderTexture_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_child_by_name_29", Cocos2dxBind_cocos2d__RenderTexture_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_all_children_28", Cocos2dxBind_cocos2d__RenderTexture_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__RenderTexture_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "reorder_child_26", Cocos2dxBind_cocos2d__RenderTexture_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "sort_all_children_26", Cocos2dxBind_cocos2d__RenderTexture_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_tag_29", Cocos2dxBind_cocos2d__RenderTexture_get_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_tag_29", Cocos2dxBind_cocos2d__RenderTexture_set_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_name_29", Cocos2dxBind_cocos2d__RenderTexture_get_name_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_name_29", Cocos2dxBind_cocos2d__RenderTexture_set_name_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_user_data_57", Cocos2dxBind_cocos2d__RenderTexture_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_user_data_58", Cocos2dxBind_cocos2d__RenderTexture_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_user_data_29", Cocos2dxBind_cocos2d__RenderTexture_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_user_object_57", Cocos2dxBind_cocos2d__RenderTexture_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_user_object_58", Cocos2dxBind_cocos2d__RenderTexture_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_user_object_29", Cocos2dxBind_cocos2d__RenderTexture_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_gl_program_29", Cocos2dxBind_cocos2d__RenderTexture_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_gl_program_28", Cocos2dxBind_cocos2d__RenderTexture_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_gl_program_state_29", Cocos2dxBind_cocos2d__RenderTexture_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_gl_program_state_28", Cocos2dxBind_cocos2d__RenderTexture_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_running_29", Cocos2dxBind_cocos2d__RenderTexture_is_running_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__RenderTexture_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "on_enter_18", Cocos2dxBind_cocos2d__RenderTexture_on_enter_18);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__RenderTexture_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "on_exit_18", Cocos2dxBind_cocos2d__RenderTexture_on_exit_18);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__RenderTexture_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "cleanup_25", Cocos2dxBind_cocos2d__RenderTexture_cleanup_25);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scene_29", Cocos2dxBind_cocos2d__RenderTexture_get_scene_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_bounding_box_26", Cocos2dxBind_cocos2d__RenderTexture_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__RenderTexture_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__RenderTexture_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_action_manager_29", Cocos2dxBind_cocos2d__RenderTexture_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_action_manager_57", Cocos2dxBind_cocos2d__RenderTexture_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_action_manager_58", Cocos2dxBind_cocos2d__RenderTexture_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "run_action_28", Cocos2dxBind_cocos2d__RenderTexture_run_action_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "stop_all_actions_29", Cocos2dxBind_cocos2d__RenderTexture_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "stop_action_29", Cocos2dxBind_cocos2d__RenderTexture_stop_action_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__RenderTexture_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__RenderTexture_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__RenderTexture_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_action_by_tag_29", Cocos2dxBind_cocos2d__RenderTexture_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__RenderTexture_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_scheduler_29", Cocos2dxBind_cocos2d__RenderTexture_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scheduler_57", Cocos2dxBind_cocos2d__RenderTexture_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_scheduler_58", Cocos2dxBind_cocos2d__RenderTexture_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_scheduled_58", Cocos2dxBind_cocos2d__RenderTexture_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_update_29", Cocos2dxBind_cocos2d__RenderTexture_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__RenderTexture_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "unschedule_update_29", Cocos2dxBind_cocos2d__RenderTexture_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_once_58", Cocos2dxBind_cocos2d__RenderTexture_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_172", Cocos2dxBind_cocos2d__RenderTexture_schedule_172);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_173", Cocos2dxBind_cocos2d__RenderTexture_schedule_173);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "schedule_174", Cocos2dxBind_cocos2d__RenderTexture_schedule_174);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "unschedule_58", Cocos2dxBind_cocos2d__RenderTexture_unschedule_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__RenderTexture_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "resume_29", Cocos2dxBind_cocos2d__RenderTexture_resume_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "pause_29", Cocos2dxBind_cocos2d__RenderTexture_pause_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_26", Cocos2dxBind_cocos2d__RenderTexture_update_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_transform_28", Cocos2dxBind_cocos2d__RenderTexture_update_transform_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__RenderTexture_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__RenderTexture_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_to_node_space_29", Cocos2dxBind_cocos2d__RenderTexture_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_to_world_space_29", Cocos2dxBind_cocos2d__RenderTexture_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__RenderTexture_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__RenderTexture_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__RenderTexture_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__RenderTexture_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_additional_transform_58", Cocos2dxBind_cocos2d__RenderTexture_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_component_29", Cocos2dxBind_cocos2d__RenderTexture_get_component_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "add_component_29", Cocos2dxBind_cocos2d__RenderTexture_add_component_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_component_57", Cocos2dxBind_cocos2d__RenderTexture_remove_component_57);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_component_58", Cocos2dxBind_cocos2d__RenderTexture_remove_component_58);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_all_components_29", Cocos2dxBind_cocos2d__RenderTexture_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_physics_body_29", Cocos2dxBind_cocos2d__RenderTexture_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_physics_body_29", Cocos2dxBind_cocos2d__RenderTexture_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__RenderTexture_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__RenderTexture_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__RenderTexture_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_opacity_28", Cocos2dxBind_cocos2d__RenderTexture_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__RenderTexture_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_opacity_26", Cocos2dxBind_cocos2d__RenderTexture_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__RenderTexture_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__RenderTexture_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__RenderTexture_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_color_27", Cocos2dxBind_cocos2d__RenderTexture_get_color_27);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_displayed_color_29", Cocos2dxBind_cocos2d__RenderTexture_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_color_27", Cocos2dxBind_cocos2d__RenderTexture_set_color_27);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "update_displayed_color_23", Cocos2dxBind_cocos2d__RenderTexture_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__RenderTexture_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__RenderTexture_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__RenderTexture_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__RenderTexture_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__RenderTexture_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__RenderTexture_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__RenderTexture_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__RenderTexture_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_camera_mask_29", Cocos2dxBind_cocos2d__RenderTexture_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "set_camera_mask_22", Cocos2dxBind_cocos2d__RenderTexture_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "init_13", Cocos2dxBind_cocos2d__RenderTexture_init_13);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "retain_176", Cocos2dxBind_cocos2d__RenderTexture_retain_176);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "release_176", Cocos2dxBind_cocos2d__RenderTexture_release_176);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "autorelease_176", Cocos2dxBind_cocos2d__RenderTexture_autorelease_176);
            binder.bind_custom_method("Cocos2d", "RenderTexture", "get_reference_count_176", Cocos2dxBind_cocos2d__RenderTexture_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "Camera", "create_perspective", Cocos2dxBind_cocos2d__Camera_create_perspective);
            binder.bind_static_method("Cocos2d", "Camera", "create_orthographic", Cocos2dxBind_cocos2d__Camera_create_orthographic);
            binder.bind_static_method("Cocos2d", "Camera", "create", Cocos2dxBind_cocos2d__Camera_create);
            binder.bind_custom_method("Cocos2d", "Camera", "get_type", Cocos2dxBind_cocos2d__Camera_get_type);
            binder.bind_custom_method("Cocos2d", "Camera", "get_camera_flag", Cocos2dxBind_cocos2d__Camera_get_camera_flag);
            binder.bind_custom_method("Cocos2d", "Camera", "set_camera_flag", Cocos2dxBind_cocos2d__Camera_set_camera_flag);
            binder.bind_custom_method("Cocos2d", "Camera", "look_at", Cocos2dxBind_cocos2d__Camera_look_at);
            binder.bind_custom_method("Cocos2d", "Camera", "get_projection_matrix", Cocos2dxBind_cocos2d__Camera_get_projection_matrix);
            binder.bind_custom_method("Cocos2d", "Camera", "get_view_matrix", Cocos2dxBind_cocos2d__Camera_get_view_matrix);
            binder.bind_custom_method("Cocos2d", "Camera", "get_view_projection_matrix", Cocos2dxBind_cocos2d__Camera_get_view_projection_matrix);
            binder.bind_custom_method("Cocos2d", "Camera", "project", Cocos2dxBind_cocos2d__Camera_project);
            binder.bind_custom_method("Cocos2d", "Camera", "project_gl", Cocos2dxBind_cocos2d__Camera_project_gl);
            binder.bind_custom_method("Cocos2d", "Camera", "unproject_1", Cocos2dxBind_cocos2d__Camera_unproject_1);
            binder.bind_custom_method("Cocos2d", "Camera", "unproject_gl_1", Cocos2dxBind_cocos2d__Camera_unproject_gl_1);
            binder.bind_custom_method("Cocos2d", "Camera", "is_visible_in_frustum", Cocos2dxBind_cocos2d__Camera_is_visible_in_frustum);
            binder.bind_custom_method("Cocos2d", "Camera", "get_depth_in_view", Cocos2dxBind_cocos2d__Camera_get_depth_in_view);
            binder.bind_custom_method("Cocos2d", "Camera", "set_depth", Cocos2dxBind_cocos2d__Camera_set_depth);
            binder.bind_custom_method("Cocos2d", "Camera", "get_depth", Cocos2dxBind_cocos2d__Camera_get_depth);
            binder.bind_custom_method("Cocos2d", "Camera", "get_render_order", Cocos2dxBind_cocos2d__Camera_get_render_order);
            binder.bind_custom_method("Cocos2d", "Camera", "get_far_plane", Cocos2dxBind_cocos2d__Camera_get_far_plane);
            binder.bind_custom_method("Cocos2d", "Camera", "get_near_plane", Cocos2dxBind_cocos2d__Camera_get_near_plane);
            binder.bind_custom_method("Cocos2d", "Camera", "on_enter", Cocos2dxBind_cocos2d__Camera_on_enter);
            binder.bind_custom_method("Cocos2d", "Camera", "on_exit", Cocos2dxBind_cocos2d__Camera_on_exit);
            binder.bind_static_method("Cocos2d", "Camera", "get_visiting_camera", Cocos2dxBind_cocos2d__Camera_get_visiting_camera);
            binder.bind_static_method("Cocos2d", "Camera", "get_default_camera", Cocos2dxBind_cocos2d__Camera_get_default_camera);
            binder.bind_custom_method("Cocos2d", "Camera", "clear_background", Cocos2dxBind_cocos2d__Camera_clear_background);
            binder.bind_custom_method("Cocos2d", "Camera", "apply", Cocos2dxBind_cocos2d__Camera_apply);
            binder.bind_custom_method("Cocos2d", "Camera", "set_frame_buffer_object", Cocos2dxBind_cocos2d__Camera_set_frame_buffer_object);
            binder.bind_custom_method("Cocos2d", "Camera", "set_viewport", Cocos2dxBind_cocos2d__Camera_set_viewport);
            binder.bind_custom_method("Cocos2d", "Camera", "is_view_projection_updated", Cocos2dxBind_cocos2d__Camera_is_view_projection_updated);
            binder.bind_custom_method("Cocos2d", "Camera", "set_background_brush", Cocos2dxBind_cocos2d__Camera_set_background_brush);
            binder.bind_custom_method("Cocos2d", "Camera", "get_background_brush", Cocos2dxBind_cocos2d__Camera_get_background_brush);
            binder.bind_custom_method("Cocos2d", "Camera", "visit", Cocos2dxBind_cocos2d__Camera_visit);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scene", Cocos2dxBind_cocos2d__Camera_set_scene);
            binder.bind_custom_method("Cocos2d", "Camera", "set_additional_projection", Cocos2dxBind_cocos2d__Camera_set_additional_projection);
            binder.bind_custom_method("Cocos2d", "Camera", "init_default", Cocos2dxBind_cocos2d__Camera_init_default);
            binder.bind_custom_method("Cocos2d", "Camera", "init_perspective", Cocos2dxBind_cocos2d__Camera_init_perspective);
            binder.bind_custom_method("Cocos2d", "Camera", "init_orthographic", Cocos2dxBind_cocos2d__Camera_init_orthographic);
            binder.bind_custom_method("Cocos2d", "Camera", "apply_frame_buffer_object", Cocos2dxBind_cocos2d__Camera_apply_frame_buffer_object);
            binder.bind_custom_method("Cocos2d", "Camera", "apply_viewport", Cocos2dxBind_cocos2d__Camera_apply_viewport);
            binder.bind_static_method("Cocos2d", "Camera", "get_default_viewport", Cocos2dxBind_cocos2d__Camera_get_default_viewport);
            binder.bind_static_method("Cocos2d", "Camera", "set_default_viewport", Cocos2dxBind_cocos2d__Camera_set_default_viewport);
            binder.bind_custom_method("Cocos2d", "Camera", "get_description_15", Cocos2dxBind_cocos2d__Camera_get_description_15);
            binder.bind_custom_method("Cocos2d", "Camera", "set_local_z_order_29", Cocos2dxBind_cocos2d__Camera_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_local_z_order_29", Cocos2dxBind_cocos2d__Camera_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_global_z_order_27", Cocos2dxBind_cocos2d__Camera_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "Camera", "get_global_z_order_29", Cocos2dxBind_cocos2d__Camera_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scale_x_23", Cocos2dxBind_cocos2d__Camera_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scale_x_26", Cocos2dxBind_cocos2d__Camera_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scale_y_23", Cocos2dxBind_cocos2d__Camera_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scale_y_26", Cocos2dxBind_cocos2d__Camera_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scale_z_29", Cocos2dxBind_cocos2d__Camera_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scale_z_29", Cocos2dxBind_cocos2d__Camera_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scale_45", Cocos2dxBind_cocos2d__Camera_set_scale_45);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scale_26", Cocos2dxBind_cocos2d__Camera_get_scale_26);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scale_46", Cocos2dxBind_cocos2d__Camera_set_scale_46);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position_49", Cocos2dxBind_cocos2d__Camera_set_position_49);
            binder.bind_custom_method("Cocos2d", "Camera", "set_normalized_position_29", Cocos2dxBind_cocos2d__Camera_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position_55", Cocos2dxBind_cocos2d__Camera_get_position_55);
            binder.bind_custom_method("Cocos2d", "Camera", "get_normalized_position_29", Cocos2dxBind_cocos2d__Camera_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position_50", Cocos2dxBind_cocos2d__Camera_set_position_50);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position_56", Cocos2dxBind_cocos2d__Camera_get_position_56);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position_x_28", Cocos2dxBind_cocos2d__Camera_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position_x_28", Cocos2dxBind_cocos2d__Camera_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position_y_28", Cocos2dxBind_cocos2d__Camera_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position_y_28", Cocos2dxBind_cocos2d__Camera_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position3_d_29", Cocos2dxBind_cocos2d__Camera_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position3_d_28", Cocos2dxBind_cocos2d__Camera_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "Camera", "set_position_z_28", Cocos2dxBind_cocos2d__Camera_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_position_z_29", Cocos2dxBind_cocos2d__Camera_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_skew_x_28", Cocos2dxBind_cocos2d__Camera_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_skew_x_29", Cocos2dxBind_cocos2d__Camera_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_skew_y_28", Cocos2dxBind_cocos2d__Camera_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_skew_y_29", Cocos2dxBind_cocos2d__Camera_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_anchor_point_26", Cocos2dxBind_cocos2d__Camera_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "Camera", "get_anchor_point_29", Cocos2dxBind_cocos2d__Camera_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__Camera_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_content_size_24", Cocos2dxBind_cocos2d__Camera_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "Camera", "get_content_size_26", Cocos2dxBind_cocos2d__Camera_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "Camera", "set_visible_27", Cocos2dxBind_cocos2d__Camera_set_visible_27);
            binder.bind_custom_method("Cocos2d", "Camera", "is_visible_29", Cocos2dxBind_cocos2d__Camera_is_visible_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_rotation_26", Cocos2dxBind_cocos2d__Camera_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "Camera", "get_rotation_29", Cocos2dxBind_cocos2d__Camera_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_rotation3_d_29", Cocos2dxBind_cocos2d__Camera_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_rotation3_d_29", Cocos2dxBind_cocos2d__Camera_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_rotation_quat_29", Cocos2dxBind_cocos2d__Camera_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_rotation_quat_29", Cocos2dxBind_cocos2d__Camera_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__Camera_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__Camera_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__Camera_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__Camera_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__Camera_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__Camera_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "Camera", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__Camera_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "Camera", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__Camera_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "Camera", "add_child_113", Cocos2dxBind_cocos2d__Camera_add_child_113);
            binder.bind_custom_method("Cocos2d", "Camera", "add_child_114", Cocos2dxBind_cocos2d__Camera_add_child_114);
            binder.bind_custom_method("Cocos2d", "Camera", "add_child_115", Cocos2dxBind_cocos2d__Camera_add_child_115);
            binder.bind_custom_method("Cocos2d", "Camera", "add_child_116", Cocos2dxBind_cocos2d__Camera_add_child_116);
            binder.bind_custom_method("Cocos2d", "Camera", "get_child_by_tag_29", Cocos2dxBind_cocos2d__Camera_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_child_by_name_29", Cocos2dxBind_cocos2d__Camera_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Camera", "enumerate_children_29", Cocos2dxBind_cocos2d__Camera_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_children_58", Cocos2dxBind_cocos2d__Camera_get_children_58);
            binder.bind_custom_method("Cocos2d", "Camera", "get_children_count_29", Cocos2dxBind_cocos2d__Camera_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_parent_29", Cocos2dxBind_cocos2d__Camera_set_parent_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_parent_57", Cocos2dxBind_cocos2d__Camera_get_parent_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_parent_58", Cocos2dxBind_cocos2d__Camera_get_parent_58);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_from_parent_29", Cocos2dxBind_cocos2d__Camera_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__Camera_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_child_24", Cocos2dxBind_cocos2d__Camera_remove_child_24);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__Camera_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_child_by_name_29", Cocos2dxBind_cocos2d__Camera_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_all_children_28", Cocos2dxBind_cocos2d__Camera_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__Camera_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "Camera", "reorder_child_26", Cocos2dxBind_cocos2d__Camera_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "Camera", "sort_all_children_26", Cocos2dxBind_cocos2d__Camera_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "Camera", "get_tag_29", Cocos2dxBind_cocos2d__Camera_get_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_tag_29", Cocos2dxBind_cocos2d__Camera_set_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_name_29", Cocos2dxBind_cocos2d__Camera_get_name_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_name_29", Cocos2dxBind_cocos2d__Camera_set_name_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_user_data_57", Cocos2dxBind_cocos2d__Camera_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_user_data_58", Cocos2dxBind_cocos2d__Camera_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "Camera", "set_user_data_29", Cocos2dxBind_cocos2d__Camera_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_user_object_57", Cocos2dxBind_cocos2d__Camera_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_user_object_58", Cocos2dxBind_cocos2d__Camera_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "Camera", "set_user_object_29", Cocos2dxBind_cocos2d__Camera_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_gl_program_29", Cocos2dxBind_cocos2d__Camera_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_gl_program_28", Cocos2dxBind_cocos2d__Camera_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_gl_program_state_29", Cocos2dxBind_cocos2d__Camera_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_gl_program_state_28", Cocos2dxBind_cocos2d__Camera_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "Camera", "is_running_29", Cocos2dxBind_cocos2d__Camera_is_running_29);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__Camera_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "Camera", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__Camera_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "Camera", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__Camera_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "Camera", "cleanup_25", Cocos2dxBind_cocos2d__Camera_cleanup_25);
            binder.bind_custom_method("Cocos2d", "Camera", "draw_27", Cocos2dxBind_cocos2d__Camera_draw_27);
            binder.bind_custom_method("Cocos2d", "Camera", "draw_28", Cocos2dxBind_cocos2d__Camera_draw_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scene_29", Cocos2dxBind_cocos2d__Camera_get_scene_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_bounding_box_26", Cocos2dxBind_cocos2d__Camera_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "Camera", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__Camera_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__Camera_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_action_manager_29", Cocos2dxBind_cocos2d__Camera_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_action_manager_57", Cocos2dxBind_cocos2d__Camera_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_action_manager_58", Cocos2dxBind_cocos2d__Camera_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "Camera", "run_action_28", Cocos2dxBind_cocos2d__Camera_run_action_28);
            binder.bind_custom_method("Cocos2d", "Camera", "stop_all_actions_29", Cocos2dxBind_cocos2d__Camera_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "Camera", "stop_action_29", Cocos2dxBind_cocos2d__Camera_stop_action_29);
            binder.bind_custom_method("Cocos2d", "Camera", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__Camera_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__Camera_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__Camera_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_action_by_tag_29", Cocos2dxBind_cocos2d__Camera_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__Camera_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_scheduler_29", Cocos2dxBind_cocos2d__Camera_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scheduler_57", Cocos2dxBind_cocos2d__Camera_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_scheduler_58", Cocos2dxBind_cocos2d__Camera_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "Camera", "is_scheduled_58", Cocos2dxBind_cocos2d__Camera_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_update_29", Cocos2dxBind_cocos2d__Camera_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__Camera_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "Camera", "unschedule_update_29", Cocos2dxBind_cocos2d__Camera_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_once_58", Cocos2dxBind_cocos2d__Camera_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_172", Cocos2dxBind_cocos2d__Camera_schedule_172);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_173", Cocos2dxBind_cocos2d__Camera_schedule_173);
            binder.bind_custom_method("Cocos2d", "Camera", "schedule_174", Cocos2dxBind_cocos2d__Camera_schedule_174);
            binder.bind_custom_method("Cocos2d", "Camera", "unschedule_58", Cocos2dxBind_cocos2d__Camera_unschedule_58);
            binder.bind_custom_method("Cocos2d", "Camera", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__Camera_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "Camera", "resume_29", Cocos2dxBind_cocos2d__Camera_resume_29);
            binder.bind_custom_method("Cocos2d", "Camera", "pause_29", Cocos2dxBind_cocos2d__Camera_pause_29);
            binder.bind_custom_method("Cocos2d", "Camera", "update_26", Cocos2dxBind_cocos2d__Camera_update_26);
            binder.bind_custom_method("Cocos2d", "Camera", "update_transform_28", Cocos2dxBind_cocos2d__Camera_update_transform_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__Camera_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__Camera_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__Camera_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__Camera_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "Camera", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__Camera_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__Camera_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Camera_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__Camera_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__Camera_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__Camera_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__Camera_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_to_node_space_29", Cocos2dxBind_cocos2d__Camera_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_to_world_space_29", Cocos2dxBind_cocos2d__Camera_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__Camera_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__Camera_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__Camera_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "Camera", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__Camera_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_additional_transform_58", Cocos2dxBind_cocos2d__Camera_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "Camera", "get_component_29", Cocos2dxBind_cocos2d__Camera_get_component_29);
            binder.bind_custom_method("Cocos2d", "Camera", "add_component_29", Cocos2dxBind_cocos2d__Camera_add_component_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_component_57", Cocos2dxBind_cocos2d__Camera_remove_component_57);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_component_58", Cocos2dxBind_cocos2d__Camera_remove_component_58);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_all_components_29", Cocos2dxBind_cocos2d__Camera_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_physics_body_29", Cocos2dxBind_cocos2d__Camera_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_physics_body_29", Cocos2dxBind_cocos2d__Camera_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "Camera", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__Camera_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "Camera", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__Camera_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "Camera", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__Camera_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_opacity_28", Cocos2dxBind_cocos2d__Camera_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "Camera", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__Camera_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_opacity_26", Cocos2dxBind_cocos2d__Camera_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "Camera", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__Camera_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "Camera", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Camera_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__Camera_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_color_27", Cocos2dxBind_cocos2d__Camera_get_color_27);
            binder.bind_custom_method("Cocos2d", "Camera", "get_displayed_color_29", Cocos2dxBind_cocos2d__Camera_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_color_27", Cocos2dxBind_cocos2d__Camera_set_color_27);
            binder.bind_custom_method("Cocos2d", "Camera", "update_displayed_color_23", Cocos2dxBind_cocos2d__Camera_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "Camera", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Camera_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__Camera_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Camera_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Camera", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__Camera_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "Camera", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__Camera_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__Camera_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "Camera", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__Camera_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "Camera", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__Camera_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "Camera", "get_camera_mask_29", Cocos2dxBind_cocos2d__Camera_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "Camera", "set_camera_mask_22", Cocos2dxBind_cocos2d__Camera_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "Camera", "init_13", Cocos2dxBind_cocos2d__Camera_init_13);
            binder.bind_custom_method("Cocos2d", "Camera", "retain_176", Cocos2dxBind_cocos2d__Camera_retain_176);
            binder.bind_custom_method("Cocos2d", "Camera", "release_176", Cocos2dxBind_cocos2d__Camera_release_176);
            binder.bind_custom_method("Cocos2d", "Camera", "autorelease_176", Cocos2dxBind_cocos2d__Camera_autorelease_176);
            binder.bind_custom_method("Cocos2d", "Camera", "get_reference_count_176", Cocos2dxBind_cocos2d__Camera_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_light_type", Cocos2dxBind_cocos2d__BaseLight_get_light_type);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_intensity_3", Cocos2dxBind_cocos2d__BaseLight_get_intensity_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_intensity_3", Cocos2dxBind_cocos2d__BaseLight_set_intensity_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_light_flag_3", Cocos2dxBind_cocos2d__BaseLight_get_light_flag_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_light_flag_3", Cocos2dxBind_cocos2d__BaseLight_set_light_flag_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_enabled_3", Cocos2dxBind_cocos2d__BaseLight_set_enabled_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_enabled_3", Cocos2dxBind_cocos2d__BaseLight_is_enabled_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "on_enter_3", Cocos2dxBind_cocos2d__BaseLight_on_enter_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "on_exit_3", Cocos2dxBind_cocos2d__BaseLight_on_exit_3);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_description_15", Cocos2dxBind_cocos2d__BaseLight_get_description_15);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_local_z_order_29", Cocos2dxBind_cocos2d__BaseLight_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_local_z_order_29", Cocos2dxBind_cocos2d__BaseLight_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_global_z_order_27", Cocos2dxBind_cocos2d__BaseLight_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_global_z_order_29", Cocos2dxBind_cocos2d__BaseLight_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scale_x_23", Cocos2dxBind_cocos2d__BaseLight_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scale_x_26", Cocos2dxBind_cocos2d__BaseLight_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scale_y_23", Cocos2dxBind_cocos2d__BaseLight_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scale_y_26", Cocos2dxBind_cocos2d__BaseLight_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scale_z_29", Cocos2dxBind_cocos2d__BaseLight_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scale_z_29", Cocos2dxBind_cocos2d__BaseLight_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scale_45", Cocos2dxBind_cocos2d__BaseLight_set_scale_45);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scale_26", Cocos2dxBind_cocos2d__BaseLight_get_scale_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scale_46", Cocos2dxBind_cocos2d__BaseLight_set_scale_46);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position_49", Cocos2dxBind_cocos2d__BaseLight_set_position_49);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_normalized_position_29", Cocos2dxBind_cocos2d__BaseLight_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position_55", Cocos2dxBind_cocos2d__BaseLight_get_position_55);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_normalized_position_29", Cocos2dxBind_cocos2d__BaseLight_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position_50", Cocos2dxBind_cocos2d__BaseLight_set_position_50);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position_56", Cocos2dxBind_cocos2d__BaseLight_get_position_56);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position_x_28", Cocos2dxBind_cocos2d__BaseLight_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position_x_28", Cocos2dxBind_cocos2d__BaseLight_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position_y_28", Cocos2dxBind_cocos2d__BaseLight_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position_y_28", Cocos2dxBind_cocos2d__BaseLight_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position3_d_29", Cocos2dxBind_cocos2d__BaseLight_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position3_d_28", Cocos2dxBind_cocos2d__BaseLight_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_position_z_28", Cocos2dxBind_cocos2d__BaseLight_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_position_z_29", Cocos2dxBind_cocos2d__BaseLight_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_skew_x_28", Cocos2dxBind_cocos2d__BaseLight_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_skew_x_29", Cocos2dxBind_cocos2d__BaseLight_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_skew_y_28", Cocos2dxBind_cocos2d__BaseLight_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_skew_y_29", Cocos2dxBind_cocos2d__BaseLight_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_anchor_point_26", Cocos2dxBind_cocos2d__BaseLight_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_anchor_point_29", Cocos2dxBind_cocos2d__BaseLight_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__BaseLight_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_content_size_24", Cocos2dxBind_cocos2d__BaseLight_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_content_size_26", Cocos2dxBind_cocos2d__BaseLight_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_visible_27", Cocos2dxBind_cocos2d__BaseLight_set_visible_27);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_visible_29", Cocos2dxBind_cocos2d__BaseLight_is_visible_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_rotation_26", Cocos2dxBind_cocos2d__BaseLight_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_rotation_29", Cocos2dxBind_cocos2d__BaseLight_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_rotation3_d_29", Cocos2dxBind_cocos2d__BaseLight_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_rotation3_d_29", Cocos2dxBind_cocos2d__BaseLight_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_rotation_quat_29", Cocos2dxBind_cocos2d__BaseLight_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_rotation_quat_29", Cocos2dxBind_cocos2d__BaseLight_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__BaseLight_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__BaseLight_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__BaseLight_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__BaseLight_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__BaseLight_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__BaseLight_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__BaseLight_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__BaseLight_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "add_child_113", Cocos2dxBind_cocos2d__BaseLight_add_child_113);
            binder.bind_custom_method("Cocos2d", "BaseLight", "add_child_114", Cocos2dxBind_cocos2d__BaseLight_add_child_114);
            binder.bind_custom_method("Cocos2d", "BaseLight", "add_child_115", Cocos2dxBind_cocos2d__BaseLight_add_child_115);
            binder.bind_custom_method("Cocos2d", "BaseLight", "add_child_116", Cocos2dxBind_cocos2d__BaseLight_add_child_116);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_child_by_tag_29", Cocos2dxBind_cocos2d__BaseLight_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_child_by_name_29", Cocos2dxBind_cocos2d__BaseLight_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "enumerate_children_29", Cocos2dxBind_cocos2d__BaseLight_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_children_58", Cocos2dxBind_cocos2d__BaseLight_get_children_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_children_count_29", Cocos2dxBind_cocos2d__BaseLight_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_parent_29", Cocos2dxBind_cocos2d__BaseLight_set_parent_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_parent_57", Cocos2dxBind_cocos2d__BaseLight_get_parent_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_parent_58", Cocos2dxBind_cocos2d__BaseLight_get_parent_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_from_parent_29", Cocos2dxBind_cocos2d__BaseLight_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__BaseLight_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_child_24", Cocos2dxBind_cocos2d__BaseLight_remove_child_24);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__BaseLight_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_child_by_name_29", Cocos2dxBind_cocos2d__BaseLight_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_all_children_28", Cocos2dxBind_cocos2d__BaseLight_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__BaseLight_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "BaseLight", "reorder_child_26", Cocos2dxBind_cocos2d__BaseLight_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "sort_all_children_26", Cocos2dxBind_cocos2d__BaseLight_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_tag_29", Cocos2dxBind_cocos2d__BaseLight_get_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_tag_29", Cocos2dxBind_cocos2d__BaseLight_set_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_name_29", Cocos2dxBind_cocos2d__BaseLight_get_name_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_name_29", Cocos2dxBind_cocos2d__BaseLight_set_name_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_user_data_57", Cocos2dxBind_cocos2d__BaseLight_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_user_data_58", Cocos2dxBind_cocos2d__BaseLight_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_user_data_29", Cocos2dxBind_cocos2d__BaseLight_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_user_object_57", Cocos2dxBind_cocos2d__BaseLight_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_user_object_58", Cocos2dxBind_cocos2d__BaseLight_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_user_object_29", Cocos2dxBind_cocos2d__BaseLight_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_gl_program_29", Cocos2dxBind_cocos2d__BaseLight_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_gl_program_28", Cocos2dxBind_cocos2d__BaseLight_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_gl_program_state_29", Cocos2dxBind_cocos2d__BaseLight_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_gl_program_state_28", Cocos2dxBind_cocos2d__BaseLight_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_running_29", Cocos2dxBind_cocos2d__BaseLight_is_running_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__BaseLight_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__BaseLight_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "BaseLight", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__BaseLight_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "BaseLight", "cleanup_25", Cocos2dxBind_cocos2d__BaseLight_cleanup_25);
            binder.bind_custom_method("Cocos2d", "BaseLight", "draw_27", Cocos2dxBind_cocos2d__BaseLight_draw_27);
            binder.bind_custom_method("Cocos2d", "BaseLight", "draw_28", Cocos2dxBind_cocos2d__BaseLight_draw_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "visit_31", Cocos2dxBind_cocos2d__BaseLight_visit_31);
            binder.bind_custom_method("Cocos2d", "BaseLight", "visit_32", Cocos2dxBind_cocos2d__BaseLight_visit_32);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scene_29", Cocos2dxBind_cocos2d__BaseLight_get_scene_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_bounding_box_26", Cocos2dxBind_cocos2d__BaseLight_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__BaseLight_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__BaseLight_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_action_manager_29", Cocos2dxBind_cocos2d__BaseLight_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_action_manager_57", Cocos2dxBind_cocos2d__BaseLight_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_action_manager_58", Cocos2dxBind_cocos2d__BaseLight_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "run_action_28", Cocos2dxBind_cocos2d__BaseLight_run_action_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "stop_all_actions_29", Cocos2dxBind_cocos2d__BaseLight_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "stop_action_29", Cocos2dxBind_cocos2d__BaseLight_stop_action_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__BaseLight_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__BaseLight_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__BaseLight_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_action_by_tag_29", Cocos2dxBind_cocos2d__BaseLight_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__BaseLight_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_scheduler_29", Cocos2dxBind_cocos2d__BaseLight_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scheduler_57", Cocos2dxBind_cocos2d__BaseLight_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_scheduler_58", Cocos2dxBind_cocos2d__BaseLight_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_scheduled_58", Cocos2dxBind_cocos2d__BaseLight_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_update_29", Cocos2dxBind_cocos2d__BaseLight_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__BaseLight_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "unschedule_update_29", Cocos2dxBind_cocos2d__BaseLight_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_once_58", Cocos2dxBind_cocos2d__BaseLight_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_172", Cocos2dxBind_cocos2d__BaseLight_schedule_172);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_173", Cocos2dxBind_cocos2d__BaseLight_schedule_173);
            binder.bind_custom_method("Cocos2d", "BaseLight", "schedule_174", Cocos2dxBind_cocos2d__BaseLight_schedule_174);
            binder.bind_custom_method("Cocos2d", "BaseLight", "unschedule_58", Cocos2dxBind_cocos2d__BaseLight_unschedule_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__BaseLight_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "resume_29", Cocos2dxBind_cocos2d__BaseLight_resume_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "pause_29", Cocos2dxBind_cocos2d__BaseLight_pause_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_26", Cocos2dxBind_cocos2d__BaseLight_update_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_transform_28", Cocos2dxBind_cocos2d__BaseLight_update_transform_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__BaseLight_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__BaseLight_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_to_node_space_29", Cocos2dxBind_cocos2d__BaseLight_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_to_world_space_29", Cocos2dxBind_cocos2d__BaseLight_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__BaseLight_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__BaseLight_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__BaseLight_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__BaseLight_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_additional_transform_58", Cocos2dxBind_cocos2d__BaseLight_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_component_29", Cocos2dxBind_cocos2d__BaseLight_get_component_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "add_component_29", Cocos2dxBind_cocos2d__BaseLight_add_component_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_component_57", Cocos2dxBind_cocos2d__BaseLight_remove_component_57);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_component_58", Cocos2dxBind_cocos2d__BaseLight_remove_component_58);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_all_components_29", Cocos2dxBind_cocos2d__BaseLight_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_physics_body_29", Cocos2dxBind_cocos2d__BaseLight_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_physics_body_29", Cocos2dxBind_cocos2d__BaseLight_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__BaseLight_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__BaseLight_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__BaseLight_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_opacity_28", Cocos2dxBind_cocos2d__BaseLight_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__BaseLight_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_opacity_26", Cocos2dxBind_cocos2d__BaseLight_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__BaseLight_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__BaseLight_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__BaseLight_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_color_27", Cocos2dxBind_cocos2d__BaseLight_get_color_27);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_displayed_color_29", Cocos2dxBind_cocos2d__BaseLight_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_color_27", Cocos2dxBind_cocos2d__BaseLight_set_color_27);
            binder.bind_custom_method("Cocos2d", "BaseLight", "update_displayed_color_23", Cocos2dxBind_cocos2d__BaseLight_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__BaseLight_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__BaseLight_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__BaseLight_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "BaseLight", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__BaseLight_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__BaseLight_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__BaseLight_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__BaseLight_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__BaseLight_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_camera_mask_29", Cocos2dxBind_cocos2d__BaseLight_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "BaseLight", "set_camera_mask_22", Cocos2dxBind_cocos2d__BaseLight_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "BaseLight", "init_13", Cocos2dxBind_cocos2d__BaseLight_init_13);
            binder.bind_custom_method("Cocos2d", "BaseLight", "retain_176", Cocos2dxBind_cocos2d__BaseLight_retain_176);
            binder.bind_custom_method("Cocos2d", "BaseLight", "release_176", Cocos2dxBind_cocos2d__BaseLight_release_176);
            binder.bind_custom_method("Cocos2d", "BaseLight", "autorelease_176", Cocos2dxBind_cocos2d__BaseLight_autorelease_176);
            binder.bind_custom_method("Cocos2d", "BaseLight", "get_reference_count_176", Cocos2dxBind_cocos2d__BaseLight_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "DirectionLight", "create", Cocos2dxBind_cocos2d__DirectionLight_create);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_light_type", Cocos2dxBind_cocos2d__DirectionLight_get_light_type);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_direction", Cocos2dxBind_cocos2d__DirectionLight_set_direction);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_direction", Cocos2dxBind_cocos2d__DirectionLight_get_direction);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_direction_in_world", Cocos2dxBind_cocos2d__DirectionLight_get_direction_in_world);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_intensity_3", Cocos2dxBind_cocos2d__DirectionLight_get_intensity_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_intensity_3", Cocos2dxBind_cocos2d__DirectionLight_set_intensity_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_light_flag_3", Cocos2dxBind_cocos2d__DirectionLight_get_light_flag_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_light_flag_3", Cocos2dxBind_cocos2d__DirectionLight_set_light_flag_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_enabled_3", Cocos2dxBind_cocos2d__DirectionLight_set_enabled_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_enabled_3", Cocos2dxBind_cocos2d__DirectionLight_is_enabled_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "on_enter_3", Cocos2dxBind_cocos2d__DirectionLight_on_enter_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "on_exit_3", Cocos2dxBind_cocos2d__DirectionLight_on_exit_3);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_description_15", Cocos2dxBind_cocos2d__DirectionLight_get_description_15);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_local_z_order_29", Cocos2dxBind_cocos2d__DirectionLight_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_local_z_order_29", Cocos2dxBind_cocos2d__DirectionLight_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_global_z_order_27", Cocos2dxBind_cocos2d__DirectionLight_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_global_z_order_29", Cocos2dxBind_cocos2d__DirectionLight_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scale_x_23", Cocos2dxBind_cocos2d__DirectionLight_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scale_x_26", Cocos2dxBind_cocos2d__DirectionLight_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scale_y_23", Cocos2dxBind_cocos2d__DirectionLight_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scale_y_26", Cocos2dxBind_cocos2d__DirectionLight_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scale_z_29", Cocos2dxBind_cocos2d__DirectionLight_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scale_z_29", Cocos2dxBind_cocos2d__DirectionLight_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scale_45", Cocos2dxBind_cocos2d__DirectionLight_set_scale_45);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scale_26", Cocos2dxBind_cocos2d__DirectionLight_get_scale_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scale_46", Cocos2dxBind_cocos2d__DirectionLight_set_scale_46);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position_49", Cocos2dxBind_cocos2d__DirectionLight_set_position_49);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_normalized_position_29", Cocos2dxBind_cocos2d__DirectionLight_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position_55", Cocos2dxBind_cocos2d__DirectionLight_get_position_55);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_normalized_position_29", Cocos2dxBind_cocos2d__DirectionLight_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position_50", Cocos2dxBind_cocos2d__DirectionLight_set_position_50);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position_56", Cocos2dxBind_cocos2d__DirectionLight_get_position_56);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position_x_28", Cocos2dxBind_cocos2d__DirectionLight_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position_x_28", Cocos2dxBind_cocos2d__DirectionLight_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position_y_28", Cocos2dxBind_cocos2d__DirectionLight_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position_y_28", Cocos2dxBind_cocos2d__DirectionLight_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position3_d_29", Cocos2dxBind_cocos2d__DirectionLight_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position3_d_28", Cocos2dxBind_cocos2d__DirectionLight_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_position_z_28", Cocos2dxBind_cocos2d__DirectionLight_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_position_z_29", Cocos2dxBind_cocos2d__DirectionLight_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_skew_x_28", Cocos2dxBind_cocos2d__DirectionLight_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_skew_x_29", Cocos2dxBind_cocos2d__DirectionLight_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_skew_y_28", Cocos2dxBind_cocos2d__DirectionLight_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_skew_y_29", Cocos2dxBind_cocos2d__DirectionLight_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_anchor_point_26", Cocos2dxBind_cocos2d__DirectionLight_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_anchor_point_29", Cocos2dxBind_cocos2d__DirectionLight_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__DirectionLight_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_content_size_24", Cocos2dxBind_cocos2d__DirectionLight_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_content_size_26", Cocos2dxBind_cocos2d__DirectionLight_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_visible_27", Cocos2dxBind_cocos2d__DirectionLight_set_visible_27);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_visible_29", Cocos2dxBind_cocos2d__DirectionLight_is_visible_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_rotation_26", Cocos2dxBind_cocos2d__DirectionLight_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_rotation_29", Cocos2dxBind_cocos2d__DirectionLight_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_rotation3_d_29", Cocos2dxBind_cocos2d__DirectionLight_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_rotation3_d_29", Cocos2dxBind_cocos2d__DirectionLight_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_rotation_quat_29", Cocos2dxBind_cocos2d__DirectionLight_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_rotation_quat_29", Cocos2dxBind_cocos2d__DirectionLight_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__DirectionLight_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__DirectionLight_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__DirectionLight_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__DirectionLight_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__DirectionLight_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__DirectionLight_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__DirectionLight_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__DirectionLight_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "add_child_113", Cocos2dxBind_cocos2d__DirectionLight_add_child_113);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "add_child_114", Cocos2dxBind_cocos2d__DirectionLight_add_child_114);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "add_child_115", Cocos2dxBind_cocos2d__DirectionLight_add_child_115);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "add_child_116", Cocos2dxBind_cocos2d__DirectionLight_add_child_116);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_child_by_tag_29", Cocos2dxBind_cocos2d__DirectionLight_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_child_by_name_29", Cocos2dxBind_cocos2d__DirectionLight_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "enumerate_children_29", Cocos2dxBind_cocos2d__DirectionLight_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_children_58", Cocos2dxBind_cocos2d__DirectionLight_get_children_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_children_count_29", Cocos2dxBind_cocos2d__DirectionLight_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_parent_29", Cocos2dxBind_cocos2d__DirectionLight_set_parent_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_parent_57", Cocos2dxBind_cocos2d__DirectionLight_get_parent_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_parent_58", Cocos2dxBind_cocos2d__DirectionLight_get_parent_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_from_parent_29", Cocos2dxBind_cocos2d__DirectionLight_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__DirectionLight_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_child_24", Cocos2dxBind_cocos2d__DirectionLight_remove_child_24);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__DirectionLight_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_child_by_name_29", Cocos2dxBind_cocos2d__DirectionLight_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_all_children_28", Cocos2dxBind_cocos2d__DirectionLight_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__DirectionLight_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "reorder_child_26", Cocos2dxBind_cocos2d__DirectionLight_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "sort_all_children_26", Cocos2dxBind_cocos2d__DirectionLight_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_tag_29", Cocos2dxBind_cocos2d__DirectionLight_get_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_tag_29", Cocos2dxBind_cocos2d__DirectionLight_set_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_name_29", Cocos2dxBind_cocos2d__DirectionLight_get_name_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_name_29", Cocos2dxBind_cocos2d__DirectionLight_set_name_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_user_data_57", Cocos2dxBind_cocos2d__DirectionLight_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_user_data_58", Cocos2dxBind_cocos2d__DirectionLight_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_user_data_29", Cocos2dxBind_cocos2d__DirectionLight_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_user_object_57", Cocos2dxBind_cocos2d__DirectionLight_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_user_object_58", Cocos2dxBind_cocos2d__DirectionLight_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_user_object_29", Cocos2dxBind_cocos2d__DirectionLight_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_gl_program_29", Cocos2dxBind_cocos2d__DirectionLight_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_gl_program_28", Cocos2dxBind_cocos2d__DirectionLight_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_gl_program_state_29", Cocos2dxBind_cocos2d__DirectionLight_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_gl_program_state_28", Cocos2dxBind_cocos2d__DirectionLight_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_running_29", Cocos2dxBind_cocos2d__DirectionLight_is_running_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__DirectionLight_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__DirectionLight_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__DirectionLight_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "cleanup_25", Cocos2dxBind_cocos2d__DirectionLight_cleanup_25);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "draw_27", Cocos2dxBind_cocos2d__DirectionLight_draw_27);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "draw_28", Cocos2dxBind_cocos2d__DirectionLight_draw_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "visit_31", Cocos2dxBind_cocos2d__DirectionLight_visit_31);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "visit_32", Cocos2dxBind_cocos2d__DirectionLight_visit_32);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scene_29", Cocos2dxBind_cocos2d__DirectionLight_get_scene_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_bounding_box_26", Cocos2dxBind_cocos2d__DirectionLight_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__DirectionLight_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__DirectionLight_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_action_manager_29", Cocos2dxBind_cocos2d__DirectionLight_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_action_manager_57", Cocos2dxBind_cocos2d__DirectionLight_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_action_manager_58", Cocos2dxBind_cocos2d__DirectionLight_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "run_action_28", Cocos2dxBind_cocos2d__DirectionLight_run_action_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "stop_all_actions_29", Cocos2dxBind_cocos2d__DirectionLight_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "stop_action_29", Cocos2dxBind_cocos2d__DirectionLight_stop_action_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__DirectionLight_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__DirectionLight_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__DirectionLight_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_action_by_tag_29", Cocos2dxBind_cocos2d__DirectionLight_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__DirectionLight_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_scheduler_29", Cocos2dxBind_cocos2d__DirectionLight_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scheduler_57", Cocos2dxBind_cocos2d__DirectionLight_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_scheduler_58", Cocos2dxBind_cocos2d__DirectionLight_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_scheduled_58", Cocos2dxBind_cocos2d__DirectionLight_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_update_29", Cocos2dxBind_cocos2d__DirectionLight_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__DirectionLight_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "unschedule_update_29", Cocos2dxBind_cocos2d__DirectionLight_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_once_58", Cocos2dxBind_cocos2d__DirectionLight_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_172", Cocos2dxBind_cocos2d__DirectionLight_schedule_172);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_173", Cocos2dxBind_cocos2d__DirectionLight_schedule_173);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "schedule_174", Cocos2dxBind_cocos2d__DirectionLight_schedule_174);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "unschedule_58", Cocos2dxBind_cocos2d__DirectionLight_unschedule_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__DirectionLight_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "resume_29", Cocos2dxBind_cocos2d__DirectionLight_resume_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "pause_29", Cocos2dxBind_cocos2d__DirectionLight_pause_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_26", Cocos2dxBind_cocos2d__DirectionLight_update_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_transform_28", Cocos2dxBind_cocos2d__DirectionLight_update_transform_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__DirectionLight_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__DirectionLight_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_to_node_space_29", Cocos2dxBind_cocos2d__DirectionLight_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_to_world_space_29", Cocos2dxBind_cocos2d__DirectionLight_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__DirectionLight_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__DirectionLight_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__DirectionLight_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__DirectionLight_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_additional_transform_58", Cocos2dxBind_cocos2d__DirectionLight_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_component_29", Cocos2dxBind_cocos2d__DirectionLight_get_component_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "add_component_29", Cocos2dxBind_cocos2d__DirectionLight_add_component_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_component_57", Cocos2dxBind_cocos2d__DirectionLight_remove_component_57);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_component_58", Cocos2dxBind_cocos2d__DirectionLight_remove_component_58);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_all_components_29", Cocos2dxBind_cocos2d__DirectionLight_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_physics_body_29", Cocos2dxBind_cocos2d__DirectionLight_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_physics_body_29", Cocos2dxBind_cocos2d__DirectionLight_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__DirectionLight_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__DirectionLight_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__DirectionLight_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_opacity_28", Cocos2dxBind_cocos2d__DirectionLight_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__DirectionLight_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_opacity_26", Cocos2dxBind_cocos2d__DirectionLight_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__DirectionLight_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__DirectionLight_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__DirectionLight_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_color_27", Cocos2dxBind_cocos2d__DirectionLight_get_color_27);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_displayed_color_29", Cocos2dxBind_cocos2d__DirectionLight_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_color_27", Cocos2dxBind_cocos2d__DirectionLight_set_color_27);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "update_displayed_color_23", Cocos2dxBind_cocos2d__DirectionLight_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__DirectionLight_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__DirectionLight_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__DirectionLight_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__DirectionLight_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__DirectionLight_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__DirectionLight_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__DirectionLight_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__DirectionLight_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_camera_mask_29", Cocos2dxBind_cocos2d__DirectionLight_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "set_camera_mask_22", Cocos2dxBind_cocos2d__DirectionLight_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "init_13", Cocos2dxBind_cocos2d__DirectionLight_init_13);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "retain_176", Cocos2dxBind_cocos2d__DirectionLight_retain_176);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "release_176", Cocos2dxBind_cocos2d__DirectionLight_release_176);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "autorelease_176", Cocos2dxBind_cocos2d__DirectionLight_autorelease_176);
            binder.bind_custom_method("Cocos2d", "DirectionLight", "get_reference_count_176", Cocos2dxBind_cocos2d__DirectionLight_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "AmbientLight", "create", Cocos2dxBind_cocos2d__AmbientLight_create);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_light_type", Cocos2dxBind_cocos2d__AmbientLight_get_light_type);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_intensity_3", Cocos2dxBind_cocos2d__AmbientLight_get_intensity_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_intensity_3", Cocos2dxBind_cocos2d__AmbientLight_set_intensity_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_light_flag_3", Cocos2dxBind_cocos2d__AmbientLight_get_light_flag_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_light_flag_3", Cocos2dxBind_cocos2d__AmbientLight_set_light_flag_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_enabled_3", Cocos2dxBind_cocos2d__AmbientLight_set_enabled_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_enabled_3", Cocos2dxBind_cocos2d__AmbientLight_is_enabled_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "on_enter_3", Cocos2dxBind_cocos2d__AmbientLight_on_enter_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "on_exit_3", Cocos2dxBind_cocos2d__AmbientLight_on_exit_3);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_description_15", Cocos2dxBind_cocos2d__AmbientLight_get_description_15);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_local_z_order_29", Cocos2dxBind_cocos2d__AmbientLight_set_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_local_z_order_29", Cocos2dxBind_cocos2d__AmbientLight_get_local_z_order_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_global_z_order_27", Cocos2dxBind_cocos2d__AmbientLight_set_global_z_order_27);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_global_z_order_29", Cocos2dxBind_cocos2d__AmbientLight_get_global_z_order_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scale_x_23", Cocos2dxBind_cocos2d__AmbientLight_set_scale_x_23);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scale_x_26", Cocos2dxBind_cocos2d__AmbientLight_get_scale_x_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scale_y_23", Cocos2dxBind_cocos2d__AmbientLight_set_scale_y_23);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scale_y_26", Cocos2dxBind_cocos2d__AmbientLight_get_scale_y_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scale_z_29", Cocos2dxBind_cocos2d__AmbientLight_set_scale_z_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scale_z_29", Cocos2dxBind_cocos2d__AmbientLight_get_scale_z_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scale_45", Cocos2dxBind_cocos2d__AmbientLight_set_scale_45);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scale_26", Cocos2dxBind_cocos2d__AmbientLight_get_scale_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scale_46", Cocos2dxBind_cocos2d__AmbientLight_set_scale_46);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position_49", Cocos2dxBind_cocos2d__AmbientLight_set_position_49);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_normalized_position_29", Cocos2dxBind_cocos2d__AmbientLight_set_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position_55", Cocos2dxBind_cocos2d__AmbientLight_get_position_55);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_normalized_position_29", Cocos2dxBind_cocos2d__AmbientLight_get_normalized_position_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position_50", Cocos2dxBind_cocos2d__AmbientLight_set_position_50);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position_56", Cocos2dxBind_cocos2d__AmbientLight_get_position_56);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position_x_28", Cocos2dxBind_cocos2d__AmbientLight_set_position_x_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position_x_28", Cocos2dxBind_cocos2d__AmbientLight_get_position_x_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position_y_28", Cocos2dxBind_cocos2d__AmbientLight_set_position_y_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position_y_28", Cocos2dxBind_cocos2d__AmbientLight_get_position_y_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position3_d_29", Cocos2dxBind_cocos2d__AmbientLight_set_position3_d_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position3_d_28", Cocos2dxBind_cocos2d__AmbientLight_get_position3_d_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_position_z_28", Cocos2dxBind_cocos2d__AmbientLight_set_position_z_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_position_z_29", Cocos2dxBind_cocos2d__AmbientLight_get_position_z_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_skew_x_28", Cocos2dxBind_cocos2d__AmbientLight_set_skew_x_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_skew_x_29", Cocos2dxBind_cocos2d__AmbientLight_get_skew_x_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_skew_y_28", Cocos2dxBind_cocos2d__AmbientLight_set_skew_y_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_skew_y_29", Cocos2dxBind_cocos2d__AmbientLight_get_skew_y_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_anchor_point_26", Cocos2dxBind_cocos2d__AmbientLight_set_anchor_point_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_anchor_point_29", Cocos2dxBind_cocos2d__AmbientLight_get_anchor_point_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_anchor_point_in_points_29", Cocos2dxBind_cocos2d__AmbientLight_get_anchor_point_in_points_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_content_size_24", Cocos2dxBind_cocos2d__AmbientLight_set_content_size_24);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_content_size_26", Cocos2dxBind_cocos2d__AmbientLight_get_content_size_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_visible_27", Cocos2dxBind_cocos2d__AmbientLight_set_visible_27);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_visible_29", Cocos2dxBind_cocos2d__AmbientLight_is_visible_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_rotation_26", Cocos2dxBind_cocos2d__AmbientLight_set_rotation_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_rotation_29", Cocos2dxBind_cocos2d__AmbientLight_get_rotation_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_rotation3_d_29", Cocos2dxBind_cocos2d__AmbientLight_set_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_rotation3_d_29", Cocos2dxBind_cocos2d__AmbientLight_get_rotation3_d_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_rotation_quat_29", Cocos2dxBind_cocos2d__AmbientLight_set_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_rotation_quat_29", Cocos2dxBind_cocos2d__AmbientLight_get_rotation_quat_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_rotation_skew_x_28", Cocos2dxBind_cocos2d__AmbientLight_set_rotation_skew_x_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_rotation_skew_x_29", Cocos2dxBind_cocos2d__AmbientLight_get_rotation_skew_x_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_rotation_skew_y_28", Cocos2dxBind_cocos2d__AmbientLight_set_rotation_skew_y_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_rotation_skew_y_29", Cocos2dxBind_cocos2d__AmbientLight_get_rotation_skew_y_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_order_of_arrival_29", Cocos2dxBind_cocos2d__AmbientLight_set_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_order_of_arrival_29", Cocos2dxBind_cocos2d__AmbientLight_get_order_of_arrival_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "ignore_anchor_point_for_position_28", Cocos2dxBind_cocos2d__AmbientLight_ignore_anchor_point_for_position_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_ignore_anchor_point_for_position_29", Cocos2dxBind_cocos2d__AmbientLight_is_ignore_anchor_point_for_position_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "add_child_113", Cocos2dxBind_cocos2d__AmbientLight_add_child_113);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "add_child_114", Cocos2dxBind_cocos2d__AmbientLight_add_child_114);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "add_child_115", Cocos2dxBind_cocos2d__AmbientLight_add_child_115);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "add_child_116", Cocos2dxBind_cocos2d__AmbientLight_add_child_116);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_child_by_tag_29", Cocos2dxBind_cocos2d__AmbientLight_get_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_child_by_name_29", Cocos2dxBind_cocos2d__AmbientLight_get_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "enumerate_children_29", Cocos2dxBind_cocos2d__AmbientLight_enumerate_children_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_children_58", Cocos2dxBind_cocos2d__AmbientLight_get_children_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_children_count_29", Cocos2dxBind_cocos2d__AmbientLight_get_children_count_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_parent_29", Cocos2dxBind_cocos2d__AmbientLight_set_parent_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_parent_57", Cocos2dxBind_cocos2d__AmbientLight_get_parent_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_parent_58", Cocos2dxBind_cocos2d__AmbientLight_get_parent_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_from_parent_29", Cocos2dxBind_cocos2d__AmbientLight_remove_from_parent_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_from_parent_and_cleanup_29", Cocos2dxBind_cocos2d__AmbientLight_remove_from_parent_and_cleanup_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_child_24", Cocos2dxBind_cocos2d__AmbientLight_remove_child_24);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_child_by_tag_29", Cocos2dxBind_cocos2d__AmbientLight_remove_child_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_child_by_name_29", Cocos2dxBind_cocos2d__AmbientLight_remove_child_by_name_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_all_children_28", Cocos2dxBind_cocos2d__AmbientLight_remove_all_children_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_all_children_with_cleanup_24", Cocos2dxBind_cocos2d__AmbientLight_remove_all_children_with_cleanup_24);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "reorder_child_26", Cocos2dxBind_cocos2d__AmbientLight_reorder_child_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "sort_all_children_26", Cocos2dxBind_cocos2d__AmbientLight_sort_all_children_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_tag_29", Cocos2dxBind_cocos2d__AmbientLight_get_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_tag_29", Cocos2dxBind_cocos2d__AmbientLight_set_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_name_29", Cocos2dxBind_cocos2d__AmbientLight_get_name_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_name_29", Cocos2dxBind_cocos2d__AmbientLight_set_name_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_user_data_57", Cocos2dxBind_cocos2d__AmbientLight_get_user_data_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_user_data_58", Cocos2dxBind_cocos2d__AmbientLight_get_user_data_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_user_data_29", Cocos2dxBind_cocos2d__AmbientLight_set_user_data_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_user_object_57", Cocos2dxBind_cocos2d__AmbientLight_get_user_object_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_user_object_58", Cocos2dxBind_cocos2d__AmbientLight_get_user_object_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_user_object_29", Cocos2dxBind_cocos2d__AmbientLight_set_user_object_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_gl_program_29", Cocos2dxBind_cocos2d__AmbientLight_get_gl_program_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_gl_program_28", Cocos2dxBind_cocos2d__AmbientLight_set_gl_program_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_gl_program_state_29", Cocos2dxBind_cocos2d__AmbientLight_get_gl_program_state_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_gl_program_state_28", Cocos2dxBind_cocos2d__AmbientLight_set_gl_program_state_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_running_29", Cocos2dxBind_cocos2d__AmbientLight_is_running_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_update_with_priority_lua_29", Cocos2dxBind_cocos2d__AmbientLight_schedule_update_with_priority_lua_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "on_enter_transition_did_finish_24", Cocos2dxBind_cocos2d__AmbientLight_on_enter_transition_did_finish_24);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "on_exit_transition_did_start_24", Cocos2dxBind_cocos2d__AmbientLight_on_exit_transition_did_start_24);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "cleanup_25", Cocos2dxBind_cocos2d__AmbientLight_cleanup_25);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "draw_27", Cocos2dxBind_cocos2d__AmbientLight_draw_27);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "draw_28", Cocos2dxBind_cocos2d__AmbientLight_draw_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "visit_31", Cocos2dxBind_cocos2d__AmbientLight_visit_31);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "visit_32", Cocos2dxBind_cocos2d__AmbientLight_visit_32);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scene_29", Cocos2dxBind_cocos2d__AmbientLight_get_scene_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_bounding_box_26", Cocos2dxBind_cocos2d__AmbientLight_get_bounding_box_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_event_dispatcher_29", Cocos2dxBind_cocos2d__AmbientLight_set_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_event_dispatcher_29", Cocos2dxBind_cocos2d__AmbientLight_get_event_dispatcher_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_action_manager_29", Cocos2dxBind_cocos2d__AmbientLight_set_action_manager_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_action_manager_57", Cocos2dxBind_cocos2d__AmbientLight_get_action_manager_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_action_manager_58", Cocos2dxBind_cocos2d__AmbientLight_get_action_manager_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "run_action_28", Cocos2dxBind_cocos2d__AmbientLight_run_action_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "stop_all_actions_29", Cocos2dxBind_cocos2d__AmbientLight_stop_all_actions_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "stop_action_29", Cocos2dxBind_cocos2d__AmbientLight_stop_action_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "stop_action_by_tag_29", Cocos2dxBind_cocos2d__AmbientLight_stop_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "stop_all_actions_by_tag_29", Cocos2dxBind_cocos2d__AmbientLight_stop_all_actions_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "stop_actions_by_flags_29", Cocos2dxBind_cocos2d__AmbientLight_stop_actions_by_flags_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_action_by_tag_29", Cocos2dxBind_cocos2d__AmbientLight_get_action_by_tag_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_number_of_running_actions_29", Cocos2dxBind_cocos2d__AmbientLight_get_number_of_running_actions_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_scheduler_29", Cocos2dxBind_cocos2d__AmbientLight_set_scheduler_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scheduler_57", Cocos2dxBind_cocos2d__AmbientLight_get_scheduler_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_scheduler_58", Cocos2dxBind_cocos2d__AmbientLight_get_scheduler_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_scheduled_58", Cocos2dxBind_cocos2d__AmbientLight_is_scheduled_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_update_29", Cocos2dxBind_cocos2d__AmbientLight_schedule_update_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_update_with_priority_29", Cocos2dxBind_cocos2d__AmbientLight_schedule_update_with_priority_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "unschedule_update_29", Cocos2dxBind_cocos2d__AmbientLight_unschedule_update_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_once_58", Cocos2dxBind_cocos2d__AmbientLight_schedule_once_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_172", Cocos2dxBind_cocos2d__AmbientLight_schedule_172);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_173", Cocos2dxBind_cocos2d__AmbientLight_schedule_173);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "schedule_174", Cocos2dxBind_cocos2d__AmbientLight_schedule_174);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "unschedule_58", Cocos2dxBind_cocos2d__AmbientLight_unschedule_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "unschedule_all_callbacks_29", Cocos2dxBind_cocos2d__AmbientLight_unschedule_all_callbacks_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "resume_29", Cocos2dxBind_cocos2d__AmbientLight_resume_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "pause_29", Cocos2dxBind_cocos2d__AmbientLight_pause_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_26", Cocos2dxBind_cocos2d__AmbientLight_update_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_transform_28", Cocos2dxBind_cocos2d__AmbientLight_update_transform_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_parent_transform_57", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_transform_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_parent_affine_transform_57", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_affine_transform_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_parent_transform_58", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_transform_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_parent_affine_transform_58", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_affine_transform_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_node_to_parent_transform_29", Cocos2dxBind_cocos2d__AmbientLight_set_node_to_parent_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_parent_to_node_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_parent_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_parent_to_node_affine_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_parent_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_world_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_world_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_node_to_world_affine_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_node_to_world_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_world_to_node_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_world_to_node_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_world_to_node_affine_transform_29", Cocos2dxBind_cocos2d__AmbientLight_get_world_to_node_affine_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_to_node_space_29", Cocos2dxBind_cocos2d__AmbientLight_convert_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_to_world_space_29", Cocos2dxBind_cocos2d__AmbientLight_convert_to_world_space_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_to_node_space_ar_29", Cocos2dxBind_cocos2d__AmbientLight_convert_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_to_world_space_ar_29", Cocos2dxBind_cocos2d__AmbientLight_convert_to_world_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_touch_to_node_space_29", Cocos2dxBind_cocos2d__AmbientLight_convert_touch_to_node_space_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "convert_touch_to_node_space_ar_29", Cocos2dxBind_cocos2d__AmbientLight_convert_touch_to_node_space_ar_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_additional_transform_58", Cocos2dxBind_cocos2d__AmbientLight_set_additional_transform_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_component_29", Cocos2dxBind_cocos2d__AmbientLight_get_component_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "add_component_29", Cocos2dxBind_cocos2d__AmbientLight_add_component_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_component_57", Cocos2dxBind_cocos2d__AmbientLight_remove_component_57);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_component_58", Cocos2dxBind_cocos2d__AmbientLight_remove_component_58);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_all_components_29", Cocos2dxBind_cocos2d__AmbientLight_remove_all_components_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_physics_body_29", Cocos2dxBind_cocos2d__AmbientLight_set_physics_body_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_physics_body_29", Cocos2dxBind_cocos2d__AmbientLight_get_physics_body_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "remove_from_physics_world_29", Cocos2dxBind_cocos2d__AmbientLight_remove_from_physics_world_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_transform_from_physics_29", Cocos2dxBind_cocos2d__AmbientLight_update_transform_from_physics_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_physics_body_transform_29", Cocos2dxBind_cocos2d__AmbientLight_update_physics_body_transform_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_opacity_28", Cocos2dxBind_cocos2d__AmbientLight_get_opacity_28);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_displayed_opacity_29", Cocos2dxBind_cocos2d__AmbientLight_get_displayed_opacity_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_opacity_26", Cocos2dxBind_cocos2d__AmbientLight_set_opacity_26);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_displayed_opacity_23", Cocos2dxBind_cocos2d__AmbientLight_update_displayed_opacity_23);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__AmbientLight_is_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_cascade_opacity_enabled_29", Cocos2dxBind_cocos2d__AmbientLight_set_cascade_opacity_enabled_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_color_27", Cocos2dxBind_cocos2d__AmbientLight_get_color_27);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_displayed_color_29", Cocos2dxBind_cocos2d__AmbientLight_get_displayed_color_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_color_27", Cocos2dxBind_cocos2d__AmbientLight_set_color_27);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "update_displayed_color_23", Cocos2dxBind_cocos2d__AmbientLight_update_displayed_color_23);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_cascade_color_enabled_29", Cocos2dxBind_cocos2d__AmbientLight_is_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_cascade_color_enabled_29", Cocos2dxBind_cocos2d__AmbientLight_set_cascade_color_enabled_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__AmbientLight_set_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "is_opacity_modify_rgb_21", Cocos2dxBind_cocos2d__AmbientLight_is_opacity_modify_rgb_21);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_on_enter_callback_29", Cocos2dxBind_cocos2d__AmbientLight_set_on_enter_callback_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_on_exit_callback_29", Cocos2dxBind_cocos2d__AmbientLight_set_on_exit_callback_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "seton_enter_transition_did_finish_callback_29", Cocos2dxBind_cocos2d__AmbientLight_seton_enter_transition_did_finish_callback_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "seton_exit_transition_did_start_callback_29", Cocos2dxBind_cocos2d__AmbientLight_seton_exit_transition_did_start_callback_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_camera_mask_29", Cocos2dxBind_cocos2d__AmbientLight_get_camera_mask_29);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "set_camera_mask_22", Cocos2dxBind_cocos2d__AmbientLight_set_camera_mask_22);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "init_13", Cocos2dxBind_cocos2d__AmbientLight_init_13);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "retain_176", Cocos2dxBind_cocos2d__AmbientLight_retain_176);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "release_176", Cocos2dxBind_cocos2d__AmbientLight_release_176);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "autorelease_176", Cocos2dxBind_cocos2d__AmbientLight_autorelease_176);
            binder.bind_custom_method("Cocos2d", "AmbientLight", "get_reference_count_176", Cocos2dxBind_cocos2d__AmbientLight_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "TextureCache", "get_description", Cocos2dxBind_cocos2d__TextureCache_get_description);
            binder.bind_custom_method("Cocos2d", "TextureCache", "add_image_1", Cocos2dxBind_cocos2d__TextureCache_add_image_1);
            binder.bind_custom_method("Cocos2d", "TextureCache", "add_image_async", Cocos2dxBind_cocos2d__TextureCache_add_image_async);
            binder.bind_custom_method("Cocos2d", "TextureCache", "unbind_image_async", Cocos2dxBind_cocos2d__TextureCache_unbind_image_async);
            binder.bind_custom_method("Cocos2d", "TextureCache", "unbind_all_image_async", Cocos2dxBind_cocos2d__TextureCache_unbind_all_image_async);
            binder.bind_custom_method("Cocos2d", "TextureCache", "add_image_2", Cocos2dxBind_cocos2d__TextureCache_add_image_2);
            binder.bind_custom_method("Cocos2d", "TextureCache", "get_texture_for_key", Cocos2dxBind_cocos2d__TextureCache_get_texture_for_key);
            binder.bind_custom_method("Cocos2d", "TextureCache", "reload_texture", Cocos2dxBind_cocos2d__TextureCache_reload_texture);
            binder.bind_custom_method("Cocos2d", "TextureCache", "remove_all_textures", Cocos2dxBind_cocos2d__TextureCache_remove_all_textures);
            binder.bind_custom_method("Cocos2d", "TextureCache", "remove_unused_textures", Cocos2dxBind_cocos2d__TextureCache_remove_unused_textures);
            binder.bind_custom_method("Cocos2d", "TextureCache", "remove_texture", Cocos2dxBind_cocos2d__TextureCache_remove_texture);
            binder.bind_custom_method("Cocos2d", "TextureCache", "remove_texture_for_key", Cocos2dxBind_cocos2d__TextureCache_remove_texture_for_key);
            binder.bind_custom_method("Cocos2d", "TextureCache", "get_cached_texture_info", Cocos2dxBind_cocos2d__TextureCache_get_cached_texture_info);
            binder.bind_custom_method("Cocos2d", "TextureCache", "wait_for_quit", Cocos2dxBind_cocos2d__TextureCache_wait_for_quit);
            binder.bind_custom_method("Cocos2d", "TextureCache", "get_texture_file_path", Cocos2dxBind_cocos2d__TextureCache_get_texture_file_path);
            binder.bind_custom_method("Cocos2d", "TextureCache", "retain_176", Cocos2dxBind_cocos2d__TextureCache_retain_176);
            binder.bind_custom_method("Cocos2d", "TextureCache", "release_176", Cocos2dxBind_cocos2d__TextureCache_release_176);
            binder.bind_custom_method("Cocos2d", "TextureCache", "autorelease_176", Cocos2dxBind_cocos2d__TextureCache_autorelease_176);
            binder.bind_custom_method("Cocos2d", "TextureCache", "get_reference_count_176", Cocos2dxBind_cocos2d__TextureCache_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_id=", Cocos2dxBind_cocos2d__TextureCache_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_id", Cocos2dxBind_cocos2d__TextureCache_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_lua_id=", Cocos2dxBind_cocos2d__TextureCache_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_lua_id", Cocos2dxBind_cocos2d__TextureCache_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_script_object=", Cocos2dxBind_cocos2d__TextureCache_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "TextureCache", "_script_object", Cocos2dxBind_cocos2d__TextureCache_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShape_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShape_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShape_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShape_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShape_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShape_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShape_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShape_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShape_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShape_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShape_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShape_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShape_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShape_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShape_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShape_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShape_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShape_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShape_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "calculate_default_moment_5", Cocos2dxBind_cocos2d__PhysicsShape_calculate_default_moment_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_offset_5", Cocos2dxBind_cocos2d__PhysicsShape_get_offset_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShape_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShape_contains_point_8);
            binder.bind_static_method("Cocos2d", "PhysicsShape", "get_polyon_center_8", Cocos2dxBind_cocos2d__PhysicsShape_get_polyon_center_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShape_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShape_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShape_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "retain_176", Cocos2dxBind_cocos2d__PhysicsShape_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "release_176", Cocos2dxBind_cocos2d__PhysicsShape_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShape_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShape_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_id=", Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_id", Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_lua_id=", Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_lua_id", Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_script_object=", Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "_script_object", Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__script_object);
            binder.bind_static_method("Cocos2d", "PhysicsShapeCircle", "create", Cocos2dxBind_cocos2d__PhysicsShapeCircle_create);
            binder.bind_static_method("Cocos2d", "PhysicsShapeCircle", "calculate_area", Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_area);
            binder.bind_static_method("Cocos2d", "PhysicsShapeCircle", "calculate_moment", Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_moment);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "calculate_default_moment", Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_default_moment);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_radius", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_radius);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_offset", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeCircle_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeCircle_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeCircle_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapePolygon", "create", Cocos2dxBind_cocos2d__PhysicsShapePolygon_create);
            binder.bind_static_method("Cocos2d", "PhysicsShapePolygon", "calculate_area_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_area_2);
            binder.bind_static_method("Cocos2d", "PhysicsShapePolygon", "calculate_moment_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_moment_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "calculate_default_moment_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_default_moment_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_point_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_point_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_points_count_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_points_count_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_offset_5", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_offset_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapePolygon_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "release_176", Cocos2dxBind_cocos2d__PhysicsShapePolygon_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapePolygon_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapeBox", "create", Cocos2dxBind_cocos2d__PhysicsShapeBox_create);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_size", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_size);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_offset", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "calculate_default_moment_2", Cocos2dxBind_cocos2d__PhysicsShapeBox_calculate_default_moment_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_point_2", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_point_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_points_count_2", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_points_count_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeBox_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeBox_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeBox_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeBox_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapeEdgeSegment", "create", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_create);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_point_a", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_point_a);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_point_b", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_point_b);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_center", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_center);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "calculate_default_moment_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_calculate_default_moment_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_offset_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_offset_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapeEdgePolygon", "create", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_create);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_points_count_2", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_points_count_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "calculate_default_moment_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_calculate_default_moment_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_offset_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_offset_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapeEdgeBox", "create", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_create);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_offset", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_center_2", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_center_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_points_count_2", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_points_count_2);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "calculate_default_moment_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_calculate_default_moment_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsShapeEdgeChain", "create", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_create);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_center", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_center);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_points_count", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_points_count);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_body_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_body_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_type_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_type_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_area_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_area_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_moment_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_moment_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_tag_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_tag_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_mass_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_mass_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_density_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_density_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_restitution_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_restitution_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_friction_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_friction_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_material_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_material_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "is_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_is_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_sensor_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_sensor_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "calculate_default_moment_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_calculate_default_moment_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_offset_5", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_offset_5);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "contains_point_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_contains_point_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_category_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_category_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_contact_test_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_contact_test_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_collision_bitmask_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_collision_bitmask_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "set_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_set_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_group_8", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_group_8);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "retain_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "release_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsShapeEdgeChain_get_reference_count_176);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_1", Cocos2dxBind_cocos2d__PhysicsBody_create_1);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_2", Cocos2dxBind_cocos2d__PhysicsBody_create_2);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_3", Cocos2dxBind_cocos2d__PhysicsBody_create_3);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_circle", Cocos2dxBind_cocos2d__PhysicsBody_create_circle);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_box", Cocos2dxBind_cocos2d__PhysicsBody_create_box);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_polygon", Cocos2dxBind_cocos2d__PhysicsBody_create_polygon);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_edge_segment", Cocos2dxBind_cocos2d__PhysicsBody_create_edge_segment);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_edge_box", Cocos2dxBind_cocos2d__PhysicsBody_create_edge_box);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_edge_polygon", Cocos2dxBind_cocos2d__PhysicsBody_create_edge_polygon);
            binder.bind_static_method("Cocos2d", "PhysicsBody", "create_edge_chain", Cocos2dxBind_cocos2d__PhysicsBody_create_edge_chain);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "add_shape", Cocos2dxBind_cocos2d__PhysicsBody_add_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "remove_shape_1", Cocos2dxBind_cocos2d__PhysicsBody_remove_shape_1);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "remove_shape_2", Cocos2dxBind_cocos2d__PhysicsBody_remove_shape_2);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "remove_all_shapes", Cocos2dxBind_cocos2d__PhysicsBody_remove_all_shapes);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_shapes", Cocos2dxBind_cocos2d__PhysicsBody_get_shapes);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_first_shape", Cocos2dxBind_cocos2d__PhysicsBody_get_first_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_shape", Cocos2dxBind_cocos2d__PhysicsBody_get_shape);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "apply_force_1", Cocos2dxBind_cocos2d__PhysicsBody_apply_force_1);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "apply_force_2", Cocos2dxBind_cocos2d__PhysicsBody_apply_force_2);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "reset_forces", Cocos2dxBind_cocos2d__PhysicsBody_reset_forces);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "apply_impulse_1", Cocos2dxBind_cocos2d__PhysicsBody_apply_impulse_1);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "apply_impulse_2", Cocos2dxBind_cocos2d__PhysicsBody_apply_impulse_2);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "apply_torque", Cocos2dxBind_cocos2d__PhysicsBody_apply_torque);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_velocity", Cocos2dxBind_cocos2d__PhysicsBody_set_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_velocity", Cocos2dxBind_cocos2d__PhysicsBody_get_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_angular_velocity", Cocos2dxBind_cocos2d__PhysicsBody_set_angular_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_velocity_at_local_point", Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_at_local_point);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_velocity_at_world_point", Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_at_world_point);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_angular_velocity", Cocos2dxBind_cocos2d__PhysicsBody_get_angular_velocity);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_velocity_limit", Cocos2dxBind_cocos2d__PhysicsBody_set_velocity_limit);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_velocity_limit", Cocos2dxBind_cocos2d__PhysicsBody_get_velocity_limit);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_angular_velocity_limit", Cocos2dxBind_cocos2d__PhysicsBody_set_angular_velocity_limit);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_angular_velocity_limit", Cocos2dxBind_cocos2d__PhysicsBody_get_angular_velocity_limit);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "remove_from_world", Cocos2dxBind_cocos2d__PhysicsBody_remove_from_world);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_world", Cocos2dxBind_cocos2d__PhysicsBody_get_world);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_joints", Cocos2dxBind_cocos2d__PhysicsBody_get_joints);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_node", Cocos2dxBind_cocos2d__PhysicsBody_get_node);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_category_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_set_category_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_contact_test_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_set_contact_test_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_collision_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_set_collision_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_category_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_get_category_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_contact_test_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_get_contact_test_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_collision_bitmask", Cocos2dxBind_cocos2d__PhysicsBody_get_collision_bitmask);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_group", Cocos2dxBind_cocos2d__PhysicsBody_set_group);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_group", Cocos2dxBind_cocos2d__PhysicsBody_get_group);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_position", Cocos2dxBind_cocos2d__PhysicsBody_get_position);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_rotation", Cocos2dxBind_cocos2d__PhysicsBody_get_rotation);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_position_offset", Cocos2dxBind_cocos2d__PhysicsBody_set_position_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_position_offset", Cocos2dxBind_cocos2d__PhysicsBody_get_position_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_rotation_offset", Cocos2dxBind_cocos2d__PhysicsBody_set_rotation_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_rotation_offset", Cocos2dxBind_cocos2d__PhysicsBody_get_rotation_offset);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "is_dynamic", Cocos2dxBind_cocos2d__PhysicsBody_is_dynamic);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_dynamic", Cocos2dxBind_cocos2d__PhysicsBody_set_dynamic);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_mass", Cocos2dxBind_cocos2d__PhysicsBody_set_mass);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_mass", Cocos2dxBind_cocos2d__PhysicsBody_get_mass);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "add_mass", Cocos2dxBind_cocos2d__PhysicsBody_add_mass);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_moment", Cocos2dxBind_cocos2d__PhysicsBody_set_moment);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_moment", Cocos2dxBind_cocos2d__PhysicsBody_get_moment);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "add_moment", Cocos2dxBind_cocos2d__PhysicsBody_add_moment);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_linear_damping", Cocos2dxBind_cocos2d__PhysicsBody_get_linear_damping);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_linear_damping", Cocos2dxBind_cocos2d__PhysicsBody_set_linear_damping);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_angular_damping", Cocos2dxBind_cocos2d__PhysicsBody_get_angular_damping);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_angular_damping", Cocos2dxBind_cocos2d__PhysicsBody_set_angular_damping);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "is_resting", Cocos2dxBind_cocos2d__PhysicsBody_is_resting);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_resting", Cocos2dxBind_cocos2d__PhysicsBody_set_resting);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "is_enabled", Cocos2dxBind_cocos2d__PhysicsBody_is_enabled);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_enable", Cocos2dxBind_cocos2d__PhysicsBody_set_enable);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "is_rotation_enabled", Cocos2dxBind_cocos2d__PhysicsBody_is_rotation_enabled);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_rotation_enable", Cocos2dxBind_cocos2d__PhysicsBody_set_rotation_enable);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "is_gravity_enabled", Cocos2dxBind_cocos2d__PhysicsBody_is_gravity_enabled);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_gravity_enable", Cocos2dxBind_cocos2d__PhysicsBody_set_gravity_enable);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_tag", Cocos2dxBind_cocos2d__PhysicsBody_get_tag);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "set_tag", Cocos2dxBind_cocos2d__PhysicsBody_set_tag);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "world2_local", Cocos2dxBind_cocos2d__PhysicsBody_world2_local);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "local2_world", Cocos2dxBind_cocos2d__PhysicsBody_local2_world);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_cp_body", Cocos2dxBind_cocos2d__PhysicsBody_get_cp_body);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "retain_176", Cocos2dxBind_cocos2d__PhysicsBody_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "release_176", Cocos2dxBind_cocos2d__PhysicsBody_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsBody_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsBody_get_reference_count_176);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_id=", Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__id);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_id", Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__id);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_lua_id=", Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__lua_id);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_lua_id", Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__lua_id);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_script_object=", Cocos2dxBind_cocos2d__PhysicsBody_accessor_set__script_object);
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "_script_object", Cocos2dxBind_cocos2d__PhysicsBody_accessor_get__script_object);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_shape_a", Cocos2dxBind_cocos2d__PhysicsContact_get_shape_a);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_shape_b", Cocos2dxBind_cocos2d__PhysicsContact_get_shape_b);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_contact_data", Cocos2dxBind_cocos2d__PhysicsContact_get_contact_data);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_pre_contact_data", Cocos2dxBind_cocos2d__PhysicsContact_get_pre_contact_data);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_data", Cocos2dxBind_cocos2d__PhysicsContact_get_data);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "set_data", Cocos2dxBind_cocos2d__PhysicsContact_set_data);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_event_code", Cocos2dxBind_cocos2d__PhysicsContact_get_event_code);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "set_user_data_2", Cocos2dxBind_cocos2d__PhysicsContact_set_user_data_2);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_user_data_2", Cocos2dxBind_cocos2d__PhysicsContact_get_user_data_2);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_event_name_2", Cocos2dxBind_cocos2d__PhysicsContact_get_event_name_2);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_type_5", Cocos2dxBind_cocos2d__PhysicsContact_get_type_5);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "stop_propagation_5", Cocos2dxBind_cocos2d__PhysicsContact_stop_propagation_5);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "is_stopped_5", Cocos2dxBind_cocos2d__PhysicsContact_is_stopped_5);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_current_target_5", Cocos2dxBind_cocos2d__PhysicsContact_get_current_target_5);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "retain_176", Cocos2dxBind_cocos2d__PhysicsContact_retain_176);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "release_176", Cocos2dxBind_cocos2d__PhysicsContact_release_176);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "autorelease_176", Cocos2dxBind_cocos2d__PhysicsContact_autorelease_176);
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "get_reference_count_176", Cocos2dxBind_cocos2d__PhysicsContact_get_reference_count_176);

          }

    }
}
