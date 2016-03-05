#include <iostream>
#include "cor_type/sources/basic_types.h"
#include "cor_cpp_interface/sources/import/external_code_importer.h"

int main()
{
    std::cout << "cor console app start." << std::endl;

    cor::cpp_interface::ExternalCodeImporter::initialize();

}


