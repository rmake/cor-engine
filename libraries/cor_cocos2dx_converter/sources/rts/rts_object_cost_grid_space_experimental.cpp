
#include "rts_object_cost_grid_space_experimental.h"

#include "cor_type/sources/math/vector2.h"

#include <boost/graph/adjacency_list.hpp>

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectCostGridSpaceExperimentalItnl
        {
            
        };
        
        RtsObjectCostGridSpaceExperimental::RtsObjectCostGridSpaceExperimental() : itnl(new RtsObjectCostGridSpaceExperimentalItnl())
        {
            
        }
        
        RtsObjectCostGridSpaceExperimental::~RtsObjectCostGridSpaceExperimental()
        {
            
        }

        RString RtsObjectCostGridSpaceExperimental::run1(cocos2d::DrawNode* draw_node)
        {
            typedef boost::adjacency_list<boost::listS, boost::listS, boost::undirectedS,
                type::Vector2F, boost::property<boost::edge_weight_t, RFloat> > Graph;

            Graph g;

            RStringStream s;

            s << "graph run 1\n";
            
            auto va = {
                type::Vector2F(100.0f, 100.0f),
                type::Vector2F(200.0f, 100.0f),
                type::Vector2F(300.0f, 100.0f),
                type::Vector2F(100.0f, 200.0f),
                type::Vector2F(200.0f, 400.0f)
            };

            std::vector<Graph::vertex_descriptor> vda;

            for(auto v: va)
            {
                auto vd = boost::add_vertex(g);

                g[vd] = v;

                vda.push_back(vd);
            }

            typedef std::pair<RInt32, RInt32> Pair;

            auto ea = {
                Pair(0, 1),
                Pair(1, 2),
                Pair(0, 3),
                Pair(1, 3),
                Pair(2, 3),
                Pair(3, 4),
                Pair(2, 4)
            };

            for(auto e : ea)
            {
                auto ed = boost::add_edge(vda[e.first], vda[e.second], g[vda[e.first]].distance(g[vda[e.second]]), g);
            }

            auto w = boost::get(boost::edge_weight, g);

            auto vta = boost::vertices(g);
            for(auto v = vta.first; v != vta.second; v++)
            {
                s << "v " << g[*v].x << ", " << g[*v].y << "\n";
                auto ea = boost::out_edges(*v, g);
                for(auto e = ea.first; e != ea.second; e++)
                {
                    s << "e (" << g[boost::source(*e, g)].x << ", " << g[boost::source(*e, g)].y << "), -> " <<
                        "(" << g[boost::target(*e, g)].x << ", " << g[boost::target(*e, g)].y << ") = " << boost::get(w, *e) << "\n";

                    draw_node->drawSegment(cocos2d::Vec2(g[boost::source(*e, g)].x, g[boost::source(*e, g)].y),
                        cocos2d::Vec2(g[boost::target(*e, g)].x, g[boost::target(*e, g)].y), 1.0f,
                        cocos2d::Color4F(1.0f, 0.0f, 0.0f, 1.0f));
                }
            }

            
            return s.str();
        }
    }
}
