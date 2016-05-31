%import "cor_swig_base_cs.i"

%include "windows.i"

%{
#include <functional>
#include <tuple>
#include <iostream>
#include <string>

template<int ... > struct seq { };

template<int N, int ...S>
struct gens : gens<N-1, N-1, S...> { };

template<int ...S>
struct gens<0, S...> {
  typedef seq<S...> type;
};

template<class T> std::tuple<T> CallbackFunctionConvert(T t)
{
    std::cout << "tt " << t << std::endl;
    return std::make_tuple(t);
}
template<> std::tuple<std::string> CallbackFunctionConvert(std::string t)
{
    std::cout << "ts " << t << std::endl;
    return std::make_tuple(t.c_str());
}

template<class... Args> std::tuple<std::string, Args...> CallbackFunctionConvert(std::string t, Args... args)
{
    std::cout << "t s " << t << std::endl;
    return std::make_tuple(t).tuple_cat(CallbackFunctionConvert(args));
}
template<class T, class... Args> std::tuple<T, Args...> CallbackFunctionConvert(T t, Args... args)
{
    std::cout << "t t " << t << std::endl;
    return std::make_tuple(t.c_str()).tuple_cat(CallbackFunctionConvert(args));
}

//template<class... Args> struct TC{
//    std::tuple<Args...> params;
//    std::function<void(Args...)> func;
//
//    void dispatch(Args... args) {
//        params = CallbackFunctionConvert(args);
//        call_func(typename gens<sizeof...(Args)>::type());
//    }
//
//    template<int ...S>
//    void call_func(seq<S...>) {
//        func(std::get<S>(params) ...);
//    }
//};

template<class T> T ConvertStringForCallback(T t)
{
    return t;
}

template<class R, class T> R ConvertStringForCallback(T t)
{
    return t;
}

template<> const char* ConvertStringForCallback<const char*, std::string>(std::string t)
{
    return t.c_str();
}

template<class F> void BindAndCallVoid(F f)
{
    f();
}

template<class F, class T> void BindAndCallVoid(F f, T t)
{
    f(ConvertStringForCallback(t));
}

template<class F, class T, class... Args> void BindAndCallVoid(F f, T t, Args... args)
{
    std::cout << "BindAndCallVoid " << t << std::endl;
    BindAndCallVoid(std::bind(f, ConvertStringForCallback(t)), args...);
}

template<class... Args> std::function<void(Args...)>
  CallbackFunctionConverter(
    std::function<void(Args...)> f)
{
    std::cout << "CallbackFunctionConverter fdfs" << std::endl;

    struct TC{
        static void dispatch(std::function<void(Args...)> f, Args... args) {
            BindAndCallVoid(f, args...);
        }
    };
    return std::bind(&TC::dispatch, f);


    //TC<Args...> tc;
    //tc.func = f;
    //return std::bind(&TC<Args...>::dispatch, tc);
}

template<class RetType, class... Args> std::function<RetType(Args... args)>
  CallbackFunctionConverter(
    std::function<RetType(Args... args)> f)
{

}

template<typename FuncType> std::function<FuncType> cast_function_pointer(std::function<FuncType> ft, void* f)
{
    //return std::function<FuncType>((FuncType*)f);
    return CallbackFunctionConverter(std::function<FuncType>((FuncType*)f));

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

