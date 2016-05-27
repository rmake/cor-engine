%import "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs.i"
%include "windows.i"

%define %cs_callback(TYPE, CSTYPE)
        %typemap(ctype) TYPE, TYPE& "void*"
        %typemap(in) TYPE  %{ $1 = ($1_type)$input; %}
        %typemap(in) TYPE& %{ $1 = ($1_type)&$input; %}
        %typemap(imtype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(cstype, out="IntPtr") TYPE, TYPE& "CSTYPE"
        %typemap(csin) TYPE, TYPE& "$csinput"
%enddef

%cs_callback(CallbackFunc, CallbackFunc)


%include "../../../../cpp/cor_binding_test_cpp/swig/common/cor_binding_test_cpp.i"

%pragma(csharp) moduleimports=%{
public delegate void CallbackFunc(Callback callback);
%}

