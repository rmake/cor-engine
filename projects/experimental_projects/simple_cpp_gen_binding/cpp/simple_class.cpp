#include "binding_interface/simple_class.h"

namespace cor
{
    namespace project_structure
    {
        int SimpleClass::add(int a, int b)
        {
            return a + b;
        }

        void SimpleClass::set_a(int a)
        {
            this->a = a;
        }

        int SimpleClass::get_a()
        {
            return this->a;
        }

    }

}