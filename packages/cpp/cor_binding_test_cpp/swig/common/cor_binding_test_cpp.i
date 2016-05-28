%import "../../../../cpp/cor_swig_base_cpp/swig/common/cor_swig_base_cpp.i"

%module cor_binding_test_dll
%{
#include "cor_binding_test_cpp/cor_binding_test_functions.h"
#include "cor_binding_test_cpp/cor_binding_test_classes.h"
#include "cor_binding_test_cpp/cor_binding_test_templates.h"
%}

%include "cor_binding_test_cpp/cor_binding_test_functions.h"
%include "cor_binding_test_cpp/cor_binding_test_classes.h"
%include "cor_binding_test_cpp/cor_binding_test_templates.h"

%ignore  cor::binding_test::*::operator+;

%rename(Add) cor::binding_test::SimpleTemplate<cor::RInt32>::operator+;
%rename(Add) cor::binding_test::SimpleTemplate<cor::RDouble>::operator+;
%rename(Add) cor::binding_test::SimpleTemplate<cor::RString>::operator+;

%template(SimpleTemplateInt32) cor::binding_test::SimpleTemplate<cor::RInt32>;
%template(SimpleTemplateDouble) cor::binding_test::SimpleTemplate<cor::RDouble>;
%template(SimpleTemplateString) cor::binding_test::SimpleTemplate<cor::RString>;


