#include "o_sphere_tmpl_impl.h"

#include "o_sphere.h"

namespace cor
{
    namespace type
    {
        struct OSphereItnl
        {
            
        };
        
        OSphere::OSphere() : itnl(new OSphereItnl())
        {
            
        }
        
        OSphere::~OSphere()
        {
            
        }

        template class OSphereTmpl<RFloat, Vector2Tmpl<RFloat> >;
        template class OSphereTmpl<RInt32, Vector2Tmpl<RInt32> >;
    }
}
