#include "import/external_code_importer.h"
#include "./generated_binding.h"

namespace cor
{
    namespace external_initializer
    {
        void cor_eigen_mruby_import_initialize(mruby_interface::MrubyState& mrb)
        {
            cor_eigen_mruby_cpp_gen_binding::GeneratedBinding::bind(mrb);
        }
    }

}
