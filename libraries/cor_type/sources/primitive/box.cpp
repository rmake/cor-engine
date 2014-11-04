#include "box_tmpl_impl.h"

#include "box.h"

namespace cor
{
    namespace type
    {
        struct BoxItnl
        {
            
        };
        
        Box::Box() : itnl(new BoxItnl())
        {
            
        }
        
        Box::~Box()
        {
            
        }


        template class BoxTmpl<RFloat, Vector2Tmpl<RFloat> >;
        template class BoxTmpl<RInt32, Vector2Tmpl<RInt32> >;
    }
}
