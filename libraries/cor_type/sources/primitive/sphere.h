#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_SPHERE_H_

#include "sphere_tmpl.h"


namespace cor
{
    namespace type
    {
        struct SphereItnl;
    
        class Sphere
        {
            std::unique_ptr<SphereItnl> itnl;
        
        public:
        
            Sphere();
            virtual ~Sphere();
        };
    }
}

#endif
