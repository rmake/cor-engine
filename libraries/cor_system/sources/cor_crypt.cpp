
#include "cor_crypt.h"

namespace cor
{
    namespace system
    {
        struct CorCryptItnl
        {
            static const RSize encode_size;
            static const RString key;
            static RBool enabled;
        };
        const RSize CorCryptItnl::encode_size = 1024;
        RBool CorCryptItnl::enabled = rfalse;
        const RString CorCryptItnl::key("ak8tm.mj");
        
        CorCrypt::CorCrypt() : itnl(new CorCryptItnl())
        {
            
        }
        
        CorCrypt::~CorCrypt()
        {
            
        }

        void CorCrypt::set_enabled(RBool enabled)
        {
            CorCryptItnl::enabled = enabled;
        }

        RBool CorCrypt::get_enabled()
        {
            return CorCryptItnl::enabled;
        }

        void CorCrypt::encode(RBytePtr data, RSize size)
        {
            if(get_enabled())
            {
                RSize i, isz;
                RSize ssz = CorCryptItnl::key.size();
                const char* key = CorCryptItnl::key.c_str();
                isz = std::min(CorCryptItnl::encode_size, size);
                for(i = 0; i < isz; i++)
                {
                    data[i] ^= static_cast<RByte>(key[i % ssz]);
                }
            }
        }

        void CorCrypt::decode(RBytePtr data, RSize size)
        {
            if(get_enabled())
            {
                RSize i, isz;
                RSize ssz = CorCryptItnl::key.size();
                const char* key = CorCryptItnl::key.c_str();
                isz = std::min(CorCryptItnl::encode_size, size);
                for(i = 0; i < isz; i++)
                {
                    data[i] ^= static_cast<RByte>(key[i % ssz]);
                }
            }
        }

    }
}
