#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/thread_pool.h"
#include <mutex>
#include <thread>

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
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            *na.get() += 10;
        }, [&b, &m, na](){
            b.push_back(*na.get());
        });
    };

    BOOST_REQUIRE(job_queue->empty());

    for(auto i = 0 ; i < 20 ; i++)
    {
        f(i);
    }

    while(!thread_pool->empty())
    {
        job_queue->step();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    //BOOST_REQUIRE(job_queue->empty());

    cor::RString sa, sb;

    sa = cor::algorithm::join(a, ",");
    sb = cor::algorithm::join(b, ",");


    //BOOST_CHECK_EQUAL(sa, sb);
}

BOOST_AUTO_TEST_SUITE_END()
