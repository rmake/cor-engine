#include "matrix4x4_tmpl_impl.h"

#include "matrix4x4.h"

namespace cor
{
    namespace type
    {
        struct Matrix4x4Itnl
        {
            
        };
        
        Matrix4x4::Matrix4x4() : itnl(new Matrix4x4Itnl())
        {
            
        }
        
        Matrix4x4::~Matrix4x4()
        {
            
        }

        template class Matrix4x4Tmpl<RFloat>;
        template class Matrix4x4Tmpl<RInt32>;

        template Matrix4x4Tmpl<RFloat> operator *(const Matrix4x4Tmpl<RFloat>& a, const Matrix4x4Tmpl<RFloat>& b);
        template Matrix4x4Tmpl<RInt32> operator *(const Matrix4x4Tmpl<RInt32>& a, const Matrix4x4Tmpl<RInt32>& b);
    }
}
