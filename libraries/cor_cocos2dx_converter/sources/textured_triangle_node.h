#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_TEXTURED_TRIANGLE_NODE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_TEXTURED_TRIANGLE_NODE_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace cocos2dx_converter
    {
        struct TexturedTriangleNodeItnl;
    
        class TexturedTriangleNode
        {
            std::unique_ptr<TexturedTriangleNodeItnl> itnl;
        
        public:
        
            TexturedTriangleNode();
            virtual ~TexturedTriangleNode();
        };
    }
}

#endif
