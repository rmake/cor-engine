#ifndef ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_GROUP_SCENE_H_
#define ____COR_PROJECT_STRUCTURE_SOURCES_PROJECT_GROUP_SCENE_H_

#include "project_group.h"
#include "CCLayer.h"
#include "GUI/CCEditBox/CCEditBox.h"

namespace cor
{
    namespace project_structure
    {
        struct ProjectGroupSceneItnl;
    
        class ProjectGroupScene : public cocos2d::Layer, public cocos2d::extension::EditBoxDelegate
        {
            std::unique_ptr<ProjectGroupSceneItnl> itnl;
        
        public:
        
            ProjectGroupScene();
            virtual ~ProjectGroupScene();

            ProjectGroup& ref_project_group();

            static cocos2d::Scene* createScene();
            static cocos2d::Scene* createScene(ProjectGroupScenePtr& project_group_scene);

            cocos2d::Scene* get_scene();

            void set_project_group(ProjectGroupSP project_group);
            ProjectGroupSP get_project_group();

            virtual bool init();
            virtual void start();
            virtual void step(float dt);

            virtual void editBoxEditingDidBegin(cocos2d::extension::EditBox* editBox);
            virtual void editBoxEditingDidEnd(cocos2d::extension::EditBox* editBox);
            virtual void editBoxTextChanged(cocos2d::extension::EditBox* editBox, const std::string& text);
            virtual void editBoxReturn(cocos2d::extension::EditBox* editBox);

            CREATE_FUNC(ProjectGroupScene);
        };
    }
}

#endif
