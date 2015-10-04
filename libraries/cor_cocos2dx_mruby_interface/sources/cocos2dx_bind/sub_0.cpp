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

          }

    }
}
