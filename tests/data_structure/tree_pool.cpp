
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/tree_pool_tmpl_impl.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(tree_pool)
 
BOOST_AUTO_TEST_CASE(tree_pool_basic)
{
    typedef cor::data_structure::TreePoolTmpl<cor::RString> TP;
    
    TP tp;
    
    auto r0 = tp.create();
    r0->get()->assign("node 0");
    
    auto r1 = tp.create();
    r1->get()->assign("node 1");
    r0->add_child(r1);
    
    BOOST_CHECK(r0->validate());
    BOOST_CHECK(r1->validate());
    
    cor::log_debug("print 1");
    r0->pre_order_with_depth([&](TP::Ref& r, cor::RInt32 num){
        cor::log_debug(cor::RString((num + 1) * 2, ' '), *r->get());
    });
    
    auto r2 = tp.create();
    r2->get()->assign("node 2");
    r1->add_child(r2);
    
    auto r3 = tp.create();
    r3->get()->assign("node 3");
    r0->add_child(r3);
    
    auto r4 = tp.create();
    r4->get()->assign("node 4");
    r2->add_child(r4);
    
    r3->add_child(r2);
    
    auto r5 = tp.create();
    r5->get()->assign("node 5");
    r2->add_child(r5);
    
    r5->remove();
    
    cor::log_debug("print 2");
    r0->pre_order_with_depth([&](TP::Ref& r, cor::RInt32 num){
        cor::log_debug(cor::RString((num + 1) * 2, ' '), *r->get());
    });
    
    cor::log_debug("post print");
    r0->post_order_with_depth([&](TP::Ref& r, cor::RInt32 num){
        cor::log_debug(cor::RString((num + 1) * 2, ' '), *r->get());
    });
    
    tp.each_ref([&](TP::Ref& r){
        BOOST_CHECK(r->validate());
    });
    
    BOOST_CHECK_EQUAL(r2.get(), r4->get_parent().get());
}

BOOST_AUTO_TEST_SUITE_END()


