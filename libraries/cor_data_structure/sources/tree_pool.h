#ifndef ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_H_

#include "tree_pool_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct TreePoolItnl;
    
        class TreePool
        {
            std::unique_ptr<TreePoolItnl> itnl;
        
        public:
        
            TreePool();
            virtual ~TreePool();
        };
    }
}

#endif
