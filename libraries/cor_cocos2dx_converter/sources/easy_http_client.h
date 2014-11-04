#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_EASY_HTTP_CLIENT_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_EASY_HTTP_CLIENT_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct EasyHttpClientItnl;
    
        class EasyHttpClient
        {
            std::unique_ptr<EasyHttpClientItnl> itnl;
        
        public:
        
            EasyHttpClient();
            virtual ~EasyHttpClient();

            static void get_text(RString url, std::function<void(RString, RString)> callback);
        };
    }
}

#endif
