#include "binding_interface/mruby_loader.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include <iostream>
#include <fstream>

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyLoaderItnl
        {

        };

        MrubyLoader::MrubyLoader() : itnl(new MrubyLoaderItnl())
        {

        }

        MrubyLoader::~MrubyLoader()
        {

        }

        void MrubyLoader::load_eval(std::string file_name)
        {
            auto mrb = cor::mruby_interface::MrubyState::get_current();

            std::ifstream f("resources/project_resource/" + file_name);
            if (f.fail()) {
                std::cout << "error load failed" << std::endl;
                throw ("error load failed " + file_name);
            }

            std::istreambuf_iterator<char> it(f);
            std::istreambuf_iterator<char> last;
            std::string str(it, last);

            mrb->load_string_error_log(file_name, str);
        }

    }

}

