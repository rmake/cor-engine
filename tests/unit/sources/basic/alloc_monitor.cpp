
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/allocation_monitor.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(allocation_monitor)
 
BOOST_AUTO_TEST_CASE(allocation_monitor_count)
{
    cor::system::AllocationMonitor am;
    
    cor::RSize start_count = am.get_alloc_count();
    
    cor::RInt32* a = new cor::RInt32(1);
    cor::RInt32* b = new cor::RInt32(2);
    cor::RInt32* c = new cor::RInt32(3);
    
    cor::RSize alloced_count = am.get_alloc_count();
    
    delete a;
    delete b;
    delete c;
    
    cor::RSize deleted_count = am.get_alloc_count();
    
    cor::log_debug("start_count = ", start_count, 
        ", alloced_count = ", alloced_count,
        ", deleted_count = ", deleted_count);
    
    BOOST_CHECK_EQUAL(start_count, deleted_count);
    BOOST_CHECK_EQUAL(alloced_count, deleted_count + 3);
    BOOST_CHECK_EQUAL(alloced_count, start_count + 3);
    
}

BOOST_AUTO_TEST_SUITE_END()

