
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_data_structure/sources/ai/cost_grid_space.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(cost_grid_space)
 
BOOST_AUTO_TEST_CASE(cost_grid_space_basic)
{
    cor::data_structure::CostGridSpace g;
    
    g.resize(10, 10);
    
    g.set_neighbor_mode(cor::data_structure::CostGridSpaceNeighborMode::L2);
    
    cor::RInt32 i, isz;
    
    isz = 5;
    for(i = 0 ; i < isz ; i++)
    {
        auto& c = g.ref(cor::type::Vector2I(i, 1));
        c.passable = cor::rfalse;
    }
    
    cor::type::Vector2I start(0, 9);
    cor::type::Vector2I goal(0, 0);
    
    auto& st = g.ref(goal);
    st.terminated = cor::rtrue;
    
    auto path = g.search_nearest_path(start);
    auto rpath = path.path;
    std::reverse(rpath.begin(), rpath.end());
    
    auto oc = rpath.front();
    BOOST_CHECK((start - oc).get_magnitude() < 0.1f);
    BOOST_CHECK((goal - rpath.back()).get_magnitude() < 0.1f);
    
    for(auto v : rpath)
    {
        auto& c = g.ref(v);
        c.enter_cost = 2.0f;
        
        BOOST_CHECK((v - oc).get_magnitude() < 1.5f);
        oc = v;
    
        BOOST_CHECK(c.passable);
    }
    
    {
        cor::RInt32 i, isz;
        cor::RInt32 j, jsz;
        auto sz = g.get_size();
        isz = sz.y;
        jsz = sz.x;
        
        
        for(i = 0 ; i < isz ; i++)
        {
            cor::RStringStream s;
            for(j = 0 ; j < jsz ; j++)
            {
                cor::type::Vector2I cp(j, i);
                auto& c = g.ref(cp);
                if((cp - start).get_magnitude() < 0.1)
                {
                    s << "s";
                }
                else if((cp - goal).get_magnitude() < 0.1)
                {
                    s << "g";
                }
                else if(!c.passable)
                {
                    s << "#";
                }
                else if(c.enter_cost > 1.5f)
                {
                    s << "*";
                }
                else
                {
                    s << " ";
                }
                c.enter_cost = 1.0f;
            }
            cor::log_debug(s.str());
        }
    }
    
    {
        auto path = g.search_nearest_path(start);
        cor::log_debug("t1");
        auto rpath = path.path;
        cor::log_debug("t2");
        std::reverse(rpath.begin(), rpath.end());
        
        cor::log_debug("t3 ", path.path.size());
        
        auto oc = rpath.front();
        BOOST_CHECK((start - oc).get_magnitude() < 0.1f);
        BOOST_CHECK((goal - rpath.back()).get_magnitude() < 0.1f);
        
        cor::log_debug("t4");
        
        for(auto v : rpath)
        {
            auto& c = g.ref(v);
            c.enter_cost = 2.0f;
            
            BOOST_CHECK((v - oc).get_magnitude() < 1.5f);
            oc = v;
        
            BOOST_CHECK(c.passable);
        }
        
        {
            cor::RInt32 i, isz;
            cor::RInt32 j, jsz;
            auto sz = g.get_size();
            isz = sz.y;
            jsz = sz.x;
            
            
            for(i = 0 ; i < isz ; i++)
            {
                cor::RStringStream s;
                for(j = 0 ; j < jsz ; j++)
                {
                    cor::type::Vector2I cp(j, i);
                    auto& c = g.ref(cp);
                    if((cp - start).get_magnitude() < 0.1)
                    {
                        s << "s";
                    }
                    else if((cp - goal).get_magnitude() < 0.1)
                    {
                        s << "g";
                    }
                    else if(!c.passable)
                    {
                        s << "#";
                    }
                    else if(c.enter_cost > 1.5f)
                    {
                        s << "*";
                    }
                    else
                    {
                        s << " ";
                    }
                    c.enter_cost = 1.0f;
                }
                cor::log_debug(s.str());
            }
        }
    }
    
}

BOOST_AUTO_TEST_SUITE_END()



