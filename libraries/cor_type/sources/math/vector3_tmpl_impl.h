#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR3_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR3_TMPL_IMPL_H_

#include "vector3_tmpl.h"
#include "vector2_tmpl_impl.h"

namespace cor
{
    namespace type
    {
        template<class T> Vector3Tmpl<T>::Vector3Tmpl()
        {
            this->x = (T)0.0;
            this->y = (T)0.0;
            this->z = (T)0.0;
        }

        template<class T> Vector3Tmpl<T>::Vector3Tmpl(const T& x, const T& y, const T& z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        template<class T> Vector3Tmpl<T>::Vector3Tmpl(const Vector3Tmpl<T>& v)
        {
            x = (T)v.x;
            y = (T)v.y;
            z = (T)v.z;
        }

        template<class T> Vector3Tmpl<T>::~Vector3Tmpl()
        {

        }

        template<class T> void Vector3Tmpl<T>::set(const T& x, const T& y, const T& z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        template<class T> typename Vector3Tmpl<T>::iterator Vector3Tmpl<T>::begin()
        {
            return &x;
        }

        template<class T> typename Vector3Tmpl<T>::iterator Vector3Tmpl<T>::end()
        {
            return &z + 1;
        }

        template<class T> typename Vector3Tmpl<T>::const_iterator Vector3Tmpl<T>::begin() const
        {
            return &x;
        }

        template<class T> typename Vector3Tmpl<T>::const_iterator Vector3Tmpl<T>::end() const
        {
            return &z + 1;
        }

        template<class T> RSize Vector3Tmpl<T>::size() const
        {
            return 3;
        }

        template<class T> T* Vector3Tmpl<T>::get_p()
        {
            return &x;
        }

        template<class T> const T* Vector3Tmpl<T>::get_p() const
        {
            return &x;
        }

        template<class T> T& Vector3Tmpl<T>::operator[](int i)
        {
            return *(&x + i);
        }

        template<class T> const T& Vector3Tmpl<T>::operator[](int i) const
        {
            return *(&x + i);
        }

        template<class T> T Vector3Tmpl<T>::get_square_magnitude() const
        {
            return x * x + y * y + z * z;
        }

        template<class T> T Vector3Tmpl<T>::get_magnitude() const
        {
            return sqrt(get_square_magnitude());
        }

        template<class T> typename Vector3Tmpl<T>::Vector2T& Vector3Tmpl<T>::xy()
        {
            return *(Vector2T*)&x;
        }

        template<class T> const typename Vector3Tmpl<T>::Vector2T& Vector3Tmpl<T>::xy() const
        {
            return *(Vector2T*)&x;
        }

        template<class T> RBool Vector3Tmpl<T>::normalize()
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

        template<class T> T Vector3Tmpl<T>::dot(const Vector3Tmpl<T>& a) const
        {
            return x * a.x + y * a.y + z * a.z;
        }

        template<class T> Vector3Tmpl<T> Vector3Tmpl<T>::cross(const Vector3Tmpl<T>& a) const
        {
            Vector3Tmpl<T> c;
            c.x = y * a.z - z * a.y;
            c.y = z * a.x - x * a.z;
            c.z = x * a.y - y * a.x;
            return c;
        }

        template<class T> Vector3Tmpl<T> operator +(const Vector3Tmpl<T>& a, const Vector3Tmpl<T>& b)
        {
            return Vector3Tmpl<T>(a.x + b.x, a.y + b.y, a.z + b.z);
        }

        template<class T> Vector3Tmpl<T> operator -(const Vector3Tmpl<T>& a, const Vector3Tmpl<T>& b)
        {
            return Vector3Tmpl<T>(a.x - b.x, a.y - b.y, a.z - b.z);
        }

        template<class T> Vector3Tmpl<T> operator *(const T& a, const Vector3Tmpl<T>& b)
        {
            return Vector3Tmpl<T>(a * b.x, a * b.y, a * b.z);
        }

        template<class T> Vector3Tmpl<T> operator *(const Vector3Tmpl<T>& a, const T& b)
        {
            return Vector3Tmpl<T>(a.x * b, a.y * b, a.z * b);
        }

        template<class T> Vector3Tmpl<T>& Vector3Tmpl<T>::operator *=(const T& a)
        {
            x *= a;
            y *= a;
            z *= a;
            return *this;
        }

        template<class T> Vector3Tmpl<T>& Vector3Tmpl<T>::operator +=(const Vector3Tmpl<T>& a)
        {
            x += a.x;
            y += a.y;
            z += a.z;
            return *this;
        }

        template<class T> Vector3Tmpl<T> Vector3Tmpl<T>::operator-()
        {
            return Vector3Tmpl<T>(-x, -y, -z);
        }

        template<class T> Vector3Tmpl<T> Vector3Tmpl<T>::zero()
        {
            Vector3Tmpl v;
            v.x = (T)0.0;
            v.y = (T)0.0;
            v.z = (T)0.0;
            return v;
        }

        template<class T>Vector3Tmpl<T> Vector3Tmpl<T>::one()
        {
            Vector3Tmpl v;
            v.x = (T)1.0;
            v.y = (T)1.0;
            v.z = (T)1.0;
            return v;
        }

        template<class T> Vector3Tmpl<T> Vector3Tmpl<T>::max_vec(const Vector3Tmpl<T>& v) const
        {
            Vector3Tmpl r;
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
            if(z >= v.z)
            {
                r.z = z;
            }
            else
            {
                r.z = v.z;
            }
            return r;
        }

        template<class T> Vector3Tmpl<T> Vector3Tmpl<T>::min_vec(const Vector3Tmpl<T>& v) const
        {
            Vector3Tmpl r;
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
            if(z >= v.z)
            {
                r.z = v.z;
            }
            else
            {
                r.z = z;
            }
            return r;
        }

        template<class T> RBool Vector3Tmpl<T>::all_less(const Vector3Tmpl<T>& v) const
        {
            if(x >= v.x) return rfalse;
            if(y >= v.y) return rfalse;
            if(z >= v.z) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector3Tmpl<T>::some_less(const Vector3Tmpl<T>& v) const
        {
            if(x < v.x) return rtrue;
            if(y < v.y) return rtrue;
            if(z < v.z) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector3Tmpl<T>::all_greater(const Vector3Tmpl<T>& v) const
        {
            if(x <= v.x) return rfalse;
            if(y <= v.y) return rfalse;
            if(z <= v.z) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector3Tmpl<T>::some_greater(const Vector3Tmpl<T>& v) const
        {
            if(x > v.x) return rtrue;
            if(y > v.y) return rtrue;
            if(z > v.z) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector3Tmpl<T>::all_less_equal(const Vector3Tmpl<T>& v) const
        {
            if(x > v.x) return rfalse;
            if(y > v.y) return rfalse;
            if(z > v.z) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector3Tmpl<T>::some_less_equal(const Vector3Tmpl<T>& v) const
        {
            if(x <= v.x) return rtrue;
            if(y <= v.y) return rtrue;
            if(z <= v.z) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector3Tmpl<T>::all_greater_equal(const Vector3Tmpl<T>& v) const
        {
            if(x < v.x) return rfalse;
            if(y < v.y) return rfalse;
            if(z < v.z) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector3Tmpl<T>::some_greater_equal(const Vector3Tmpl<T>& v) const
        {
            if(x >= v.x) return rtrue;
            if(y >= v.y) return rtrue;
            if(z >= v.z) return rtrue;
            return rfalse;
        }

        template<class T> T Vector3Tmpl<T>::sum()
        {
            return x + y + z;
        }

    }
}

#endif
