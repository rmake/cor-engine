#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SENSOR_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SENSOR_H_

#include "cor_type/sources/basic_types.h"

#include "cor_cocos2dx_converter/sources/collision_2d_node.h"



namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectSensorItnl;

        class RtsObject;
        typedef std::shared_ptr<RtsObject> RtsObjectSP;
        typedef std::weak_ptr<RtsObject> RtsObjectWP;
        typedef std::vector<RtsObjectSP> RtsObjectSPArray;


        class RtsObjectGroup;
        typedef RtsObjectGroup* RtsObjectGroupPtr;
        typedef std::shared_ptr<RtsObjectGroup> RtsObjectGroupSP;
        typedef std::weak_ptr<RtsObjectGroup> RtsObjectGroupWP;

        class RtsObjectSensor;
        typedef std::shared_ptr<RtsObjectSensor> RtsObjectSensorSP;
        typedef std::weak_ptr<RtsObjectSensor> RtsObjectSensorWP;
        typedef std::map<cocos2d::Node*, RtsObjectSensorSP> RtsObjectSensorTable;
        typedef RtsObjectSensor* RtsObjectSensorPtr;
    
        class RtsObjectSensor
        {
            std::unique_ptr<RtsObjectSensorItnl> itnl;
        
        public:
            typedef Collision2dNodeObject::CollisionCallback CollisionCallback;
        
            RtsObjectSensor();
            RtsObjectSensor(RtsObjectSP o, RInt32 type_id, const type::Vector2F& p, const RFloat& r);
            virtual ~RtsObjectSensor();
            
            cocos2d::Node* get_node();
            void set_collision_callback(CollisionCallback collision_callback);
            RSize get_index();

            RBool is_erased();
            void remove();
        };
    }
}

#endif
