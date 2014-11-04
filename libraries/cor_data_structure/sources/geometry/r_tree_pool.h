#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_H_

#include "r_tree_pool_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct RTreePoolItnl;
    
        class RTreePool
        {
            std::unique_ptr<RTreePoolItnl> itnl;
        
        public:
        
            RTreePool();
            virtual ~RTreePool();
        };
    }
}

#endif
