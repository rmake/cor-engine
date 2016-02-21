
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl_impl.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(uniform_grid)

BOOST_AUTO_TEST_CASE(uniform_grid_basic)
{
    typedef cor::data_structure::UniformGridTmpl<cor::RInt32, cor::type::Vector3I> G;
    typedef cor::type::Vector3I V;

    G g(V(4, 3, 2));

    cor::RInt32 i, j, k;
    cor::RInt32 ct;
    auto sz = g.get_size();

    ct = 0;
    for(i = 0 ; i < sz[2] ; i++)
    {
        for(j = 0 ; j < sz[1] ; j++)
        {
            for(k = 0 ; k < sz[0] ; k++)
            {
                g.ref(V(k, j, i)) = ct;
                ct++;
            }
        }
    }

    auto& a = g.ref_a();
    cor::RStringStream s;
    cor::RString rs = "";
    ct = 0;
    cor::RInt32 cta = 0;
    for(auto v : a)
    {
        s << v << ", ";
        if(ct > sz[0])
        {
            ct = 0;

            rs += s.str();
            s.str("");

        }
        BOOST_CHECK_EQUAL(v, cta);

        ct++;
        cta++;
    }

}

BOOST_AUTO_TEST_SUITE_END()