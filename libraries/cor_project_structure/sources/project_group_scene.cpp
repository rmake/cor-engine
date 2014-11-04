#include "project_group_scene.h"
#include "CCScene.h"
#include "cor_cocos2dx_converter/sources/step_size_scene.h"

USING_NS_CC;

namespace cor
{
    namespace project_structure
    {
        struct ProjectGroupSceneItnl
        {
            ProjectGroupWP project_group;
            Scene* scene;
        };
        
        ProjectGroupScene::ProjectGroupScene() : itnl(new ProjectGroupSceneItnl())
        {
            
        }
        
        ProjectGroupScene::~ProjectGroupScene()
        {
            if(auto pg = itnl->project_group.lock())
            {
                pg->stop();
            }
        }

        cocos2d::Scene* ProjectGroupScene::createScene()
        {
            ProjectGroupScenePtr ptr;
            return createScene(ptr);
        }

        cocos2d::Scene* ProjectGroupScene::createScene(ProjectGroupScenePtr& project_group_scene)
        {
            auto scene = Scene::createWithPhysics();
            //auto scene = cocos2dx_converter::StepSizeScene::createWithPhysics();
            auto layer = ProjectGroupScene::create();
            //scene->set_dt(1000.0f / 30.0f);
            project_group_scene = layer;
            layer->itnl->scene = scene;
            scene->addChild(layer);
            return scene;
        }

        cocos2d::Scene* ProjectGroupScene::get_scene()
        {
            return itnl->scene;
        }

        void ProjectGroupScene::set_project_group(ProjectGroupSP project_group)
        {
            itnl->project_group = project_group;
        }

        ProjectGroupSP ProjectGroupScene::get_project_group()
        {
            return itnl->project_group.lock();
        }

        bool ProjectGroupScene::init()
        {
            if(!Layer::init())
            {
                return false;
            }

            return true;
        }

        void ProjectGroupScene::start()
        {

            schedule(schedule_selector(ProjectGroupScene::step));
        }

        void ProjectGroupScene::step(float dt)
        {
            //log_debug("ProjectGroupScene::step");

            if(auto pg = get_project_group())
            {
                pg->step();
            }
        }

        void ProjectGroupScene::editBoxEditingDidBegin(cocos2d::extension::EditBox* editBox)
        {
        
        }

        void ProjectGroupScene::editBoxEditingDidEnd(cocos2d::extension::EditBox* editBox)
        {
        
        }

        void ProjectGroupScene::editBoxTextChanged(cocos2d::extension::EditBox* editBox, const std::string& text)
        {
        
        }

        void ProjectGroupScene::editBoxReturn(cocos2d::extension::EditBox* editBox)
        {
            
        }

    }
}
