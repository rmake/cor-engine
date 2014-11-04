#include "mruby_array_tmpl_impl.h"

#include "mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyArrayItnl
        {
            
        };
        
        MrubyArray::MrubyArray() : itnl(new MrubyArrayItnl())
        {
            
        }
        
        MrubyArray::~MrubyArray()
        {
            
        }
    }
}
