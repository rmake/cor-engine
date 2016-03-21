#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_TEXTURED_TRIANGLE_NODE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_TEXTURED_TRIANGLE_NODE_H_

#include "cor_type/sources/basic_types.h"
#include "2d/CCNode.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct TexturedTriangleNodeItnl;
    
        class TexturedTriangleNode : public cocos2d::Node
        {
            std::unique_ptr<TexturedTriangleNodeItnl> itnl;
        
        public:

            TexturedTriangleNode();
            virtual ~TexturedTriangleNode();

            static TexturedTriangleNode* create();
            static TexturedTriangleNode* create(cocos2d::Texture2D* texture);

            void set_texuter(cocos2d::Texture2D* texture);
            cocos2d::Texture2D* get_texture();

            bool init() override;
            void clear();

            void ensure_capacity(int count);

            void add_triangle(cocos2d::Vec2 p0, cocos2d::Color4B c0, cocos2d::Tex2F t0,
                cocos2d::Vec2 p1, cocos2d::Color4B c1, cocos2d::Tex2F t1,
                cocos2d::Vec2 p2, cocos2d::Color4B c2, cocos2d::Tex2F t2);

            virtual void draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags) override;
        };
    }
}

#endif
