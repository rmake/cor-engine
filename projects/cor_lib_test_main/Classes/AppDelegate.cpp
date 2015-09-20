#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "ProjectTest1.h"
#include "cor_project_structure/sources/project_mruby_call.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

static cocos2d::Size designResolutionSize = cocos2d::Size(480, 320);
static cocos2d::Size smallResolutionSize = cocos2d::Size(480, 320);
static cocos2d::Size mediumResolutionSize = cocos2d::Size(1024, 768);
static cocos2d::Size largeResolutionSize = cocos2d::Size(2048, 1536);

AppDelegate::AppDelegate() {
    cor::log_debug("AppDelegate::AppDelegate()");
    
}

AppDelegate::~AppDelegate()
{
    if(cor::system::AllocationMonitor::get_instance())
    {
        cor::log_info(cor::system::AllocationMonitor::get_instance()->get_status_text());
    }
}

//if you want a different context,just modify the value of glContextAttrs
//it will takes effect on all platforms
void AppDelegate::initGLContextAttrs()
{
    //set OpenGL context attributions,now can only set six attributions:
    //red,green,blue,alpha,depth,stencil
    GLContextAttrs glContextAttrs = {8, 8, 8, 8, 24, 8};

    GLView::setGLContextAttrs(glContextAttrs);
}

// If you want to use packages manager to install more packages,
// don't modify or remove this function
static int register_all_packages()
{
    return 0; //flag for packages manager
}

bool AppDelegate::applicationDidFinishLaunching() {

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

    cor::log_debug("AppDelegate::applicationDidFinishLaunching()");
    cor::cocos2dx_mruby_interface::MrubyScriptEngine* engine = new cor::cocos2dx_mruby_interface::MrubyScriptEngine();
    ScriptEngineManager::getInstance()->setScriptEngine(engine);

    app.set_did_finish_launching_func([=](){
        auto project =
            std::make_shared<cor::project_structure::ProjectMrubyCall>();
        cor::project_structure::ProjectMrubyCall::first_init(&app);
        project->set_start_file("start.rb");

        app.start_with_project("main", project, [&](){
            register_all_packages();
        });
        return true;
    });

    return app.applicationDidFinishLaunching();
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();

    // if you use SimpleAudioEngine, it must be pause
    CocosDenshion::SimpleAudioEngine::getInstance()->pauseBackgroundMusic();

    app.applicationDidEnterBackground();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();

    // if you use SimpleAudioEngine, it must resume here
    CocosDenshion::SimpleAudioEngine::getInstance()->resumeBackgroundMusic();

    app.applicationWillEnterForeground();
}
