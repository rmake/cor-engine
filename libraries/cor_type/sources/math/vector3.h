#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR3_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR3_H_

#include "vector3_tmpl.h"

namespace cor
{
    namespace type
    {
        struct Vector3_itnl;
    
        class Vector3
        {
            std::unique_ptr<Vector3_itnl> itnl;
        
        public:
        
            Vector3();
            virtual ~Vector3();
        };
        
    }
}

#endif
