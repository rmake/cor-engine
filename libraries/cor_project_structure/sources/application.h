#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_APPLICATION_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_APPLICATION_H_

#include "project_group_scene.h"

namespace cor
{
    namespace project_structure
    {
        struct ApplicationItnl;

        typedef std::function<bool()> ApplicationDidFinishLaunchingFunc;
        typedef std::function<void()> ApplicationDidEnterBackgroundFunc;
        typedef std::function<void()> ApplicationWillEnterForegroundFunc;
    
        class Application
        {
            std::unique_ptr<ApplicationItnl> itnl;
        
        public:
        
            Application();
            virtual ~Application();

            void set_did_finish_launching_func(ApplicationDidFinishLaunchingFunc did_finish_launching_func);
            ApplicationDidFinishLaunchingFunc get_did_finish_launching_func();

            void set_did_enter_back_ground_func(ApplicationDidEnterBackgroundFunc did_enter_back_ground_func);
            ApplicationDidEnterBackgroundFunc get_did_enter_back_ground_func();

            void set_will_enter_foreground_func(ApplicationWillEnterForegroundFunc will_enter_foreground_func);
            ApplicationWillEnterForegroundFunc get_will_enter_foreground_func();

            virtual bool applicationDidFinishLaunching();
            virtual void applicationDidEnterBackground();
            virtual void applicationWillEnterForeground();

            void start_with_project(const RString& name, const ProjectBaseSP& project);
            void replace_to_project(const RString& name, const ProjectBaseSP& project);
        };
    }
}

#endif
