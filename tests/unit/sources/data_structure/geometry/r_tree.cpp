
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl_impl.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(r_tree)

BOOST_AUTO_TEST_CASE(r_tree_basic)
{
    class T
    {
    public:
        cor::type::Box2F box;

        cor::type::Box2F get_box()
        {
            return box;
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

    auto r0 = tp.create(T(0.0f, 0.0f, 1.0f, 1.0f));
    auto r1 = tp.create(T(2.0f, 0.0f, 1.0f, 1.0f));

    tp.update_leaf_box();
    tp.construct();
    tp.fit();

    auto root_node = tp.get_root_node();

    root_node->pre_order_with_depth([&](TP::NodeRef& r, cor::RInt32 num){
        auto box = r->get()->box;
    });

    tp.clear();

    {
        cor::algorithm::times(4, [&](cor::RSize i){
            cor::algorithm::times(4, [&](cor::RSize j){
                auto r = tp.create(T(j * 2, i * 2, 1.0f, 1.0f));
            });
        });

        tp.update_leaf_box();
        tp.construct();
        tp.fit();

        auto root_node = tp.get_root_node();
        root_node->pre_order_with_depth([&](TP::NodeRef& r, cor::RInt32 num){
            auto box = r->get()->box;
            if(r->get()->leaf)
            {
                auto box = r->get()->leaf->box;
            }
        });

        TP::Box select_box = TP::Box(0.5, 0.5, 3, 3);
        cor::RInt32 ct = 0;
        tp.find(select_box, [&](TP::Ref& r){
            auto box = r->box;
            BOOST_CHECK(select_box.is_cross(box));
            ct++;
        });
        BOOST_CHECK_EQUAL(ct, 4);
    }

    {
        TP tp2;

        cor::algorithm::times(4, [&](cor::RSize i){
            cor::algorithm::times(4, [&](cor::RSize j){
                auto r = tp2.create(T(j * 2 + 0.25f, i * 2 + 0.25f, 1.0f, 1.0f));
            });
        });

        tp2.update_leaf_box();
        tp2.construct();
        tp2.fit();

        cor::RInt32 ct = 0;
        tp.find_pair(tp2, [&](TP::Ref& r0, TP::Ref& r1){
            auto box0 = r0->box;
            auto box1 = r1->box;
            BOOST_CHECK(box0.is_cross(box1));
            ct++;
        });
        BOOST_CHECK_EQUAL(ct, 16);
    }





}

BOOST_AUTO_TEST_SUITE_END()
