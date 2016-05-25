#ifndef _CPP_COR_BINDING_TEST_FUNCTIONS_H_
#define _CPP_COR_BINDING_TEST_FUNCTIONS_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace binding_test
    {
        class CorBindingTestGlobal
        {
        public:
            static int add_int(int a, int b);
            static double add_double(double a, double b);
            static std::string add_string(std::string a, std::string b);

            static int overloaded(int a);
            static RString overloaded(RString a);
        };



    }

}

#endif
