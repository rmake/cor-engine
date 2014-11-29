#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS2DX_BIND_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS2DX_BIND_H_

#include "cor_mruby_interface/sources/mruby_state.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        class Cocos2dxBind
        {
        public:
            
            static void bind(mruby_interface::MrubyState& mrb);
        
        };
        
        
    }
}

#endif
