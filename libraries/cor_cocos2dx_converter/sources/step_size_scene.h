#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_STEP_SIZE_SCENE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_STEP_SIZE_SCENE_H_

#include "cor_type/sources/basic_types.h"
#include "CCScene.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct StepSizeSceneItnl;
    
        class StepSizeScene : public cocos2d::Scene
        {
            std::unique_ptr<StepSizeSceneItnl> itnl;
        
        public:
        
            StepSizeScene();
            virtual ~StepSizeScene();

            void set_dt(RFloat dt);
            RFloat get_dt();

            static StepSizeScene *create();
            static StepSizeScene *createWithPhysics();

            virtual void update(float delta) override;

        };
    }
}

#endif
