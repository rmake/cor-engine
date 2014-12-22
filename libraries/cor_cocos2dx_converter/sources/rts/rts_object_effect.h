#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_EFFECT_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_EFFECT_H_

#include "cor_type/sources/basic_types.h"
#include "cor_cocos2dx_converter/sources/textured_triangle_node.h"
#include "2d/CCSpriteFrame.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectEffectItnl;
    
        class RtsObjectEffect
        {
            std::unique_ptr<RtsObjectEffectItnl> itnl;
        
        public:

			static cocos2d::Node* create_layser(cocos2d::SpriteFrame* sf0, cocos2d::SpriteFrame* sf1, cocos2d::SpriteFrame* sf2, RFloat length);
        
            RtsObjectEffect();
            virtual ~RtsObjectEffect();
        };
    }
}

#endif
