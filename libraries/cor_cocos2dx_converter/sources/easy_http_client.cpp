
#include "easy_http_client.h"
#include "network/HttpClient.h"
#include "cor_system/sources/logger.h"
#include "cocos2d.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct EasyHttpClientItnl
        {
            
        };
        
        EasyHttpClient::EasyHttpClient() : itnl(new EasyHttpClientItnl())
        {
            
        }
        
        EasyHttpClient::~EasyHttpClient()
        {
            
        }

        void EasyHttpClient::get_text(RString url, std::function<void(RString, RString)> callback)
        {
            log_debug("EasyHttpClient::get_text");
            auto request = new cocos2d::network::HttpRequest();
            request->setUrl(url.c_str());
            request->setRequestType(cocos2d::network::HttpRequest::Type::GET);
            request->setResponseCallback([=](cocos2d::network::HttpClient* client, cocos2d::network::HttpResponse* response){
                if(!response)
                {
                    callback("", "no response.");
                    return;
                }
                if(!response->isSucceed())
                {
                    callback("", "response failed.");
                    return;
                }
                std::vector<char>* buffer = response->getResponseData();
                std::string b(buffer->begin(), buffer->end());
                callback(b, "success");
            });
            cocos2d::network::HttpClient::getInstance()->send(request);
            request->release();
        }
    }
}
