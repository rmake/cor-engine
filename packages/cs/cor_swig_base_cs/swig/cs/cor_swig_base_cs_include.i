%import "cor_swig_base_cs.i"

%include "windows.i"

%{
#include <functional>

template<typename FuncType> std::function<FuncType> cast_function_pointer(std::function<FuncType> ft, void* f)
{
    return std::function<FuncType>((FuncType*)f);

}
%}

%define %cs_callback(TYPE, CSTYPE)
        %typemap(ctype) TYPE, TYPE& "void*"
        %typemap(in) TYPE  %{ $1 = ($1_type)$input; %}
        %typemap(in) TYPE& %{ $1 = ($1_type)&$input; %}
        %typemap(imtype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(cstype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(csin) TYPE, TYPE& "$csinput"
%enddef

%define %cs_std_callback(TYPE, CSTYPE)
        %typemap(ctype) TYPE, TYPE& "void*"
        %typemap(in) TYPE  %{ $1 = cast_function_pointer($1_type(), $input); %}
        %typemap(in) TYPE& %{ $1 = cast_function_pointer($1_type(), &$input); %}
        %typemap(imtype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(cstype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(csin) TYPE, TYPE& "$csinput"
%enddef

%ignore  cor::binding_test::*::operator+;

