#include "import/external_code_importer.h"
#include "import_test.h"

#include <iostream>

namespace cor
{

    namespace cpp_interface
    {
        int ImportTest::add(int a, int b)
        {
            return a + b;
        }

        void cpp_simple_console_import_initialize()
        {
            std::cout << "ImportTest::add(2, 3) -> " << ImportTest::add(2, 3) << std::endl;
        }
    }

    namespace external_initializer
    {
        void cpp_simple_console_import_initialize()
        {
            cpp_interface::cpp_simple_console_import_initialize();
        }
    }
}


