
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(each)
 
BOOST_AUTO_TEST_CASE(each_vector)
{
    cor::RInt32Array a, b;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    
    for(auto n : a)
    {
        b.push_back(n);
    }
    
    cor::RString sa, sb;
    
    sa = cor::algorithm::join(a, ",");
    sb = cor::algorithm::join(b, ",");
    
    cor::log_debug("sa = ", sa, ", sb = ", sb);
    
    BOOST_CHECK_EQUAL(sa, sb);
}

BOOST_AUTO_TEST_CASE(each_map)
{
    std::map<cor::RInt32, cor::RInt32> a, b;
    
    a[1] = 11;
    a[2] = 12;
    a[3] = 13;
    
    for(auto p : a)
    {
        b[p.first] = p.second;
    }
    
    cor::RStringStream sa, sb;
    
    for(auto p : a)
    {
        sa << p.first << "=" << p.second << ", ";
    }
    
    for(auto p : b)
    {
        sb << p.first << "=" << p.second << ", ";
    }
    
    cor::log_debug("sa = ", sa.str(), ", sb = ", sb.str());
    
    BOOST_CHECK_EQUAL(sa.str(), sb.str());
}

BOOST_AUTO_TEST_CASE(sort)
{
    cor::RInt32Array a, b, c;
    
    a.push_back(3);
    a.push_back(1);
    a.push_back(2);
    
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    
    cor::algorithm::sort_all(a, [&](cor::RInt32 a, cor::RInt32 b){
        return a < b;
    });
    
    cor::RString sa, sb;
    sa = cor::algorithm::join(a, ",");
    sb = cor::algorithm::join(b, ",");
    cor::log_debug("sa = ", sa, ", sb = ", sb);
    
    BOOST_CHECK_EQUAL(sa, sb);
}

BOOST_AUTO_TEST_SUITE_END()


