#include "sphere_tmpl_impl.h"

#include "sphere.h"

namespace cor
{
    namespace type
    {
        struct SphereItnl
        {
            
        };
        
        Sphere::Sphere() : itnl(new SphereItnl())
        {
            
        }
        
        Sphere::~Sphere()
        {
            
        }

        template class SphereTmpl<RFloat, Vector2Tmpl<RFloat> >;
        template class SphereTmpl<RInt32, Vector2Tmpl<RInt32> >;
    }
}
