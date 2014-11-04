#include "vector3_tmpl_impl.h"
#include "vector3.h"

namespace cor
{
    namespace type
    {
        struct Vector3_itnl
        {
            
        };
        
        Vector3::Vector3() : itnl(new Vector3_itnl())
        {
            
        }
        
        Vector3::~Vector3()
        {
            
        }

        template class Vector3Tmpl<RFloat>;
        template class Vector3Tmpl<RInt32>;

        template Vector3Tmpl<RFloat> operator +(const Vector3Tmpl<RFloat>& a, const Vector3Tmpl<RFloat>& b);
        template Vector3Tmpl<RFloat> operator -(const Vector3Tmpl<RFloat>& a, const Vector3Tmpl<RFloat>& b);
        template Vector3Tmpl<RFloat> operator *(const RFloat& a, const Vector3Tmpl<RFloat>& b);
        template Vector3Tmpl<RFloat> operator *(const Vector3Tmpl<RFloat>& a, const RFloat& b);

        template Vector3Tmpl<RInt32> operator +(const Vector3Tmpl<RInt32>& a, const Vector3Tmpl<RInt32>& b);
        template Vector3Tmpl<RInt32> operator -(const Vector3Tmpl<RInt32>& a, const Vector3Tmpl<RInt32>& b);
        template Vector3Tmpl<RInt32> operator *(const RInt32& a, const Vector3Tmpl<RInt32>& b);
        template Vector3Tmpl<RInt32> operator *(const Vector3Tmpl<RInt32>& a, const RInt32& b);
    }
}
