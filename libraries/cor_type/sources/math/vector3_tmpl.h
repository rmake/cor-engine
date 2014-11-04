#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR3_TMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR3_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/vector2_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T>class Vector3Tmpl
        {
        public:
            typedef Vector2Tmpl<T> Vector2T;

            typedef T value_type;
            typedef const T* const_iterator;
            typedef T* iterator;

            T x;
            T y;
            T z;

            Vector3Tmpl();
            Vector3Tmpl(const Vector3Tmpl& v);
            Vector3Tmpl(const T& x, const T& y, const T& z);
            template<class Y>Vector3Tmpl(const Y& v)
            {
                if(v.size() >= 1) x = (T)v[0]; else x = (T)0.0;
                if(v.size() >= 2) y = (T)v[1]; else y = (T)0.0;
                if(v.size() >= 3) z = (T)v[2]; else z = (T)0.0;
            }

            ~Vector3Tmpl();

            void set(const T& x, const T& y, const T& z);

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
            RBool normalize();
            T dot(const Vector3Tmpl& a) const;
            Vector3Tmpl cross(const Vector3Tmpl& a) const;
            Vector3Tmpl& operator *=(const T& a);
            Vector3Tmpl& operator +=(const Vector3Tmpl& a);
            Vector3Tmpl operator-();

            static Vector3Tmpl zero();
            static Vector3Tmpl one();
            Vector3Tmpl max_vec(const Vector3Tmpl& v) const;
            Vector3Tmpl min_vec(const Vector3Tmpl& v) const;
            RBool all_less(const Vector3Tmpl& v) const;
            RBool some_less(const Vector3Tmpl& v) const;
            RBool all_greater(const Vector3Tmpl& v) const;
            RBool some_greater(const Vector3Tmpl& v) const;
            RBool all_less_equal(const Vector3Tmpl& v) const;
            RBool some_less_equal(const Vector3Tmpl& v) const;
            RBool all_greater_equal(const Vector3Tmpl& v) const;
            RBool some_greater_equal(const Vector3Tmpl& v) const;
            T sum();
        };

        template<class T> Vector3Tmpl<T> operator +(const Vector3Tmpl<T>& a, const Vector3Tmpl<T>& b);
        template<class T> Vector3Tmpl<T> operator -(const Vector3Tmpl<T>& a, const Vector3Tmpl<T>& b);
        template<class T> Vector3Tmpl<T> operator *(const T& a, const Vector3Tmpl<T>& b);
        template<class T> Vector3Tmpl<T> operator *(const Vector3Tmpl<T>& a, const T& b);
        
        typedef Vector3Tmpl<RFloat> Vector3F;
        typedef Vector3Tmpl<RInt32> Vector3I;
    }
}

#endif
