#ifndef ____COR_MRUBY_INTERFACE_SOURCES_BASIC_BIND_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_BASIC_BIND_H_

#include "cor_mruby_interface/sources/mruby_state.h"

namespace cor
{
    namespace mruby_interface
    {
        class BasicBind
        {
        public:
            
            static void bind(mruby_interface::MrubyState& mrb);
        
        };
        
        
    }
}

#endif
