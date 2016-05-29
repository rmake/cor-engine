%include "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs_include.i"
%include "../../../../cpp/cor_eigen_cpp/swig/common/cor_eigen_cpp.i"

%ignore  cor::eigen::*::operator+;

%rename(Add) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3D>::operator+;
%rename(Sub) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3D>::operator-;
%rename(Mul) cor::eigen::Vector3<cor::RDouble, cor::RInt32, cor::eigen::EVector3D>::operator*;


