#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_COCOS2DX_EXPERIMENTAL_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_COCOS2DX_EXPERIMENTAL_H_

#include "cor_type/sources/basic_types.h"
#include "2d/CCNode.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct Cocos2dxExperimentalItnl;
    
        class Cocos2dxExperimental
        {
            std::unique_ptr<Cocos2dxExperimentalItnl> itnl;
        
        public:
        
            Cocos2dxExperimental();
            virtual ~Cocos2dxExperimental();

            static cocos2d::Node* set_on_enter_callback_create();
        };
    }
}

#endif
