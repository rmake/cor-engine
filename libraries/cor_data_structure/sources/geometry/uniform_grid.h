#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_UNIFORM_GRID_H_

#include "uniform_grid_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct UniformGridItnl;
    
        class UniformGrid
        {
            std::unique_ptr<UniformGridItnl> itnl;
        
        public:
        
            UniformGrid();
            virtual ~UniformGrid();
        };
    }
}

#endif
