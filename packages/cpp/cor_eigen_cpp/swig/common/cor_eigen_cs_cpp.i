
%module cor_eigen_dll
%{
#include "cor_type/sources/basic_types.h"
#include "cor_eigen_cpp/eigen_def.h"
#include "cor_eigen_cpp/vector3.h"
%}
%include "cor_type/sources/basic_types.h"
%include "cor_eigen_cpp/eigen_def.h"
%include "cor_eigen_cpp/vector3.h"

%template(Vector3D) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3D>;
%template(Vector3F) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3F>;

%rename(__add__) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3D>::operator+;
