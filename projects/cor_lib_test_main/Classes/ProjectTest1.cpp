#include "cocos2d.h"
#include "ProjectTest1.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_system/sources/allocation_monitor.h"
#include "cor_cocos2dx_mruby_interface/sources/sprite_experimental.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_experimental.h"
#include "cor_project_structure/sources/project_mruby_call.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"

USING_NS_CC;

struct ProjectTest1Itnl
{

};

ProjectTest1::ProjectTest1() : itnl(new ProjectTest1Itnl)
{

}

ProjectTest1::~ProjectTest1()
{

}

cor::project_structure::ApplicationPtr ProjectTest1Itnl_app;

void ProjectTest1::start_project_test1()
{
    auto project =
        std::make_shared<ProjectTest1>();
    ProjectTest1Itnl_app->replace_to_project("main", project);
}

void ProjectTest1::init_mruby_call(cor::project_structure::ApplicationPtr app)
{
    ProjectTest1Itnl_app = app;

    auto instance = cor::cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();

    auto& mrb = instance->ref_mrb();
    auto& binder = mrb.ref_binder();

    //static cor::RBool first = cor::rtrue;
    //if(first)
    //{
    //    first = cor::rfalse;
    //    cor::mruby_interface::BasicBind::bind(mrb);
    //    cor::cocos2dx_mruby_interface::Cocos2dxBind::bind(mrb);
    //}

    binder.bind_class<ProjectTest1Itnl>("Cor", "ProjectTest1");
    binder.bind_static_method("Cor", "ProjectTest1", "start_project_test1", ProjectTest1::start_project_test1);

}

void ProjectTest1::start()
{
    cor::log_debug("ProjectTest1::start()");

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto scene = get_scene();

    //
    auto closeItem = MenuItemImage::create(
        "CloseNormal.png",
        "CloseSelected.png",
        CC_CALLBACK_1(ProjectTest1::menuCloseCallback, this));

    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width / 2,
        origin.y + closeItem->getContentSize().height / 2));

    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    scene->addChild(menu, 1);

    //
    auto label = Label::createWithTTF("Test Scene", "fonts/Marker Felt.ttf", 24);
    label->setPosition(Vec2(origin.x + label->getContentSize().width / 2.0f,
        origin.y + visibleSize.height - label->getContentSize().height));
    scene->addChild(label, 1);

    {
        Vector<MenuItem*> items;
        float ypos = origin.y + visibleSize.height - label->getContentSize().height * 2.0f;
        float yitvl = label->getContentSize().height;
        auto addMenu = [&](const cor::RString& title, const cocos2d::ccMenuCallback& callback){
            auto item = MenuItemFont::create(
                title,
                callback);
            item->setPosition(Vec2(origin.x + item->getContentSize().width / 2.0f,
                ypos));
            items.pushBack(item);
            ypos -= yitvl;
        };


        addMenu("test", [=](Ref* pSender){
            label->setString("aaa");
        });

        addMenu("mruby", [=](Ref* pSender){
            mrubyTest();
        });

        addMenu("mruby_cocos2dx", [=](Ref* pSender){
            mrubyCocos2dxTest();
        });

        addMenu("rts_scene", [=](Ref* pSender){
            auto project =
                std::make_shared<cor::project_structure::ProjectMrubyCall>();
            project->set_start_file("data_test_2/rts_scene.rb");
            get_app()->replace_to_project("main", project);
        });

        auto menu = Menu::createWithArray(items);
        menu->setPosition(Vec2::ZERO);
        scene->addChild(menu, 1);
    }

    //
    {
        auto label = Label::createWithTTF("Test Scene", "fonts/Marker Felt.ttf", 12);
        label->setPosition(Vec2(origin.x + label->getContentSize().width / 2.0f + 200,
            origin.y + label->getContentSize().height));
        {
            Vector<FiniteTimeAction*> actions;

            actions.pushBack(CallFunc::create([=](){
                label->setString(cor::system::AllocationMonitor::get_instance()->get_status_text());
            }));

            actions.pushBack(DelayTime::create(1.0f));

            label->runAction(RepeatForever::create(Sequence::create(actions)));
        }


        scene->addChild(label, 1);

    }


    //
    Director::getInstance()->setDepthTest(true);
    Director::getInstance()->setAlphaBlending(true);

    if(false)
    {
        class ZNode : public cocos2d::Node
        {
        public:
            cocos2d::CustomCommand cc;
            static ZNode* create()
            {
                ZNode * ret = new ZNode();
                if(ret && ret->init())
                {
                    ret->autorelease();
                }
                else
                {
                    CC_SAFE_DELETE(ret);
                }
                return ret;
            }
            ZNode()
            {
                cc.init(1.0f);
                cc.func = [=](){
                    Director::getInstance()->setDepthTest(true);
                    Director::getInstance()->setAlphaBlending(true);
                };
            }
            virtual void visit(Renderer *renderer, const Mat4& parentTransform, uint32_t parentFlags)
            {
                renderer->addCommand(&cc);
                cocos2d::Node::visit(renderer, parentTransform, parentFlags);
            }
        };

        auto zn = ZNode::create();
        scene->addChild(zn, 1);

        {
            auto sprite = Sprite::create("data_test_1/nd3_32x32_2.png");
            sprite->setPosition(Vec2(origin.x + visibleSize.width / 2.0f, origin.y + visibleSize.height / 2.0f));
            zn->addChild(sprite, 1);
            auto f = [=](){
                static cor::RFloat n = 0.0f;
                sprite->setPosition3D(Vec3(origin.x + visibleSize.width / 2.0f + sinf(n) * 60, origin.y + visibleSize.height / 2.0f, sinf(n) * 200.0f));
                n += 0.1f;
            };
            Vector<FiniteTimeAction*> a;
            a.pushBack(DelayTime::create(0.0f));
            a.pushBack(CallFunc::create(f));
            a.pushBack(DelayTime::create(0.01f));
            sprite->runAction(RepeatForever::create(
                Sequence::create(a)
                )
                );
            sprite->setGLProgramState(GLProgramState::getOrCreateWithGLProgramName(GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST_NO_MV));
            sprite->setGlobalZOrder(1.0f);
        }

        {
            auto sprite = Sprite::create("data_test_1/rojou.png");
            sprite->setPosition(Vec2(origin.x + visibleSize.width / 2.0f, origin.y + visibleSize.height / 2.0f));
            zn->addChild(sprite, 1);
            auto f = [=](){
                static cor::RFloat n = 0.0f;
                sprite->setPosition3D(Vec3(origin.x + visibleSize.width / 2.0f + sinf(n + 0.5) * 60, origin.y + visibleSize.height / 2.0f, sinf(n + 0.5) * 200.0f));
                n += 0.1f;
            };
            Vector<FiniteTimeAction*> a;
            a.pushBack(DelayTime::create(0.0f));
            a.pushBack(CallFunc::create(f));
            a.pushBack(DelayTime::create(0.01f));
            sprite->runAction(RepeatForever::create(
                Sequence::create(a)
                )
                );
            sprite->setGLProgramState(GLProgramState::getOrCreateWithGLProgramName(GLProgram::SHADER_NAME_POSITION_TEXTURE_ALPHA_TEST_NO_MV));
            sprite->setGlobalZOrder(1.0f);
        }
    }
    
    
    if(true)
    {
        auto sprite = Sprite3D::create("data_test_1/test3d/majitai_v3_02_print.c3b");
        sprite->setPosition3D(Vec3(origin.x + visibleSize.width / 2.0f, origin.y + visibleSize.height / 2.0f, 0.0f));
        sprite->setScale(100.0f);
        sprite->setRotation3D(Vec3(15.0f, -45.0f, 0.0f));
        scene->addChild(sprite, 1);
        sprite->runAction(RepeatForever::create(
                RotateBy::create(1.0f, Vec3(0.0f, 135.0f, 0.0f))
            )
        );
    }

    //
    cor::log_debug("ProjectTest1::start() ", 123, " inited");

}

