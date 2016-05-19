#ifndef ____COR_SYSTEM_SOURCES_PARALLEL_PROCESSOR_H_
#define ____COR_SYSTEM_SOURCES_PARALLEL_PROCESSOR_H_

#include "cor_system/sources/job_queue.h"

namespace cor
{
    namespace system
    {
        struct ParallelProcessorItnl;

        class ParallelProcessor
        {
            std::unique_ptr<ParallelProcessorItnl> itnl;

            void set_threads(RSize thread_count);

            void inc_run_count();
            void dec_run_count();
            void get_run_count(std::function<void(RSize)> callback);
        public:

            typedef std::function<void()> ThreadRunFunc;
            typedef std::function<void()> ThreadEndFunc;

            ParallelProcessor();
            ParallelProcessor(RSize thread_count);
            virtual ~ParallelProcessor();
            void run();
            void add_job(ThreadRunFunc run_func, ThreadEndFunc end_func);
        };
    }
}

#endif
