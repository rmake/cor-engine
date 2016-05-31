%include "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs_include.i"

%cs_callback(CallbackFunc, CallbackFunc)
%cs_std_callback(CallbackStdFunc, CallbackStdFunc)

%include "../../../../cpp/cor_binding_test_cpp/swig/common/cor_binding_test_cpp.i"

%pragma(csharp) moduleimports=%{
public delegate void CallbackFunc();
public delegate void CallbackStdFunc();
%}

