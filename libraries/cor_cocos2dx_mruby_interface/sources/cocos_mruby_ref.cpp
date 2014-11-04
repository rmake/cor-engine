
#include "cocos_mruby_ref.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        
        
        CocosMrubyRef::CocosMrubyRef()
        {
            
        }
        
        CocosMrubyRef::~CocosMrubyRef()
        {
            if(delete_callback)
            {
                delete_callback();
            }
        }

        CocosMrubyRef* CocosMrubyRef::create()
        {
            auto p = new CocosMrubyRef();
            p->autorelease();
            return p;
        }

        void CocosMrubyRef::set_value(MrubyRef value)
        {
            this->value = value;
        }

        MrubyRef CocosMrubyRef::get_value()
        {
            return this->value;
        }

        void CocosMrubyRef::set_on_delete(DeleteCallback f)
        {
            delete_callback = f;
        }


    }
}
