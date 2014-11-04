#ifndef ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_ARRAY_POOL_H_

#include "array_pool_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct ArrayPoolItnl;
    
        class ArrayPool
        {
            std::unique_ptr<ArrayPoolItnl> itnl;
        
        public:
        
            ArrayPool();
            virtual ~ArrayPool();
        };
    }
}

#endif
