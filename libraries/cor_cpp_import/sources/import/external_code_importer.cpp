
#include "external_code_importer.h"
#ifndef COR_IMPORTER_INITIALIZE
#define COR_IMPORTER_INITIALIZE void ExternalCodeImporter::initialize()
#endif
#define COR_IMPORTER_CURRENT_NAMESPACE cpp_interface
#include "external_code_import_local_conf.h"

namespace cor
{
    namespace cpp_interface
    {
        struct ExternalCodeImporterItnl
        {

        };

        ExternalCodeImporter::ExternalCodeImporter() : itnl(new ExternalCodeImporterItnl())
        {

        }

        ExternalCodeImporter::~ExternalCodeImporter()
        {

        }

        RString ExternalCodeImporter::get_imported_name()
        {
            return imported_name;
        }

    }
}
