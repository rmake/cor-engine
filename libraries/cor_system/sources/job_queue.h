#ifndef ____COR_SYSTEM_SOURCES_JOB_QUEUE_H_
#define ____COR_SYSTEM_SOURCES_JOB_QUEUE_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace system
    {
        struct JobQueueItnl;

        typedef std::function<void()> JobQueueFunc;

        class JobQueue;
        typedef std::shared_ptr<JobQueue> JobQueueSP;
        typedef std::weak_ptr<JobQueue> JobQueueWP;
    
        class JobQueue
        {
            std::unique_ptr<JobQueueItnl> itnl;
        
        public:
        
            JobQueue();
            virtual ~JobQueue();

            RBool empty();
            void add_job(JobQueueFunc job);
            JobQueueFunc pop_job();
            void step();

        };
    }
}

#endif
