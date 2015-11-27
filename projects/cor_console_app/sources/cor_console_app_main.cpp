#include <iostream>
#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"

int main()
{
    std::cout << "cor console app." << std::endl;

    cor::mruby_interface::MrubyState mrb;
    if (!mrb.init())
    {
        std::cout << "error on mrb init" << std::endl;
        return 1;

    }

    cor::mruby_interface::BasicBind::bind(mrb);

    mrb.load_string_log("puts 'test'");

}


