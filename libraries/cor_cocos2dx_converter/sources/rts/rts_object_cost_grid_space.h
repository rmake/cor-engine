#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceItnl;
    
        class RtsObjectCostGridSpace
        {
            std::unique_ptr<RtsObjectCostGridSpaceItnl> itnl;
        
        public:
        
            RtsObjectCostGridSpace();
            virtual ~RtsObjectCostGridSpace();
        };
    }
}

#endif
