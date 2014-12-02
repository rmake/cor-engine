#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_ITEM_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_ITEM_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceItemItnl;
    
        class RtsObjectCostGridSpaceItem
        {
            std::unique_ptr<RtsObjectCostGridSpaceItemItnl> itnl;
        
        public:
        
            RtsObjectCostGridSpaceItem();
            virtual ~RtsObjectCostGridSpaceItem();
        };
    }
}

#endif
