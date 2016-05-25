#include "cor_binding_test_functions.h"

namespace cor
{
    namespace binding_test
    {
        int CorBindingTestGlobal::add_int(int a, int b)
        {
            return a + b;
        }

        double CorBindingTestGlobal::add_double(double a, double b)
        {
            return a + b;
        }

        std::string CorBindingTestGlobal::add_string(std::string a, std::string b)
        {
            return a + b;
        }

        int CorBindingTestGlobal::overloaded(int a)
        {
            return a + 1;
        }

        RString CorBindingTestGlobal::overloaded(RString a)
        {
            return a + "1";
        }

    }

}
