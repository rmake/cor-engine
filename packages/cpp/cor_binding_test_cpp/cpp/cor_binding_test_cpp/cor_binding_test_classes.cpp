#include "cor_binding_test_classes.h"
#include <iostream>

namespace cor
{
    namespace binding_test
    {
        COR_SP_HELPER_IMPLEMENT(SomeStruct)
        COR_SP_HELPER_IMPLEMENT(CorBindingTestClasses)

        struct CorBindingTestClassItnl
        {
            RInt32 a;
            RFloat b;
            RString c;
            SomeStruct s;
        };

        CorBindingTestClasses::CorBindingTestClasses() : itnl(new CorBindingTestClassItnl())
        {

        }

        CorBindingTestClasses::~CorBindingTestClasses()
        {

        }

        void CorBindingTestClasses::set_a(RInt32 a)
        {
            itnl->a = a;
        }

        RInt32 CorBindingTestClasses::get_a()
        {
            return itnl->a;
        }

        void CorBindingTestClasses::set_b(RFloat b)
        {
            itnl->b = b;
        }

        RFloat CorBindingTestClasses::get_b()
        {
            return itnl->b;
        }

        void CorBindingTestClasses::set_c(RString c)
        {
            itnl->c = c;
        }

        RString CorBindingTestClasses::get_c()
        {
            return itnl->c;
        }

        void CorBindingTestClasses::set_some_struct(SomeStruct some)
        {
            itnl->s = some;
        }

        SomeStruct CorBindingTestClasses::get_some_struct()
        {
            return itnl->s;
        }

    }

}

