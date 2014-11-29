#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "cor_cocos2dx_converter/sources/easy_http_client.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_group.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_sensor.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_system.h"
#include "cor_cocos2dx_converter/sources/step_size_scene.h"
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
#include "../projects/cor_lib_test_main/cocos2d/extensions/cocos-ext.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        

    
        

        
        

    
        void Cocos2dxBind::bind(mruby_interface::MrubyState& mrb)
        {
            auto& binder = mrb.ref_binder();
            (void)binder;
            
            

            
            /*
            # {"
" + class_registrations.to_s}
            
            # {"
" + class_convertables.to_s}
            
            # {"
" + method_registrations.to_s}
            */
            
            

            
            
static const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
Cocos2dxBind_mruby_code[] = {
0x45,0x54,0x49,0x52,0x30,0x30,0x30,0x33,0xbc,0x51,0x00,0x00,0x00,0x48,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x00,0x2a,0x30,0x30,
0x30,0x30,0x00,0x00,0x00,0x22,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x02,
0x05,0x00,0x80,0x00,0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};

            
            
            mrb_load_irep(mrb.get_mrb(), Cocos2dxBind_mruby_code);
            
            
        }
    }
}

