#include "thread_pool.h"
#include <condition_variable>
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace system
    {
        struct ThreadPoolItnl
        {
            std::vector<std::thread> threads;
            JobQueueSP thread_job_queue;
            JobQueueSP end_job_queue;
            std::mutex cnd_mutex;
            std::condition_variable cnd;
            std::mutex main_cnd_mutex;
            std::condition_variable main_cnd;
            std::mutex run_count_mutex;
            RSize run_count;
            RBool terminated;

            ThreadPoolItnl()
            {
                thread_job_queue = std::make_shared<JobQueue>();
                end_job_queue = std::make_shared<JobQueue>();
                run_count = 0;
                terminated = rfalse;
            }
        };
        
        ThreadPool::ThreadPool() : itnl(new ThreadPoolItnl())
        {
            set_threads(1);
        }

        ThreadPool::ThreadPool(JobQueueSP end_job_queue, RSize thread_count) : itnl(new ThreadPoolItnl())
        {
            itnl->end_job_queue = end_job_queue;
            set_threads(thread_count);
        }

        ThreadPool::~ThreadPool()
        {
            itnl->terminated = rtrue;
            for(auto& t : itnl->threads)
            {
                t.join();
            }
        }

        void ThreadPool::set_threads(RSize thread_count)
        {
            for(RSize i = 0; i < thread_count; i++)
            {
                itnl->threads.push_back(std::thread([=](){
                    while(!itnl->terminated)
                    {
                        
                        inc_run_count();
                        if(!itnl->thread_job_queue->empty())
                        {
                            auto f = itnl->thread_job_queue->pop_job();
                            if(f)
                            {
                                f();
                            }
                        }
                        dec_run_count();

                        while(!itnl->terminated && itnl->thread_job_queue->empty())
                        {
                            std::this_thread::sleep_for(std::chrono::milliseconds(1));
                        }
                    }
                    
                    
                }));
            }
        }

        void ThreadPool::inc_run_count()
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            itnl->run_count++;
        }

        void ThreadPool::dec_run_count()
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            itnl->run_count--;
        }

        void ThreadPool::get_run_count(std::function<void(RSize)> callback)
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            callback(itnl->run_count);
        }

        RBool ThreadPool::empty()
        {
            RBool r;
            get_run_count([&](RSize sz){
                //danger?
                r = itnl->thread_job_queue->empty() && itnl->end_job_queue->empty() && sz <= 0;
            });
            return r;
        }

        void ThreadPool::add_job(ThreadRunFunc run_func, ThreadEndFunc end_func)
        {
            itnl->thread_job_queue->add_job([=](){
                run_func();
                itnl->end_job_queue->add_job(end_func);
            });
        }
    }
}
