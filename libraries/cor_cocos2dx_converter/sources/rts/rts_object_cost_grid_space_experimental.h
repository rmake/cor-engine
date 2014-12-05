#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_EXPERIMENTAL_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_EXPERIMENTAL_H_

#include "cor_type/sources/basic_types.h"
#include "CCDrawNode.h"
#include "rts_object_cost_grid_space.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "rts_object_group.h"

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

            static RString run1(cocos2d::DrawNode* draw_node);

            static RString run2(cocos2d::Node* root_node, cocos2d::DrawNode* draw_node, Collision2dNodeSP collision, data_structure::CostGridSpaceSP cost_grid_space, RtsObjectGroupSP object_group);
        };
    }
}

#endif
