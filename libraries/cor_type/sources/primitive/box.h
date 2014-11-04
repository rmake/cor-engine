#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_BOX_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_BOX_H_

#include "box_tmpl.h"


namespace cor
{
    namespace type
    {
        struct BoxItnl;
    
        class Box
        {
            std::unique_ptr<BoxItnl> itnl;
        
        public:
        
            Box();
            virtual ~Box();
        };
    }
}

#endif
