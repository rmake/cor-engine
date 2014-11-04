#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR4_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR4_H_

#include "vector4_tmpl.h"


namespace cor
{
    namespace type
    {
        struct Vector4Itnl;
    
        class Vector4
        {
            std::unique_ptr<Vector4Itnl> itnl;
        
        public:
        
            Vector4();
            virtual ~Vector4();
        };
    }
}

#endif
