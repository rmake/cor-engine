#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_GROUP_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_GROUP_H_

#include "cor_type/sources/basic_types.h"
#include "cor_algorithm/sources/utilities.h"
#include "project_base.h"

namespace cor
{
    namespace project_structure
    {
        struct ProjectGroupItnl;
    
        class ProjectGroup
        {
            std::unique_ptr<ProjectGroupItnl> itnl;

            void remove_project(const RString& name, const ProjectBaseSP& project);

            void sort_projects_recursive(const ProjectBaseSP& project);
            void sort_projects();
        
        public:
        
            ProjectGroup();
            virtual ~ProjectGroup();

            static ProjectGroupSP create();

            void set_app(ApplicationPtr app);
            ApplicationPtr get_app();

            void set_root_project(const ProjectBaseSP& project);
            ProjectBaseSP get_root_project();

            void set_scene_layer(Cocos2dSceneWP scene, ProjectGroupSceneWP layer);
            Cocos2dSceneWP get_scene();
            ProjectGroupSceneWP get_layer();

            void add_project(const RString& name, const ProjectBaseSP& project);
            ProjectBaseSP search_project(const RString& name);
            RString search_name(ProjectBaseSP project);
            void remove_project(const RString& name);
            void remove_project(const ProjectBaseSP& project);

            virtual void start();
            virtual void step();

            void stop();
            
        };
    }
}

#endif
