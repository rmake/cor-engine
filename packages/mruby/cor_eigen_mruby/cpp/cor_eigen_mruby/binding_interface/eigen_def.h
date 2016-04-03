#ifndef ____COR_EIGEN_MRUBY_SOURCES_EIGEN_DEF_H_
#define ____COR_EIGEN_MRUBY_SOURCES_EIGEN_DEF_H_

#include "cor_type/sources/basic_types.h"
#include <Eigen/Dense>
#include "cor_eigen_cpp/eigen_def.h"

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

            Parent getOriginal()
            {
                return *static_cast<Parent*>(this);
            }

            T get(Index index)
            {
                return (*this)(index);
            }

            void set(Index index, T value)
            {
                (*this)(index) = value;
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

        typedef Vector3<RDouble, RInt32, Eigen::Vector3d> Vector3D;
        typedef Vector3<RDouble, RInt32, Eigen::Vector3f> Vector3F;

    }

}

#endif
