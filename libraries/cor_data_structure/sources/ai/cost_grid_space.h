#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_COST_GRID_SPACE_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_COST_GRID_SPACE_H_

#include "cost_grid_space_tmpl.h"
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        struct CostGridSpaceItnl;

        struct CostGridSpaceItem
        {
            RBool terminated;
            RBool passable;
            RFloat enter_cost;

            RBool passed;
            RFloat min_cost;
            type::Vector2I parent;

            CostGridSpaceItem();
        };

        typedef CostGridSpaceItem* CostGridSpaceItemPtr;

        typedef std::vector<type::Vector2I> PassedPositionArray;

        class CostGridSpace;
        typedef std::shared_ptr<CostGridSpace> CostGridSpaceSP;
        typedef std::weak_ptr<CostGridSpace> CostGridSpaceWP;

        struct CostGridSpacePath
        {
            RFloat cost;
            PassedPositionArray path;
        };

        class CostGridSpaceNeighborMode
        {
        public:
            enum Enum{
                L1,
                L2
            };
        };
    
        class CostGridSpace
        {
            std::unique_ptr<CostGridSpaceItnl> itnl;
        
        public:

            
        
            CostGridSpace();
            virtual ~CostGridSpace();

            void set_max_cost(RFloat max_cost);
            void set_neighbor_mode(CostGridSpaceNeighborMode::Enum neighbor_mode);
            CostGridSpaceNeighborMode::Enum get_neighbor_mode();
            void resize(const type::Vector2I& size);
            void resize(RInt32 w, RInt32 h);
            type::Vector2I get_size();
            RInt32 get_width();
            RInt32 get_height();

            bool is_valid(const type::Vector2I& position);
            CostGridSpaceItem& ref(const type::Vector2I& position);
            void set(const type::Vector2I& position, const CostGridSpaceItem& v);
            const CostGridSpaceItem& get(const type::Vector2I& position) const;

            CostGridSpacePath search_nearest_path(const type::Vector2I& position);
            type::Vector2I get_first_corner(const CostGridSpacePath& path);
        };
    }
}

#endif
