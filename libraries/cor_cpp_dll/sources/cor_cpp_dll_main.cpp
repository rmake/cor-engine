#include <iostream>
#include "cor_type/sources/basic_types.h"
#include "cor_cpp_import/sources/import/external_code_importer.h"
#include "cor_cpp_dll_main.h"

void CorCppDllMain::start()
{
    std::cout << "cor console app start." << std::endl;

    cor::cpp_interface::ExternalCodeImporter::initialize();

}


