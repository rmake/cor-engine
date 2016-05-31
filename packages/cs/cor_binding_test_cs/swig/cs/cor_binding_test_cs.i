%include "../../../../cs/cor_swig_base_cs/swig/cs/cor_swig_base_cs_include.i"

%cs_callback(cor::binding_test::CallbackFunc, CallbackFunc)
%cs_std_callback(cor::binding_test::CallbackStdFunc, CallbackStdFunc)
%cs_std_callback(cor::binding_test::StringCallbackFunc, StringCallbackFunc)

%include "../../../../cpp/cor_binding_test_cpp/swig/common/cor_binding_test_cpp.i"

%pragma(csharp) moduleimports=%{
public delegate void CallbackFunc();
public delegate void CallbackStdFunc();
public delegate void StringCallbackFunc(string str);
%}

