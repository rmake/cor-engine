#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_SPHERE_H_

#include "o_sphere_tmpl.h"


namespace cor
{
    namespace type
    {
        struct OSphereItnl;
    
        class OSphere
        {
            std::unique_ptr<OSphereItnl> itnl;
        
        public:
        
            OSphere();
            virtual ~OSphere();
        };
    }
}

#endif
