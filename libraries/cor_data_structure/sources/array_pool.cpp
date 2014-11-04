#include "array_pool_tmpl_impl.h"

#include "array_pool.h"

namespace cor
{
    namespace data_structure
    {
        struct ArrayPoolItnl
        {
            
        };
        
        ArrayPool::ArrayPool() : itnl(new ArrayPoolItnl())
        {
            
        }
        
        ArrayPool::~ArrayPool()
        {
            
        }
    }
}
