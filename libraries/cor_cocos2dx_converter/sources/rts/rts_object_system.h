#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SYSTEM_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_SYSTEM_H_

#include "cor_type/sources/basic_types.h"
#include "2d/CCSprite.h"
#include "2d/CCLabel.h"
#include "extensions/GUI/CCScrollView/CCScrollView.h"

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
            static void setup_sprite_round(cocos2d::Node* sprite);
            static void setup_sprite_gray(cocos2d::Node* sprite);
            static void setup_avoid_blur_texture(cocos2d::Texture2D* texture);
            static void set_blending_premultipled(cocos2d::Label* sprite);
            static cocos2d::Image* create_empty_image(RInt32 w, RInt32 h);
            static void copy_rect_image(cocos2d::Image* src, cocos2d::Image* dst, RInt32 x, RInt32 y);
            static cocos2d::Rect node_rect(cocos2d::Node* node);
            static cocos2d::Rect nodes_rect(cocos2d::Vector<cocos2d::Node*> nodes);
            static cocos2d::Action* delay_call(cocos2d::Node* node, RFloat interval, std::function<void()> callback);
            static cocos2d::Action* interval_call(cocos2d::Node* node, RFloat interval, std::function<void()> callback);
            static void set_scroll_view_on_scroll(cocos2d::extension::ScrollView* scroll_view, std::function<void()> callback);


            static void on_active();

        };
    }
}

#endif
