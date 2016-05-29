#include "cor_binding_test_classes.h"
#include <iostream>

namespace cor
{
    namespace binding_test
    {
        COR_SP_HELPER_IMPLEMENT(SomeStruct)
        COR_SP_HELPER_IMPLEMENT(Callback)

        Callback::Callback()
        {
            func = nullptr;
            std_func = nullptr;
        }

        void Callback::set_func(CallbackFunc func)
        {
            this->func = func;
        }

        void Callback::set_std_func(CallbackStdFunc std_func)
        {
            this->std_func = std_func;
        }

        void Callback::call_func()
        {
            func();
        }

        void Callback::call_std_func()
        {
            std_func();
        }


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

        COR_SP_HELPER_IMPLEMENT(ParentClass)

        ParentClass::ParentClass()
        {
            num = 0;
        }

        ParentClass::~ParentClass()
        {

        }

        void ParentClass::set_num(RInt32 num)
        {
            this->num = num;
        }

        RInt32 ParentClass::get_num()
        {
            return num;
        }

        RString ParentClass::get_text()
        {
            RStringStream s;
            s << "parent_class " << get_num();
            return s.str();
        }

        COR_SP_HELPER_IMPLEMENT(ChildClass)

        RString ChildClass::get_text()
        {
            RStringStream s;
            s << "child_class " << get_num();
            return s.str();
        }

        COR_SP_HELPER_IMPLEMENT(EnumClass)

        void EnumClass::set_a(int a)
        {
            this->a = a;
        }

        int EnumClass::get_a()
        {
            return a;
        }

        void EnumClass::set_val(EnumClass::Val val)
        {
            this->val = val;
        }

        EnumClass::Val EnumClass::get_val()
        {
            return val;
        }
    }

}

