
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
//#include "cor_type/sources/math/vector2_tmpl_impl.h"
//#include "cor_type/sources/primitive/box_tmpl_impl.h"
#include "cor_type/sources/primitive/o_box.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(obox)
 
BOOST_AUTO_TEST_CASE(obox2d)
{
    
    typedef cor::type::OBox2F B;
    
    B b0(B::Matrix::rot_z(0.1f) * B::Matrix::translate(0.0f, 0.0f, 0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
    
    auto va = b0.get_vertices();
    cor::log_debug("b0");
    for(auto v : va)
    {
        cor::log_debug(" (", v.x, ", ", v.y , "), ");
    }
    
    cor::RInt32 i;
    cor::RInt32 j;
    
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            B b1(B::Matrix::rot_z(0.1f) * B::Matrix::translate(j - 0.5f, i - 0.5f, 0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
            BOOST_CHECK(b0.is_cross(b1));
            
        }
    
    }
    
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            B b1(B::Matrix::rot_z(0.1f) * B::Matrix::translate(j  * 3 - 1.5f, i * 3 - 1.5f, 0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
            BOOST_CHECK(!b0.is_cross(b1));
            
        }
    
    }
    
    
    
    
}

BOOST_AUTO_TEST_CASE(obox2d_distance)
{
    typedef cor::type::OBox2F B;
    typedef cor::type::Vector2F V;
    
    B b0(B::Matrix::scale(1.5f, 1.5f, 1.0f) * 
        B::Matrix::rot_z(0.1f) * B::Matrix::translate(0.0f, 0.0f, 0.0f), 
            B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
    
    V v(cosf(0.1f) - sinf(0.1f), sinf(0.1f) + cosf(0.1f));
    auto d = b0.get_distance(v);
    cor::log_debug("v.x = ", v.x, ", v.y = ", v.y);
    cor::log_debug("d = ", d);
    BOOST_CHECK_CLOSE(d, 0.5f / sqrtf(2.0f), 0.0001f);
    
}

BOOST_AUTO_TEST_SUITE_END()
