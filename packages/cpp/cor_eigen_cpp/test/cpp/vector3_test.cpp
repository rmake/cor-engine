#include "cor_eigen_cpp/vector3.h"
#include "cor_system/sources/utility_for_test.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

COR_SYSTEM_FORCE_LINK_THIS(eigen_vector3)

BOOST_AUTO_TEST_SUITE(eigen_vector3)

BOOST_AUTO_TEST_CASE(eigen_vector3_operator)
{
    cor::eigen::Vector3F a(0, 1, 2);
    cor::eigen::Vector3F b(3, 4, 5);
    auto c = a + b;
    BOOST_CHECK_EQUAL(c.get_x(), 3);
    BOOST_CHECK_EQUAL(c.get_y(), 5);
    BOOST_CHECK_EQUAL(c.get_z(), 7);
}

BOOST_AUTO_TEST_SUITE_END()
