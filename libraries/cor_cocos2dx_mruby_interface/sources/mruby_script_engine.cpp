#include "mruby_script_engine.h"


namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct MrubyScriptEngineItnl
        {
            CocosRefTable object_table;
            mruby_interface::MrubyState mrb;
        };
        
        MrubyScriptEngine::MrubyScriptEngine() : itnl(new MrubyScriptEngineItnl())
        {
            ref_instance_ptr() = this;

            itnl->mrb.init();
        }
        
        MrubyScriptEngine::~MrubyScriptEngine()
        {
            
        }

        MrubyScriptEnginePtr& MrubyScriptEngine::ref_instance_ptr()
        {
            static MrubyScriptEnginePtr instance;
            return instance;
        }

        MrubyScriptEnginePtr MrubyScriptEngine::get_instance()
        {
            //static MrubyScriptEngine instance;
            return ref_instance_ptr();
            //return &instance;
        }

        mruby_interface::MrubyState& MrubyScriptEngine::ref_mrb()
        {
            return itnl->mrb;
        }

        CocosRefTable& MrubyScriptEngine::ref_object_table()
        {
            return itnl->object_table;
        }

        void MrubyScriptEngine::removeScriptObjectByObject(cocos2d::Ref* obj)
        {
            auto r = itnl->object_table[obj];
            if(auto sp = r.lock())
            {
                sp->release_ref();
            }
            itnl->object_table.erase(obj);
        }

        void MrubyScriptEngine::removeScriptHandler(int handler)
        {
        
        }

        int MrubyScriptEngine::reallocateScriptHandler(int handler)
        {
            return 0;
        }

        int MrubyScriptEngine::executeString(const char* codes)
        {
            itnl->mrb.load_string(codes);
            MrubyRef e = itnl->mrb.get_last_exception();
            if(e.test())
            {
                return 1;
            }
            return 0;
        }

        int MrubyScriptEngine::executeScriptFile(const char* filename)
        {
            return 1;
        }

        int MrubyScriptEngine::executeGlobalFunction(const char* functionName)
        {
            return 1;
        }

        int MrubyScriptEngine::sendEvent(cocos2d::ScriptEvent* evt)
        {
            return 1;
        }

        bool MrubyScriptEngine::handleAssert(const char *msg)
        {
            return false;
        }

        bool MrubyScriptEngine::parseConfig(ConfigType type, const std::string& str)
        {
            return false;
        }
    }
}
