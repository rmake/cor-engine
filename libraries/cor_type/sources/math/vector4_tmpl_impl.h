#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR4_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR4_TMPL_IMPL_H_

#include "vector4_tmpl.h"
#include "vector3_tmpl_impl.h"

namespace cor
{
    namespace type
    {
        template<class T> Vector4Tmpl<T>::Vector4Tmpl()
        {
            this->x = (T)0.0;
            this->y = (T)0.0;
            this->z = (T)0.0;
            this->w = (T)0.0;
        }

        template<class T> Vector4Tmpl<T>::Vector4Tmpl(const Vector4Tmpl& v)
        {
            x = v.x;
            y = v.y;
            z = v.z;
            w = v.w;
        }

        template<class T> Vector4Tmpl<T>::Vector4Tmpl(const T& x, const T& y, const T& z, const T& w)
        {
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
        }

        template<class T> Vector4Tmpl<T>::~Vector4Tmpl()
        {

        }

        template<class T> void Vector4Tmpl<T>::set(const T& x, const T& y, const T& z, const T& w)
        {
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
        }

        template<class T> typename Vector4Tmpl<T>::iterator Vector4Tmpl<T>::begin()
        {
            return &x;
        }

        template<class T> typename Vector4Tmpl<T>::iterator Vector4Tmpl<T>::end()
        {
            return &w + 1;
        }

        template<class T> typename Vector4Tmpl<T>::const_iterator Vector4Tmpl<T>::begin() const
        {
            return &x;
        }

        template<class T> typename Vector4Tmpl<T>::const_iterator Vector4Tmpl<T>::end() const
        {
            return &w + 1;
        }

        template<class T> RSize Vector4Tmpl<T>::size() const
        {
            return 4;
        }

        template<class T> T* Vector4Tmpl<T>::get_p()
        {
            return &x;
        }

        template<class T> const T* Vector4Tmpl<T>::get_p() const
        {
            return &x;
        }

        template<class T> T& Vector4Tmpl<T>::operator[](int i)
        {
            return *(&x + i);
        }

        template<class T> const T& Vector4Tmpl<T>::operator[](int i) const
        {
            return *(&x + i);
        }

        template<class T> T Vector4Tmpl<T>::get_square_magnitude() const
        {
            return x * x + y * y + z * z + w * w;
        }

        template<class T> T Vector4Tmpl<T>::get_magnitude() const
        {
            return sqrt(get_square_magnitude());
        }

        template<class T> typename Vector4Tmpl<T>::Vector2T& Vector4Tmpl<T>::xy()
        {
            return *(Vector2T*)&x;
        }

        template<class T> const typename Vector4Tmpl<T>::Vector2T& Vector4Tmpl<T>::xy() const
        {
            return *(Vector2T*)&x;
        }

        template<class T> typename Vector4Tmpl<T>::Vector3T& Vector4Tmpl<T>::xyz()
        {
            return *(Vector3T*)&x;
        }

        template<class T> const typename Vector4Tmpl<T>::Vector3T& Vector4Tmpl<T>::xyz() const
        {
            return *(Vector3T*)&x;
        }

        template<class T> RBool Vector4Tmpl<T>::normalize()
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

        template<class T> T Vector4Tmpl<T>::dot(const Vector4Tmpl<T>& a) const
        {
            return x * a.x + y * a.y + z * a.z + w * a.w;
        }

