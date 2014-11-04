
#include "step_size_scene.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        USING_NS_CC;

        struct StepSizeSceneItnl
        {
            RFloat dt;
        };
        
        StepSizeScene::StepSizeScene() : itnl(new StepSizeSceneItnl())
        {
            itnl->dt = 1.0 / 60.f;
        }
        
        StepSizeScene::~StepSizeScene()
        {
            
        }

        void StepSizeScene::set_dt(RFloat dt)
        {
            itnl->dt = dt;
        }

        RFloat StepSizeScene::get_dt()
        {
            return itnl->dt;
        }

        StepSizeScene *StepSizeScene::create()
        {
            StepSizeScene *ret = new StepSizeScene();
            if(ret && ret->init())
            {
                ret->autorelease();
                return ret;
            }
            else
            {
                CC_SAFE_DELETE(ret);
                return nullptr;
            }
        }

        StepSizeScene *StepSizeScene::createWithPhysics()
        {
            StepSizeScene *ret = new StepSizeScene();
            if(ret && ret->initWithPhysics())
            {
                ret->autorelease();
                return ret;
            }
            else
            {
                CC_SAFE_DELETE(ret);
                return nullptr;
            }
        }

        void StepSizeScene::update(float delta)
        {
            Scene::update(itnl->dt);
        }

    }
}
