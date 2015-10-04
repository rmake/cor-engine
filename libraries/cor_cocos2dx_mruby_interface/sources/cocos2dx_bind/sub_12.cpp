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

        
          void Cocos2dxBind_bind_func_12(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("Cocos2d::PhysicsBody", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::EventCustom");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::PhysicsContact", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsJointFixed", "Cocos2d::PhysicsJoint");
            binder.add_convertable("Cocos2d::AnimationCache", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::SpriteBatchNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::SpriteBatchNode", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Label");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXObjectGroup", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::SpriteBatchNode");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXTiledMap", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TMXTiledMap", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Mesh", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Sprite3D", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Sprite3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::ProtectedNode");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::Scale9Sprite", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::Scale9Sprite", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2dUi::Widget");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::ProtectedNode");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventKeyboard", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::EventKeyboard", "Cocos2d::Ref");

          }

    }
}
