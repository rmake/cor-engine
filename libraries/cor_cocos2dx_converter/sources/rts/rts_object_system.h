#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SYSTEM_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SYSTEM_H_

#include "cor_type/sources/basic_types.h"
#include "CCSprite.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectSystemItnl;
    
        class RtsObjectSystem
        {
            std::unique_ptr<RtsObjectSystemItnl> itnl;
        
        public:
        
            RtsObjectSystem();
            virtual ~RtsObjectSystem();

            static void setup_rts_rendering_state();
            static void setup_sprite_alphatest(cocos2d::Sprite* sprite);
            static void setup_sprite_round(cocos2d::Sprite* sprite);
            static void setup_avoid_blur_texture(cocos2d::Texture2D* texture);
            static cocos2d::Rect node_rect(cocos2d::Node* node);
            static cocos2d::Rect nodes_rect(cocos2d::Vector<cocos2d::Node*> nodes);


            static void on_active();

        };
    }
}

#endif