void ProjectTest1::step()
{
    //cor::log_debug("ProjectTest1::step()");
}

void ProjectTest1::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void ProjectTest1::mrubyTest()
{
    auto scene = get_scene();
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    cor::RString result;

    {
        auto instance = cor::cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();

        auto& mrb = instance->ref_mrb();

        cor::MrubyRef r = mrb.load_string("(12 + 4).to_s + 'test'");
        result = r.to_s();

        result += "\n";

    }

    //result += cor::cocos2dx_mruby_interface::SpriteExperimental::bind_funcs().to_s();
    //result += "\n";

    {
        auto instance = cor::cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
        auto& mrb = instance->ref_mrb();

        result += cor::mruby_interface::MrubyExperimental::bind_funcs(mrb).to_s();
        result += mrb.get_last_exception().to_s();
    }


    auto nodes = std::make_shared<Vector<Node*> >();

    auto testItem = MenuItemFont::create(
        result,
        [=](Ref* pSender){

        this->get_job_queue()->add_job([=](){
            for(auto node : *nodes.get())
            {
                node->removeFromParent();
            }

            nodes->clear();
        });
    });
    testItem->setPosition(Vec2(origin.x + testItem->getContentSize().width / 2,
        origin.y + visibleSize.height - testItem->getContentSize().height));

    auto layer = LayerColor::create(cocos2d::Color4B(0, 0, 0, 196));
    scene->addChild(layer, 2);

    auto menu = Menu::create(testItem, NULL);

    nodes->pushBack(menu);
    nodes->pushBack(layer);


    menu->setPosition(Vec2::ZERO);
    scene->addChild(menu, 3);

}

void ProjectTest1::mrubyCocos2dxTest()
{
    auto scene = get_scene();

    cor::cocos2dx_mruby_interface::Cocos2dxExperimental::bind_funcs(scene.get(), get_layer().get());

    {
        cor::cocos2dx_mruby_interface::MrubyScriptEnginePtr instance =
            cor::cocos2dx_mruby_interface::MrubyScriptEngine::get_instance();
        auto& mrb = instance->ref_mrb();
        cor::log_debug(mrb.get_last_exception().to_s());
    }


}

