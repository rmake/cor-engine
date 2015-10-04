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
