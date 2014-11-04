#include "vector4_tmpl_impl.h"

#include "vector4.h"

namespace cor
{
    namespace type
    {
        struct Vector4Itnl
        {
            
        };
        
        Vector4::Vector4() : itnl(new Vector4Itnl())
        {
            
        }
        
        Vector4::~Vector4()
        {
            
        }

        template class Vector4Tmpl<RFloat>;
        template class Vector4Tmpl<RInt32>;

        template Vector4Tmpl<RFloat> operator +(const Vector4Tmpl<RFloat>& a, const Vector4Tmpl<RFloat>& b);
        template Vector4Tmpl<RFloat> operator -(const Vector4Tmpl<RFloat>& a, const Vector4Tmpl<RFloat>& b);
        template Vector4Tmpl<RFloat> operator *(const RFloat& a, const Vector4Tmpl<RFloat>& b);
        template Vector4Tmpl<RFloat> operator *(const Vector4Tmpl<RFloat>& a, const RFloat& b);

        template Vector4Tmpl<RInt32> operator +(const Vector4Tmpl<RInt32>& a, const Vector4Tmpl<RInt32>& b);
        template Vector4Tmpl<RInt32> operator -(const Vector4Tmpl<RInt32>& a, const Vector4Tmpl<RInt32>& b);
        template Vector4Tmpl<RInt32> operator *(const RInt32& a, const Vector4Tmpl<RInt32>& b);
        template Vector4Tmpl<RInt32> operator *(const Vector4Tmpl<RInt32>& a, const RInt32& b);
    }
}
