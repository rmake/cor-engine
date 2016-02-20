
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/job_queue.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(job_queue)
 
BOOST_AUTO_TEST_CASE(job_queue_callback)
{
    cor::system::JobQueue job_queue;
    
    std::vector<cor::RInt32> a, b;
    
    auto f = [&](cor::RInt32 n){
        a.push_back(n);
        job_queue.add_job([&b, n](){
            b.push_back(n);
        });
    };
    
    BOOST_REQUIRE(job_queue.empty());
    
    f(1);
    f(2);
    f(3);
    
    BOOST_REQUIRE(!job_queue.empty());
    
    job_queue.step();
    
    cor::RString sa, sb;
    
    sa = cor::algorithm::join(a, ",");
    sb = cor::algorithm::join(b, ",");
    
    cor::log_debug("sa = ", sa, ", sb = ", sb);
    
    BOOST_CHECK_EQUAL(sa, sb);
}
 
BOOST_AUTO_TEST_SUITE_END()
