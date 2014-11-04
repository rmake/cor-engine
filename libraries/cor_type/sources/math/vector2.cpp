#include "vector2_tmpl_impl.h"

#include "vector2.h"

namespace cor
{
    namespace type
    {
        struct Vector2Itnl
        {
            
        };
        
        Vector2::Vector2() : itnl(new Vector2Itnl())
        {
            
        }
        
        Vector2::~Vector2()
        {
            
        }

        template class Vector2Tmpl<RFloat>;
        template class Vector2Tmpl<RInt32>;

        template Vector2Tmpl<RFloat> operator +(const Vector2Tmpl<RFloat>& a, const Vector2Tmpl<RFloat>& b);
        template Vector2Tmpl<RFloat> operator -(const Vector2Tmpl<RFloat>& a, const Vector2Tmpl<RFloat>& b);
        template Vector2Tmpl<RFloat> operator *(const RFloat& a, const Vector2Tmpl<RFloat>& b);
        template Vector2Tmpl<RFloat> operator *(const Vector2Tmpl<RFloat>& a, const RFloat& b);

        template Vector2Tmpl<RInt32> operator +(const Vector2Tmpl<RInt32>& a, const Vector2Tmpl<RInt32>& b);
        template Vector2Tmpl<RInt32> operator -(const Vector2Tmpl<RInt32>& a, const Vector2Tmpl<RInt32>& b);
        template Vector2Tmpl<RInt32> operator *(const RInt32& a, const Vector2Tmpl<RInt32>& b);
        template Vector2Tmpl<RInt32> operator *(const Vector2Tmpl<RInt32>& a, const RInt32& b);
    }
}
