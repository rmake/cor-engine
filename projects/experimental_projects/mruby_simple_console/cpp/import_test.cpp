#include "import/external_code_importer.h"
#include "import_test.h"
#include "test.h"

namespace cor
{

    namespace mruby_interface
    {
        int ImportTest::add(int a, int b)
        {
            return a + b;
        }

        void mruby_simple_console_import_initialize(mruby_interface::MrubyState& mrb)
        {
            auto& binder = mrb.ref_binder();

            binder.bind_class<ImportTest>("Cor", "ImportTest");
            binder.bind_static_method("Cor", "ImportTest", "add", ImportTest::add);
        }
    }

    namespace external_initializer
    {
        void mruby_simple_console_import_initialize(mruby_interface::MrubyState& mrb)
        {
            mruby_interface::mruby_simple_console_import_initialize(mrb);
        }
    }
}


