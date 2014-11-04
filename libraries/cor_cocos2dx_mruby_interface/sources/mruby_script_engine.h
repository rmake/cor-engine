#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_MRUBY_SCRIPT_ENGINE_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_MRUBY_SCRIPT_ENGINE_H_

#include "cor_type/sources/basic_types.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "CCScriptSupport.h"
#include "cocos_weak_ptr.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        struct MrubyScriptEngineItnl;

        class MrubyScriptEngine;
        typedef MrubyScriptEngine* MrubyScriptEnginePtr;
    
        class MrubyScriptEngine : public cocos2d::ScriptEngineProtocol
        {
            std::unique_ptr<MrubyScriptEngineItnl> itnl;

            static MrubyScriptEnginePtr& ref_instance_ptr();
        
        public:
        
            MrubyScriptEngine();
            virtual ~MrubyScriptEngine();

            static MrubyScriptEnginePtr get_instance();

            mruby_interface::MrubyState& ref_mrb();
            CocosRefTable& ref_object_table();

            virtual void removeScriptObjectByObject(cocos2d::Ref* obj);
            virtual void removeScriptHandler(int handler);
            virtual int reallocateScriptHandler(int handler);
            virtual int executeString(const char* codes);
            virtual int executeScriptFile(const char* filename);
            virtual int executeGlobalFunction(const char* functionName);
            virtual int sendEvent(cocos2d::ScriptEvent* evt);
            virtual bool handleAssert(const char *msg);
            virtual bool parseConfig(ConfigType type, const std::string& str);
        };
    }
}

#endif
