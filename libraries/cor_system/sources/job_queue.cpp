#include "job_queue.h"

#include "cor_system/sources/logger.h"

#include <deque>
#include <mutex>

namespace cor
{
    namespace system
    {
        typedef std::deque<JobQueueFunc> JobQueueFuncDeque;

        struct JobQueueItnl
        {
            std::mutex mutex;
            JobQueueFuncDeque queue;
        };
        
        JobQueue::JobQueue() : itnl(new JobQueueItnl())
        {
            
        }
        
        JobQueue::~JobQueue()
        {
            
        }

        RBool JobQueue::empty()
        {
            std::lock_guard<std::mutex> locker(itnl->mutex);
            return itnl->queue.empty();
        }

        void JobQueue::add_job(JobQueueFunc job)
        {
            std::lock_guard<std::mutex> locker(itnl->mutex);
            itnl->queue.push_back(job);
        }


        JobQueueFunc JobQueue::pop_job()
        {
            std::lock_guard<std::mutex> locker(itnl->mutex);
            if(itnl->queue.empty())
            {
                return JobQueueFunc();
            }
            auto r = itnl->queue.front();
            itnl->queue.pop_front();
            return r;
            
        }

        void JobQueue::step()
        {
            for(;;)
            {
                if(itnl->queue.empty())
                {
                    break;
                }

                auto f = pop_job();
                if(f)
                {
                    f();
                }
                
                
            }
        }
    }
}
