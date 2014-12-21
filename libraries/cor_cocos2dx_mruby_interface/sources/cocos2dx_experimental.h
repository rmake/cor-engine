#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS2DX_EXPERIMENTAL_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS2DX_EXPERIMENTAL_H_

#include "mruby_script_engine.h"

#include "2d/CCScene.h"
#include "2d/CCLayer.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct Cocos2dxExperimentalItnl;
    
        class Cocos2dxExperimental
        {
            std::unique_ptr<Cocos2dxExperimentalItnl> itnl;
        
        public:
        
            Cocos2dxExperimental();
            virtual ~Cocos2dxExperimental();

            static MrubyRef bind_funcs(cocos2d::Scene* current_scene, cocos2d::Layer* current_layer);
        };
    }
}

#endif
