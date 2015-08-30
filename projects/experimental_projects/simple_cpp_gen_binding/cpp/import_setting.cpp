#include "import/external_code_importer.h"
#include "generated_binding.h"

namespace cor
{
    namespace project_structure
    {
        void ExternalCodeImporter::initialize(mruby_interface::MrubyState& mrb)
        {
            simple_cpp_gen_binding::GeneratedBinding::bind(mrb);
        }
    }

}
