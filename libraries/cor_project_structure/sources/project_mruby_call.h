#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_MRUBY_CALL_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_MRUBY_CALL_H_

#include "cor_type/sources/basic_types.h"
#include "project_base.h"


namespace cor
{
    namespace project_structure
    {
        struct ProjectMrubyCallItnl;

        class ProjectMrubyCall;
        typedef std::shared_ptr<ProjectMrubyCall> ProjectMrubyCallSP;
        typedef std::weak_ptr<ProjectMrubyCall> ProjectMrubyCallWP;
    
        class ProjectMrubyCall : public ProjectBase
        {
            std::unique_ptr<ProjectMrubyCallItnl> itnl;
        
        public:

            ProjectMrubyCall();
            virtual ~ProjectMrubyCall();

            void clear();

            void set_start_file(const RString& file_name);
            ProjectMrubyCallItnl* get_itnl();

            static void first_init(cor::project_structure::ApplicationPtr app);
            

            virtual void start();
            virtual void step();
            virtual void stop();
        };
    }
}

#endif
