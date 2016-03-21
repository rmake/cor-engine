#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl_impl.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(r_tree_near)

BOOST_AUTO_TEST_CASE(r_tree_near_basic)
{
    class T
    {
    public:
        cor::type::Box2F box;

        cor::type::Box2F get_box()
        {
            return box;
        }

        cor::RFloat get_distance(const cor::type::Vector2F& p)
        {
            return box.get_distance(p);
        }

        T* operator->()
        {
            return this;
        }

        T()
        {
            box.set(-1, -1, 3, 3);
        }

        T(cor::RFloat px, cor::RFloat py, cor::RFloat wx, cor::RFloat wy)
        {
            box.set(px, py, wx, wy);
        }

    };

    typedef cor::data_structure::RTreePoolTmpl<cor::RFloat, cor::type::Vector2F, cor::type::Vector2I, T> TP;

    TP tp;

    cor::algorithm::times(4, [&](cor::RSize i){
        cor::algorithm::times(4, [&](cor::RSize j){
            auto r = tp.create(T(j * 2, i * 2, 1.0f, 1.0f));
        });
    });

    tp.update_leaf_box();
    tp.construct();
    tp.fit();

    tp.find_near(cor::type::Vector2F(-1.0f, -1.0f), [&](const cor::RFloat& d, TP::Ref& r){
        BOOST_CHECK_CLOSE(d, sqrtf(2.0f), 0.00001f);
        BOOST_CHECK_CLOSE(r->box.p.x, 0.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.p.y, 0.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.w.x, 1.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.w.y, 1.0f, 0.00001f);
        return cor::rtrue;
    });

    tp.find_near(cor::type::Vector2F(8.0f, 8.0f), [&](const cor::RFloat& d, TP::Ref& r){
        BOOST_CHECK_CLOSE(d, sqrtf(2.0f), 0.00001f);
        BOOST_CHECK_CLOSE(r->box.p.x, 6.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.p.y, 6.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.w.x, 1.0f, 0.00001f);
        BOOST_CHECK_CLOSE(r->box.w.y, 1.0f, 0.00001f);
        return cor::rtrue;
    });
}


BOOST_AUTO_TEST_SUITE_END()





