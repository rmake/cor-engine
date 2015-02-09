#include "AppDelegate.h"
#include "HelloWorldScene.h"
#include "ProjectTest1.h"
#include "cor_project_structure/sources/project_mruby_call.h"
#include "SimpleAudioEngine.h"

USING_NS_CC;

AppDelegate::AppDelegate() {
    cor::log_debug("AppDelegate::AppDelegate()");
    app.set_did_finish_launching_func([=](){
        ProjectTest1::init_mruby_call(&app);
        //auto project =
        //    std::make_shared<ProjectTest1>();
        auto project =
            std::make_shared<cor::project_structure::ProjectMrubyCall>();
        project->set_start_file("start.rb");

        app.start_with_project("main", project);
        return true;
    });

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

bool AppDelegate::applicationDidFinishLaunching() {
    cor::log_debug("AppDelegate::applicationDidFinishLaunching()");
    cor::cocos2dx_mruby_interface::MrubyScriptEngine* engine = new cor::cocos2dx_mruby_interface::MrubyScriptEngine();
    ScriptEngineManager::getInstance()->setScriptEngine(engine);

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
