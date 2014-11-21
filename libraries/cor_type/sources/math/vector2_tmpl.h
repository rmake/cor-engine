#ifndef ____COR_TYPE_SOURCES_MATH_VECTOR2_TMPL_H_
#define ____COR_TYPE_SOURCES_MATH_VECTOR2_TMPL_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace type
    {
        template<class T>class Vector2Tmpl
        {
        public:

            typedef T value_type;
            typedef const T* const_iterator;
            typedef T* iterator;

            T x;
            T y;

            Vector2Tmpl();
            Vector2Tmpl(const Vector2Tmpl& v);
            Vector2Tmpl(const T& x, const T& y);
            template<class Y> Vector2Tmpl(const Y& v)
            {
                if(v.size() >= 1) x = (T)v[0]; else x = (T)0.0;
                if(v.size() >= 2) y = (T)v[1]; else y = (T)0.0;
            }

            ~Vector2Tmpl();

            void set(const T& x, const T& y);

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
            RBool normalize();
            T dot(const Vector2Tmpl& a) const;
            T cross(const Vector2Tmpl& a) const;
            T distance(const Vector2Tmpl& a) const;
            Vector2Tmpl& operator *=(const T& a);
            Vector2Tmpl& operator +=(const Vector2Tmpl& a);
            Vector2Tmpl operator-();

            static Vector2Tmpl zero();
            static Vector2Tmpl one();
            Vector2Tmpl max_vec(const Vector2Tmpl& v) const;
            Vector2Tmpl min_vec(const Vector2Tmpl& v) const;
            RBool all_less(const Vector2Tmpl& v) const;
            RBool some_less(const Vector2Tmpl& v) const;
            RBool all_greater(const Vector2Tmpl& v) const;
            RBool some_greater(const Vector2Tmpl& v) const;
            RBool all_less_equal(const Vector2Tmpl& v) const;
            RBool some_less_equal(const Vector2Tmpl& v) const;
            RBool all_greater_equal(const Vector2Tmpl& v) const;
            RBool some_greater_equal(const Vector2Tmpl& v) const;
            T sum();
        };

        template<class T> Vector2Tmpl<T> operator +(const Vector2Tmpl<T>& a, const Vector2Tmpl<T>& b);
        template<class T> Vector2Tmpl<T> operator -(const Vector2Tmpl<T>& a, const Vector2Tmpl<T>& b);
        template<class T> Vector2Tmpl<T> operator *(const T& a, const Vector2Tmpl<T>& b);
        template<class T> Vector2Tmpl<T> operator *(const Vector2Tmpl<T>& a, const T& b);

        typedef Vector2Tmpl<RFloat> Vector2F;
        typedef Vector2Tmpl<RInt32> Vector2I;
    }
}

#endif
