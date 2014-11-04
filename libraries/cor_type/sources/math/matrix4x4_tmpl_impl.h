#ifndef ____COR_TYPE_SOURCES_MATH_MATRIX4X4_TMPL_IMPL_H_
#define ____COR_TYPE_SOURCES_MATH_MATRIX4X4_TMPL_IMPL_H_

#include "matrix4x4_tmpl.h"
#include "vector4_tmpl_impl.h"
#include <math.h>

namespace cor
{
    namespace type
    {
        
        template<class T> Matrix4x4Tmpl<T>::Matrix4x4Tmpl()
        {
            m[0][0] = (T)1.0; m[0][1] = (T)0.0; m[0][2] = (T)0.0; m[0][3] = (T)0.0;
            m[1][0] = (T)0.0; m[1][1] = (T)1.0; m[1][2] = (T)0.0; m[1][3] = (T)0.0;
            m[2][0] = (T)0.0; m[2][1] = (T)0.0; m[2][2] = (T)1.0; m[2][3] = (T)0.0;
            m[3][0] = (T)0.0; m[3][1] = (T)0.0; m[3][2] = (T)0.0; m[3][3] = (T)1.0;
        }

        template<class T> Matrix4x4Tmpl<T>::Matrix4x4Tmpl(const Matrix4x4Tmpl& ma)
        {
            m[0][0] = ma.m[0][0]; m[0][1] = ma.m[0][1]; m[0][2] = ma.m[0][2]; m[0][3] = ma.m[0][3];
            m[1][0] = ma.m[1][0]; m[1][1] = ma.m[1][1]; m[1][2] = ma.m[1][2]; m[1][3] = ma.m[1][3];
            m[2][0] = ma.m[2][0]; m[2][1] = ma.m[2][1]; m[2][2] = ma.m[2][2]; m[2][3] = ma.m[2][3];
            m[3][0] = ma.m[3][0]; m[3][1] = ma.m[3][1]; m[3][2] = ma.m[3][2]; m[3][3] = ma.m[3][3];
        }

        template<class T> Matrix4x4Tmpl<T>::Matrix4x4Tmpl(const T& m00, const T& m01, const T& m02, const T& m03,
            const T& m10, const T& m11, const T& m12, const T& m13,
            const T& m20, const T& m21, const T& m22, const T& m23,
            const T& m30, const T& m31, const T& m32, const T& m33)
        {
            m[0][0] = m00; m[0][1] = m01; m[0][2] = m02; m[0][3] = m03;
            m[1][0] = m10; m[1][1] = m11; m[1][2] = m12; m[1][3] = m13;
            m[2][0] = m20; m[2][1] = m21; m[2][2] = m22; m[2][3] = m23;
            m[3][0] = m30; m[3][1] = m31; m[3][2] = m32; m[3][3] = m33;
        }

        template<class T> Matrix4x4Tmpl<T>::~Matrix4x4Tmpl()
        {

        }

        template<class T> typename Matrix4x4Tmpl<T>::iterator Matrix4x4Tmpl<T>::begin()
        {
            return &m[0][0];
        }

        template<class T> typename Matrix4x4Tmpl<T>::iterator Matrix4x4Tmpl<T>::end()
        {
            return &m[3][3] + 1;
        }

        template<class T> typename Matrix4x4Tmpl<T>::const_iterator Matrix4x4Tmpl<T>::begin() const
        {
            return &m[0][0];
        }

        template<class T> typename Matrix4x4Tmpl<T>::const_iterator Matrix4x4Tmpl<T>::end() const
        {
            return &m[3][3] + 1;
        }

