#include "thread_pool.h"
#include <condition_variable>

namespace cor
{
    namespace system
    {
        struct ThreadPoolItnl
        {
            std::vector<std::thread> threads;
            JobQueueSP thread_job_queue;
            JobQueueSP end_job_queue;
            RBool busy_mode;
            std::mutex cnd_mutex;
            std::condition_variable cnd;
            std::mutex main_cnd_mutex;
            std::condition_variable main_cnd;
            std::mutex run_count_mutex;
            RSize run_count;

            ThreadPoolItnl()
            {
                thread_job_queue = std::make_shared<JobQueue>();
                end_job_queue = std::make_shared<JobQueue>();
                busy_mode = rfalse;
                run_count = 0;
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


        ThreadPool::ThreadPool(JobQueueSP end_job_queue, RSize thread_count, RBool busy_mode) : itnl(new ThreadPoolItnl())
        {
            itnl->end_job_queue = end_job_queue;
            set_busy_mode(busy_mode);
            set_threads(thread_count);
        }

        ThreadPool::~ThreadPool()
        {
            
        }

        void ThreadPool::set_threads(RSize thread_count)
        {
            for(RSize i = 0; i < thread_count; i++)
            {
                itnl->threads.push_back(std::thread([=](){
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
                    if(itnl->busy_mode)
                    {
                        if(itnl->thread_job_queue->empty())
                        {
                            std::unique_lock<std::mutex> l(itnl->cnd_mutex);
                            itnl->main_cnd.notify_all();
                            itnl->cnd.wait(l);
                        }
                    }
                    else
                    {
                        std::this_thread::sleep_for(std::chrono::milliseconds(1));
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

        void ThreadPool::set_busy_mode(RBool busy_mode)
        {
            itnl->busy_mode = busy_mode;
        }

        RBool ThreadPool::get_busy_mode()
        {
            return itnl->busy_mode;
        }

        void ThreadPool::resume()
        {
            if(itnl->busy_mode)
            {
                itnl->cnd.notify_all();

                std::unique_lock<std::mutex> l(itnl->main_cnd_mutex);
                itnl->main_cnd.wait(l, [&](){
                    bool r;
                    this->get_run_count([&](RSize ct){
                        r = ct <= 0;
                    });
                    return r;
                });
                
            }
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
