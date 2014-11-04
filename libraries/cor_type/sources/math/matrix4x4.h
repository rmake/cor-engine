#ifndef ____COR_TYPE_SOURCES_MATH_MATRIX4X4_H_
#define ____COR_TYPE_SOURCES_MATH_MATRIX4X4_H_

#include "matrix4x4_tmpl.h"


namespace cor
{
    namespace type
    {
        struct Matrix4x4Itnl;
    
        class Matrix4x4
        {
            std::unique_ptr<Matrix4x4Itnl> itnl;
        
        public:
        
            Matrix4x4();
            virtual ~Matrix4x4();
        };
    }
}

#endif
