#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_COST_GRID_SPACE_H_

#include "cor_type/sources/basic_types.h"
#include "cor_data_structure/sources/ai/cost_grid_space.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "rts_object_group.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        
        struct RtsObjectCostGridSpaceCell;
        typedef RtsObjectCostGridSpaceCell* RtsObjectCostGridSpaceCellPtr;

        struct RtsObjectCostGridSpaceCell
        {
            type::Vector2I position;
            RBool wall;
            RtsObjectSPArray a;
            RtsObjectCostGridSpaceCellPtr parent;
            RtsObjectCostGridSpaceCellPtr root;
            RFloat min_cost;

            RtsObjectCostGridSpaceCell();
        };

        struct RtsObjectCostGridSpaceItnl;

        class RtsObjectCostGridSpace;

        typedef std::shared_ptr<RtsObjectCostGridSpace> RtsObjectCostGridSpaceSP;
        typedef std::weak_ptr<RtsObjectCostGridSpace> RtsObjectCostGridSpaceWP;
    
        class RtsObjectCostGridSpace
        {
            std::unique_ptr<RtsObjectCostGridSpaceItnl> itnl;
        
        public:
        
            RtsObjectCostGridSpace();
            RtsObjectCostGridSpace(Collision2dNodeSP collision, data_structure::CostGridSpaceSP cost_grid_space, RtsObjectGroupSP object_group);
            virtual ~RtsObjectCostGridSpace();

            void set_wall_kind(RInt32 wall_kind);
            void set_index_convert(type::Vector2F scale, type::Vector2F offset);

            void add(RtsObjectSP o);
            void remove(RtsObjectSP o);

            void each_vertices(std::function<void(RtsObjectCostGridSpaceCellPtr)> callback);
            void each_edges(std::function<void(RtsObjectCostGridSpaceCellPtr, RtsObjectCostGridSpaceCellPtr, RFloat)> callback);
            void each_cell(std::function<void(RtsObjectCostGridSpaceCellPtr)> callback);

            void make_graph();

        };
    }
}

#endif
