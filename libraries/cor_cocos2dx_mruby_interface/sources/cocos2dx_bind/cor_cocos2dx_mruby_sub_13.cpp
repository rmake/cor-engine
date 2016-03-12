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
        
        void Cocos2dxBind_cocos2d__ui__Widget_set_unify_size_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setUnifySizeEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_unify_size_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isUnifySizeEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_callback_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            c->setCallbackName(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__Widget_get_callback_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getCallbackName();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_callback_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            c->setCallbackType(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__Widget_get_callback_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getCallbackType();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_layout_component_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setLayoutComponentEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_layout_component_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isLayoutComponentEnabled();
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_intercept_touch_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a2)
        {

            c->interceptTouchEvent((cocos2d::ui::Widget::TouchEventType)a0, a1.get(), a2.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_propagate_touch_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a2)
        {

            c->propagateTouchEvent((cocos2d::ui::Widget::TouchEventType)a0, a1.get(), a2.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_focus_change_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            c->onFocusChange(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_dispatch_focus_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            c->dispatchFocusEvent(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_7(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addProtectedChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_protected_child_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addProtectedChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Widget_get_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            return c->getProtectedChildByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, bool a1)
        {

            c->removeProtectedChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->removeAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_all_protected_children_with_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->removeAllProtectedChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_reorder_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_sort_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->sortAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_enter_transition_did_finish_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_exit_transition_did_start_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_displayed_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_displayed_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_disable_cascade_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->disableCascadeColor();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_disable_cascade_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->disableCascadeOpacity();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_camera_mask_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__Widget_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getAnchorPointInPoints();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Widget_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__Widget_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ui__Widget_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Widget_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Widget_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ui__Widget_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Widget_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ui__Widget_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__Widget_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ui__Widget_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ui__Widget_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__Widget_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ui__Widget_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ui__Widget_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ui__Widget_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ui__Widget_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ui__Widget_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ui__Widget_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ui__Widget_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ui__Widget_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__Widget_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__Widget_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__Widget_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__Widget_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__Widget_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ui__Widget_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Widget_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Widget_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Widget_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Widget_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Widget_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Widget_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Widget_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ui__Widget_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ui__Widget_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__Widget_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__Widget_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Widget_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Widget_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Widget_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ui__Widget_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__Widget_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ui__Widget_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_accessor_set_on_focus_changed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>)> a)
        {

            c->onFocusChanged = 
              [=](cocos2d::ui::Widget * b0, cocos2d::ui::Widget * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__ui__Widget_accessor_set_on_next_focused_widget(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<cocos2d::ui::Widget *(cocos2d::ui::Widget::FocusDirection)> a)
        {

            c->onNextFocusedWidget = 
              [=](cocos2d::ui::Widget::FocusDirection b0){
                  cocos2d::ui::Widget * r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(b0);
                      }
                  }, [&]() {
                      r = (cocos2d::ui::Widget *)nullptr;
                  });
                  return r;
              }
;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_1()
        {

            return cocos2d::ui::Scale9Sprite::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_2(std::string a0, cocos2d::Rect a1, cocos2d::Rect a2)
        {

            return cocos2d::ui::Scale9Sprite::create(a0, a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_3(cocos2d::Rect a0, std::string a1)
        {

            return cocos2d::ui::Scale9Sprite::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_4(std::string a0, cocos2d::Rect a1)
        {

            return cocos2d::ui::Scale9Sprite::create(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_5(std::string a0)
        {

            return cocos2d::ui::Scale9Sprite::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            return cocos2d::ui::Scale9Sprite::createWithSpriteFrame(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, cocos2d::Rect a1)
        {

            return cocos2d::ui::Scale9Sprite::createWithSpriteFrame(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_name_1(std::string a0)
        {

            return cocos2d::ui::Scale9Sprite::createWithSpriteFrameName(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_create_with_sprite_frame_name_2(std::string a0, cocos2d::Rect a1)
        {

            return cocos2d::ui::Scale9Sprite::createWithSpriteFrameName(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0, cocos2d::Rect a1, cocos2d::Rect a2)
        {

            return c->initWithFile(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0, cocos2d::Rect a1)
        {

            return c->initWithFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Rect a0, std::string a1)
        {

            return c->initWithFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_file_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->initWithFile(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, cocos2d::Rect a1)
        {

            return c->initWithSpriteFrame(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0)
        {

            return c->initWithSpriteFrame(a0.get());
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_name_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0, cocos2d::Rect a1)
        {

            return c->initWithSpriteFrameName(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_with_sprite_frame_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->initWithSpriteFrameName(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, cocos2d::Rect a1, bool a2, cocos2d::Rect a3)
        {

            return c->init(a0.get(), a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, cocos2d::Rect a1, cocos2d::Rect a2)
        {

            return c->init(a0.get(), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_init_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4, cocos2d::Rect a5)
        {

            return c->init(a0.get(), a1, a2, a3, a4, a5);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getBlendFunc();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_resizable_sprite_with_cap_insets(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Rect a0)
        {

            return c->resizableSpriteWithCapInsets(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_with_sprite_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, cocos2d::Rect a1, bool a2, cocos2d::Rect a3)
        {

            return c->updateWithSprite(a0.get(), a1, a2, a3);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_with_sprite_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, cocos2d::Rect a1, bool a2, cocos2d::Vec2 a3, cocos2d::Size a4, cocos2d::Rect a5)
        {

            return c->updateWithSprite(a0.get(), a1, a2, a3, a4, a5);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_sprite_frame(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteFrame> a0, cocos2d::Rect a1)
        {

            c->setSpriteFrame(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_anchor_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->setState((cocos2d::ui::Scale9Sprite::State)a0);
        }

        cocos2d::ui::Scale9Sprite::State Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getState();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_original_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getOriginalSize();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_preferred_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Size a0)
        {

            c->setPreferredSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_preferred_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPreferredSize();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cap_insets(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Rect a0)
        {

            c->setCapInsets(a0);
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_cap_insets(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getCapInsets();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_left(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setInsetLeft(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_left(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getInsetLeft();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_top(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setInsetTop(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_top(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getInsetTop();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_right(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setInsetRight(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_right(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getInsetRight();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_inset_bottom(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setInsetBottom(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_inset_bottom(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getInsetBottom();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale9_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setScale9Enabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_scale9_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isScale9Enabled();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_cleanup(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_enter_transition_did_finish(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_on_exit_transition_did_start(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_displayed_opacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_displayed_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_disable_cascade_color(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->disableCascadeColor();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_disable_cascade_opacity(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->disableCascadeOpacity();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_sprite(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getSprite();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_flipped_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setFlippedX(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_flipped_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isFlippedX();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_flipped_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setFlippedY(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_flipped_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isFlippedY();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setScaleY(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_x(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_y(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScaleY();
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_camera_mask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        std::string Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getSkewY();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getAnchorPointInPoints();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->draw();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__Scale9Sprite_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Scale9Sprite_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Scale9Sprite_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ui__Scale9Sprite_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__Scale9Sprite_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ui__Scale9Sprite_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> Cocos2dxBind_cocos2d__ui__EditBox_create_1(cocos2d::Size a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> a2, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> a3)
        {

            return cocos2d::ui::EditBox::create(a0, a1.get(), a2.get(), a3.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> Cocos2dxBind_cocos2d__ui__EditBox_create_2(cocos2d::Size a0, std::string a1, int a2)
        {

            return cocos2d::ui::EditBox::create(a0, a1, (cocos2d::ui::Widget::TextureResType)a2);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_init_with_size_and_background_sprite_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Size a0, std::string a1, int a2)
        {

            return c->initWithSizeAndBackgroundSprite(a0, a1, (cocos2d::ui::Widget::TextureResType)a2);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_init_with_size_and_background_sprite_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Size a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> a1)
        {

            return c->initWithSizeAndBackgroundSprite(a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::ui::EditBoxDelegate * a0)
        {

            c->setDelegate(a0);
        }

        cocos2d::ui::EditBoxDelegate* Cocos2dxBind_cocos2d__ui__EditBox_get_delegate(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getDelegate();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_register_script_edit_box_handler(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->registerScriptEditBoxHandler(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_unregister_script_edit_box_handler(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->unregisterScriptEditBoxHandler();
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_script_edit_box_handler(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScriptEditBoxHandler();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_text(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0)
        {

            c->setText(a0);
        }

        const char* Cocos2dxBind_cocos2d__ui__EditBox_get_text(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const char* >(c->getText());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_font(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0, int a1)
        {

            c->setFont(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_font_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0)
        {

            c->setFontName(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_font_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setFontSize(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_font_color_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color3B a0)
        {

            c->setFontColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_font_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color4B a0)
        {

            c->setFontColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0, int a1)
        {

            c->setPlaceholderFont(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0)
        {

            c->setPlaceholderFontName(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setPlaceholderFontSize(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_color_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color3B a0)
        {

            c->setPlaceholderFontColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_placeholder_font_color_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color4B a0)
        {

            c->setPlaceholderFontColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_place_holder(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, const char * a0)
        {

            c->setPlaceHolder(a0);
        }

        const char* Cocos2dxBind_cocos2d__ui__EditBox_get_place_holder(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const char* >(c->getPlaceHolder());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_input_mode(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setInputMode((cocos2d::ui::EditBox::InputMode)a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_max_length(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setMaxLength(a0);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_max_length(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getMaxLength();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_input_flag(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setInputFlag((cocos2d::ui::EditBox::InputFlag)a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_return_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setReturnType((cocos2d::ui::EditBox::KeyboardReturnType)a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_visible(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setVisible(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_anchor_point(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__EditBox_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_touch_down_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0, int a1)
        {

            c->touchDownAction(a0.get(), (cocos2d::ui::Widget::TouchEventType)a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_bright_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setBright(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_bright_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isBright();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_touch_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setTouchEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_bright_style_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setBrightStyle((cocos2d::ui::Widget::BrightStyle)a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_touch_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isTouchEnabled();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_highlighted_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isHighlighted();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_highlighted_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setHighlighted(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_left_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getLeftBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_bottom_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getBottomBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_right_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRightBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_top_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getTopBoundary();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_visit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_touch_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>, cocos2d::ui::Widget::TouchEventType)> a0)
        {

            c->addTouchEventListener(
              [=](cocos2d::Ref * b0, cocos2d::ui::Widget::TouchEventType b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_click_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>)> a0)
        {

            c->addClickEventListener(
              [=](cocos2d::Ref * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_ccs_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>, int)> a0)
        {

            c->addCCSEventListener(
              [=](cocos2d::Ref * b0, int b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            c->setPositionPercent(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_position_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPositionPercent();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setPositionType((cocos2d::ui::Widget::PositionType)a0);
        }

        cocos2d::ui::Widget::PositionType Cocos2dxBind_cocos2d__ui__EditBox_get_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPositionType();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_flipped_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setFlippedX(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_flipped_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isFlippedX();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_flipped_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setFlippedY(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_flipped_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isFlippedY();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setScaleY(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scale_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scale_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScaleY();
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScale();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_clipping_parent_contains_point_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            return c->isClippingParentContainsPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_touch_began_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getTouchBeganPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_touch_move_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getTouchMovePosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_touch_end_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getTouchEndPosition();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_size_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            c->setSizePercent(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_size_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setSizeType((cocos2d::ui::Widget::SizeType)a0);
        }

        cocos2d::ui::Widget::SizeType Cocos2dxBind_cocos2d__ui__EditBox_get_size_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getSizeType();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__EditBox_get_custom_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getCustomSize();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__EditBox_get_layout_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getLayoutSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_size_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getSizePercent();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_on_touch_began_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            return c->onTouchBegan(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_touch_moved_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchMoved(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_touch_ended_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchEnded(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_touch_cancelled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchCancelled(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_layout_parameter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::ui::LayoutParameter * a0)
        {

            c->setLayoutParameter(a0);
        }

        cocos2d::ui::LayoutParameter* Cocos2dxBind_cocos2d__ui__EditBox_get_layout_parameter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getLayoutParameter();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_ignore_content_adapt_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->ignoreContentAdaptWithSize(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_ignore_content_adapt_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isIgnoreContentAdaptWithSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_world_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getWorldPosition();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__EditBox_get_virtual_renderer_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getVirtualRenderer();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__EditBox_get_virtual_renderer_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getVirtualRendererSize();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__EditBox_clone_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_size_and_position_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->updateSizeAndPosition();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_size_and_position_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Size a0)
        {

            c->updateSizeAndPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_action_tag_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setActionTag(a0);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_action_tag_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getActionTag();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_propagate_touch_events_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setPropagateTouchEvents(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_propagate_touch_events_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isPropagateTouchEvents();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_swallow_touches_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setSwallowTouches(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_swallow_touches_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isSwallowTouches();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_focused_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isFocused();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_focused_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setFocused(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_focus_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isFocusEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_focus_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setFocusEnabled(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__EditBox_find_next_focused_widget_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            return c->findNextFocusedWidget((cocos2d::ui::Widget::FocusDirection)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_request_focus_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->requestFocus();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__EditBox_get_current_focused_widget_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getCurrentFocusedWidget();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_unify_size_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setUnifySizeEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_unify_size_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isUnifySizeEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_callback_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            c->setCallbackName(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__EditBox_get_callback_name_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getCallbackName();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_callback_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            c->setCallbackType(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__EditBox_get_callback_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getCallbackType();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_layout_component_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setLayoutComponentEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_layout_component_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isLayoutComponentEnabled();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_intercept_touch_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a2)
        {

            c->interceptTouchEvent((cocos2d::ui::Widget::TouchEventType)a0, a1.get(), a2.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_propagate_touch_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a2)
        {

            c->propagateTouchEvent((cocos2d::ui::Widget::TouchEventType)a0, a1.get(), a2.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_focus_change_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            c->onFocusChange(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_dispatch_focus_event_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            c->dispatchFocusEvent(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_7(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addProtectedChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_8(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_protected_child_9(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addProtectedChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__EditBox_get_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            return c->getProtectedChildByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_protected_child_by_tag_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, bool a1)
        {

            c->removeProtectedChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->removeAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_all_protected_children_with_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->removeAllProtectedChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_reorder_protected_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderProtectedChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_sort_all_protected_children_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->sortAllProtectedChildren();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_cleanup_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_enter_transition_did_finish_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_on_exit_transition_did_start_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_displayed_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_displayed_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_disable_cascade_color_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->disableCascadeColor();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_disable_cascade_opacity_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->disableCascadeOpacity();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_camera_mask_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__EditBox_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getSkewY();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getAnchorPointInPoints();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__EditBox_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getContentSize();
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__ui__EditBox_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__ui__EditBox_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__EditBox_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__EditBox_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
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

        MrubyRef Cocos2dxBind_cocos2d__ui__EditBox_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__EditBox_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__ui__EditBox_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__ui__EditBox_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__ui__EditBox_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__ui__EditBox_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__EditBox_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__ui__EditBox_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__ui__EditBox_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__ui__EditBox_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__ui__EditBox_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__ui__EditBox_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__ui__EditBox_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__ui__EditBox_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__ui__EditBox_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__EditBox_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__ui__EditBox_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__EditBox_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__ui__EditBox_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__EditBox_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__EditBox_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__EditBox_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__ui__EditBox_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__ui__EditBox_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__EditBox_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__ui__EditBox_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__ui__EditBox_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__ui__EditBox_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, int a0)
        {

            c->setOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__EditBox_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__ui__EditBox_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__EditBox_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void ()> a0)
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

        void Cocos2dxBind_cocos2d__ui__EditBox_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void ()> a0)
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

        int Cocos2dxBind_cocos2d__ui__EditBox_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__ui__EditBox_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__ui__EditBox_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_accessor_set_on_focus_changed(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>)> a)
        {

            c->onFocusChanged = 
              [=](cocos2d::ui::Widget * b0, cocos2d::ui::Widget * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          a.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>(b0), cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget>(b1));
                      }
                  }, [&]() {

                  });
              }
;
        }

        void Cocos2dxBind_cocos2d__ui__EditBox_accessor_set_on_next_focused_widget(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c, mrubybind::FuncPtr<cocos2d::ui::Widget *(cocos2d::ui::Widget::FocusDirection)> a)
        {

            c->onNextFocusedWidget = 
              [=](cocos2d::ui::Widget::FocusDirection b0){
                  cocos2d::ui::Widget * r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a.is_living()) {
                          r = a.func()(b0);
                      }
                  }, [&]() {
                      r = (cocos2d::ui::Widget *)nullptr;
                  });
                  return r;
              }
;
        }

        CocosDenshion::SimpleAudioEngine* Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_instance()
        {

            return CocosDenshion::SimpleAudioEngine::getInstance();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_end()
        {

            CocosDenshion::SimpleAudioEngine::end();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_preload_background_music(CocosDenshion::SimpleAudioEngine* c, const char * a0)
        {

            c->preloadBackgroundMusic(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_play_background_music(CocosDenshion::SimpleAudioEngine* c, const char * a0, bool a1)
        {

            c->playBackgroundMusic(a0, a1);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_background_music(CocosDenshion::SimpleAudioEngine* c, bool a0)
        {

            c->stopBackgroundMusic(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_background_music(CocosDenshion::SimpleAudioEngine* c)
        {

            c->pauseBackgroundMusic();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_background_music(CocosDenshion::SimpleAudioEngine* c)
        {

            c->resumeBackgroundMusic();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_rewind_background_music(CocosDenshion::SimpleAudioEngine* c)
        {

            c->rewindBackgroundMusic();
        }

        bool Cocos2dxBind_CocosDenshion__SimpleAudioEngine_will_play_background_music(CocosDenshion::SimpleAudioEngine* c)
        {

            return c->willPlayBackgroundMusic();
        }

        bool Cocos2dxBind_CocosDenshion__SimpleAudioEngine_is_background_music_playing(CocosDenshion::SimpleAudioEngine* c)
        {

            return c->isBackgroundMusicPlaying();
        }

        float Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_background_music_volume(CocosDenshion::SimpleAudioEngine* c)
        {

            return c->getBackgroundMusicVolume();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_set_background_music_volume(CocosDenshion::SimpleAudioEngine* c, float a0)
        {

            c->setBackgroundMusicVolume(a0);
        }

        float Cocos2dxBind_CocosDenshion__SimpleAudioEngine_get_effects_volume(CocosDenshion::SimpleAudioEngine* c)
        {

            return c->getEffectsVolume();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_set_effects_volume(CocosDenshion::SimpleAudioEngine* c, float a0)
        {

            c->setEffectsVolume(a0);
        }

        unsigned int Cocos2dxBind_CocosDenshion__SimpleAudioEngine_play_effect(CocosDenshion::SimpleAudioEngine* c, const char * a0, bool a1, float a2, float a3, float a4)
        {

            return c->playEffect(a0, a1, a2, a3, a4);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_effect(CocosDenshion::SimpleAudioEngine* c, unsigned int a0)
        {

            c->pauseEffect(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_pause_all_effects(CocosDenshion::SimpleAudioEngine* c)
        {

            c->pauseAllEffects();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_effect(CocosDenshion::SimpleAudioEngine* c, unsigned int a0)
        {

            c->resumeEffect(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_resume_all_effects(CocosDenshion::SimpleAudioEngine* c)
        {

            c->resumeAllEffects();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_effect(CocosDenshion::SimpleAudioEngine* c, unsigned int a0)
        {

            c->stopEffect(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_stop_all_effects(CocosDenshion::SimpleAudioEngine* c)
        {

            c->stopAllEffects();
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_preload_effect(CocosDenshion::SimpleAudioEngine* c, const char * a0)
        {

            c->preloadEffect(a0);
        }

        void Cocos2dxBind_CocosDenshion__SimpleAudioEngine_unload_effect(CocosDenshion::SimpleAudioEngine* c, const char * a0)
        {

            c->unloadEffect(a0);
        }

        void Cocos2dxBind_cocos2d__Color4B_accessor_set_r(cocos2d::Color4B& c, int a)
        {

            c.r = a;
        }

        int Cocos2dxBind_cocos2d__Color4B_accessor_get_r(cocos2d::Color4B& c)
        {

            return c.r;
        }

        void Cocos2dxBind_cocos2d__Color4B_accessor_set_g(cocos2d::Color4B& c, int a)
        {

            c.g = a;
        }

        int Cocos2dxBind_cocos2d__Color4B_accessor_get_g(cocos2d::Color4B& c)
        {

            return c.g;
        }

        void Cocos2dxBind_cocos2d__Color4B_accessor_set_b(cocos2d::Color4B& c, int a)
        {

            c.b = a;
        }

        int Cocos2dxBind_cocos2d__Color4B_accessor_get_b(cocos2d::Color4B& c)
        {

            return c.b;
        }

        void Cocos2dxBind_cocos2d__Color4B_accessor_set_a(cocos2d::Color4B& c, int a)
        {

            c.a = a;
        }

        int Cocos2dxBind_cocos2d__Color4B_accessor_get_a(cocos2d::Color4B& c)
        {

            return c.a;
        }

        void Cocos2dxBind_cocos2d__Tex2F_accessor_set_u(cocos2d::Tex2F& c, float a)
        {

            c.u = a;
        }

        float Cocos2dxBind_cocos2d__Tex2F_accessor_get_u(cocos2d::Tex2F& c)
        {

            return c.u;
        }

        void Cocos2dxBind_cocos2d__Tex2F_accessor_set_v(cocos2d::Tex2F& c, float a)
        {

            c.v = a;
        }

        float Cocos2dxBind_cocos2d__Tex2F_accessor_get_v(cocos2d::Tex2F& c)
        {

            return c.v;
        }

        cocos2d::Event::Type Cocos2dxBind_cocos2d__EventKeyboard_get_type_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            return c->getType();
        }

        void Cocos2dxBind_cocos2d__EventKeyboard_stop_propagation_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            c->stopPropagation();
        }

        bool Cocos2dxBind_cocos2d__EventKeyboard_is_stopped_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            return c->isStopped();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__EventKeyboard_get_current_target_5(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            return c->getCurrentTarget();
        }

        void Cocos2dxBind_cocos2d__EventKeyboard_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__EventKeyboard_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__EventKeyboard_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__EventKeyboard_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_font_file_path(cocos2d::_ttfConfig& c, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a)
        {

            c.fontFilePath = a;
        }

        std::basic_string<char, std::char_traits<char>, std::allocator<char>> Cocos2dxBind_cocos2d___ttfConfig_accessor_get_font_file_path(cocos2d::_ttfConfig& c)
        {

            return c.fontFilePath;
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_font_size(cocos2d::_ttfConfig& c, int a)
        {

            c.fontSize = a;
        }

        int Cocos2dxBind_cocos2d___ttfConfig_accessor_get_font_size(cocos2d::_ttfConfig& c)
        {

            return c.fontSize;
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_glyphs(cocos2d::_ttfConfig& c, int a)
        {

            c.glyphs = (cocos2d::GlyphCollection)a;
        }

        int Cocos2dxBind_cocos2d___ttfConfig_accessor_get_glyphs(cocos2d::_ttfConfig& c)
        {

            return (int)c.glyphs;
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_custom_glyphs(cocos2d::_ttfConfig& c, const char * a)
        {

            c.customGlyphs = a;
        }

        const char * Cocos2dxBind_cocos2d___ttfConfig_accessor_get_custom_glyphs(cocos2d::_ttfConfig& c)
        {

            return c.customGlyphs;
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_distance_field_enabled(cocos2d::_ttfConfig& c, bool a)
        {

            c.distanceFieldEnabled = a;
        }

        bool Cocos2dxBind_cocos2d___ttfConfig_accessor_get_distance_field_enabled(cocos2d::_ttfConfig& c)
        {

            return c.distanceFieldEnabled;
        }

        void Cocos2dxBind_cocos2d___ttfConfig_accessor_set_outline_size(cocos2d::_ttfConfig& c, int a)
        {

            c.outlineSize = a;
        }

        int Cocos2dxBind_cocos2d___ttfConfig_accessor_get_outline_size(cocos2d::_ttfConfig& c)
        {

            return c.outlineSize;
        }

        void Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_density(cocos2d::PhysicsMaterial& c, float a)
        {

            c.density = a;
        }

        float Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_density(cocos2d::PhysicsMaterial& c)
        {

            return c.density;
        }

        void Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_restitution(cocos2d::PhysicsMaterial& c, float a)
        {

            c.restitution = a;
        }

        float Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_restitution(cocos2d::PhysicsMaterial& c)
        {

            return c.restitution;
        }

        void Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_set_friction(cocos2d::PhysicsMaterial& c, float a)
        {

            c.friction = a;
        }

        float Cocos2dxBind_cocos2d__PhysicsMaterial_accessor_get_friction(cocos2d::PhysicsMaterial& c)
        {

            return c.friction;
        }

        void Cocos2dxBind_cocos2d__PhysicsContactData_accessor_set_count(cocos2d::PhysicsContactData* c, int a)
        {

            c->count = a;
        }

        int Cocos2dxBind_cocos2d__PhysicsContactData_accessor_get_count(cocos2d::PhysicsContactData* c)
        {

            return c->count;
        }

        void Cocos2dxBind_cocos2d__PhysicsContactData_accessor_set_normal(cocos2d::PhysicsContactData* c, cocos2d::Vec2 a)
        {

            c->normal = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsContactData_accessor_get_normal(cocos2d::PhysicsContactData* c)
        {

            return c->normal;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_shape(cocos2d::PhysicsRayCastInfo& c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> a)
        {

            c.shape = a.get();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_shape(cocos2d::PhysicsRayCastInfo& c)
        {

            return cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape>(c.shape);
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_start(cocos2d::PhysicsRayCastInfo& c, cocos2d::Vec2 a)
        {

            c.start = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_start(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.start;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_end(cocos2d::PhysicsRayCastInfo& c, cocos2d::Vec2 a)
        {

            c.end = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_end(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.end;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_contact(cocos2d::PhysicsRayCastInfo& c, cocos2d::Vec2 a)
        {

            c.contact = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_contact(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.contact;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_normal(cocos2d::PhysicsRayCastInfo& c, cocos2d::Vec2 a)
        {

            c.normal = a;
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_normal(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.normal;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_fraction(cocos2d::PhysicsRayCastInfo& c, float a)
        {

            c.fraction = a;
        }

        float Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_fraction(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.fraction;
        }

        void Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_set_data(cocos2d::PhysicsRayCastInfo& c, void * a)
        {

            c.data = a;
        }

        void * Cocos2dxBind_cocos2d__PhysicsRayCastInfo_accessor_get_data(cocos2d::PhysicsRayCastInfo& c)
        {

            return c.data;
        }



        
        bool Cocos2dxBind_TMXLayer_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TMXTiledMap_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Mesh_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Sprite3D_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Widget_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_Scale9Sprite_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EditBox_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> c)
        {
            return c.is_valid();
        }
        cocos2d::Color4B Cocos2dxBind_Color4B_create_0()
        {
            return cocos2d::Color4B();
        }
        cocos2d::Color4B Cocos2dxBind_Color4B_create_1(int a0, int a1, int a2, int a3)
        {
            return cocos2d::Color4B(a0, a1, a2, a3);
        }
        cocos2d::Color4B Cocos2dxBind_Color4B_create_2(cocos2d::Color3B a0)
        {
            return cocos2d::Color4B(a0);
        }
        cocos2d::Color4B Cocos2dxBind_Color4B_create_3(cocos2d::Color4F a0)
        {
            return cocos2d::Color4B(a0);
        }
        cocos2d::Color4B Cocos2dxBind_Color4B_create_4(cocos2d::Color4B a0)
        {
            return cocos2d::Color4B(a0);
        }
        cocos2d::Tex2F Cocos2dxBind_Tex2F_create_0(float a0, float a1)
        {
            return cocos2d::Tex2F(a0, a1);
        }
        cocos2d::Tex2F Cocos2dxBind_Tex2F_create_1()
        {
            return cocos2d::Tex2F();
        }
        cocos2d::Tex2F Cocos2dxBind_Tex2F_create_2(cocos2d::Tex2F a0)
        {
            return cocos2d::Tex2F(a0);
        }
        bool Cocos2dxBind_EventKeyboard_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> c)
        {
            return c.is_valid();
        }
        cocos2d::PhysicsMaterial Cocos2dxBind_PhysicsMaterial_create_0()
        {
            return cocos2d::PhysicsMaterial();
        }
        cocos2d::PhysicsMaterial Cocos2dxBind_PhysicsMaterial_create_1(float a0, float a1, float a2)
        {
            return cocos2d::PhysicsMaterial(a0, a1, a2);
        }
        cocos2d::PhysicsMaterial Cocos2dxBind_PhysicsMaterial_create_2(cocos2d::PhysicsMaterial a0)
        {
            return cocos2d::PhysicsMaterial(a0);
        }
        cocos2d::PhysicsRayCastInfo Cocos2dxBind_PhysicsRayCastInfo_create()
        {
            return cocos2d::PhysicsRayCastInfo();
        }


        
          void Cocos2dxBind_bind_func_13(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "AUTO", (int)cocos2d::Texture2D::PixelFormat::AUTO);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "BGRA8888", (int)cocos2d::Texture2D::PixelFormat::BGRA8888);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "RGBA8888", (int)cocos2d::Texture2D::PixelFormat::RGBA8888);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "RGB888", (int)cocos2d::Texture2D::PixelFormat::RGB888);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "RGB565", (int)cocos2d::Texture2D::PixelFormat::RGB565);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "A8", (int)cocos2d::Texture2D::PixelFormat::A8);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "I8", (int)cocos2d::Texture2D::PixelFormat::I8);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "AI88", (int)cocos2d::Texture2D::PixelFormat::AI88);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "RGBA4444", (int)cocos2d::Texture2D::PixelFormat::RGBA4444);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "RGB5_A1", (int)cocos2d::Texture2D::PixelFormat::RGB5A1);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "PVRTC4", (int)cocos2d::Texture2D::PixelFormat::PVRTC4);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "PVRTC4_A", (int)cocos2d::Texture2D::PixelFormat::PVRTC4A);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "PVRTC2", (int)cocos2d::Texture2D::PixelFormat::PVRTC2);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "PVRTC2_A", (int)cocos2d::Texture2D::PixelFormat::PVRTC2A);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "ETC", (int)cocos2d::Texture2D::PixelFormat::ETC);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "S3_TC_DXT1", (int)cocos2d::Texture2D::PixelFormat::S3TC_DXT1);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "S3_TC_DXT3", (int)cocos2d::Texture2D::PixelFormat::S3TC_DXT3);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "S3_TC_DXT5", (int)cocos2d::Texture2D::PixelFormat::S3TC_DXT5);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "ATC_RGB", (int)cocos2d::Texture2D::PixelFormat::ATC_RGB);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "ATC_EXPLICIT_ALPHA", (int)cocos2d::Texture2D::PixelFormat::ATC_EXPLICIT_ALPHA);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "ATC_INTERPOLATED_ALPHA", (int)cocos2d::Texture2D::PixelFormat::ATC_INTERPOLATED_ALPHA);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "DEFAULT", (int)cocos2d::Texture2D::PixelFormat::DEFAULT);
            binder.bind_const("Cocos2d", "Texture2DPixelFormat", "NONE", (int)cocos2d::Texture2D::PixelFormat::NONE);
            binder.bind_const("Cocos2d", "ScrollViewDirection", "NONE", (int)cocos2d::extension::ScrollView::Direction::NONE);
            binder.bind_const("Cocos2d", "ScrollViewDirection", "HORIZONTAL", (int)cocos2d::extension::ScrollView::Direction::HORIZONTAL);
            binder.bind_const("Cocos2d", "ScrollViewDirection", "VERTICAL", (int)cocos2d::extension::ScrollView::Direction::VERTICAL);
            binder.bind_const("Cocos2d", "ScrollViewDirection", "BOTH", (int)cocos2d::extension::ScrollView::Direction::BOTH);
            binder.bind_const("Cocos2d", "MatrixStackType", "MATRIX_STACK_MODELVIEW", (int)cocos2d::MATRIX_STACK_TYPE::MATRIX_STACK_MODELVIEW);
            binder.bind_const("Cocos2d", "MatrixStackType", "MATRIX_STACK_PROJECTION", (int)cocos2d::MATRIX_STACK_TYPE::MATRIX_STACK_PROJECTION);
            binder.bind_const("Cocos2d", "MatrixStackType", "MATRIX_STACK_TEXTURE", (int)cocos2d::MATRIX_STACK_TYPE::MATRIX_STACK_TEXTURE);
            binder.bind_const("Cocos2d", "EditBoxKeyboardReturnType", "DEFAULT", (int)cocos2d::ui::EditBox::KeyboardReturnType::DEFAULT);
            binder.bind_const("Cocos2d", "EditBoxKeyboardReturnType", "DONE", (int)cocos2d::ui::EditBox::KeyboardReturnType::DONE);
            binder.bind_const("Cocos2d", "EditBoxKeyboardReturnType", "SEND", (int)cocos2d::ui::EditBox::KeyboardReturnType::SEND);
            binder.bind_const("Cocos2d", "EditBoxKeyboardReturnType", "SEARCH", (int)cocos2d::ui::EditBox::KeyboardReturnType::SEARCH);
            binder.bind_const("Cocos2d", "EditBoxKeyboardReturnType", "GO", (int)cocos2d::ui::EditBox::KeyboardReturnType::GO);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "ANY", (int)cocos2d::ui::EditBox::InputMode::ANY);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "EMAIL_ADDRESS", (int)cocos2d::ui::EditBox::InputMode::EMAIL_ADDRESS);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "NUMERIC", (int)cocos2d::ui::EditBox::InputMode::NUMERIC);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "PHONE_NUMBER", (int)cocos2d::ui::EditBox::InputMode::PHONE_NUMBER);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "URL", (int)cocos2d::ui::EditBox::InputMode::URL);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "DECIMAL", (int)cocos2d::ui::EditBox::InputMode::DECIMAL);
            binder.bind_const("Cocos2d", "EditBoxInputMode", "SINGLE_LINE", (int)cocos2d::ui::EditBox::InputMode::SINGLE_LINE);
            binder.bind_const("Cocos2d", "EditBoxInputFlag", "PASSWORD", (int)cocos2d::ui::EditBox::InputFlag::PASSWORD);
            binder.bind_const("Cocos2d", "EditBoxInputFlag", "SENSITIVE", (int)cocos2d::ui::EditBox::InputFlag::SENSITIVE);
            binder.bind_const("Cocos2d", "EditBoxInputFlag", "INITIAL_CAPS_WORD", (int)cocos2d::ui::EditBox::InputFlag::INITIAL_CAPS_WORD);
            binder.bind_const("Cocos2d", "EditBoxInputFlag", "INITIAL_CAPS_SENTENCE", (int)cocos2d::ui::EditBox::InputFlag::INITIAL_CAPS_SENTENCE);
            binder.bind_const("Cocos2d", "EditBoxInputFlag", "INTIAL_CAPS_ALL_CHARACTERS", (int)cocos2d::ui::EditBox::InputFlag::INTIAL_CAPS_ALL_CHARACTERS);

          }

    }
}
