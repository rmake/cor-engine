#ifndef ____COR_TYPE_SOURCES_MATH_MATRIX4X4_TMPL_H_
#define ____COR_TYPE_SOURCES_MATH_MATRIX4X4_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/math/vector4_tmpl.h"

namespace cor
{
    namespace type
    {
        template<class T>class Matrix4x4Tmpl
        {
        public:

            typedef T value_type;
            typedef Vector2Tmpl<T> Vector2T;
            typedef Vector3Tmpl<T> Vector3T;
            typedef Vector4Tmpl<T> Vector4T;

            typedef const T* const_iterator;
            typedef T* iterator;


            T m[4][4];

            Matrix4x4Tmpl();
            Matrix4x4Tmpl(const Matrix4x4Tmpl& ma);
            Matrix4x4Tmpl(const T& m00, const T& m01, const T& m02, const T& m03,
                const T& m10, const T& m11, const T& m12, const T& m13,
                const T& m20, const T& m21, const T& m22, const T& m23,
                const T& m30, const T& m31, const T& m32, const T& m33);

            template<typename Y>Matrix4x4Tmpl(const Matrix4x4Tmpl<Y>& ma)
            {
                m[0][0] = (T)ma.m[0][0]; m[0][1] = (T)ma.m[0][1]; m[0][2] = (T)ma.m[0][2]; m[0][3] = (T)ma.m[0][3];
                m[1][0] = (T)ma.m[1][0]; m[1][1] = (T)ma.m[1][1]; m[1][2] = (T)ma.m[1][2]; m[1][3] = (T)ma.m[1][3];
                m[2][0] = (T)ma.m[2][0]; m[2][1] = (T)ma.m[2][1]; m[2][2] = (T)ma.m[2][2]; m[2][3] = (T)ma.m[2][3];
                m[3][0] = (T)ma.m[3][0]; m[3][1] = (T)ma.m[3][1]; m[3][2] = (T)ma.m[3][2]; m[3][3] = (T)ma.m[3][3];
            }

            ~Matrix4x4Tmpl();

            iterator begin();
            iterator end();
            const_iterator begin() const;
            const_iterator end() const;

            T* get_array();
            Vector3T get_x_vec();
            Vector3T get_x_vec() const;
            void set_x_vec(const Vector3T & v);
            Vector3T get_y_vec();
            Vector3T get_y_vec() const;
            void set_y_vec(const Vector3T & v);
            Vector3T get_z_vec();
            Vector3T get_z_vec() const;
            void set_z_vec(const Vector3T & v);
            Vector3T get_o_vec();
            Vector3T get_o_vec() const;
            void set_o_vec(const Vector3T & v);
            static void mult(const Matrix4x4Tmpl& a, const Matrix4x4Tmpl& b, Matrix4x4Tmpl& c);
            static Matrix4x4Tmpl rot_x(const T& theta);
            static Matrix4x4Tmpl rot_y(const T& theta);
            static Matrix4x4Tmpl rot_z(const T& theta);
            static Matrix4x4Tmpl translate(const T& x, const T& y, const T& z);
            static Matrix4x4Tmpl scale(const T& x, const T& y, const T& z);
            static Matrix4x4Tmpl ortho_matrix(
                const T& l, const T& r, const T& b, const T& t,
                const T& n, const T& f
                );
            static void transform(const Matrix4x4Tmpl& m, const Vector2T& v, Vector2T & dv);
            static Vector2T transform(const Matrix4x4Tmpl& m, const Vector2T& v);
            Vector2T transform(const Vector2T& v);
            Vector2T transform(const Vector2T& v) const;
            static void transform(const Matrix4x4Tmpl& m, const Vector3T& v, Vector3T & dv);
            static Vector3T transform(const Matrix4x4Tmpl& m, const Vector3T& v);
            Vector3T transform(const Vector3T& v);
            Vector3T transform(const Vector3T& v) const;
            static void transform(const Matrix4x4Tmpl& m, const Vector4T& v, Vector4T & dv);
            static Vector4T transform(const Matrix4x4Tmpl& m, const Vector4T& v);
            Vector4T transform(const Vector4T& v);
            Vector4T transform(const Vector4T& v) const;
            static void transpose_inverse(const Matrix4x4Tmpl& sm, Matrix4x4Tmpl& dm);
            static Matrix4x4Tmpl transpose_inverse(const Matrix4x4Tmpl& sm);
            Matrix4x4Tmpl transpose_inverse();
            Matrix4x4Tmpl transpose_inverse() const;
            static void affine_inverse(const Matrix4x4Tmpl& sm, Matrix4x4Tmpl& dm);
            static Matrix4x4Tmpl affine_inverse(const Matrix4x4Tmpl& sm);
            Matrix4x4Tmpl affine_inverse();
            Matrix4x4Tmpl affine_inverse() const;
            Matrix4x4Tmpl transpose() const;
            RBool equal(const Matrix4x4Tmpl& ma, const T& err);

        };

        template<class T> Matrix4x4Tmpl<T> operator *(const Matrix4x4Tmpl<T>& a, const Matrix4x4Tmpl<T>& b);

        typedef Matrix4x4Tmpl<RFloat> Matrix4x4F;
    }
}

#endif
