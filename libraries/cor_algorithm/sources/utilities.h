#ifndef ____COR_ALGORITHM_SOURCES_UTILITIES_H_
#define ____COR_ALGORITHM_SOURCES_UTILITIES_H_

#include "utilities_tmpl.h"

namespace cor
{
    namespace algorithm
    {
        


        struct UtilitiesItnl;
    
        class Utilities
        {
            std::unique_ptr<UtilitiesItnl> itnl;
        
        public:
        
            Utilities();
            virtual ~Utilities();
        };
    }
}

#endif
