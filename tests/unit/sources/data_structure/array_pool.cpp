
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/array_pool_tmpl_impl.h"

#define BOOST_TEST_NO_LIB
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(array_pool)

BOOST_AUTO_TEST_CASE(array_pool_basic)
{
    typedef cor::data_structure::ArrayPoolTmpl<cor::RInt32> AP;
    const cor::RSize block_width = 4;
    AP ap(block_width);
    auto r0 = ap.create();
    auto r1 = ap.create();


    *r0.get() = 1;
    *r1.get() = 2;

    cor::RInt32 i, isz;
    std::vector<AP::Ref> refs;
    isz = 16;
    for(i = 0 ; i < isz ; i++)
    {
        auto r = ap.create();
        *r.get() = i + 10;

        if((i % 2) == 0)
        {
            refs.push_back(r);
        }
    }
    BOOST_CHECK_EQUAL(ap.size(), 18);

    //
    for(auto r : refs)
    {
        r.release();
    }

    refs.clear();

    BOOST_CHECK_EQUAL(ap.size(), 10);

    //
    isz = 8;
    for(i = 0 ; i < isz ; i++)
    {
        auto r = ap.create();
        *r.get() = i + 20;
    }

    BOOST_CHECK_EQUAL(ap.size(), 18);

    //
    i = 0;
    ap.each_ref([&](AP::Ref r){
        if((i % 2) == 0)
        {
            refs.push_back(r);
        }
        i++;
    });

    //
    for(auto r : refs)
    {
        r.release();
    }

    BOOST_CHECK_EQUAL(ap.size(), 9);

    //
    refs.clear();
    isz = 16;
    for(i = 0 ; i < isz ; i++)
    {
        auto r = ap.create();
        *r.get() = i + 30;
    }

    BOOST_CHECK_EQUAL(ap.block_size(), (25 + block_width - 1) / block_width);
    BOOST_CHECK_EQUAL(ap.size(), 25);

}

BOOST_AUTO_TEST_CASE(array_pool_new_del)
{
    struct T {

        int n;

        static std::vector<int>& sv()
        {
            static std::vector<int> v;
            return v;
        }

        T()
        {
            static int num = 0;
            n = num;
            num++;
            sv().push_back(n);
        }
        ~T()
        {
            sv().push_back(n);
        }
        T&operator=(const T& v)
        {
            return *this;
        }
    };

    typedef cor::data_structure::ArrayPoolTmpl<T> AP;

    {
        const cor::RSize block_width = 4;
        AP ap(block_width);

        auto r0 = ap.create();
        auto r1 = ap.create();
        auto r2 = ap.create();

        r1.release();
        r1 = ap.create();

        r2.release();

        BOOST_CHECK_EQUAL(ap.size(), 2);
    }

    auto cda = cor::algorithm::join(T::sv(), ", ");

    BOOST_CHECK_EQUAL(cda, "0,1,2,3,4,4,5,5,6,6,7,7,3,2,1,0");
}

BOOST_AUTO_TEST_SUITE_END()


