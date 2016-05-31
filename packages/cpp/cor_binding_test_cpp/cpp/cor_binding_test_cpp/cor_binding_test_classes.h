#ifndef _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASSES_
#define _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASSES_

#include "cor_type/sources/basic_types.h"



namespace cor
{
    namespace binding_test
    {
        class CorBindingTestClasses;
        typedef std::shared_ptr<CorBindingTestClasses> CorBindingTestClassesSp;
        typedef std::weak_ptr<CorBindingTestClasses> CorBindingTestClassesWp;

        struct SomeStruct
        {
            RInt32 a;
            RFloat b;
            RString c;
            CorBindingTestClassesSp d;
            CorBindingTestClassesWp e;

            COR_SP_HELPER_DEFINE(SomeStruct);
        };

        struct CorBindingTestClassItnl;

        typedef void (*CallbackFunc)();
        typedef std::function<void()> CallbackStdFunc;

        typedef std::function<void(RString)>StringCallbackFunc;

        class Callback
        {
        private:
            CallbackFunc func;
            CallbackStdFunc std_func;
        public:

            Callback();
            COR_SP_HELPER_DEFINE(Callback);

            void set_func(CallbackFunc func);
            void set_std_func(CallbackStdFunc std_func);
            void call_func();
            void call_std_func();

            void callback_string(RString str, StringCallbackFunc str_func);
        };

        class CorBindingTestClasses
        {
            std::unique_ptr<CorBindingTestClassItnl> itnl;
        public:

            CorBindingTestClasses();
            virtual ~CorBindingTestClasses();

            COR_SP_HELPER_DEFINE(CorBindingTestClasses);

            static int static_call(int num);

            void set_a(RInt32 a);
            RInt32 get_a();
            void set_b(RFloat b);
            RFloat get_b();
            void set_c(RString c);
            RString get_c();
            void set_some_struct(SomeStruct some);
            SomeStruct get_some_struct();
        };

        class ParentClass;
        typedef std::shared_ptr<ParentClass> ParentClassSp;
        typedef std::weak_ptr<ParentClass> ParentClassWp;

        class ParentClass
        {
            RInt32 num;
        public:

            ParentClass();
            virtual ~ParentClass();
            COR_SP_HELPER_DEFINE(ParentClass);

            virtual void set_num(RInt32 num);
            virtual RInt32 get_num();

            virtual RString get_text();

        };

        class ChildClass;
        typedef std::shared_ptr<ChildClass> ChildClassSp;
        typedef std::weak_ptr<ChildClass> ChildClassWp;

        class ChildClass : public ParentClass
        {
        public:

            COR_SP_HELPER_DEFINE(ChildClass);

            virtual RString get_text();

        };

        class EnumClass
        {
        public:
            enum {
                A,
                B
            };

            enum class Val: int {
                A,
                B
            };
        private:
            int a;
            Val val;

        public:
            COR_SP_HELPER_DEFINE(EnumClass);

            void set_a(int a);
            int get_a();

            void set_val(Val val);
            Val get_val();

        };

        class OverloadClass
        {
        public:
            int overloaded_call(int a);
            std::string overloaded_call(std::string a);
        };

    }

}


#endif
