
#include "rts_object_cost_grid_space.h"

namespace cor
{
    namespace cocos2dx_converter
    {

        struct RtsObjectCostGridSpaceNodeItnl
        {


        };

        RtsObjectCostGridSpaceNode::RtsObjectCostGridSpaceNode() : itnl(new RtsObjectCostGridSpaceNodeItnl())
        {

        }

        RtsObjectCostGridSpaceNode::~RtsObjectCostGridSpaceNode()
        {
            
        }


        struct RtsObjectCostGridSpaceItnl
        {
            Collision2dNodeSP collision;
            data_structure::CostGridSpaceSP cost_grid_space;
            RtsObjectGroupSP object_group;
        };
        
        RtsObjectCostGridSpace::RtsObjectCostGridSpace() : itnl(new RtsObjectCostGridSpaceItnl())
        {
            
        }

        RtsObjectCostGridSpace::RtsObjectCostGridSpace(Collision2dNodeSP collision, data_structure::CostGridSpaceSP cost_grid_space, RtsObjectGroupSP object_group) : itnl(new RtsObjectCostGridSpaceItnl())
        {
            itnl->collision = collision;
            itnl->cost_grid_space = cost_grid_space;
            itnl->object_group = object_group;
        }
        
        RtsObjectCostGridSpace::~RtsObjectCostGridSpace()
        {
            
        }
    }
}
