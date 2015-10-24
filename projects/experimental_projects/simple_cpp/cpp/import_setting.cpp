#include "import/external_code_importer.h"
#include "simple_class.h"

namespace cor
{
    namespace project_structure
    {
        void simple_cpp_import_initialize(mruby_interface::MrubyState& mrb)
        {
            auto& binder = mrb.ref_binder();

            binder.bind_class<SimpleClass>("Cor", "SimpleClass");
            binder.bind_static_method("Cor", "SimpleClass", "add", SimpleClass::add);
        }
    }

}
