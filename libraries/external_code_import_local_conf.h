#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORT_LOCAL_CONF_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORT_LOCAL_CONF_H_

#include "cor_type/sources/basic_types.h"
#ifndef COR_IMPORTER_CURRENT_NAMESPACE
#define COR_IMPORTER_CURRENT_NAMESPACE project_structure
#endif

namespace cor
{
    namespace COR_IMPORTER_CURRENT_NAMESPACE
    {
        static const char* imported_name = "default_import_project";

        void ExternalCodeImporter::initialize(mruby_interface::MrubyState& mrb)
        {

        }
    }
}


#endif
