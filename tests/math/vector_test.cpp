
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_type/sources/math/vector3_tmpl_impl.h"
#include "cor_type/sources/math/vector4_tmpl_impl.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(vector)
 
BOOST_AUTO_TEST_CASE(vector_3)
{
    cor::type::Vector3F a(1.0f, 0.0f, 0.0f);
    cor::type::Vector3F b(1.0f, 1.0f, 0.0f);
    cor::type::Vector3F c = a.cross(b);
    cor::RFloat d = a.dot(c);
    
    cor::log_debug("a = (", cor::algorithm::join(a, ","), ")");
    cor::log_debug("b = (", cor::algorithm::join(b, ","), ")");
    cor::log_debug("c = (", cor::algorithm::join(c, ","), ")");
    cor::log_debug("d = (", d, ")");
    
    BOOST_CHECK_EQUAL(d, 0);
    
    cor::type::Vector3F ab = a + b;
    cor::type::Vector3F e = a + b - b;
    
    cor::log_debug("ab = (", cor::algorithm::join(ab, ","), ")");
    cor::log_debug("e = (", cor::algorithm::join(e, ","), ")");
    
    BOOST_CHECK_CLOSE((e - a).get_magnitude(), 0.0, 0.00001);
    
}

BOOST_AUTO_TEST_CASE(vector_4)
{
    cor::type::Vector4F a(1.0f, 0.0f, 0.0f, 2.0f);
    cor::type::Vector4F b(1.0f, 1.0f, 3.0f, 1.0f);
    cor::RFloat d = a.dot(b);
    
    cor::log_debug("a = (", cor::algorithm::join(a, ","), ")");
    cor::log_debug("b = (", cor::algorithm::join(b, ","), ")");
    cor::log_debug("d = (", d, ")");
    
    BOOST_CHECK_CLOSE(d, 3.0, 0.00001);
    
    cor::type::Vector4F ab = a + b;
    cor::type::Vector4F e = a + b - b;
    
    cor::log_debug("ab = (", cor::algorithm::join(ab, ","), ")");
    cor::log_debug("e = (", cor::algorithm::join(e, ","), ")");
    
    BOOST_CHECK_CLOSE((e - a).get_magnitude(), 0.0, 0.00001);
    
}

BOOST_AUTO_TEST_SUITE_END()


