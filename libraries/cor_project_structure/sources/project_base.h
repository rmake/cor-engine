#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_H_

#include "cor_type/sources/basic_types.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/job_queue.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_system/sources/thread_pool.h"
#include "2d/CCScene.h"

namespace cor
{
    namespace project_structure
    {
        class Application;
        typedef Application* ApplicationPtr;

        class ProjectGroup;
        typedef ProjectGroup* ProjectGroupPtr;
        typedef std::shared_ptr<ProjectGroup> ProjectGroupSP;
        typedef std::weak_ptr<ProjectGroup> ProjectGroupWP;

        class ProjectGroupScene;
        typedef ProjectGroupScene* ProjectGroupScenePtr;
        typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<ProjectGroupScene> ProjectGroupSceneWP;
        typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dSceneWP;
        typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Layer> Cocos2dLayerWP;
        typedef cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dNodeWP;

        struct ProjectItnl;

        class ProjectBase;
        typedef ProjectBase* ProjectBasePtr;
        typedef std::shared_ptr<ProjectBase> ProjectBaseSP;
        typedef std::weak_ptr<ProjectBase> ProjectBaseWP;
        typedef std::vector<ProjectBaseSP> ProjectBaseSPArray;
    
        class ProjectBase
        {
            std::unique_ptr<ProjectItnl> itnl;
        
        public:
        
            ProjectBase();
            virtual ~ProjectBase();

            ApplicationPtr get_app();

            void set_project_group(ProjectGroupSP project_group);
            ProjectGroupSP get_project_group();

            void set_index(RSize index);
            RSize get_index();

            ProjectBaseSPArray& ref_children();

            Cocos2dSceneWP get_scene();
            ProjectGroupSceneWP get_layer();
            system::JobQueueSP get_job_queue();
            system::ThreadPoolSP get_thread_pool();

            void call_step();

            virtual void start();
            virtual void step();
            virtual void stop();
        };

        
    }
}

#endif
