
#include "rts_object_sensor.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_group.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectSensorItnl
        {
            RtsObjectWP o;
            Collision2dNodeRef node_ref;
            cocos2d::Node* node;
            RtsObjectSensor::CollisionCallback collision_callback;
            RBool erased;

            RtsObjectSensorItnl()
            {
                node = nullptr;
                erased = rfalse;
            }
        };
        
        RtsObjectSensor::RtsObjectSensor() : itnl(new RtsObjectSensorItnl())
        {
            
        }

        RtsObjectSensor::RtsObjectSensor(RtsObjectSP o, RInt32 type_id, const type::Vector2F& p, const RFloat& r) : itnl(new RtsObjectSensorItnl())
        {
            itnl->o = o;
            auto collision = o->get_object_group()->get_collision();
            itnl->node = cocos2d::Node::create();
            itnl->node->retain();
            o->get_node_ref().get_node()->addChild(itnl->node);
            itnl->node_ref = collision->add_o_sphere(itnl->node, type_id, type::Sphere2F(p, r), [=](cocos2d::Node* n0, cocos2d::Node* n1){
                if(itnl->collision_callback)
                {
                    itnl->collision_callback(n0, n1);
                }
            });
        }
        
        RtsObjectSensor::~RtsObjectSensor()
        {
            if(itnl->node_ref.is_valid())
            {
                itnl->node_ref.release();
            }
            if(itnl->node)
            {
                if(itnl->node->getParent())
                {
                    itnl->node->removeFromParent();
                }
                itnl->node->release();
            }
        }

        cocos2d::Node* RtsObjectSensor::get_node()
        {
            return itnl->node;
        }

        void RtsObjectSensor::set_collision_callback(CollisionCallback collision_callback)
        {
            itnl->collision_callback = collision_callback;
        }

        RBool RtsObjectSensor::is_erased()
        {
            return itnl->erased;
        }

        void RtsObjectSensor::remove()
        {
            itnl->erased = rtrue;
        }

    }
}
