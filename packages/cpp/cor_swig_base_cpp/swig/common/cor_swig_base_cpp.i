%module cor_swig_base_dll
%{
#include "cor_type/sources/basic_types.h"
%}
%include "cor_type/sources/basic_types.h"

#ifdef SWIGCSHARP
%include <std_string.i>
%include <std_shared_ptr.i>
#endif
