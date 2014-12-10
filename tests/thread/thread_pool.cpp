
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/thread_pool.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(thread_pool)
 
BOOST_AUTO_TEST_CASE(thread_pool_callback)
{
    auto job_queue = std::make_shared<cor::system::JobQueue>();
    auto thread_pool = std::make_shared<cor::system::ThreadPool>(job_queue, 4);
    
    std::vector<cor::RInt32> a, b;
    
    std::mutex m;
    
    auto f = [&](cor::RInt32 n){
        a.push_back(n);
        auto na = std::make_shared<cor::RInt32>(n);
        thread_pool->add_job([&b, &m, na](){
            //{
            //    std::lock_guard<std::mutex> l(m);
            //    cor::log_debug("thread ", *na.get());
            //}
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
            *na.get() += 10;
            //{
            //    std::lock_guard<std::mutex> l(m);
            //    cor::log_debug("thread ed ", *na.get());
            //}
        }, [&b, &m, na](){
            //{
            //    std::lock_guard<std::mutex> l(m);
            //    cor::log_debug("end ", *na.get());
            //}
            b.push_back(*na.get());
        });
    };
    
    BOOST_REQUIRE(job_queue->empty());
    
    for(auto i = 0 ; i < 20 ; i++)
    {
        f(i);
    }
    
    //cor::log_debug("pre step");
    
    while(!thread_pool->empty())
    {
        job_queue->step();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    
    //cor::log_debug("post step");
    
    BOOST_REQUIRE(job_queue->empty());
    
    cor::RString sa, sb;
    
    sa = cor::algorithm::join(a, ",");
    sb = cor::algorithm::join(b, ",");
    
    cor::log_debug("sa = ", sa, ", sb = ", sb);
    
    //BOOST_CHECK_EQUAL(sa, sb);
}
 
BOOST_AUTO_TEST_SUITE_END()
