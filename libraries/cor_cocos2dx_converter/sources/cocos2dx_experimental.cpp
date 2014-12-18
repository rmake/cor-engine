#include "cocos2dx_experimental.h"
#include "cocos2d.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct Cocos2dxExperimentalItnl
        {
            
        };
        
        Cocos2dxExperimental::Cocos2dxExperimental() : itnl(new Cocos2dxExperimentalItnl())
        {
            
        }
        
        Cocos2dxExperimental::~Cocos2dxExperimental()
        {
            
        }

        cocos2d::Node* Cocos2dxExperimental::set_on_enter_callback_create()
        {
            auto f0 = cocos2d::SpriteFrame::create("nd3_anim.png", cocos2d::Rect(0, 0, 64, 64));
            auto sprite = cocos2d::Sprite::createWithSpriteFrame(f0);

            sprite->setOnEnterCallback([=](){
                
            });

            sprite->runAction(cocos2d::RotateBy::create(100.0f, 360.0f * 100));

            return sprite;

        }
    }
}
