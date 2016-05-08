#ifndef _CPP_COR_EIGEN_CPP_VECTOR3_H_
#define _CPP_COR_EIGEN_CPP_VECTOR3_H_

#include "eigen_def.h"

namespace cor
{
    namespace eigen
    {
        template<class T, class Index, class Parent>class Vector3 : public Parent {
        public:

            Vector3()
            {

            }

            Vector3(const Vector3& vector)
            {
                *this = vector;
            }

            Vector3(const Parent& vector)
            {
                *static_cast<Parent*>(this) = vector;
            }

            Vector3(const T& x, const T& y, const T& z)
            {
                *static_cast<Parent*>(this) = Parent(x, y, z);
            }

            Parent get_original()
            {
                return *static_cast<Parent*>(this);
            }

            T get(Index index)
            {
                return (*this)(index);
            }

            void set(Index index, const T& value)
            {
                (*this)(index) = value;
            }

            T get_x() {
                return (*this)(0);
            }

            T get_y() {
                return (*this)(1);
            }

            T get_z() {
                return (*this)(2);
            }

            void set_x(const T& x) {
                (*this)(0) = x;
            }

            void set_y(const T& y) {
                (*this)(1) = y;
            }

            void set_z(const T& z) {
                (*this)(2) = z;
            }

            RDouble dot(const Vector3& vector)
            {
                return Parent::dot(vector);
            }

            Vector3 cross(const Vector3& vector)
            {
                return Vector3(Parent::cross(vector));
            }

            Vector3 operator*(const T& a) const
            {
                return Vector3(Parent::operator*(a));
            }

            Vector3 operator+(const Vector3& a) const
            {
                return Vector3(Parent::operator+(a));
            }

            Vector3 operator-(const Vector3& a) const
            {
                return Vector3(Parent::operator-(a));
            }

            Vector3 operator-() const
            {
                return Vector3(Parent::operator-());
            }
        };

        typedef Vector3<RDouble, RInt32, EVector3D> Vector3D;
        typedef Vector3<RDouble, RInt32, EVector3F> Vector3F;

    }

}


#endif
