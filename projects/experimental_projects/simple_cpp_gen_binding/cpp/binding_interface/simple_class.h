#ifndef _SIMPLE_CLASS_H_
#define _SIMPLE_CLASS_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace project_structure
    {

        class SimpleClass
        {
            int a;
        public:
            SimpleClass(){}
            static int add(int a, int b);
            void set_a(int a);
            int get_a();
        };
    }
}

#endif

