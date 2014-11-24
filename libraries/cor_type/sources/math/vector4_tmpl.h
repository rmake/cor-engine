#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR4_TMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR4_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/vector3_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T>class Vector4Tmpl
        {
        public:
            typedef Vector2Tmpl<T> Vector2T;
            typedef Vector3Tmpl<T> Vector3T;

            typedef T value_type;
            typedef const T* const_iterator;
            typedef T* iterator;

            T x;
            T y;
            T z;
            T w;

            Vector4Tmpl();
            Vector4Tmpl(const Vector4Tmpl& v);
            Vector4Tmpl(const T& x, const T& y, const T& z, const T& w);

            template<class Y>Vector4Tmpl(const Y& v)
            {
                if(v.size() >= 1) x = (T)v[0]; else x = (T)0.0;
                if(v.size() >= 2) y = (T)v[1]; else y = (T)0.0;
                if(v.size() >= 3) z = (T)v[2]; else z = (T)0.0;
                if(v.size() >= 4) w = (T)v[3]; else w = (T)0.0;
            }

            ~Vector4Tmpl();

            void set(const T& x, const T& y, const T& z, const T& w);

            iterator begin();
            iterator end();
            const_iterator begin() const;
            const_iterator end() const;

            RSize size() const;
            T* get_p();
            const T* get_p() const;
            T& operator[](int i);
            const T& operator[](int i) const;

            T get_square_magnitude() const;
            T get_magnitude() const;
            Vector2T& xy();
            const Vector2T& xy() const;
            Vector3T& xyz();
            const Vector3T& xyz() const;
            RBool normalize();
            T dot(const Vector4Tmpl& a) const;
            T distance(const Vector4Tmpl& a) const;
            Vector4Tmpl& operator *=(const T& a);
            Vector4Tmpl& operator +=(const Vector4Tmpl& a);
            Vector4Tmpl operator-();

            static Vector4Tmpl zero();
            static Vector4Tmpl one();
            Vector4Tmpl max_vec(const Vector4Tmpl& v) const;
            Vector4Tmpl min_vec(const Vector4Tmpl& v) const;
            RBool all_less(const Vector4Tmpl& v) const;
            RBool some_less(const Vector4Tmpl& v) const;
            RBool all_greater(const Vector4Tmpl& v) const;
            RBool some_greater(const Vector4Tmpl& v) const;
            RBool all_less_equal(const Vector4Tmpl& v) const;
            RBool some_less_equal(const Vector4Tmpl& v) const;
            RBool all_greater_equal(const Vector4Tmpl& v) const;
            RBool some_greater_equal(const Vector4Tmpl& v) const;
            T sum();
        };

        template<class T> Vector4Tmpl<T> operator +(const Vector4Tmpl<T>& a, const Vector4Tmpl<T>& b);
        template<class T> Vector4Tmpl<T> operator -(const Vector4Tmpl<T>& a, const Vector4Tmpl<T>& b);
        template<class T> Vector4Tmpl<T> operator *(const T& a, const Vector4Tmpl<T>& b);
        template<class T> Vector4Tmpl<T> operator *(const Vector4Tmpl<T>& a, const T& b);

        typedef Vector4Tmpl<RFloat> Vector4F;
        typedef Vector4Tmpl<RInt32> Vector4I;
    }
}

#endif
