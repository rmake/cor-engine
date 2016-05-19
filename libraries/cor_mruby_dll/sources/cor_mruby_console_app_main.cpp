#include <iostream>
#include <fstream>
#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_import/sources/import/external_code_importer.h"

int main()
{

    cor::mruby_interface::MrubyState mrb;
    if (!mrb.init())
    {
        std::cout << "error on mrb init" << std::endl;
        return 1;

    }
    cor::mruby_interface::BasicBind::bind(mrb);
    cor::mruby_interface::ExternalCodeImporter::initialize(mrb);


    std::ifstream f("resources/project_resource/start.rb");
    if (f.fail()) {
        std::cout << "error load failed" << std::endl;
        return 1;
    }

    std::istreambuf_iterator<char> it(f);
    std::istreambuf_iterator<char> last;
    std::string str(it, last);

    mrb.load_string_error_log("resources/project_resource/start.rb", str);

    return 0;

}