        template<class T> Vector4Tmpl<T> operator +(const Vector4Tmpl<T>& a, const Vector4Tmpl<T>& b)
        {
            return Vector4Tmpl<T>(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
        }

        template<class T> Vector4Tmpl<T> operator -(const Vector4Tmpl<T>& a, const Vector4Tmpl<T>& b)
        {
            return Vector4Tmpl<T>(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
        }

        template<class T> Vector4Tmpl<T> operator *(const T& a, const Vector4Tmpl<T>& b)
        {
            return Vector4Tmpl<T>(a * b.x, a * b.y, a * b.z, a * b.w);
        }

        template<class T> Vector4Tmpl<T> operator *(const Vector4Tmpl<T>& a, const T& b)
        {
            return Vector4Tmpl<T>(a.x * b, a.y * b, a.z * b, a.w * b);
        }

        template<class T> Vector4Tmpl<T>& Vector4Tmpl<T>::operator *=(const T& a)
        {
            x *= a;
            y *= a;
            z *= a;
            w *= a;
            return *this;
        }

        template<class T> Vector4Tmpl<T>& Vector4Tmpl<T>::operator +=(const Vector4Tmpl<T>& a)
        {
            x += a.x;
            y += a.y;
            z += a.z;
            w += a.w;
            return *this;
        }

        template<class T> Vector4Tmpl<T> Vector4Tmpl<T>::operator-()
        {
            return Vector4Tmpl<T>(-x, -y, -z, -w);
        }

        template<class T> Vector4Tmpl<T> Vector4Tmpl<T>::zero()
        {
            Vector4Tmpl v;
            v.x = (T)0.0;
            v.y = (T)0.0;
            v.z = (T)0.0;
            v.w = (T)0.0;
            return v;
        }

        template<class T> Vector4Tmpl<T> Vector4Tmpl<T>::one()
        {
            Vector4Tmpl v;
            v.x = (T)1.0;
            v.y = (T)1.0;
            v.z = (T)1.0;
            v.w = (T)1.0;
            return v;
        }

        template<class T> Vector4Tmpl<T> Vector4Tmpl<T>::max_vec(const Vector4Tmpl<T>& v) const
        {
            Vector4Tmpl r;
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
            if(w >= v.w)
            {
                r.w = w;
            }
            else
            {
                r.w = v.w;
            }
            return r;
        }

        template<class T> Vector4Tmpl<T> Vector4Tmpl<T>::min_vec(const Vector4Tmpl<T>& v) const
        {
            Vector4Tmpl r;
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
            if(w >= v.w)
            {
                r.w = v.w;
            }
            else
            {
                r.w = w;
            }
            return r;
        }

        template<class T> RBool Vector4Tmpl<T>::all_less(const Vector4Tmpl<T>& v) const
        {
            if(x >= v.x) return rfalse;
            if(y >= v.y) return rfalse;
            if(z >= v.z) return rfalse;
            if(w >= v.w) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector4Tmpl<T>::some_less(const Vector4Tmpl<T>& v) const
        {
            if(x < v.x) return rtrue;
            if(y < v.y) return rtrue;
            if(z < v.z) return rtrue;
            if(w < v.w) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector4Tmpl<T>::all_greater(const Vector4Tmpl<T>& v) const
        {
            if(x <= v.x) return rfalse;
            if(y <= v.y) return rfalse;
            if(z <= v.z) return rfalse;
            if(w <= v.w) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector4Tmpl<T>::some_greater(const Vector4Tmpl<T>& v) const
        {
            if(x > v.x) return rtrue;
            if(y > v.y) return rtrue;
            if(z > v.z) return rtrue;
            if(w > v.w) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector4Tmpl<T>::all_less_equal(const Vector4Tmpl<T>& v) const
        {
            if(x > v.x) return rfalse;
            if(y > v.y) return rfalse;
            if(z > v.z) return rfalse;
            if(w > v.w) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector4Tmpl<T>::some_less_equal(const Vector4Tmpl<T>& v) const
        {
            if(x <= v.x) return rtrue;
            if(y <= v.y) return rtrue;
            if(z <= v.z) return rtrue;
            if(w <= v.w) return rtrue;
            return rfalse;
        }

        template<class T> RBool Vector4Tmpl<T>::all_greater_equal(const Vector4Tmpl<T>& v) const
        {
            if(x < v.x) return rfalse;
            if(y < v.y) return rfalse;
            if(z < v.z) return rfalse;
            if(w < v.w) return rfalse;
            return rtrue;
        }

        template<class T> RBool Vector4Tmpl<T>::some_greater_equal(const Vector4Tmpl<T>& v) const
        {
            if(x >= v.x) return rtrue;
            if(y >= v.y) return rtrue;
            if(z >= v.z) return rtrue;
            if(w >= v.w) return rtrue;
            return rfalse;
        }

        template<class T> T Vector4Tmpl<T>::sum()
        {
            return x + y + z + w;
        }

    }
}

#endif
