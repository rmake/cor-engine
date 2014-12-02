#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_EXPERIMENTAL_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_EXPERIMENTAL_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceExperimentalItnl;
    
        class RtsObjectCostGridSpaceExperimental
        {
            std::unique_ptr<RtsObjectCostGridSpaceExperimentalItnl> itnl;
        
        public:
        
            RtsObjectCostGridSpaceExperimental();
            virtual ~RtsObjectCostGridSpaceExperimental();

            static RString run1();
        };
    }
}

#endif
