#ifndef ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_MRUBY_REF_H_
#define ____COR_COCOS2DX_MRUBY_INTERFACE_SOURCES_COCOS_MRUBY_REF_H_

#include "cor_type/sources/basic_types.h"
#include "mruby.h"
#include "mrubybind.h"
#include "base/CCRef.h"

namespace cor
{
    typedef mrubybind::MrubyRef MrubyRef;

    namespace cocos2dx_mruby_interface
    {
        struct CocosMrubyRefItnl;
    
        class CocosMrubyRef : public cocos2d::Ref
        {
        public:
            typedef std::function<void()> DeleteCallback;

        private:
            MrubyRef value;
            DeleteCallback delete_callback;
        
        public:
        
            CocosMrubyRef();
            virtual ~CocosMrubyRef();

            static CocosMrubyRef* create();

            void set_value(MrubyRef value);
            MrubyRef get_value();

            void set_on_delete(DeleteCallback f);
        };
    }
}

#endif
