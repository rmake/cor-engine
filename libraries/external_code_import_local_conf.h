#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORT_LOCAL_CONF_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_IMPORT_EXTERNAL_CODE_IMPORT_LOCAL_CONF_H_

#include "cor_type/sources/basic_types.h"
#include "cor_cocos2dx_mruby_interface/sources/mruby_script_engine.h"

namespace cor
{
    namespace project_structure
    {
        static const char* imported_name = "default_import_project";
        
        void ExternalCodeImporter::initialize(mruby_interface::MrubyState& mrb)
        {
            
        }
    }
}


#endif
