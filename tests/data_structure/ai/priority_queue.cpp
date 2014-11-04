
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl_impl.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(priority_queue)
 
BOOST_AUTO_TEST_CASE(priority_queue_basic)
{
    typedef cor::data_structure::PriorityQueueTmpl<cor::RFloat, cor::RInt32> Q;
    
    Q q;
    
    q.set_max_size(4);
    
    q.enqueue(0.1, 1);
    q.enqueue(0.3, 3);
    q.enqueue(0.5, 5);
    q.enqueue(0.4, 4);
    q.enqueue(0.2, 2);
    
    BOOST_CHECK_EQUAL(q.size(), 4);
    
    cor::RInt32 i;
    i = 1;
    while(!q.empty())
    {
        auto p = q.dequeue();
        
        cor::log_debug("k = ", p.first, ", v = ", p.second);
    
        BOOST_CHECK_EQUAL(p.second, i);
    
        i++;
    }
    
    BOOST_CHECK_EQUAL(q.size(), 0);
    
}

BOOST_AUTO_TEST_SUITE_END()
