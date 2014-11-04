#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_SPRITE_EXPERIMENTAL_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_SPRITE_EXPERIMENTAL_H_

#include "mruby_script_engine.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct SpriteExperimentalItnl;
    
        class SpriteExperimental
        {
            std::unique_ptr<SpriteExperimentalItnl> itnl;
            
            
        
        public:
        
            SpriteExperimental();
            virtual ~SpriteExperimental();

            static MrubyRef bind_funcs();
        };
    }
}

#endif
