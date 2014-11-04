#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR2_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR2_H_

#include "vector2_tmpl.h"


namespace cor
{
    namespace type
    {
        struct Vector2Itnl;
    
        class Vector2
        {
            std::unique_ptr<Vector2Itnl> itnl;
        
        public:
        
            Vector2();
            virtual ~Vector2();
        };
    }
}

#endif