        template<class T> T* Matrix4x4Tmpl<T>::get_array()
        {
            return &m[0][0];
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_x_vec()
        {
            return Vector3T(m[0][0], m[1][0], m[2][0]);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_x_vec() const
        {
            return Vector3T(m[0][0], m[1][0], m[2][0]);
        }

        template<class T> void Matrix4x4Tmpl<T>::set_x_vec(const typename Matrix4x4Tmpl<T>::Vector3T & v)
        {
            m[0][0] = v.x;
            m[1][0] = v.y;
            m[2][0] = v.z;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_y_vec()
        {
            return Vector3T(m[0][1], m[1][1], m[2][1]);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_y_vec() const
        {
            return Vector3T(m[0][1], m[1][1], m[2][1]);
        }

        template<class T> void Matrix4x4Tmpl<T>::set_y_vec(const typename Matrix4x4Tmpl<T>::Vector3T & v)
        {
            m[0][1] = v.x;
            m[1][1] = v.y;
            m[2][1] = v.z;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_z_vec()
        {
            return Vector3T(m[0][2], m[1][2], m[2][2]);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_z_vec() const
        {
            return Vector3T(m[0][2], m[1][2], m[2][2]);
        }

        template<class T> void Matrix4x4Tmpl<T>::set_z_vec(const typename Matrix4x4Tmpl<T>::Vector3T & v)
        {
            m[0][2] = v.x;
            m[1][2] = v.y;
            m[2][2] = v.z;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_o_vec()
        {
            return Vector3T(m[0][3], m[1][3], m[2][3]);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::get_o_vec() const
        {
            return Vector3T(m[0][3], m[1][3], m[2][3]);
        }

        template<class T> void Matrix4x4Tmpl<T>::set_o_vec(const typename Matrix4x4Tmpl<T>::Vector3T & v)
        {
            m[0][3] = v.x;
            m[1][3] = v.y;
            m[2][3] = v.z;
        }

        template<class T> void Matrix4x4Tmpl<T>::mult(const Matrix4x4Tmpl& a, const Matrix4x4Tmpl& b, Matrix4x4Tmpl& c)
        {
            RFloat a00 = a.m[0][0]; RFloat a01 = a.m[0][1]; RFloat a02 = a.m[0][2]; RFloat a03 = a.m[0][3];
            RFloat a10 = a.m[1][0]; RFloat a11 = a.m[1][1]; RFloat a12 = a.m[1][2]; RFloat a13 = a.m[1][3];
            RFloat a20 = a.m[2][0]; RFloat a21 = a.m[2][1]; RFloat a22 = a.m[2][2]; RFloat a23 = a.m[2][3];
            RFloat a30 = a.m[3][0]; RFloat a31 = a.m[3][1]; RFloat a32 = a.m[3][2]; RFloat a33 = a.m[3][3];

            RFloat b00 = b.m[0][0]; RFloat b01 = b.m[0][1]; RFloat b02 = b.m[0][2]; RFloat b03 = b.m[0][3];
            RFloat b10 = b.m[1][0]; RFloat b11 = b.m[1][1]; RFloat b12 = b.m[1][2]; RFloat b13 = b.m[1][3];
            RFloat b20 = b.m[2][0]; RFloat b21 = b.m[2][1]; RFloat b22 = b.m[2][2]; RFloat b23 = b.m[2][3];
            RFloat b30 = b.m[3][0]; RFloat b31 = b.m[3][1]; RFloat b32 = b.m[3][2]; RFloat b33 = b.m[3][3];

            c.m[0][0] = a00 * b00 + a01 * b10 + a02 * b20 + a03 * b30;
            c.m[0][1] = a00 * b01 + a01 * b11 + a02 * b21 + a03 * b31;
            c.m[0][2] = a00 * b02 + a01 * b12 + a02 * b22 + a03 * b32;
            c.m[0][3] = a00 * b03 + a01 * b13 + a02 * b23 + a03 * b33;

            c.m[1][0] = a10 * b00 + a11 * b10 + a12 * b20 + a13 * b30;
            c.m[1][1] = a10 * b01 + a11 * b11 + a12 * b21 + a13 * b31;
            c.m[1][2] = a10 * b02 + a11 * b12 + a12 * b22 + a13 * b32;
            c.m[1][3] = a10 * b03 + a11 * b13 + a12 * b23 + a13 * b33;

            c.m[2][0] = a20 * b00 + a21 * b10 + a22 * b20 + a23 * b30;
            c.m[2][1] = a20 * b01 + a21 * b11 + a22 * b21 + a23 * b31;
            c.m[2][2] = a20 * b02 + a21 * b12 + a22 * b22 + a23 * b32;
            c.m[2][3] = a20 * b03 + a21 * b13 + a22 * b23 + a23 * b33;

            c.m[3][0] = a30 * b00 + a31 * b10 + a32 * b20 + a33 * b30;
            c.m[3][1] = a30 * b01 + a31 * b11 + a32 * b21 + a33 * b31;
            c.m[3][2] = a30 * b02 + a31 * b12 + a32 * b22 + a33 * b32;
            c.m[3][3] = a30 * b03 + a31 * b13 + a32 * b23 + a33 * b33;
        }

        template<class T> Matrix4x4Tmpl<T> operator *(const Matrix4x4Tmpl<T>& a, const Matrix4x4Tmpl<T>& b)
        {
            Matrix4x4Tmpl<T> c;
            Matrix4x4Tmpl<T>::mult(a, b, c);
            return c;
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::rot_x(const T& theta)
        {
            T sn = sin(theta);
            T cs = cos(theta);
            return Matrix4x4Tmpl<T>(
                (T)1.0, (T)0.0, (T)0.0, (T)0.0,
                (T)0.0, (T)cs, (T)-sn, (T)0.0,
                (T)0.0, (T)sn, (T)cs, (T)0.0,
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::rot_y(const T& theta)
        {
            T sn = sin(theta);
            T cs = cos(theta);
            return Matrix4x4Tmpl(
                (T)cs, (T)0.0, (T)sn, (T)0.0,
                (T)0.0, (T)1.0, (T)0.0, (T)0.0,
                (T)-sn, (T)0.0, (T)cs, (T)0.0,
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::rot_z(const T& theta)
        {
            T sn = sin(theta);
            T cs = cos(theta);
            return Matrix4x4Tmpl<T>(
                (T)cs, (T)-sn, (T)0.0, (T)0.0,
                (T)sn, (T)cs, (T)0.0, (T)0.0,
                (T)0.0, (T)0.0, (T)1.0, (T)0.0,
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::translate(const T& x, const T& y, const T& z)
        {
            return Matrix4x4Tmpl<T>(
                (T)1.0, (T)0.0, (T)0.0, (T)x,
                (T)0.0, (T)1.0, (T)0.0, (T)y,
                (T)0.0, (T)0.0, (T)1.0, (T)z,
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::scale(const T& x, const T& y, const T& z)
        {
            return Matrix4x4Tmpl<T>(
                (T)x, (T)0.0, (T)0.0, (T)0.0,
                (T)0.0, (T)y, (T)0.0, (T)0.0,
                (T)0.0, (T)0.0, (T)z, (T)0.0,
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::ortho_matrix(
            const T& l, const T& r, const T& b, const T& t,
            const T& n, const T& f
            )
        {
            return Matrix4x4Tmpl(
                (T)2.0 / (r - l), (T)0.0, (T)0.0, (T)(r + l) / (r - l),
                (T)0.0, (T)2.0 / (t - b), (T)0.0, (T)(t + b) / (t - b),
                (T)0.0, (T)0.0, -(T)2.0 / (f - n), (T)(f + n) / (f - n),
                (T)0.0, (T)0.0, (T)0.0, (T)1.0
                );
        }

        template<class T> void Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector2T& v, typename Matrix4x4Tmpl<T>::Vector2T & dv)
        {
            T m00 = m.m[0][0]; T m01 = m.m[0][1]; T m03 = m.m[0][3];
            T m10 = m.m[1][0]; T m11 = m.m[1][1]; T m13 = m.m[1][3];
            T vx = v.x; T vy = v.y;

            dv.x = m00 * vx + m01 * vy + m03;
            dv.y = m10 * vx + m11 * vy + m13;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector2T Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector2T& v)
        {
            Matrix4x4Tmpl<T>::Vector2T dv;
            transform(m, v, dv);
            return dv;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector2T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector2T& v)
        {
            return transform(*this, v);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector2T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector2T& v) const
        {
            return transform(*this, v);
        }

        template<class T> void Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector3T& v, typename Matrix4x4Tmpl<T>::Vector3T & dv)
        {
            T m00 = m.m[0][0]; T m01 = m.m[0][1]; T m02 = m.m[0][2]; T m03 = m.m[0][3];
            T m10 = m.m[1][0]; T m11 = m.m[1][1]; T m12 = m.m[1][2]; T m13 = m.m[1][3];
            T m20 = m.m[2][0]; T m21 = m.m[2][1]; T m22 = m.m[2][2]; T m23 = m.m[2][3];
            T vx = v.x; T vy = v.y; T vz = v.z;

            dv.x = m00 * vx + m01 * vy + m02 * vz + m03;
            dv.y = m10 * vx + m11 * vy + m12 * vz + m13;
            dv.z = m20 * vx + m21 * vy + m22 * vz + m23;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector3T& v)
        {
            Matrix4x4Tmpl<T>::Vector3T dv;
            transform(m, v, dv);
            return dv;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector3T& v)
        {
            return transform(*this, v);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector3T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector3T& v) const
        {
            return transform(*this, v);
        }

        template<class T>  void Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector4T& v, typename Matrix4x4Tmpl<T>::Vector4T & dv)
        {
            dv.x = m.m[0][0] * v.x + m.m[0][1] * v.y + m.m[0][2] * v.z + m.m[0][3] * v.w;
            dv.y = m.m[1][0] * v.x + m.m[1][1] * v.y + m.m[1][2] * v.z + m.m[1][3] * v.w;
            dv.z = m.m[2][0] * v.x + m.m[2][1] * v.y + m.m[2][2] * v.z + m.m[2][3] * v.w;
            dv.w = m.m[3][0] * v.x + m.m[3][1] * v.y + m.m[3][2] * v.z + m.m[3][3] * v.w;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector4T Matrix4x4Tmpl<T>::transform(const Matrix4x4Tmpl<T>& m, const typename Matrix4x4Tmpl<T>::Vector4T& v)
        {
            typename Matrix4x4Tmpl<T>::Vector4T dv;
            transform(m, v, dv);
            return dv;
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector4T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector4T& v)
        {
            return transform(*this, v);
        }

        template<class T> typename Matrix4x4Tmpl<T>::Vector4T Matrix4x4Tmpl<T>::transform(const typename Matrix4x4Tmpl<T>::Vector4T& v) const
        {
            return transform(*this, v);
        }

        template<class T> void Matrix4x4Tmpl<T>::transpose_inverse(const Matrix4x4Tmpl<T>& sm, Matrix4x4Tmpl<T>& dm)
        {
            dm.m[0][0] = sm.m[0][0];
            dm.m[1][0] = sm.m[0][1];
            dm.m[2][0] = sm.m[0][2];

            dm.m[0][1] = sm.m[1][0];
            dm.m[1][1] = sm.m[1][1];
            dm.m[2][1] = sm.m[1][2];

            dm.m[0][2] = sm.m[2][0];
            dm.m[1][2] = sm.m[2][1];
            dm.m[2][2] = sm.m[2][2];

            dm.m[0][3] = -sm.m[0][3] * sm.m[0][0] - sm.m[1][3] * sm.m[1][0] - sm.m[2][3] * sm.m[2][0];
            dm.m[1][3] = -sm.m[0][3] * sm.m[0][1] - sm.m[1][3] * sm.m[1][1] - sm.m[2][3] * sm.m[2][1];
            dm.m[2][3] = -sm.m[0][3] * sm.m[0][2] - sm.m[1][3] * sm.m[1][2] - sm.m[2][3] * sm.m[2][2];

            dm.m[3][0] = (T)0.0;
            dm.m[3][1] = (T)0.0;
            dm.m[3][2] = (T)0.0;

            dm.m[3][3] = (T)1.0;
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::transpose_inverse(const Matrix4x4Tmpl<T>& sm)
        {
            Matrix4x4Tmpl dm;
            transpose_inverse(sm, dm);
            return dm;
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::transpose_inverse()
        {
            return transpose_inverse(*this);
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::transpose_inverse() const
        {
            return transpose_inverse(*this);
        }

        template<class T> void Matrix4x4Tmpl<T>::affine_inverse(const Matrix4x4Tmpl<T>& sm, Matrix4x4Tmpl<T>& dm)
        {
            T det = (T)1.0 /
                (
                sm.m[0][0] * (sm.m[1][1] * sm.m[2][2] - sm.m[1][2] * sm.m[2][1]) +
                sm.m[0][1] * (sm.m[1][2] * sm.m[2][0] - sm.m[1][0] * sm.m[2][2]) +
                sm.m[0][2] * (sm.m[1][0] * sm.m[2][1] - sm.m[1][1] * sm.m[2][0])
                );

            dm.m[0][0] = det * (sm.m[1][1] * sm.m[2][2] - sm.m[1][2] * sm.m[2][1]);
            dm.m[0][1] = -det * (sm.m[0][1] * sm.m[2][2] - sm.m[0][2] * sm.m[2][1]);
            dm.m[0][2] = det * (sm.m[0][1] * sm.m[1][2] - sm.m[0][2] * sm.m[1][1]);

            dm.m[1][0] = -det * (sm.m[1][0] * sm.m[2][2] - sm.m[1][2] * sm.m[2][0]);
            dm.m[1][1] = det * (sm.m[0][0] * sm.m[2][2] - sm.m[0][2] * sm.m[2][0]);
            dm.m[1][2] = -det * (sm.m[0][0] * sm.m[1][2] - sm.m[0][2] * sm.m[1][0]);

            dm.m[2][0] = det * (sm.m[1][0] * sm.m[2][1] - sm.m[1][1] * sm.m[2][0]);
            dm.m[2][1] = -det * (sm.m[0][0] * sm.m[2][1] - sm.m[0][1] * sm.m[2][0]);
            dm.m[2][2] = det * (sm.m[0][0] * sm.m[1][1] - sm.m[0][1] * sm.m[1][0]);

            dm.m[0][3] = -sm.m[0][3] * dm.m[0][0] - sm.m[1][3] * dm.m[0][1] - sm.m[2][3] * dm.m[0][2];
            dm.m[1][3] = -sm.m[0][3] * dm.m[1][0] - sm.m[1][3] * dm.m[1][1] - sm.m[2][3] * dm.m[1][2];
            dm.m[2][3] = -sm.m[0][3] * dm.m[2][0] - sm.m[1][3] * dm.m[2][1] - sm.m[2][3] * dm.m[2][2];

            dm.m[3][0] = (T)0.0;
            dm.m[3][1] = (T)0.0;
            dm.m[3][2] = (T)0.0;

            dm.m[3][3] = (T)1.0;
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::affine_inverse(const Matrix4x4Tmpl& sm)
        {
            Matrix4x4Tmpl dm;
            affine_inverse(sm, dm);
            return dm;
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::affine_inverse()
        {
            return affine_inverse(*this);
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::affine_inverse() const
        {
            return affine_inverse(*this);
        }

        template<class T> Matrix4x4Tmpl<T> Matrix4x4Tmpl<T>::transpose() const
        {
            return Matrix4x4Tmpl(
                m[0][0], m[1][0], m[2][0], m[3][0],
                m[0][1], m[1][1], m[2][1], m[3][1],
                m[0][2], m[1][2], m[2][2], m[3][2],
                m[0][3], m[1][3], m[2][3], m[3][3]
                );
        }

        template<class T> RBool Matrix4x4Tmpl<T>::equal(const Matrix4x4Tmpl<T>& ma, const T& err)
        {
            if(abs(m[0][0] - ma.m[0][0]) > err) return rfalse;
            if(abs(m[0][1] - ma.m[0][1]) > err) return rfalse;
            if(abs(m[0][2] - ma.m[0][2]) > err) return rfalse;
            if(abs(m[0][3] - ma.m[0][3]) > err) return rfalse;

            if(abs(m[1][0] - ma.m[1][0]) > err) return rfalse;
            if(abs(m[1][1] - ma.m[1][1]) > err) return rfalse;
            if(abs(m[1][2] - ma.m[1][2]) > err) return rfalse;
            if(abs(m[1][3] - ma.m[1][3]) > err) return rfalse;

            if(abs(m[2][0] - ma.m[2][0]) > err) return rfalse;
            if(abs(m[2][1] - ma.m[2][1]) > err) return rfalse;
            if(abs(m[2][2] - ma.m[2][2]) > err) return rfalse;
            if(abs(m[2][3] - ma.m[2][3]) > err) return rfalse;

            if(abs(m[3][0] - ma.m[3][0]) > err) return rfalse;
            if(abs(m[3][1] - ma.m[3][1]) > err) return rfalse;
            if(abs(m[3][2] - ma.m[3][2]) > err) return rfalse;
            if(abs(m[3][3] - ma.m[3][3]) > err) return rfalse;

            return rtrue;
        }

    }
}

#endif
