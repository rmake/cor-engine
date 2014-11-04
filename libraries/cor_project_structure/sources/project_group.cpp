#include "project_group.h"
#include "project_group_scene.h"

namespace cor
{
    namespace project_structure
    {
        typedef std::vector<ProjectBaseSP> ProjectArray;
        typedef std::map<RString, ProjectBaseSP> ProjectTableByName;
        typedef std::map<ProjectBaseSP, RString> NameTableByProject;

        struct ProjectGroupItnl
        {
            ApplicationPtr app;
            Cocos2dSceneWP scene;
            ProjectGroupSceneWP layer;
            ProjectArray sorted_projects;
            ProjectTableByName project_table_by_name;
            NameTableByProject name_table_by_project;
            ProjectBaseSP root_project;
            RSize current_index;
            ProjectGroupWP me;

        };
        
        ProjectGroup::ProjectGroup() : itnl(new ProjectGroupItnl())
        {
            
        }
        
        ProjectGroup::~ProjectGroup()
        {
            
        }

        ProjectGroupSP ProjectGroup::create()
        {
            auto pg = std::make_shared<ProjectGroup>();
            pg->itnl->me = pg;
            return pg;
        }

        void ProjectGroup::set_app(ApplicationPtr app)
        {
            itnl->app = app;
        }

        ApplicationPtr ProjectGroup::get_app()
        {
            return itnl->app;
        }

        void ProjectGroup::set_root_project(const ProjectBaseSP& project)
        {
            itnl->root_project = project;
        }

        ProjectBaseSP ProjectGroup::get_root_project()
        {
            return itnl->root_project;
        }

        void ProjectGroup::set_scene_layer(Cocos2dSceneWP scene, ProjectGroupSceneWP layer)
        {
            itnl->scene = scene;
            itnl->layer = layer;
        }

        Cocos2dSceneWP ProjectGroup::get_scene()
        {
            return itnl->scene;
        }

        ProjectGroupSceneWP ProjectGroup::get_layer()
        {
            return itnl->layer;
        }

        void ProjectGroup::add_project(const RString& name, const ProjectBaseSP& project)
        {
            project->set_project_group(itnl->me.lock());

            itnl->project_table_by_name[name] = project;
            itnl->name_table_by_project[project] = name;

            if(!itnl->root_project.get())
            {
                itnl->root_project = project;
            }
        }

        ProjectBaseSP ProjectGroup::search_project(const RString& name)
        {
            return itnl->project_table_by_name[name];
        }

        RString ProjectGroup::search_name(ProjectBaseSP project)
        {
            return itnl->name_table_by_project[project];
        }

        void ProjectGroup::remove_project(const RString& name, const ProjectBaseSP& project)
        {
            itnl->project_table_by_name.erase(name);
            itnl->name_table_by_project.erase(project);
        }

        void ProjectGroup::remove_project(const RString& name)
        {
            remove_project(name, itnl->project_table_by_name[name]);
        }

        void ProjectGroup::remove_project(const ProjectBaseSP& project)
        {
            remove_project(itnl->name_table_by_project[project], project);
        }

        void ProjectGroup::sort_projects_recursive(const ProjectBaseSP& project)
        {
            auto children = project->ref_children();
            for(auto child : children)
            {
                sort_projects_recursive(child);
                if(itnl->current_index == 0)
                {
                    child->set_index(itnl->current_index);
                    itnl->current_index++;
                    itnl->sorted_projects.push_back(child);
                }
            }
            
        }

        void ProjectGroup::sort_projects()
        {
            auto list = itnl->sorted_projects;
            list.clear();

            for(auto p : itnl->project_table_by_name)
            {
                const auto& name = p.first;
                const auto& project = p.second;
                project->set_index(0);
            }

            itnl->current_index = 1;

            sort_projects_recursive(itnl->root_project);

            //algorithm::sort_all(list, [=](ProjectBaseSP& a, ProjectBaseSP& b){
            //    return a->get_index() < b->get_index();
            //});
        }

        void ProjectGroup::start()
        {
            ProjectGroupScenePtr project_group_scene;
            auto scene = ProjectGroupScene::createScene(project_group_scene);

            itnl->scene = scene;
            itnl->layer = ProjectGroupSceneWP(project_group_scene);

            itnl->root_project->start();

            project_group_scene->set_project_group(itnl->me.lock());
            project_group_scene->start();

        }

        void ProjectGroup::step()
        {
            for(auto p : itnl->project_table_by_name)
            {
                const auto& name = p.first;
                const auto& project = p.second;
                project->call_step();
            }
        }

        void ProjectGroup::stop()
        {
            for(auto p : itnl->project_table_by_name)
            {
                const auto& name = p.first;
                const auto& project = p.second;
                project->stop();
            }
        }

    }
}
