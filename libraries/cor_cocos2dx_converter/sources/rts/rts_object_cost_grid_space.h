#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceNodeItnl;

        class RtsObjectCostGridSpaceNode
        {
            std::unique_ptr<RtsObjectCostGridSpaceNodeItnl> itnl;

        public:

            RtsObjectCostGridSpaceNode();
            virtual ~RtsObjectCostGridSpaceNode();

        };

        typedef std::shared_ptr<RtsObjectCostGridSpaceNode> RtsObjectCostGridSpaceNodeSP;
        typedef std::weak_ptr<RtsObjectCostGridSpaceNode> RtsObjectCostGridSpaceNodeWP;

        struct RtsObjectCostGridSpaceItnl;

        class RtsObjectCostGridSpace;

        typedef std::shared_ptr<RtsObjectCostGridSpace> RtsObjectCostGridSpaceSP;
        typedef std::weak_ptr<RtsObjectCostGridSpace> RtsObjectCostGridSpaceWP;
    
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
