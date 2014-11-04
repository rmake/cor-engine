
#include "cor_algorithm/sources/utilities.h"
#include "cor_system/sources/logger.h"
#include "cor_type/sources/primitive/o_box.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(obox_contact)
 
BOOST_AUTO_TEST_CASE(obox2d_contact)
{
    
    typedef cor::type::OBox2F B;
    
    {
        B b0(B::Matrix::translate(0.0f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
        B b1s[] = {
            B(B::Matrix::translate(0.75f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(-0.75f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, 0.75f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, -0.75f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
        };
        cor::type::Vector2F ns[] = {
            cor::type::Vector2F(1, 0),
            cor::type::Vector2F(-1, 0),
            cor::type::Vector2F(0, 1),
            cor::type::Vector2F(0, -1),
        };
        
        cor::RSize ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b0.get_contact_info(b1, n, d, p0, p1);
            BOOST_CHECK_CLOSE(1, ns[ct].x - n.x + 1, 0.0001);
            BOOST_CHECK_CLOSE(1, ns[ct].y - n.y + 1, 0.0001);
            BOOST_CHECK(r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
    
    }
    
    {
        B b0(B::Matrix::translate(1.0f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
        B b1s[] = {
            B(B::Matrix::translate(1.75f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.25f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(1.0f, 0.75f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(1.0f, -0.75f, 0.0f) * B::Matrix::rot_z(0.0f) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
        };
        cor::type::Vector2F ns[] = {
            cor::type::Vector2F(1, 0),
            cor::type::Vector2F(-1, 0),
            cor::type::Vector2F(0, 1),
            cor::type::Vector2F(0, -1),
        };
        
        cor::RSize ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b0.get_contact_info(b1, n, d, p0, p1);
            BOOST_CHECK_CLOSE(1, ns[ct].x - n.x + 1, 0.0001);
            BOOST_CHECK_CLOSE(1, ns[ct].y - n.y + 1, 0.0001);
            BOOST_CHECK(r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
    
    }
    
    {
        B b0(B::Matrix::translate(0.0f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
        B b1s[] = {
            B(B::Matrix::translate(0.75f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(-0.75f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, 0.75f, 0.0f) * B::Matrix::rot_z(cor::PI) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, -0.75f, 0.0f) * B::Matrix::rot_z(cor::PI) , B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
        };
        cor::type::Vector2F ns[] = {
            cor::type::Vector2F(1, 0),
            cor::type::Vector2F(-1, 0),
            cor::type::Vector2F(0, 1),
            cor::type::Vector2F(0, -1),
        };
        
        cor::RSize ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b0.get_contact_info(b1, n, d, p0, p1);
            BOOST_CHECK_CLOSE(1, ns[ct].x - n.x + 1, 0.0001);
            BOOST_CHECK_CLOSE(1, ns[ct].y - n.y + 1, 0.0001);
            BOOST_CHECK(r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
    
    }
    
    {
        B b0(B::Matrix::translate(0.0f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
        B b1s[] = {
            B(B::Matrix::translate(1.25f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(-1.25f, 0.0f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, 1.25f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, -1.25f, 0.0f) * B::Matrix::rot_z(0.0f), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
        };
        
        cor::RSize ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b0.get_contact_info(b1, n, d, p0, p1);
            BOOST_CHECK(!r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
    
    }
    
    {
        B b0(B::Matrix::translate(0.0f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI * 3 / 4), B::Box(-0.5f, -0.5f, 1.0f, 1.0f));
        B b1s[] = {
            B(B::Matrix::translate(1.0f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI * 3 / 4), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(-1.0f, 0.0f, 0.0f) * B::Matrix::rot_z(cor::PI / 4), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, 1.0f, 0.0f) * B::Matrix::rot_z(cor::PI / 4), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
            B(B::Matrix::translate(0.0f, -1.0f, 0.0f) * B::Matrix::rot_z(cor::PI * 3 / 4), B::Box(-0.5f, -0.5f, 1.0f, 1.0f)),
        };
        
        cor::RSize ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b0.get_contact_info(b1, n, d, p0, p1);
            BOOST_CHECK(r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
        
        ct = 0;
        for(auto& b1 : b1s)
        {
            cor::type::Vector2F n;
            cor::RFloat d;
            cor::type::Vector2F p0;
            cor::type::Vector2F p1;
            auto r = b1.get_contact_info(b0, n, d, p0, p1);
            BOOST_CHECK(r);
            cor::log_debug("r ", r, ", n (", n.x, ", ", n.y, "), d ", d, 
                ", p0 (", p0.x, ", ", p0.y, 
                "), p1 (", p1.x, ", ", p1.y, ")");
            ct++;
        }
    
    }
}

BOOST_AUTO_TEST_SUITE_END()
