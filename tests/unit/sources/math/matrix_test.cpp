
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_type/sources/math/matrix4x4_tmpl_impl.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(matrix)

BOOST_AUTO_TEST_CASE(matrix4x4)
{
    cor::type::Matrix4x4F rx = cor::type::Matrix4x4F::rot_x(30.0f);
    cor::type::Matrix4x4F irx = cor::type::Matrix4x4F::rot_x(-30.0f);
    cor::type::Matrix4x4F idt;
    cor::type::Matrix4x4F rx0 = rx * irx;

    cor::RString idts = cor::algorithm::join(idt, ",");
    cor::RString rx0s = cor::algorithm::join(rx0, ",");
    cor::RString rxs = cor::algorithm::join(rx, ",");

    cor::type::Matrix4x4F::iterator ip;
    cor::type::Matrix4x4F::iterator jp;
    cor::type::Matrix4x4F::iterator ied;

    ip = idt.begin();
    ied = idt.end();
    jp = rx0.begin();

    for(; ip != ied ; ip++, jp++)
    {
        BOOST_CHECK_CLOSE(*ip, *jp, 0.00001);
    }


}

BOOST_AUTO_TEST_SUITE_END()
