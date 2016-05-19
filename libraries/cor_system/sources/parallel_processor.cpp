
#include "parallel_processor.h"
#include <condition_variable>
#include <thread>
#include <mutex>

namespace cor
{
    namespace system
    {

        struct ParallelProcessorItnl
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

            ParallelProcessorItnl()
            {
                thread_job_queue = std::make_shared<JobQueue>();
                end_job_queue = std::make_shared<JobQueue>();
                run_count = 0;
            }
        };

        ParallelProcessor::ParallelProcessor() : itnl(new ParallelProcessorItnl())
        {
            set_threads(1);
        }

        ParallelProcessor::ParallelProcessor(RSize thread_count) : itnl(new ParallelProcessorItnl())
        {
            set_threads(thread_count);
        }

        ParallelProcessor::~ParallelProcessor()
        {

        }

        void ParallelProcessor::set_threads(RSize thread_count)
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

                    if(itnl->thread_job_queue->empty())
                    {
                        std::unique_lock<std::mutex> l(itnl->cnd_mutex);
                        itnl->main_cnd.notify_all();
                        itnl->cnd.wait(l);
                    }

                }));
            }
        }

        void ParallelProcessor::inc_run_count()
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            itnl->run_count++;
        }

        void ParallelProcessor::dec_run_count()
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            itnl->run_count--;
        }

        void ParallelProcessor::get_run_count(std::function<void(RSize)> callback)
        {
            std::lock_guard<std::mutex> locker(itnl->run_count_mutex);
            callback(itnl->run_count);
        }


        void ParallelProcessor::run()
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

        void ParallelProcessor::add_job(ThreadRunFunc run_func, ThreadEndFunc end_func)
        {
            itnl->thread_job_queue->add_job([=](){
                run_func();
                itnl->end_job_queue->add_job(end_func);
            });
        }
    }
}
