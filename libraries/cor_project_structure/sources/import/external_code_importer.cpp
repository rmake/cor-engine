
#include "external_code_importer.h"
#define COR_IMPORTER_CURRENT_NAMESPACE project_structure
#include "external_code_import_local_conf.h"
#include "cor_cocos2dx_mruby_interface/sources/mruby_script_engine.h"

namespace cor
{
    namespace project_structure
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

        void ExternalCodeImporter::init_first()
        {
            cocos2dx_mruby_interface::MrubyScriptEnginePtr instance = cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
            auto& mrb = instance->ref_mrb();

            initialize(mrb);
        }

    }
}
