#include "import/external_code_importer.h"
#include "generated_binding.h"

namespace cor
{
    namespace external_initializer
    {
        void lib_load_eval_import_initialize(mruby_interface::MrubyState& mrb)
        {
            cor::lib_load_eval_cpp_gen_binding::GeneratedBinding::bind(mrb);
            mrb.load_string_log("CorMrubyInterface::MrubyLoader.load_eval 'lib/load_eval.rb'");
        }
    }

}
