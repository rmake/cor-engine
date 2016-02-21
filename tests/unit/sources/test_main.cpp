#define BOOST_TEST_MAIN
#define BOOST_TEST_NO_LIB
#include <boost/test/included/unit_test.hpp>
extern "C" {
extern int putenv(char*);
}

BOOST_AUTO_TEST_SUITE(sample)

BOOST_AUTO_TEST_CASE(hoge)
{
    BOOST_CHECK_EQUAL(2*2, 4);
}

BOOST_AUTO_TEST_CASE(fuga)
{
    BOOST_CHECK_EQUAL(2*3, 6);
}

BOOST_AUTO_TEST_SUITE_END()


