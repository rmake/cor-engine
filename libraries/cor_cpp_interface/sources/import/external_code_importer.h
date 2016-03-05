#ifndef ____COR_MRUBY_INTERFACE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORTER_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORTER_H_

#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"

namespace cor
{
    namespace cpp_interface
    {
        struct ExternalCodeImporterItnl;

        class ExternalCodeImporter
        {
            std::unique_ptr<ExternalCodeImporterItnl> itnl;

        public:

            ExternalCodeImporter();
            virtual ~ExternalCodeImporter();

            static RString get_imported_name();
            static void initialize();
        };
    }
}

#endif
