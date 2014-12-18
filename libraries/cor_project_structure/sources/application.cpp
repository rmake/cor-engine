#include "application.h"
#include "cocos2d.h"
#include "project_group_scene.h"
#include "network/HttpClient.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_system.h"


USING_NS_CC;

namespace cor
{
    namespace project_structure
    {


        struct ApplicationItnl
        {
            ProjectGroupSP current_project_group;
            ProjectGroupSP past_project_group;
            ApplicationDidFinishLaunchingFunc did_finish_launching_func;
            ApplicationDidEnterBackgroundFunc did_enter_back_ground_func;
            ApplicationWillEnterForegroundFunc will_enter_foreground_func;
        };
        
        Application::Application() : itnl(new ApplicationItnl())
        {

            auto eventDispatcher = Director::getInstance()->getEventDispatcher();

            FileUtils::getInstance()->addSearchPath("project_resource");

            //auto rendererRecreatedListener = EventListenerCustom::create(EVENT_RENDERER_RECREATED, [](EventCustom* e){
            //    cocos2dx_converter::RtsObjectSystem::on_active();
            //});
            //
            //eventDispatcher->addEventListenerWithFixedPriority(rendererRecreatedListener, -3);

            auto toForegroundListener = EventListenerCustom::create(EVENT_COME_TO_FOREGROUND, [](EventCustom* e){
                cocos2dx_converter::RtsObjectSystem::on_active();
            });
            eventDispatcher->addEventListenerWithFixedPriority(toForegroundListener, -3);

        }
        
        Application::~Application()
        {
            cocos2d::network::HttpClient::destroyInstance();
        }

        void Application::set_did_finish_launching_func(ApplicationDidFinishLaunchingFunc did_finish_launching_func)
        {
            itnl->did_finish_launching_func = did_finish_launching_func;
        }

        ApplicationDidFinishLaunchingFunc Application::get_did_finish_launching_func()
        {
            return itnl->did_finish_launching_func;
        }

        void Application::set_did_enter_back_ground_func(ApplicationDidEnterBackgroundFunc did_enter_back_ground_func)
        {
            itnl->did_enter_back_ground_func = did_enter_back_ground_func;
        }

        ApplicationDidEnterBackgroundFunc Application::get_did_enter_back_ground_func()
        {
            return itnl->did_enter_back_ground_func;
        }

        void Application::set_will_enter_foreground_func(ApplicationWillEnterForegroundFunc will_enter_foreground_func)
        {
            itnl->will_enter_foreground_func = will_enter_foreground_func;
        }

        ApplicationWillEnterForegroundFunc Application::get_will_enter_foreground_func()
        {
            return itnl->will_enter_foreground_func;
        }

        bool Application::applicationDidFinishLaunching()
        {
            if(get_did_finish_launching_func())
            {
                return get_did_finish_launching_func()();
            }
            return true;
        }

        void Application::applicationDidEnterBackground()
        {
            if(get_did_enter_back_ground_func())
            {
                get_did_enter_back_ground_func()();
            }
        }

        void Application::applicationWillEnterForeground()
        {
            {
                //cocos2d::ShaderCache::getInstance()->reloadDefaultGLPrograms();
                //cocos2dx_converter::RtsObjectSystem::on_active();

            }

            if(get_will_enter_foreground_func())
            {
                get_will_enter_foreground_func()();
            }
        }

        class ApplicationFade : public TransitionFade
        {
        public:

            static ApplicationFade* create(float duration, Scene *scene, const Color3B& color)
            {
                auto transition = new ApplicationFade();
                transition->initWithDuration(duration, scene, color);
                transition->autorelease();
                return transition;
            }

            virtual void onEnter()
            {
                TransitionFade::onEnter();

                Node* f = getChildByTag(0xFADEFADE);
                f->setGlobalZOrder(FloatMax);
            }

            virtual void onExit()
            {
                TransitionFade::onExit();
            }
        };

        void Application::start_with_project(const RString& name, const ProjectBaseSP& project)
        {
            auto director = Director::getInstance();
            auto glview = director->getOpenGLView();
            if(!glview) {
                //glview = GLView::createWithRect("Code on Rmake", Rect(0.0f, 0.0f, 480.0f, 800.0f));
                glview = GLView::createWithRect("Code on Rmake", Rect(0.0f, 0.0f, 800.0f, 480.0f));
                director->setOpenGLView(glview);
            }

            //glview->setDesignResolutionSize(480, 800, ResolutionPolicy::SHOW_ALL);
            glview->setDesignResolutionSize(800, 480, ResolutionPolicy::SHOW_ALL);

            cor::system::Logger::get_instance()->add_print_func([](cor::system::LogType::Enum type, const cor::RString& str){

                cor::RString top;

                switch(type)
                {
                case cor::system::LogType::debug:
                    top = "debug: ";
                    break;
                case cor::system::LogType::info:
                    top = "info: ";
                    break;
                case cor::system::LogType::warn:
                    top = "warn: ";
                    break;
                case cor::system::LogType::error:
                    top = "error: ";
                    break;
                case cor::system::LogType::fatal:
                    top = "fatal: ";
                    break;
                default:;
                }
                log("%s", (top + str).c_str());
            });

            cor::log_debug("Project start.");

            director->setDisplayStats(true);

            //director->setAnimationInterval(1.0 / 60);

            director->setAnimationInterval(1.0 / 30);

            auto project_group = ProjectGroup::create();
            project_group->set_app(this);
            project_group->add_project("main", project);
            project_group->start();
            itnl->current_project_group = project_group;


            auto tsc = ApplicationFade::create(0.25f, project_group->get_scene().get(), Color3B(0, 0, 0));
            director->runWithScene(tsc);

            
        }

        void Application::replace_to_project(const RString& name, const ProjectBaseSP& project)
        {
            cor::log_debug("Project replace.");

            auto director = Director::getInstance();

            auto project_group = ProjectGroup::create();
            project_group->set_app(this);
            project_group->add_project("main", project);
            project_group->start();
            itnl->past_project_group = itnl->current_project_group;
            itnl->current_project_group = project_group;

            auto tsc = ApplicationFade::create(0.25f, project_group->get_scene().get(), Color3B(0, 0, 0));
            tsc->setOnExitCallback([=](){
                itnl->past_project_group.reset();
            });
            director->replaceScene(tsc);
        }

    }
}
