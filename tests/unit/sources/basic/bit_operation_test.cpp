

#include "cor_algorithm/sources/utilities.h"
#include "cor_algorithm/sources/bit_operation.h"
#include "cor_system/sources/logger.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(bit_operation)
 
BOOST_AUTO_TEST_CASE(bit_operation_count_one)
{
    {
        auto f = [=](cor::RInt32 a, cor::RSize b){
            auto v = a;
            auto sz = cor::algorithm::BitOperation::count_one(v);
            cor::log_debug("a ", a, ", sz ", sz);
            BOOST_CHECK_EQUAL(sz, b);
        };

        f(7, 3);
        f(406959, 12);
        f(0xf0000000, 4);
    }
    
    {
        auto f = [=](cor::RInt64 a, cor::RSize b){
            auto v = a;
            auto sz = cor::algorithm::BitOperation::count_one(v);
            cor::log_debug("a ", a, ", sz ", sz);
            BOOST_CHECK_EQUAL(sz, b);
        };

        f(0xf000000000000000, 4);
    }
}

BOOST_AUTO_TEST_CASE(bit_operation_ciel_pow_two)
{
    {
        auto f = [=](cor::RInt32 a, cor::RSize b){
            auto v = a;
            auto sz = cor::algorithm::BitOperation::ciel_pow_two(v);
            cor::log_debug("a ", a, ", sz ", sz);
            BOOST_CHECK_EQUAL(sz, b);
        };

        f(7, 3);
        f(406959, 19);
        f(0xf0000000, 32);
    }
}

BOOST_AUTO_TEST_SUITE_END()

