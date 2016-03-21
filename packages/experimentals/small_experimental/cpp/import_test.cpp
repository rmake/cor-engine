#include "import/external_code_importer.h"
#include "import_test.h"

namespace cor
{

    namespace project_structure
    {
        int ImportTest::add(int a, int b)
        {
            return a + b;
        }

        void small_experimental_import_initialize(mruby_interface::MrubyState& mrb)
        {
            auto& binder = mrb.ref_binder();

            binder.bind_class<ImportTest>("Cor", "ImportTest");
            binder.bind_static_method("Cor", "ImportTest", "add", ImportTest::add);
        }
    }

    namespace external_initializer
    {
        void small_experimental_import_initialize(mruby_interface::MrubyState& mrb)
        {
            project_structure::small_experimental_import_initialize(mrb);
        }
    }

}


