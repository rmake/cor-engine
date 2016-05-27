#ifndef _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASSES_
#define _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASSES_

#include "cor_type/sources/basic_types.h"

typedef void (*CallbackFunc)();
typedef std::function<void()> CallbackStdFunc;

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

        class Callback
        {
        private:
            CallbackStdFunc func;
        public:
            Callback();
            COR_SP_HELPER_DEFINE(Callback);

            void set_func(CallbackFunc func);
            void set_std_func(CallbackStdFunc func);
            void call_func();
        };

        class CorBindingTestClasses
        {
            std::unique_ptr<CorBindingTestClassItnl> itnl;
        public:

            CorBindingTestClasses();
            virtual ~CorBindingTestClasses();

            COR_SP_HELPER_DEFINE(CorBindingTestClasses);
            //static CorBindingTestClassSp create();
            //static CorBindingTestClass* from_sp(CorBindingTestClassSp sp);
            void set_a(RInt32 a);
            RInt32 get_a();
            void set_b(RFloat b);
            RFloat get_b();
            void set_c(RString c);
            RString get_c();
            void set_some_struct(SomeStruct some);
            SomeStruct get_some_struct();
        };

    }

}


#endif
