#include "project_base.h"
#include "project_group.h"

namespace cor
{
    namespace project_structure
    {
        struct ProjectItnl
        {
            RSize index;
            ProjectBaseSPArray children;
            ProjectGroupWP project_group;
            system::JobQueueSP job_queue;
            system::ThreadPoolSP thread_pool;

            ProjectItnl()
            {
                job_queue = std::make_shared<system::JobQueue>();
                thread_pool = std::make_shared<system::ThreadPool>(job_queue, 2);
            }
        };
        
        ProjectBase::ProjectBase() : itnl(new ProjectItnl())
        {
            itnl->index = 0;
        }
        
        ProjectBase::~ProjectBase()
        {
            
        }

        ApplicationPtr ProjectBase::get_app()
        {
            if(auto g = get_project_group())
            {
                return g->get_app();
            }
            return NULL;
        }

        void ProjectBase::set_project_group(ProjectGroupSP project_group)
        {
            itnl->project_group = project_group;
        }

        ProjectGroupSP ProjectBase::get_project_group()
        {
            return itnl->project_group.lock();
        }

        void ProjectBase::set_index(RSize index)
        {
            itnl->index = index;
        }

        RSize ProjectBase::get_index()
        {
            return itnl->index;
        }

        ProjectBaseSPArray& ProjectBase::ref_children()
        {
            return itnl->children;
        }

        Cocos2dSceneWP ProjectBase::get_scene()
        {
            if(auto pg = get_project_group())
            {
                return pg->get_scene();
            }
            return Cocos2dSceneWP();
        }

        ProjectGroupSceneWP ProjectBase::get_layer()
        {
            if(auto pg = get_project_group())
            {
                return pg->get_layer();
            }
            return ProjectGroupSceneWP();
        }

        system::JobQueueSP ProjectBase::get_job_queue()
        {
            return itnl->job_queue;
        }

        system::ThreadPoolSP ProjectBase::get_thread_pool()
        {
            return itnl->thread_pool;
        }

        void ProjectBase::call_step()
        {
            itnl->job_queue->step();

            step();
        }

        void ProjectBase::start()
        {
        
        }

        void ProjectBase::step()
        {
            
        }

        void ProjectBase::stop()
        {

        }

    }
}
