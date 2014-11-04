#include "o_box_tmpl_impl.h"

#include "o_box.h"

namespace cor
{
    namespace type
    {
        struct OBoxItnl
        {
            
        };
        
        OBox::OBox() : itnl(new OBoxItnl())
        {
            
        }
        
        OBox::~OBox()
        {
            
        }
        
        template class OBoxTmpl<RFloat, Vector2Tmpl<RFloat> >;
        template class OBoxTmpl<RInt32, Vector2Tmpl<RInt32> >;
    }
}
