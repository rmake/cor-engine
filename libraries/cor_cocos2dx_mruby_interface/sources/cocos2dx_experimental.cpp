
#include "cocos2dx_experimental.h"
#include "cocos2dx_bind.h"
#include "cocos2d.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/cor_time.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct Cocos2dxExperimentalItnl
        {
            
        };
        
        Cocos2dxExperimental::Cocos2dxExperimental() : itnl(new Cocos2dxExperimentalItnl())
        {
            
        }
        
        Cocos2dxExperimental::~Cocos2dxExperimental()
        {
            
        }

        namespace experimental
        {
            USING_NS_CC;
           
            CocosWeakPtrTmpl<Scene> current_scene;
            CocosWeakPtrTmpl<Layer> current_layer;

            CocosWeakPtrTmpl<Scene> get_current_scene()
            {
                return current_scene;
            }

            CocosWeakPtrTmpl<Layer> get_current_layer()
            {
                return current_layer;
            }

        }

        MrubyRef Cocos2dxExperimental::bind_funcs(cocos2d::Scene* current_scene, cocos2d::Layer* current_layer)
        {
            RInt64 tm = system::Time::get_time_ms();

            MrubyScriptEnginePtr instance = MrubyScriptEngine::get_instance();

            auto& mrb = instance->ref_mrb();
            auto& binder = mrb.ref_binder();

            mruby_interface::BasicBind::bind(mrb);

            experimental::current_scene = CocosWeakPtrTmpl<cocos2d::Scene>(current_scene);
            experimental::current_layer = CocosWeakPtrTmpl<cocos2d::Layer>(current_layer);

            Cocos2dxBind::bind(mrb);

            binder.bind_class<Cocos2dxExperimental>("RmakeExperimental", "Cocos2dx");
            binder.bind_static_method("RmakeExperimental", "Cocos2dx", "get_current_scene", experimental::get_current_scene);
            binder.bind_static_method("RmakeExperimental", "Cocos2dx", "get_current_layer", experimental::get_current_layer);

            MrubyRef result;

            log_debug("Cocos2dxExperimental::bind_funcs init time = ", system::Time::get_time_ms() - tm);

            result = mrb.load_string_log(
                "size = Cocos2d::Size.create 10, 20\n"
                "point = Cocos2d::Vec2.create size\n"
                "CorSystem::Logger.debug(\"point -> #{point.x}\")\n"
                "layer = RmakeExperimental::Cocos2dx.get_current_layer\n"
                "CorSystem::Logger.debug('cocos2dx mruby experimental')\n"
                //"s = Cocos2d::Sprite.create_1 \"rojou.png\"\n"
                "s = Cocos2d::Sprite.create \"data_test_1/rojou.png\"\n"
                "s.set_position(200, 300)\n"
                "listener = Cocos2d::EventListenerTouchOneByOne::create\n"
                "listener.on_touch_began = Proc.new do|t, e|\n"
                "  CorSystem::Logger.debug(\"begin t.get_location #{t.get_location.x}  #{t.get_location.y}\")\n"
                "  true\n"
                "end\n"
                "listener.on_touch_ended = Proc.new do|t, e|\n"
                "  CorSystem::Logger.debug(\"end t.get_location #{t.get_location.x}  #{t.get_location.y}\")\n"
                "  s.remove_from_parent\n"
                "end\n"
                "ed = s.get_event_dispatcher\n"
                "ed.add_event_listener_with_scene_graph_priority listener, s\n"
                //"layer.add_child_3 s\n"
                "layer.add_child s\n"
                "CorSystem::Logger.debug Cocos2d::FileUtils.get_instance.get_string_from_file(\"data_test_1/test.txt\")\n"
                "eval Cocos2d::FileUtils.get_instance.get_string_from_file(\"data_test_1/test.rb\")\n"
                "'cocos2dx'\n"
                );

            experimental::current_scene.reset();
            experimental::current_layer.reset();

            log_debug("Cocos2dxExperimental::bind_funcs all time = ", system::Time::get_time_ms() - tm);

            return result;
        }
    }
}
