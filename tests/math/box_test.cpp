
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
//#include "cor_type/sources/math/vector2_tmpl_impl.h"
//#include "cor_type/sources/primitive/box_tmpl_impl.h"
#include "cor_type/sources/primitive/box.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(box)
 
BOOST_AUTO_TEST_CASE(box2d)
{
    
    typedef cor::type::Box2F Box;
    
    Box b0(0.0f, 0.0f, 1.0f, 1.0f);
    
    cor::RInt32 i;
    cor::RInt32 j;
    
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            Box b1(j - 0.5f, i - 0.5f, 1.0f, 1.0f);
            BOOST_CHECK(b0.is_cross(b1));
        }
    
    }
    
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 2 ; j++)
        {
            Box b1(j * 3 - 1.5f, i * 3 - 1.5f, 1.0f, 1.0f);
            BOOST_CHECK(!b0.is_cross(b1));
        }
    
    }
    
    
    
    
}

BOOST_AUTO_TEST_CASE(box2d_distance)
{
    
    typedef cor::type::Box2F Box;
    typedef cor::type::Vector2F V;
    
    Box b0(0.0f, 0.0f, 1.0f, 1.0f);
    V v(2.0f, 2.0f);
    
    auto d = b0.get_distance(v);
    BOOST_CHECK_CLOSE(d, sqrtf(2.0f), 0.0001f);
    
}

BOOST_AUTO_TEST_SUITE_END()