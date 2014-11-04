#ifndef ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_H_
#define ____COR_TYPE_SOURCES_PRIMITIVE_O_BOX_H_

#include "o_box_tmpl.h"


namespace cor
{
    namespace type
    {
        struct OBoxItnl;
    
        class OBox
        {
            std::unique_ptr<OBoxItnl> itnl;
        
        public:
        
            OBox();
            virtual ~OBox();
        };
    }
}

#endif
