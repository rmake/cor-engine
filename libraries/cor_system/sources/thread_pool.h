#ifndef ____COR_SYSTEM_SOURCES_THREAD_POOL_H_
#define ____COR_SYSTEM_SOURCES_THREAD_POOL_H_


#include "cor_system/sources/job_queue.h"
#include <thread>
#include <mutex>

namespace cor
{
    namespace system
    {
        struct ThreadPoolItnl;

        class ThreadPool;
        typedef std::shared_ptr<ThreadPool> ThreadPoolSP;
        typedef std::weak_ptr<ThreadPool> ThreadPoolWP;
    
        class ThreadPool
        {
            std::unique_ptr<ThreadPoolItnl> itnl;
        
            void set_threads(RSize thread_count);
            
            void inc_run_count();
            void dec_run_count();
            void get_run_count(std::function<void(RSize)> callback);
        public:

            typedef std::function<void()> ThreadRunFunc;
            typedef std::function<void()> ThreadEndFunc;
        
            ThreadPool();
            ThreadPool(JobQueueSP job_queue, RSize thread_count);
            virtual ~ThreadPool();
            
            RBool empty();
            void add_job(ThreadRunFunc run_func, ThreadEndFunc end_func);
        };
    }
}

#endif
