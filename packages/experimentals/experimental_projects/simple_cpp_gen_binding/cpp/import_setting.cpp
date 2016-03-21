#include "import/external_code_importer.h"
#include "generated_binding.h"

namespace cor
{
    namespace external_initializer
    {
        void simple_cpp_gen_binding_import_initialize(mruby_interface::MrubyState& mrb)
        {
            cor::simple_cpp_gen_binding::GeneratedBinding::bind(mrb);
        }
    }

}
