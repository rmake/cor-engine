
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_type/sources/primitive/o_sphere.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(osphere)

BOOST_AUTO_TEST_CASE(osphere2d)
{

    typedef cor::type::OSphere2F S;

    S s0(S::Matrix::rot_z(0.1f) * S::Matrix::translate(0.0f, 0.0f, 0.0f), S::Sphere(cor::type::Vector2F(0.0f, 0.0f), 0.5f));

    auto va = s0.get_draw_vertices();

    cor::RInt32 i;
    cor::RInt32 j;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            S s1(S::Matrix::rot_z(0.1f) * S::Matrix::translate(j - 0.5f, i - 0.5f, 0.0f), S::Sphere(cor::type::Vector2F(0.0f, 0.0f), 0.5f));
            BOOST_CHECK(s0.is_cross(s1));

        }

    }

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            S s1(S::Matrix::rot_z(0.1f) * S::Matrix::translate(j  * 3 - 1.5f, i * 3 - 1.5f, 0.0f), S::Sphere(cor::type::Vector2F(0.0f, 0.0f), 0.5f));
            BOOST_CHECK(!s0.is_cross(s1));

        }

    }

}

BOOST_AUTO_TEST_CASE(osphere_obox_2d)
{

    typedef cor::type::OSphere2F S;
    typedef cor::type::OBox2F B;

    S s0(S::Matrix::rot_z(0.1f) * S::Matrix::translate(0.0f, 0.0f, 0.0f), S::Sphere(cor::type::Vector2F(0.0f, 0.0f), 0.5f));

    auto va = s0.get_draw_vertices();

    cor::RInt32 i;
    cor::RInt32 j;

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            B b1(B::Matrix::rot_z(0.1f) * B::Matrix::translate(j - 0.5f, i - 0.5f, 0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
            BOOST_CHECK(s0.is_cross(b1));

        }

    }

    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            B b1(B::Matrix::rot_z(0.1f) * B::Matrix::translate(j * 3 - 1.5f, i * 3 - 1.5f, 0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
            BOOST_CHECK(!s0.is_cross(b1));

        }

    }

}

BOOST_AUTO_TEST_CASE(osphere2d_distance)
{
    typedef cor::type::OSphere2F S;
    typedef cor::type::Vector2F V;

    S s0(S::Matrix::scale(1.5f, 1.5f, 1.0f) *
        S::Matrix::rot_z(0.1f) * S::Matrix::translate(0.0f, 0.0f, 0.0f), S::Sphere(cor::type::Vector2F(0.0f, 0.0f), 0.5f));


    V v(cosf(0.1f) - sinf(0.1f), sinf(0.1f) + cosf(0.1f));
    auto d = s0.get_distance(v);
    BOOST_CHECK_CLOSE(d, sqrtf(2.0f) - 0.75f, 0.0001f);

}

BOOST_AUTO_TEST_CASE(sphere2d_distance)
{
    typedef cor::type::Sphere2F S;
    typedef cor::type::Vector2F V;

    S s0(cor::type::Vector2F(0.0f, 0.0f), 0.5f);


    V v(cosf(0.1f) - sinf(0.1f), sinf(0.1f) + cosf(0.1f));
    auto d = s0.get_distance(v);
    BOOST_CHECK_CLOSE(d, sqrtf(2.0f) - 0.5f, 0.0001f);

}

BOOST_AUTO_TEST_SUITE_END()
