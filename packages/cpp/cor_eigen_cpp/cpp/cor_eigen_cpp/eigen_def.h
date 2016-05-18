#ifndef ____COR_EIGEN_CPP_SOURCES_EIGEN_DEF_H_
#define ____COR_EIGEN_CPP_SOURCES_EIGEN_DEF_H_

#include "cor_type/sources/basic_types.h"
//#include "cor_mruby_interface/sources/mruby_state.h"
//#include <Eigen/Dense>
//#include <Eigen/src/Core/Matrix.h>

#ifndef COR_MRUBY_BINDING_GENERATING
#include <Eigen/Dense>
#endif

namespace cor
{
    namespace eigen
    {
#ifndef COR_MRUBY_BINDING_GENERATING
        typedef Eigen::Vector3d EVector3D;
        typedef Eigen::Vector3f EVector3F;
#else
        struct EVector3D {};
        struct EVector3F {};
#endif

    }

}

#include "vector3.h"

#endif
