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

        
          void Cocos2dxBind_bind_func_2(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> >("Cocos2d", "PhysicsBody");
            binder.bind_custom_method("Cocos2d", "PhysicsBody", "valid?", Cocos2dxBind_PhysicsBody_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> >("Cocos2d", "PhysicsContact");
            binder.bind_custom_method("Cocos2d", "PhysicsContact", "valid?", Cocos2dxBind_PhysicsContact_valid_question);
            binder.bind_class<cocos2d::PhysicsContactPreSolve* >("Cocos2d", "PhysicsContactPreSolve");
            binder.bind_class<cocos2d::PhysicsContactPostSolve* >("Cocos2d", "PhysicsContactPostSolve");
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> >("Cocos2d", "EventListenerPhysicsContact");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContact", "valid?", Cocos2dxBind_EventListenerPhysicsContact_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> >("Cocos2d", "EventListenerPhysicsContactWithBodies");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithBodies", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithBodies_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> >("Cocos2d", "EventListenerPhysicsContactWithShapes");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithShapes", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithShapes_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> >("Cocos2d", "EventListenerPhysicsContactWithGroup");
            binder.bind_custom_method("Cocos2d", "EventListenerPhysicsContactWithGroup", "valid?", Cocos2dxBind_EventListenerPhysicsContactWithGroup_valid_question);
            binder.bind_class<cocos2d::PhysicsJoint* >("Cocos2d", "PhysicsJoint");
            binder.bind_class<cocos2d::PhysicsJointFixed* >("Cocos2d", "PhysicsJointFixed");
            binder.bind_class<cocos2d::PhysicsWorld* >("Cocos2d", "PhysicsWorld");
            binder.bind_class<cocos2d::FileUtils* >("Cocos2d", "FileUtils");
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> >("Cocos2d", "AnimationCache");
            binder.bind_custom_method("Cocos2d", "AnimationCache", "valid?", Cocos2dxBind_AnimationCache_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> >("Cocos2d", "SpriteBatchNode");
            binder.bind_custom_method("Cocos2d", "SpriteBatchNode", "valid?", Cocos2dxBind_SpriteBatchNode_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> >("Cocos2d", "TextFieldTTF");
            binder.bind_custom_method("Cocos2d", "TextFieldTTF", "valid?", Cocos2dxBind_TextFieldTTF_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> >("Cocos2d", "TMXObjectGroup");
            binder.bind_custom_method("Cocos2d", "TMXObjectGroup", "valid?", Cocos2dxBind_TMXObjectGroup_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> >("Cocos2d", "TMXLayer");
            binder.bind_custom_method("Cocos2d", "TMXLayer", "valid?", Cocos2dxBind_TMXLayer_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> >("Cocos2d", "TMXTiledMap");
            binder.bind_custom_method("Cocos2d", "TMXTiledMap", "valid?", Cocos2dxBind_TMXTiledMap_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> >("Cocos2d", "Mesh");
            binder.bind_custom_method("Cocos2d", "Mesh", "valid?", Cocos2dxBind_Mesh_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> >("Cocos2d", "Sprite3D");
            binder.bind_custom_method("Cocos2d", "Sprite3D", "valid?", Cocos2dxBind_Sprite3D_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> >("Cocos2dUi", "Widget");
            binder.bind_custom_method("Cocos2dUi", "Widget", "valid?", Cocos2dxBind_Widget_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Scale9Sprite> >("Cocos2dUi", "Scale9Sprite");
            binder.bind_custom_method("Cocos2dUi", "Scale9Sprite", "valid?", Cocos2dxBind_Scale9Sprite_valid_question);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::EditBox> >("Cocos2dUi", "EditBox");
            binder.bind_custom_method("Cocos2dUi", "EditBox", "valid?", Cocos2dxBind_EditBox_valid_question);
            binder.bind_class<CocosDenshion::SimpleAudioEngine* >("Cocosdenshion", "SimpleAudioEngine");
            binder.bind_class<cocos2d::Color4B >("Cocos2d", "Color4B");
            binder.bind_static_method("Cocos2d", "Color4B", "create_0", Cocos2dxBind_Color4B_create_0);
            binder.bind_static_method("Cocos2d", "Color4B", "create_1", Cocos2dxBind_Color4B_create_1);
            binder.bind_static_method("Cocos2d", "Color4B", "create_2", Cocos2dxBind_Color4B_create_2);
            binder.bind_static_method("Cocos2d", "Color4B", "create_3", Cocos2dxBind_Color4B_create_3);
            binder.bind_static_method("Cocos2d", "Color4B", "create_4", Cocos2dxBind_Color4B_create_4);
            binder.bind_class<cocos2d::Tex2F >("Cocos2d", "Tex2F");
            binder.bind_static_method("Cocos2d", "Tex2F", "create_0", Cocos2dxBind_Tex2F_create_0);
            binder.bind_static_method("Cocos2d", "Tex2F", "create_1", Cocos2dxBind_Tex2F_create_1);
            binder.bind_static_method("Cocos2d", "Tex2F", "create_2", Cocos2dxBind_Tex2F_create_2);
            binder.bind_class<cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventKeyboard> >("Cocos2d", "EventKeyboard");
            binder.bind_custom_method("Cocos2d", "EventKeyboard", "valid?", Cocos2dxBind_EventKeyboard_valid_question);
            binder.bind_class<cocos2d::_ttfConfig >("Cocos2d", "_ttfConfig");
            binder.bind_class<cocos2d::PhysicsMaterial >("Cocos2d", "PhysicsMaterial");
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_0", Cocos2dxBind_PhysicsMaterial_create_0);
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_1", Cocos2dxBind_PhysicsMaterial_create_1);
            binder.bind_static_method("Cocos2d", "PhysicsMaterial", "create_2", Cocos2dxBind_PhysicsMaterial_create_2);
            binder.bind_class<cocos2d::PhysicsContactData* >("Cocos2d", "PhysicsContactData");
            binder.bind_class<cocos2d::PhysicsRayCastInfo >("Cocos2d", "PhysicsRayCastInfo");
            binder.bind_static_method("Cocos2d", "PhysicsRayCastInfo", "create", Cocos2dxBind_PhysicsRayCastInfo_create);

          }

    }
}
