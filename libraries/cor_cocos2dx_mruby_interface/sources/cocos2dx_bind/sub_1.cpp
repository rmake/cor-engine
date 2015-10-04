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

        
          void Cocos2dxBind_bind_func_1(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialIn> >("Cocos2d", "EaseExponentialIn");
            binder.bind_custom_method("Cocos2d", "EaseExponentialIn", "valid?", Cocos2dxBind_EaseExponentialIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialOut> >("Cocos2d", "EaseExponentialOut");
            binder.bind_custom_method("Cocos2d", "EaseExponentialOut", "valid?", Cocos2dxBind_EaseExponentialOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseExponentialInOut> >("Cocos2d", "EaseExponentialInOut");
            binder.bind_custom_method("Cocos2d", "EaseExponentialInOut", "valid?", Cocos2dxBind_EaseExponentialInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineIn> >("Cocos2d", "EaseSineIn");
            binder.bind_custom_method("Cocos2d", "EaseSineIn", "valid?", Cocos2dxBind_EaseSineIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineOut> >("Cocos2d", "EaseSineOut");
            binder.bind_custom_method("Cocos2d", "EaseSineOut", "valid?", Cocos2dxBind_EaseSineOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseSineInOut> >("Cocos2d", "EaseSineInOut");
            binder.bind_custom_method("Cocos2d", "EaseSineInOut", "valid?", Cocos2dxBind_EaseSineInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElastic> >("Cocos2d", "EaseElastic");
            binder.bind_custom_method("Cocos2d", "EaseElastic", "valid?", Cocos2dxBind_EaseElastic_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticIn> >("Cocos2d", "EaseElasticIn");
            binder.bind_custom_method("Cocos2d", "EaseElasticIn", "valid?", Cocos2dxBind_EaseElasticIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticOut> >("Cocos2d", "EaseElasticOut");
            binder.bind_custom_method("Cocos2d", "EaseElasticOut", "valid?", Cocos2dxBind_EaseElasticOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseElasticInOut> >("Cocos2d", "EaseElasticInOut");
            binder.bind_custom_method("Cocos2d", "EaseElasticInOut", "valid?", Cocos2dxBind_EaseElasticInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounce> >("Cocos2d", "EaseBounce");
            binder.bind_custom_method("Cocos2d", "EaseBounce", "valid?", Cocos2dxBind_EaseBounce_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceIn> >("Cocos2d", "EaseBounceIn");
            binder.bind_custom_method("Cocos2d", "EaseBounceIn", "valid?", Cocos2dxBind_EaseBounceIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceOut> >("Cocos2d", "EaseBounceOut");
            binder.bind_custom_method("Cocos2d", "EaseBounceOut", "valid?", Cocos2dxBind_EaseBounceOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBounceInOut> >("Cocos2d", "EaseBounceInOut");
            binder.bind_custom_method("Cocos2d", "EaseBounceInOut", "valid?", Cocos2dxBind_EaseBounceInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackIn> >("Cocos2d", "EaseBackIn");
            binder.bind_custom_method("Cocos2d", "EaseBackIn", "valid?", Cocos2dxBind_EaseBackIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackOut> >("Cocos2d", "EaseBackOut");
            binder.bind_custom_method("Cocos2d", "EaseBackOut", "valid?", Cocos2dxBind_EaseBackOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBackInOut> >("Cocos2d", "EaseBackInOut");
            binder.bind_custom_method("Cocos2d", "EaseBackInOut", "valid?", Cocos2dxBind_EaseBackInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseBezierAction> >("Cocos2d", "EaseBezierAction");
            binder.bind_custom_method("Cocos2d", "EaseBezierAction", "valid?", Cocos2dxBind_EaseBezierAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionIn> >("Cocos2d", "EaseQuadraticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionIn", "valid?", Cocos2dxBind_EaseQuadraticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionOut> >("Cocos2d", "EaseQuadraticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionOut", "valid?", Cocos2dxBind_EaseQuadraticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuadraticActionInOut> >("Cocos2d", "EaseQuadraticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuadraticActionInOut", "valid?", Cocos2dxBind_EaseQuadraticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionIn> >("Cocos2d", "EaseQuarticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionIn", "valid?", Cocos2dxBind_EaseQuarticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionOut> >("Cocos2d", "EaseQuarticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionOut", "valid?", Cocos2dxBind_EaseQuarticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuarticActionInOut> >("Cocos2d", "EaseQuarticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuarticActionInOut", "valid?", Cocos2dxBind_EaseQuarticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionIn> >("Cocos2d", "EaseQuinticActionIn");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionIn", "valid?", Cocos2dxBind_EaseQuinticActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionOut> >("Cocos2d", "EaseQuinticActionOut");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionOut", "valid?", Cocos2dxBind_EaseQuinticActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseQuinticActionInOut> >("Cocos2d", "EaseQuinticActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseQuinticActionInOut", "valid?", Cocos2dxBind_EaseQuinticActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionIn> >("Cocos2d", "EaseCircleActionIn");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionIn", "valid?", Cocos2dxBind_EaseCircleActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionOut> >("Cocos2d", "EaseCircleActionOut");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionOut", "valid?", Cocos2dxBind_EaseCircleActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCircleActionInOut> >("Cocos2d", "EaseCircleActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseCircleActionInOut", "valid?", Cocos2dxBind_EaseCircleActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionIn> >("Cocos2d", "EaseCubicActionIn");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionIn", "valid?", Cocos2dxBind_EaseCubicActionIn_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionOut> >("Cocos2d", "EaseCubicActionOut");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionOut", "valid?", Cocos2dxBind_EaseCubicActionOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EaseCubicActionInOut> >("Cocos2d", "EaseCubicActionInOut");
            binder.bind_custom_method("Cocos2d", "EaseCubicActionInOut", "valid?", Cocos2dxBind_EaseCubicActionInOut_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionInstant> >("Cocos2d", "ActionInstant");
            binder.bind_custom_method("Cocos2d", "ActionInstant", "valid?", Cocos2dxBind_ActionInstant_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Show> >("Cocos2d", "Show");
            binder.bind_custom_method("Cocos2d", "Show", "valid?", Cocos2dxBind_Show_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Hide> >("Cocos2d", "Hide");
            binder.bind_custom_method("Cocos2d", "Hide", "valid?", Cocos2dxBind_Hide_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ToggleVisibility> >("Cocos2d", "ToggleVisibility");
            binder.bind_custom_method("Cocos2d", "ToggleVisibility", "valid?", Cocos2dxBind_ToggleVisibility_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RemoveSelf> >("Cocos2d", "RemoveSelf");
            binder.bind_custom_method("Cocos2d", "RemoveSelf", "valid?", Cocos2dxBind_RemoveSelf_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX> >("Cocos2d", "FlipX");
            binder.bind_custom_method("Cocos2d", "FlipX", "valid?", Cocos2dxBind_FlipX_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY> >("Cocos2d", "FlipY");
            binder.bind_custom_method("Cocos2d", "FlipY", "valid?", Cocos2dxBind_FlipY_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Place> >("Cocos2d", "Place");
            binder.bind_custom_method("Cocos2d", "Place", "valid?", Cocos2dxBind_Place_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFunc> >("Cocos2d", "CallFunc");
            binder.bind_custom_method("Cocos2d", "CallFunc", "valid?", Cocos2dxBind_CallFunc_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::CallFuncN> >("Cocos2d", "CallFuncN");
            binder.bind_custom_method("Cocos2d", "CallFuncN", "valid?", Cocos2dxBind_CallFuncN_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::GridAction> >("Cocos2d", "GridAction");
            binder.bind_custom_method("Cocos2d", "GridAction", "valid?", Cocos2dxBind_GridAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Grid3DAction> >("Cocos2d", "Grid3DAction");
            binder.bind_custom_method("Cocos2d", "Grid3DAction", "valid?", Cocos2dxBind_Grid3DAction_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelDeccelAmplitude> >("Cocos2d", "AccelDeccelAmplitude");
            binder.bind_custom_method("Cocos2d", "AccelDeccelAmplitude", "valid?", Cocos2dxBind_AccelDeccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AccelAmplitude> >("Cocos2d", "AccelAmplitude");
            binder.bind_custom_method("Cocos2d", "AccelAmplitude", "valid?", Cocos2dxBind_AccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DeccelAmplitude> >("Cocos2d", "DeccelAmplitude");
            binder.bind_custom_method("Cocos2d", "DeccelAmplitude", "valid?", Cocos2dxBind_DeccelAmplitude_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::StopGrid> >("Cocos2d", "StopGrid");
            binder.bind_custom_method("Cocos2d", "StopGrid", "valid?", Cocos2dxBind_StopGrid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ReuseGrid> >("Cocos2d", "ReuseGrid");
            binder.bind_custom_method("Cocos2d", "ReuseGrid", "valid?", Cocos2dxBind_ReuseGrid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves3D> >("Cocos2d", "Waves3D");
            binder.bind_custom_method("Cocos2d", "Waves3D", "valid?", Cocos2dxBind_Waves3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipX3D> >("Cocos2d", "FlipX3D");
            binder.bind_custom_method("Cocos2d", "FlipX3D", "valid?", Cocos2dxBind_FlipX3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FlipY3D> >("Cocos2d", "FlipY3D");
            binder.bind_custom_method("Cocos2d", "FlipY3D", "valid?", Cocos2dxBind_FlipY3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Lens3D> >("Cocos2d", "Lens3D");
            binder.bind_custom_method("Cocos2d", "Lens3D", "valid?", Cocos2dxBind_Lens3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ripple3D> >("Cocos2d", "Ripple3D");
            binder.bind_custom_method("Cocos2d", "Ripple3D", "valid?", Cocos2dxBind_Ripple3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Shaky3D> >("Cocos2d", "Shaky3D");
            binder.bind_custom_method("Cocos2d", "Shaky3D", "valid?", Cocos2dxBind_Shaky3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Liquid> >("Cocos2d", "Liquid");
            binder.bind_custom_method("Cocos2d", "Liquid", "valid?", Cocos2dxBind_Liquid_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Waves> >("Cocos2d", "Waves");
            binder.bind_custom_method("Cocos2d", "Waves", "valid?", Cocos2dxBind_Waves_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Twirl> >("Cocos2d", "Twirl");
            binder.bind_custom_method("Cocos2d", "Twirl", "valid?", Cocos2dxBind_Twirl_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> >("Cocos2d", "ActionManager");
            binder.bind_custom_method("Cocos2d", "ActionManager", "valid?", Cocos2dxBind_ActionManager_valid_question);
            binder.bind_static_method("Cocos2d", "ActionManager", "create", Cocos2dxBind_ActionManager_create);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PageTurn3D> >("Cocos2d", "PageTurn3D");
            binder.bind_custom_method("Cocos2d", "PageTurn3D", "valid?", Cocos2dxBind_PageTurn3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressTo> >("Cocos2d", "ProgressTo");
            binder.bind_custom_method("Cocos2d", "ProgressTo", "valid?", Cocos2dxBind_ProgressTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProgressFromTo> >("Cocos2d", "ProgressFromTo");
            binder.bind_custom_method("Cocos2d", "ProgressFromTo", "valid?", Cocos2dxBind_ProgressFromTo_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShakyTiles3D> >("Cocos2d", "ShakyTiles3D");
            binder.bind_custom_method("Cocos2d", "ShakyTiles3D", "valid?", Cocos2dxBind_ShakyTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShatteredTiles3D> >("Cocos2d", "ShatteredTiles3D");
            binder.bind_custom_method("Cocos2d", "ShatteredTiles3D", "valid?", Cocos2dxBind_ShatteredTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ShuffleTiles> >("Cocos2d", "ShuffleTiles");
            binder.bind_custom_method("Cocos2d", "ShuffleTiles", "valid?", Cocos2dxBind_ShuffleTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutTRTiles> >("Cocos2d", "FadeOutTRTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutTRTiles", "valid?", Cocos2dxBind_FadeOutTRTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutBLTiles> >("Cocos2d", "FadeOutBLTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutBLTiles", "valid?", Cocos2dxBind_FadeOutBLTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutUpTiles> >("Cocos2d", "FadeOutUpTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutUpTiles", "valid?", Cocos2dxBind_FadeOutUpTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::FadeOutDownTiles> >("Cocos2d", "FadeOutDownTiles");
            binder.bind_custom_method("Cocos2d", "FadeOutDownTiles", "valid?", Cocos2dxBind_FadeOutDownTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TurnOffTiles> >("Cocos2d", "TurnOffTiles");
            binder.bind_custom_method("Cocos2d", "TurnOffTiles", "valid?", Cocos2dxBind_TurnOffTiles_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::WavesTiles3D> >("Cocos2d", "WavesTiles3D");
            binder.bind_custom_method("Cocos2d", "WavesTiles3D", "valid?", Cocos2dxBind_WavesTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::JumpTiles3D> >("Cocos2d", "JumpTiles3D");
            binder.bind_custom_method("Cocos2d", "JumpTiles3D", "valid?", Cocos2dxBind_JumpTiles3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitRows> >("Cocos2d", "SplitRows");
            binder.bind_custom_method("Cocos2d", "SplitRows", "valid?", Cocos2dxBind_SplitRows_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SplitCols> >("Cocos2d", "SplitCols");
            binder.bind_custom_method("Cocos2d", "SplitCols", "valid?", Cocos2dxBind_SplitCols_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AtlasNode> >("Cocos2d", "AtlasNode");
            binder.bind_custom_method("Cocos2d", "AtlasNode", "valid?", Cocos2dxBind_AtlasNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ClippingNode> >("Cocos2d", "ClippingNode");
            binder.bind_custom_method("Cocos2d", "ClippingNode", "valid?", Cocos2dxBind_ClippingNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::LabelAtlas> >("Cocos2d", "LabelAtlas");
            binder.bind_custom_method("Cocos2d", "LabelAtlas", "valid?", Cocos2dxBind_LabelAtlas_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::MotionStreak> >("Cocos2d", "MotionStreak");
            binder.bind_custom_method("Cocos2d", "MotionStreak", "valid?", Cocos2dxBind_MotionStreak_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystem> >("Cocos2d", "ParticleSystem");
            binder.bind_custom_method("Cocos2d", "ParticleSystem", "valid?", Cocos2dxBind_ParticleSystem_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ParticleSystemQuad> >("Cocos2d", "ParticleSystemQuad");
            binder.bind_custom_method("Cocos2d", "ParticleSystemQuad", "valid?", Cocos2dxBind_ParticleSystemQuad_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ProtectedNode> >("Cocos2d", "ProtectedNode");
            binder.bind_custom_method("Cocos2d", "ProtectedNode", "valid?", Cocos2dxBind_ProtectedNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::RenderTexture> >("Cocos2d", "RenderTexture");
            binder.bind_custom_method("Cocos2d", "RenderTexture", "valid?", Cocos2dxBind_RenderTexture_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Camera> >("Cocos2d", "Camera");
            binder.bind_custom_method("Cocos2d", "Camera", "valid?", Cocos2dxBind_Camera_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::BaseLight> >("Cocos2d", "BaseLight");
            binder.bind_custom_method("Cocos2d", "BaseLight", "valid?", Cocos2dxBind_BaseLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::DirectionLight> >("Cocos2d", "DirectionLight");
            binder.bind_custom_method("Cocos2d", "DirectionLight", "valid?", Cocos2dxBind_DirectionLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AmbientLight> >("Cocos2d", "AmbientLight");
            binder.bind_custom_method("Cocos2d", "AmbientLight", "valid?", Cocos2dxBind_AmbientLight_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextureCache> >("Cocos2d", "TextureCache");
            binder.bind_custom_method("Cocos2d", "TextureCache", "valid?", Cocos2dxBind_TextureCache_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShape> >("Cocos2d", "PhysicsShape");
            binder.bind_custom_method("Cocos2d", "PhysicsShape", "valid?", Cocos2dxBind_PhysicsShape_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeCircle> >("Cocos2d", "PhysicsShapeCircle");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeCircle", "valid?", Cocos2dxBind_PhysicsShapeCircle_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapePolygon> >("Cocos2d", "PhysicsShapePolygon");
            binder.bind_custom_method("Cocos2d", "PhysicsShapePolygon", "valid?", Cocos2dxBind_PhysicsShapePolygon_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeBox> >("Cocos2d", "PhysicsShapeBox");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeBox", "valid?", Cocos2dxBind_PhysicsShapeBox_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeSegment> >("Cocos2d", "PhysicsShapeEdgeSegment");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeSegment", "valid?", Cocos2dxBind_PhysicsShapeEdgeSegment_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgePolygon> >("Cocos2d", "PhysicsShapeEdgePolygon");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgePolygon", "valid?", Cocos2dxBind_PhysicsShapeEdgePolygon_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeBox> >("Cocos2d", "PhysicsShapeEdgeBox");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeBox", "valid?", Cocos2dxBind_PhysicsShapeEdgeBox_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsShapeEdgeChain> >("Cocos2d", "PhysicsShapeEdgeChain");
            binder.bind_custom_method("Cocos2d", "PhysicsShapeEdgeChain", "valid?", Cocos2dxBind_PhysicsShapeEdgeChain_valid_question);

          }

    }
}
