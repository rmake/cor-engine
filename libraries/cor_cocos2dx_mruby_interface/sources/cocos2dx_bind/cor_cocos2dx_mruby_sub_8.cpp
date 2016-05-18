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
        
        float Cocos2dxBind_cocos2d__BaseLight_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__BaseLight_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__BaseLight_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__BaseLight_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__BaseLight_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__BaseLight_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BaseLight_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BaseLight_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__BaseLight_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__BaseLight_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__BaseLight_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__BaseLight_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__BaseLight_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__BaseLight_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__BaseLight_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__BaseLight_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__BaseLight_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__BaseLight_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__BaseLight_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__BaseLight_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__BaseLight_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__BaseLight_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__BaseLight_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__BaseLight_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__BaseLight_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__BaseLight_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__BaseLight_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__BaseLight_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__BaseLight_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__BaseLight_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__BaseLight_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__BaseLight_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__BaseLight_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__BaseLight_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__BaseLight_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__BaseLight_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__BaseLight_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__BaseLight_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__BaseLight_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__BaseLight_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__BaseLight_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__BaseLight_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__BaseLight_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__BaseLight_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__BaseLight_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__BaseLight_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__BaseLight_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__BaseLight_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__BaseLight_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__BaseLight_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__BaseLight_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__BaseLight_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__BaseLight_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__BaseLight_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__BaseLight_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__BaseLight_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__BaseLight_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__BaseLight_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__BaseLight_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__BaseLight_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__BaseLight_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__BaseLight_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__BaseLight_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__BaseLight_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__BaseLight_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__BaseLight_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__BaseLight_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__BaseLight_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__BaseLight_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__BaseLight_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__BaseLight_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__BaseLight_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__BaseLight_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> Cocos2dxBind_cocos2d__DirectionLight_create(cocos2d::Vec3 a0, cocos2d::Color3B a1)
        {

            return cocos2d::DirectionLight::create(a0, a1);
        }

        cocos2d::LightType Cocos2dxBind_cocos2d__DirectionLight_get_light_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getLightType();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_direction(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec3 a0)
        {

            c->setDirection(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DirectionLight_get_direction(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getDirection();
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DirectionLight_get_direction_in_world(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getDirectionInWorld();
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getIntensity();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setIntensity(a0);
        }

        cocos2d::LightFlag Cocos2dxBind_cocos2d__DirectionLight_get_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getLightFlag();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->setLightFlag((cocos2d::LightFlag)a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_on_enter_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_on_exit_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->onExit();
        }

        std::string Cocos2dxBind_cocos2d__DirectionLight_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__DirectionLight_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DirectionLight_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__DirectionLight_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__DirectionLight_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__DirectionLight_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__DirectionLight_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__DirectionLight_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DirectionLight_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DirectionLight_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__DirectionLight_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__DirectionLight_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__DirectionLight_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__DirectionLight_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__DirectionLight_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__DirectionLight_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__DirectionLight_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__DirectionLight_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DirectionLight_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__DirectionLight_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__DirectionLight_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__DirectionLight_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__DirectionLight_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__DirectionLight_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__DirectionLight_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__DirectionLight_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__DirectionLight_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__DirectionLight_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__DirectionLight_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__DirectionLight_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__DirectionLight_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__DirectionLight_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__DirectionLight_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__DirectionLight_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DirectionLight_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DirectionLight_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DirectionLight_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DirectionLight_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DirectionLight_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__DirectionLight_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__DirectionLight_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__DirectionLight_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__DirectionLight_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__DirectionLight_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__DirectionLight_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__DirectionLight_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__DirectionLight_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__DirectionLight_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__DirectionLight_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__DirectionLight_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__DirectionLight_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__DirectionLight_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__DirectionLight_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__DirectionLight_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__DirectionLight_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__DirectionLight_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> Cocos2dxBind_cocos2d__AmbientLight_create(cocos2d::Color3B a0)
        {

            return cocos2d::AmbientLight::create(a0);
        }

        cocos2d::LightType Cocos2dxBind_cocos2d__AmbientLight_get_light_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getLightType();
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getIntensity();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_intensity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setIntensity(a0);
        }

        cocos2d::LightFlag Cocos2dxBind_cocos2d__AmbientLight_get_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getLightFlag();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_light_flag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->setLightFlag((cocos2d::LightFlag)a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_enabled_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_on_enter_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_on_exit_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->onExit();
        }

        std::string Cocos2dxBind_cocos2d__AmbientLight_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__AmbientLight_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__AmbientLight_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__AmbientLight_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__AmbientLight_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__AmbientLight_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__AmbientLight_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__AmbientLight_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AmbientLight_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AmbientLight_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__AmbientLight_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__AmbientLight_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__AmbientLight_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__AmbientLight_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__AmbientLight_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__AmbientLight_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__AmbientLight_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__AmbientLight_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AmbientLight_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__AmbientLight_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__AmbientLight_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__AmbientLight_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__AmbientLight_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__AmbientLight_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__AmbientLight_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__AmbientLight_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__AmbientLight_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__AmbientLight_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__AmbientLight_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__AmbientLight_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__AmbientLight_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__AmbientLight_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__AmbientLight_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__AmbientLight_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AmbientLight_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AmbientLight_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AmbientLight_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AmbientLight_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AmbientLight_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__AmbientLight_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__AmbientLight_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__AmbientLight_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__AmbientLight_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__AmbientLight_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__AmbientLight_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__AmbientLight_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__AmbientLight_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__AmbientLight_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AmbientLight_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AmbientLight_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__AmbientLight_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__AmbientLight_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__AmbientLight_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__AmbientLight_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__AmbientLight_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__AmbientLight_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> c)
        {

            return c->getReferenceCount();
        }

        std::string Cocos2dxBind_cocos2d__TextureCache_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->getDescription();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__TextureCache_add_image_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0)
        {

            return c->addImage(a0);
        }

        void Cocos2dxBind_cocos2d__TextureCache_add_image_async(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D>)> a1)
        {

            c->addImageAsync(a0, 
              [=](cocos2d::Texture2D * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TextureCache_unbind_image_async(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0)
        {

            c->unbindImageAsync(a0);
        }

        void Cocos2dxBind_cocos2d__TextureCache_unbind_all_image_async(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->unbindAllImageAsync();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__TextureCache_add_image_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Image> a0, std::string a1)
        {

            return c->addImage(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__TextureCache_get_texture_for_key(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0)
        {

            return c->getTextureForKey(a0);
        }

        bool Cocos2dxBind_cocos2d__TextureCache_reload_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0)
        {

            return c->reloadTexture(a0);
        }

        void Cocos2dxBind_cocos2d__TextureCache_remove_all_textures(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->removeAllTextures();
        }

        void Cocos2dxBind_cocos2d__TextureCache_remove_unused_textures(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->removeUnusedTextures();
        }

        void Cocos2dxBind_cocos2d__TextureCache_remove_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->removeTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextureCache_remove_texture_for_key(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, std::string a0)
        {

            c->removeTextureForKey(a0);
        }

        std::string Cocos2dxBind_cocos2d__TextureCache_get_cached_texture_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->getCachedTextureInfo();
        }

        void Cocos2dxBind_cocos2d__TextureCache_wait_for_quit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->waitForQuit();
        }

        const std::string Cocos2dxBind_cocos2d__TextureCache_get_texture_file_path(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            return c->getTextureFilePath(a0.get());
        }

        void Cocos2dxBind_cocos2d__TextureCache_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TextureCache_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TextureCache_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TextureCache_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__TextureCache_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__TextureCache_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__TextureCache_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__TextureCache_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__TextureCache_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__TextureCache_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShape_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShape_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShape_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShape_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, bool a0)
        {

            c->setSensor(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShape_calculate_default_moment_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShape_get_offset_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getOffset();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShape_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getCenter();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShape_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShape_get_polyon_center_8(const cocos2d::Vec2 * a0, int a1)
        {

            return cocos2d::PhysicsShape::getPolyonCenter(a0, a1);
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShape_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShape_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__PhysicsShape_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__PhysicsShape_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> Cocos2dxBind_cocos2d__PhysicsShapeCircle_create(float a0, cocos2d::PhysicsMaterial a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsShapeCircle::create(a0, a1, a2);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_area(float a0)
        {

            return cocos2d::PhysicsShapeCircle::calculateArea(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_moment(float a0, float a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsShapeCircle::calculateMoment(a0, a1, a2);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_calculate_default_moment(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->calculateDefaultMoment();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_radius(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getRadius();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getOffset();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeCircle_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, bool a0)
        {

            c->setSensor(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getCenter();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeCircle_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeCircle_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeCircle_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeCircle_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> Cocos2dxBind_cocos2d__PhysicsShapePolygon_create(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, cocos2d::Vec2 a3)
        {

            return cocos2d::PhysicsShapePolygon::create(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_area_2(const cocos2d::Vec2 * a0, int a1)
        {

            return cocos2d::PhysicsShapePolygon::calculateArea(a0, a1);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_moment_2(float a0, const cocos2d::Vec2 * a1, int a2, cocos2d::Vec2 a3)
        {

            return cocos2d::PhysicsShapePolygon::calculateMoment(a0, a1, a2, a3);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_calculate_default_moment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_point_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            return c->getPoint(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_points_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getPointsCount();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getCenter();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapePolygon_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, bool a0)
        {

            c->setSensor(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_offset_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getOffset();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapePolygon_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapePolygon_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapePolygon_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapePolygon_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> Cocos2dxBind_cocos2d__PhysicsShapeBox_create(cocos2d::Size a0, cocos2d::PhysicsMaterial a1, cocos2d::Vec2 a2)
        {

            return cocos2d::PhysicsShapeBox::create(a0, a1, a2);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__PhysicsShapeBox_get_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeBox_get_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getOffset();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_calculate_default_moment_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeBox_get_point_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            return c->getPoint(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_points_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getPointsCount();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeBox_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getCenter();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeBox_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeBox_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeBox_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeBox_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeBox_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, bool a0)
        {

            c->setSensor(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeBox_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeBox_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeBox_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeBox_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_create(cocos2d::Vec2 a0, cocos2d::Vec2 a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsShapeEdgeSegment::create(a0, a1, a2, a3);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_point_a(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getPointA();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_point_b(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getPointB();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_center(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getCenter();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, bool a0)
        {

            c->setSensor(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_calculate_default_moment_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_offset_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getOffset();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeEdgeSegment_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_create(const cocos2d::Vec2 * a0, int a1, cocos2d::PhysicsMaterial a2, float a3)
        {

            return cocos2d::PhysicsShapeEdgePolygon::create(a0, a1, a2, a3);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getCenter();
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_points_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getPointsCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, float a0)
        {

            c->setMass(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getDensity();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_density_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, float a0)
        {

            c->setDensity(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getRestitution();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_restitution_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, float a0)
        {

            c->setRestitution(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getFriction();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_friction_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, float a0)
        {

            c->setFriction(a0);
        }

        cocos2d::PhysicsMaterial Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_material_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, cocos2d::PhysicsMaterial a0)
        {

            c->setMaterial(a0);
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_is_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->isSensor();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_sensor_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, bool a0)
        {

            c->setSensor(a0);
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_calculate_default_moment_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->calculateDefaultMoment();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_offset_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getOffset();
        }

        bool Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_contains_point_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, cocos2d::Vec2 a0)
        {

            return c->containsPoint(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, int a0)
        {

            c->setCategoryBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_category_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getCategoryBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, int a0)
        {

            c->setContactTestBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_contact_test_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getContactTestBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, int a0)
        {

            c->setCollisionBitmask(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_collision_bitmask_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getCollisionBitmask();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_set_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c, int a0)
        {

            c->setGroup(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_group_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getGroup();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__PhysicsShapeEdgePolygon_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_create(cocos2d::Size a0, cocos2d::PhysicsMaterial a1, float a2, cocos2d::Vec2 a3)
        {

            return cocos2d::PhysicsShapeEdgeBox::create(a0, a1, a2, a3);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getOffset();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_center_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getCenter();
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_points_count_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getPointsCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_body_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getBody();
        }

        cocos2d::PhysicsShape::Type Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_type_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getType();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_area_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getArea();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getMoment();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_moment_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, float a0)
        {

            c->setMoment(a0);
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, int a0)
        {

            c->setTag(a0);
        }

        int Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_tag_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getTag();
        }

        float Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_get_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c)
        {

            return c->getMass();
        }

        void Cocos2dxBind_cocos2d__PhysicsShapeEdgeBox_set_mass_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> c, float a0)
        {

            c->setMass(a0);
        }



        
        bool Cocos2dxBind_ShatteredTiles3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ShuffleTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeOutTRTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeOutBLTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeOutUpTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_FadeOutDownTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TurnOffTiles_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_WavesTiles3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_JumpTiles3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_SplitRows_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_SplitCols_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AtlasNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ClippingNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_LabelAtlas_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_MotionStreak_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_ParticleSystem_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_10(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("Cocos2d::Texture2D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Touch", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Event", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventTouch", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::EventTouch", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Node", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxConverter::Cocos2dxExperimental", "CorMrubyInterface::AnyWP");
            binder.add_convertable("Cocos2d::DrawNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::DrawNode", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxConverter::Collision2dNode", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::EasyHttpClient", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectSensor", "CorMrubyInterface::AnyWP");
            binder.add_convertable("Cocos2d::SpriteFrame", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::AnimationFrame", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Animation", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Action", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FiniteTimeAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FiniteTimeAction", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Speed", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Speed", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Follow", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Follow", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionInterval", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ActionInterval", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ActionInterval", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Sequence", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Sequence", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Sequence", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Sequence", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Repeat", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Repeat", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Repeat", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Repeat", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::RepeatForever", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::RepeatForever", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::RepeatForever", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::RepeatForever", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Spawn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Spawn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Spawn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Spawn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::RotateTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::RotateTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::RotateTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::RotateTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::RotateBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::RotateBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::RotateBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::RotateBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::MoveBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::MoveBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::MoveBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::MoveBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::MoveTo", "Cocos2d::MoveBy");
            binder.add_convertable("Cocos2d::MoveTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::MoveTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::MoveTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::MoveTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::SkewTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::SkewTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::SkewTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::SkewTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::SkewBy", "Cocos2d::SkewTo");
            binder.add_convertable("Cocos2d::SkewBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::SkewBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::SkewBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::SkewBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::JumpBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::JumpBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::JumpBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::JumpBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::JumpTo", "Cocos2d::JumpBy");
            binder.add_convertable("Cocos2d::JumpTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::JumpTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::JumpTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::JumpTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::BezierBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::BezierBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::BezierBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::BezierBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::BezierTo", "Cocos2d::BezierBy");
            binder.add_convertable("Cocos2d::BezierTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::BezierTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::BezierTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::BezierTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ScaleTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ScaleTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ScaleTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ScaleTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ScaleBy", "Cocos2d::ScaleTo");
            binder.add_convertable("Cocos2d::ScaleBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ScaleBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ScaleBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ScaleBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Blink", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Blink", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Blink", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Blink", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FadeTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::FadeTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FadeTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FadeTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FadeIn", "Cocos2d::FadeTo");
            binder.add_convertable("Cocos2d::FadeIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::FadeIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FadeIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FadeIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FadeOut", "Cocos2d::FadeTo");
            binder.add_convertable("Cocos2d::FadeOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::FadeOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::FadeOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::FadeOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TintTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::TintTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::TintTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::TintTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TintBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::TintBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::TintBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::TintBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::DelayTime", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::DelayTime", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::DelayTime", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::DelayTime", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ReverseTime", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ReverseTime", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ReverseTime", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ReverseTime", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Animate", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Animate", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Animate", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Animate", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TargetedAction", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::TargetedAction", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::TargetedAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::TargetedAction", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectAction", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::RtsObject", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectGroup", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectCostGridSpace", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectCostGridSpaceExperimental", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorCocos2dxConverter::TexturedTriangleNode", "Cocos2d::Node");
            binder.add_convertable("CorCocos2dxConverter::TexturedTriangleNode", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectEffect", "CorMrubyInterface::AnyWP");
            binder.add_convertable("Cocos2d::Image", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Sprite", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Sprite", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::FontAtlas", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Label", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Label", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Layer", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Layer", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::LayerColor", "Cocos2d::Layer");
            binder.add_convertable("Cocos2d::LayerColor", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::LayerColor", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListener", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerTouchOneByOne", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerTouchOneByOne", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerTouchAllAtOnce", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerTouchAllAtOnce", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionTween", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ActionTween", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ActionTween", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ActionTween", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dExtension::ScrollView", "Cocos2d::Layer");
            binder.add_convertable("Cocos2dExtension::ScrollView", "Cocos2d::Node");
            binder.add_convertable("Cocos2dExtension::ScrollView", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxConverter::RtsObjectSystem", "CorMrubyInterface::AnyWP");
            binder.add_convertable("Cocos2d::Scene", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Scene", "Cocos2d::Ref");
            binder.add_convertable("CorCocos2dxMrubyInterface::CocosMrubyRef", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Director", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Animation3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Animate3D", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::Animate3D", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::Animate3D", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::Animate3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventCustom", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::EventCustom", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventDispatcher", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerCustom", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerCustom", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerKeyboard", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerKeyboard", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionCamera", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ActionCamera", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ActionCamera", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ActionCamera", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::OrbitCamera", "Cocos2d::ActionCamera");
            binder.add_convertable("Cocos2d::OrbitCamera", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::OrbitCamera", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::OrbitCamera", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::OrbitCamera", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PointArray", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CardinalSplineTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::CardinalSplineTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CardinalSplineTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CardinalSplineTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CardinalSplineBy", "Cocos2d::CardinalSplineTo");
            binder.add_convertable("Cocos2d::CardinalSplineBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::CardinalSplineBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CardinalSplineBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CardinalSplineBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CatmullRomTo", "Cocos2d::CardinalSplineTo");
            binder.add_convertable("Cocos2d::CatmullRomTo", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::CatmullRomTo", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CatmullRomTo", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CatmullRomTo", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::CardinalSplineBy");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::CardinalSplineTo");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::CatmullRomBy", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::ActionEase", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::ActionEase", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::ActionEase", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::ActionEase", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseRateAction", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseRateAction", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseRateAction", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseRateAction", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseRateAction", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::EaseRateAction");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseIn", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::EaseRateAction");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::EaseRateAction");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseInOut", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EaseExponentialIn", "Cocos2d::ActionEase");
            binder.add_convertable("Cocos2d::EaseExponentialIn", "Cocos2d::ActionInterval");
            binder.add_convertable("Cocos2d::EaseExponentialIn", "Cocos2d::FiniteTimeAction");
            binder.add_convertable("Cocos2d::EaseExponentialIn", "Cocos2d::Action");
            binder.add_convertable("Cocos2d::EaseExponentialIn", "Cocos2d::Ref");

          }

    }
}
