
#include "external_code_importer.h"
#include "external_code_import_local_conf.h"

namespace cor
{
    namespace mruby_interface
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
