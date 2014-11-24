#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR2_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR2_TMPL_IMPL_H_

#include "vector2_tmpl.h"
#include "cor_system/sources/logger.h"
#include <math.h>

namespace cor
{
    namespace type
    {
        template<class T> Vector2Tmpl<T>::Vector2Tmpl()
        {
            this->x = (T)0.0;
            this->y = (T)0.0;
        }

        template<class T> Vector2Tmpl<T>::Vector2Tmpl(const T& x, const T& y)
        {
            this->x = x;
            this->y = y;
        }

        template<class T> Vector2Tmpl<T>::Vector2Tmpl(const Vector2Tmpl<T>& v)
        {
            x = (T)v.x;
            y = (T)v.y;
        }

        template<class T> Vector2Tmpl<T>::~Vector2Tmpl()
        {

        }

        template<class T> void Vector2Tmpl<T>::set(const T& x, const T& y)
        {
            this->x = x;
            this->y = y;
        }

        template<class T> typename Vector2Tmpl<T>::iterator Vector2Tmpl<T>::begin()
        {
            return &x;
        }

        template<class T> typename Vector2Tmpl<T>::iterator Vector2Tmpl<T>::end()
        {
            return &y + 1;
        }

        template<class T> typename Vector2Tmpl<T>::const_iterator Vector2Tmpl<T>::begin() const
        {
            return &x;
        }

        template<class T> typename Vector2Tmpl<T>::const_iterator Vector2Tmpl<T>::end() const
        {
            return &y + 1;
        }

        template<class T> RSize Vector2Tmpl<T>::size() const
        {
            return 2;
        }

        template<class T> T* Vector2Tmpl<T>::get_p()
        {
            return &x;
        }

        template<class T> const T* Vector2Tmpl<T>::get_p() const
        {
            return &x;
        }

        template<class T> T& Vector2Tmpl<T>::operator[](int i)
        {
            return *(&x + i);
        }

        template<class T> const T& Vector2Tmpl<T>::operator[](int i) const
        {
            return *(&x + i);
        }

        template<class T> T Vector2Tmpl<T>::get_square_magnitude() const
        {
            return x * x + y * y;
        }

        template<class T> T Vector2Tmpl<T>::get_magnitude() const
        {
            return sqrt(get_square_magnitude());
        }

        template<class T> RBool Vector2Tmpl<T>::normalize()
        {
            T sz;
            sz = get_magnitude();
            if(sz > (T)0.0)
            {
                *this *= 1.0f / sz;
                return rtrue;
            }
            return rfalse;
        }

        template<class T> T Vector2Tmpl<T>::dot(const Vector2Tmpl<T>& a) const
        {
            return x * a.x + y * a.y;
        }

        template<class T> T Vector2Tmpl<T>::cross(const Vector2Tmpl<T>& a) const
        {
            return x * a.y - y * a.x;
        }

        template<class T> T Vector2Tmpl<T>::distance(const Vector2Tmpl<T>& a) const
        {
            auto d = a - *this;
            return d.get_magnitude();
        }

        template<class T> Vector2Tmpl<T> operator +(const Vector2Tmpl<T>& a, const Vector2Tmpl<T>& b)
        {
            return Vector2Tmpl<T>(a.x + b.x, a.y + b.y);
        }

        template<class T> Vector2Tmpl<T> operator -(const Vector2Tmpl<T>& a, const Vector2Tmpl<T>& b)
        {
            return Vector2Tmpl<T>(a.x - b.x, a.y - b.y);
        }

        template<class T> Vector2Tmpl<T> operator *(const T& a, const Vector2Tmpl<T>& b)
        {
            return Vector2Tmpl<T>(a * b.x, a * b.y);
        }

        template<class T> Vector2Tmpl<T> operator *(const Vector2Tmpl<T>& a, const T& b)
        {
            return Vector2Tmpl<T>(a.x * b, a.y * b);
        }

        template<class T> Vector2Tmpl<T>& Vector2Tmpl<T>::operator *=(const T& a)
        {
            x *= a;
            y *= a;
            return *this;
        }

        template<class T> Vector2Tmpl<T>& Vector2Tmpl<T>::operator +=(const Vector2Tmpl<T>& a)
        {
            x += a.x;
            y += a.y;
            return *this;
        }

        template<class T> Vector2Tmpl<T> Vector2Tmpl<T>::operator-()
        {
            return Vector2Tmpl<T>(-x, -y);
        }

        template<class T>Vector2Tmpl<T> Vector2Tmpl<T>::zero()
        {
            Vector2Tmpl v;
            v.x = (T)0.0;
            v.y = (T)0.0;
            return v;
        }

        template<class T>Vector2Tmpl<T> Vector2Tmpl<T>::one()
        {
            Vector2Tmpl v;
            v.x = (T)1.0;
            v.y = (T)1.0;
            return v;
        }

        template<class T> Vector2Tmpl<T> Vector2Tmpl<T>::max_vec(const Vector2Tmpl<T>& v) const
        {
            Vector2Tmpl r;
            if(x >= v.x)
            {
                r.x = x;
            }
            else
            {
                r.x = v.x;
            }
            if(y >= v.y)
            {
                r.y = y;
            }
            else
            {
                r.y = v.y;
            }
            return r;
        }

        template<class T> Vector2Tmpl<T> Vector2Tmpl<T>::min_vec(const Vector2Tmpl<T>& v) const
        {
            Vector2Tmpl r;
            if(x >= v.x)
            {
                r.x = v.x;
            }
            else
            {
                r.x = x;
            }
            if(y >= v.y)
            {
                r.y = v.y;
            }
            else
            {
                r.y = y;
            }
            return r;
        }

        template<class T> RBool Vector2Tmpl<T>::all_less(const Vector2Tmpl<T>& v) const
        {
            if(x >= v.x) return rfalse;
            if(y >= v.y) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector2Tmpl<T>::some_less(const Vector2Tmpl<T>& v) const
        {
            if(x < v.x) return rtrue;
            if(y < v.y) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector2Tmpl<T>::all_greater(const Vector2Tmpl<T>& v) const
        {
            if(x <= v.x) return rfalse;
            if(y <= v.y) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector2Tmpl<T>::some_greater(const Vector2Tmpl<T>& v) const
        {
            if(x > v.x) return rtrue;
            if(y > v.y) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector2Tmpl<T>::all_less_equal(const Vector2Tmpl<T>& v) const
        {
            if(x > v.x) return rfalse;
            if(y > v.y) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector2Tmpl<T>::some_less_equal(const Vector2Tmpl<T>& v) const
        {
            if(x <= v.x) return rtrue;
            if(y <= v.y) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector2Tmpl<T>::all_greater_equal(const Vector2Tmpl<T>& v) const
        {
            if(x < v.x) return rfalse;
            if(y < v.y) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector2Tmpl<T>::some_greater_equal(const Vector2Tmpl<T>& v) const
        {
            if(x >= v.x) return rtrue;
            if(y >= v.y) return rtrue;
            return rfalse;
        }

        template<class T> T Vector2Tmpl<T>::sum()
        {
            return x + y;
        }
    }
}

#endif
