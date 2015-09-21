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

        void Application_get_command_line_arg(std::function<void(const char **argv, int argc)> f)
        {
#if defined(_DEBUG) && defined(CC_PLATFORM_WIN32)
            auto cmdline = GetCommandLine();
            LPWSTR *arg_list;
            int arg_count;
            arg_list = CommandLineToArgvW(GetCommandLine(), &arg_count);
            RStringArray sa;
            std::vector<const char*> argv_list;
            for(auto i = 0; i < arg_count; i++)
            {
                char utf8[256 * 16] = { 0 };
                int nNum = WideCharToMultiByte(CP_UTF8, 0, arg_list[i], -1, utf8, sizeof(utf8), nullptr, nullptr);
                sa.push_back(RString(utf8));
                argv_list.push_back(sa.back().c_str());
            }
            f(&argv_list[0], argv_list.size());
#endif
        }

        Application::Application() : itnl(new ApplicationItnl())
        {

#if defined(_DEBUG) && defined(CC_PLATFORM_WIN32)
            RBool copy_mode = rfalse;

            Application_get_command_line_arg([&](const char **argv, int argc){
                for(auto i = 0; i < argc; i++)
                {
                    RString s(argv[i]);
                    if(s == "--runtime-copy-projecy")
                    {
                        copy_mode = rtrue;
                    }
                }
            });

            if(copy_mode)
            {
                ShellExecute(NULL, TEXT("open"), TEXT("cmd"), TEXT("/c ruby ../../project_script/copy_project.rb --resource-only --win32-copy "), NULL, SW_SHOWNORMAL);
                Sleep(3000);
            }
#endif


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
                f->setPosition3D(Vec3(0.0f, 0.0f, 300.0f));
            }

            virtual void onExit()
            {
                TransitionFade::onExit();
            }
        };

        static cocos2d::Size designResolutionSize = cocos2d::Size(800, 480);
        //static cocos2d::Size designResolutionSize = cocos2d::Size(1024, 1024 * 480 / 800);
        static cocos2d::Size smallResolutionSize = cocos2d::Size(480, 320);
        static cocos2d::Size mediumResolutionSize = cocos2d::Size(1024, 768);
        static cocos2d::Size largeResolutionSize = cocos2d::Size(2048, 1536);

        void Application::start_with_project(const RString& name, const ProjectBaseSP& project, std::function<void()> callback)
        {

            // initialize director
            auto director = Director::getInstance();
            auto glview = director->getOpenGLView();
            if(!glview) {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                glview = GLViewImpl::createWithRect("cor_lib_test_main", Rect(0, 0, designResolutionSize.width, designResolutionSize.height));
#else
                glview = GLViewImpl::create("cor_lib_test_main");
#endif
                director->setOpenGLView(glview);
            }

            // turn on display FPS
            director->setDisplayStats(true);

            // set FPS. the default value is 1.0/60 if you don't call this
            director->setAnimationInterval(1.0 / 30);

            // Set the design resolution
            //glview->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, ResolutionPolicy::NO_BORDER);
            glview->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height, ResolutionPolicy::SHOW_ALL);
            Size frameSize = glview->getFrameSize();
            // if the frame's height is larger than the height of medium size.
            if (frameSize.height > mediumResolutionSize.height)
            {
                director->setContentScaleFactor(MIN(largeResolutionSize.height/designResolutionSize.height, largeResolutionSize.width/designResolutionSize.width));
            }
            // if the frame's height is larger than the height of small size.
            else if (frameSize.height > smallResolutionSize.height)
            {
                director->setContentScaleFactor(MIN(mediumResolutionSize.height/designResolutionSize.height, mediumResolutionSize.width/designResolutionSize.width));
            }
            // if the frame's height is smaller than the height of medium size.
            else
            {
                director->setContentScaleFactor(MIN(smallResolutionSize.height/designResolutionSize.height, smallResolutionSize.width/designResolutionSize.width));
            }
            director->setContentScaleFactor(1.0f);

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

            //
            auto eventDispatcher = Director::getInstance()->getEventDispatcher();

            FileUtils::getInstance()->addSearchPath("project_resource");

            callback();

            //auto rendererRecreatedListener = EventListenerCustom::create(EVENT_RENDERER_RECREATED, [](EventCustom* e){
            //    cocos2dx_converter::RtsObjectSystem::on_active();
            //});
            //
            //eventDispatcher->addEventListenerWithFixedPriority(rendererRecreatedListener, -3);

            auto toForegroundListener = EventListenerCustom::create(EVENT_COME_TO_FOREGROUND, [](EventCustom* e){
                cocos2dx_converter::RtsObjectSystem::on_active();
            });
            eventDispatcher->addEventListenerWithFixedPriority(toForegroundListener, -3);
            //

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
