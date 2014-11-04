#include "sprite_experimental.h"
#include "cocos2d.h"
#include "cor_mruby_interface/sources/basic_bind.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        namespace experimental
        {
            USING_NS_CC;

            typedef CocosWeakPtrTmpl<Sprite> SpritePtr;

            SpritePtr back_sprite;

            SpritePtr create_sprite()
            {
                auto sprite = Sprite::create("data_test_1/nd3_32x32_2.png");
                sprite->_luaID = 1;
                sprite->retain();

                back_sprite = sprite;

                return SpritePtr(sprite);
            }

            void add_pos(SpritePtr sprite, float x, float y)
            {
                auto p = sprite->getPosition();

                sprite->setPosition(p.x + x, p.y + y);
            }

            float get_x(SpritePtr sprite)
            {
                auto p = sprite->getPosition();
                return p.x;
            }
        
        }

        

        MrubyRef SpriteExperimental::bind_funcs()
        {
            auto instance = MrubyScriptEngine::get_instance();

            auto& mrb = instance->ref_mrb();
            auto& binder = mrb.ref_binder();

            mruby_interface::BasicBind::bind(mrb);

            binder.bind_class<experimental::SpritePtr>("RmakeExperimental", "SpritePtr");
            binder.bind_custom_method("RmakeExperimental", "SpritePtr", "add_pos", experimental::add_pos);
            binder.bind_custom_method("RmakeExperimental", "SpritePtr", "get_x", experimental::get_x);
            binder.bind_static_method("RmakeExperimental", "SpritePtr", "create", experimental::create_sprite);

            MrubyRef result;
            result = mrb.load_string(
                "s = RmakeExperimental::SpritePtr::create\n"
                
                "str = \"#{s.get_x}\\n\"\n"
                "s.add_pos 30, 50\n"
                "str += \"#{s.get_x}\"\n"
                //"s = nil\n"
                "GC.start\n"
                "str\n");

            experimental::back_sprite->release();

            return result;
        }


        struct SpriteExperimentalItnl
        {
            
        };
        
        SpriteExperimental::SpriteExperimental() : itnl(new SpriteExperimentalItnl())
        {
            
        }
        
        SpriteExperimental::~SpriteExperimental()
        {
            
        }
    }
}
