#ifndef ____COR_SYSTEM_SOURCES_COR_CRYPT_H_
#define ____COR_SYSTEM_SOURCES_COR_CRYPT_H_

#ifndef _NO_COR_TYPE_BASIC_TYPES_H_INCLUDE_
#include "cor_type/sources/basic_types.h"
#endif

namespace cor
{
    namespace system
    {
        struct CorCryptItnl;
    
        class CorCrypt
        {
            std::unique_ptr<CorCryptItnl> itnl;
        
        public:
        
            CorCrypt();
            virtual ~CorCrypt();

            static void set_enabled(RBool enabled);
            static RBool get_enabled();

            static void encode(RBytePtr data, RSize size);
            static void decode(RBytePtr data, RSize size);
        };
    }
}

#endif
