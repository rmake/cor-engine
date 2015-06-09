
#include "textured_triangle_node.h"

#include "base/CCEventType.h"
#include "base/CCConfiguration.h"
#include "renderer/CCCustomCommand.h"
#include "renderer/CCRenderer.h"
#include "renderer/CCGLProgramState.h"
#include "renderer/CCGLStateCache.h"
#include "base/CCDirector.h"
#include "base/CCEventListenerCustom.h"
#include "base/CCEventDispatcher.h"
#include "platform/CCGL.h"


USING_NS_CC;

namespace cor
{
    namespace cocos2dx_converter
    {
        struct TexturedTriangleNodeItnl
        {

            GLuint vao;
            GLuint vbo;

            int bufferCapacity;
            GLsizei bufferCount;
            std::vector<V2F_C4B_T2F> buffer;

            BlendFunc blendFunc;
            CustomCommand customCommand;

            Texture2D* texture;

            bool dirty;
        };
        
        TexturedTriangleNode::TexturedTriangleNode() : itnl(new TexturedTriangleNodeItnl())
        {
            itnl->dirty = true;
            itnl->bufferCount = 0;
            itnl->texture = nullptr;
        }
        
        TexturedTriangleNode::~TexturedTriangleNode()
        {
         
            glDeleteBuffers(1, &itnl->vbo);
            itnl->vbo = 0;

            if(itnl->texture)
            {
                itnl->texture->release();
            }

            if(Configuration::getInstance()->supportsShareableVAO())
            {
                glDeleteVertexArrays(1, &itnl->vao);
                GL::bindVAO(0);
                itnl->vao = 0;
            }
        }

        TexturedTriangleNode* TexturedTriangleNode::create()
        {
            TexturedTriangleNode * ret = new TexturedTriangleNode();
            if(ret && ret->init())
            {
                ret->autorelease();
            }
            else
            {
                CC_SAFE_DELETE(ret);
            }
            return ret;
        }


        TexturedTriangleNode* TexturedTriangleNode::create(cocos2d::Texture2D* texture)
        {
            TexturedTriangleNode * ret = new TexturedTriangleNode();
            if(ret && ret->init())
            {
                ret->set_texuter(texture);
                ret->autorelease();
            }
            else
            {
                CC_SAFE_DELETE(ret);
            }
            return ret;
        }

        void TexturedTriangleNode::set_texuter(cocos2d::Texture2D* texture)
        {
            itnl->dirty = true;

            if(itnl->texture)
            {
                itnl->texture->release();
            }

            itnl->texture = texture;
            
            if(itnl->texture)
            {
                itnl->texture->retain();
            }
        }

        cocos2d::Texture2D* TexturedTriangleNode::get_texture()
        {
            return itnl->texture;
        }

        void TexturedTriangleNode::ensure_capacity(int count)
        {
            itnl->buffer.resize(count);
            itnl->bufferCapacity = count;
        }

        bool TexturedTriangleNode::init()
        {
            itnl->blendFunc = BlendFunc::ALPHA_PREMULTIPLIED;

            //setGLProgramState(GLProgramState::getOrCreateWithGLProgramName(GLProgram::SHADER_NAME_POSITION_LENGTH_TEXTURE_COLOR));
            setGLProgramState(GLProgramState::getOrCreateWithGLProgramName(GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR));


            ensure_capacity(512);

            if(Configuration::getInstance()->supportsShareableVAO())
            {
                glGenVertexArrays(1, &itnl->vao);
                GL::bindVAO(itnl->vao);
            }

            glGenBuffers(1, &itnl->vbo);
            glBindBuffer(GL_ARRAY_BUFFER, itnl->vbo);
            glBufferData(GL_ARRAY_BUFFER, sizeof(V2F_C4B_T2F)* itnl->bufferCapacity, &itnl->buffer[0], GL_STREAM_DRAW);

            glEnableVertexAttribArray(GLProgram::VERTEX_ATTRIB_POSITION);
            glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, vertices));

            glEnableVertexAttribArray(GLProgram::VERTEX_ATTRIB_COLOR);
            glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_COLOR, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, colors));

            glEnableVertexAttribArray(GLProgram::VERTEX_ATTRIB_TEX_COORD);
            glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_TEX_COORD, 2, GL_FLOAT, GL_FALSE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, texCoords));

            glBindBuffer(GL_ARRAY_BUFFER, 0);

            if(Configuration::getInstance()->supportsShareableVAO())
            {
                GL::bindVAO(0);
            }

            CHECK_GL_ERROR_DEBUG();

            itnl->dirty = true;

#if CC_ENABLE_CACHE_TEXTURE_DATA
            // Need to listen the event only when not use batchnode, because it will use VBO
            auto listener = EventListenerCustom::create(EVENT_RENDERER_RECREATED, [this](EventCustom* event){
                /** listen the event that renderer was recreated on Android/WP8 */
                this->init();
            });

            _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
#endif

            return true;
        }

        void TexturedTriangleNode::clear()
        {
            itnl->dirty = true;
            itnl->bufferCount = 0;
        }

        void TexturedTriangleNode::add_triangle(cocos2d::Vec2 p0, cocos2d::Color4B c0, cocos2d::Tex2F t0,
            Vec2 p1, Color4B c1, Tex2F t1,
            Vec2 p2, Color4B c2, Tex2F t2)
        {
            V2F_C4B_T2F v;

            itnl->dirty = true;

            v.vertices = p0;
            v.colors = c0;
            v.texCoords = t0;
            itnl->buffer[itnl->bufferCount] = v;
            itnl->bufferCount++;

            v.vertices = p1;
            v.colors = c1;
            v.texCoords = t1;
            itnl->buffer[itnl->bufferCount] = v;
            itnl->bufferCount++;

            v.vertices = p2;
            v.colors = c2;
            v.texCoords = t2;
            itnl->buffer[itnl->bufferCount] = v;
            itnl->bufferCount++;
        }

        void TexturedTriangleNode::draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags)
        {
            itnl->customCommand.init(_globalZOrder);
            itnl->customCommand.func = [=](){
                auto glProgram = getGLProgram();
                glProgram->use();
                glProgram->setUniformsForBuiltins(transform);

                GL::enableVertexAttribs(GL::VERTEX_ATTRIB_FLAG_POS_COLOR_TEX);
                GL::blendFunc(itnl->blendFunc.src, itnl->blendFunc.dst);

                GL::bindTexture2D(itnl->texture->getName());
                if(itnl->dirty)
                {
                    glBindBuffer(GL_ARRAY_BUFFER, itnl->vbo);
                    glBufferData(GL_ARRAY_BUFFER, sizeof(V2F_C4B_T2F)*itnl->bufferCapacity, &itnl->buffer[0], GL_STREAM_DRAW);
                    itnl->dirty = false;
                }
                if(Configuration::getInstance()->supportsShareableVAO())
                {
                    GL::bindVAO(itnl->vao);
                }
                else
                {
                    GL::enableVertexAttribs(GL::VERTEX_ATTRIB_FLAG_POS_COLOR_TEX);

                    glBindBuffer(GL_ARRAY_BUFFER, itnl->vbo);
                    // vertex
                    glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_POSITION, 2, GL_FLOAT, GL_FALSE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, vertices));

                    // color
                    glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_COLOR, 4, GL_UNSIGNED_BYTE, GL_TRUE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, colors));

                    // texcood
                    glVertexAttribPointer(GLProgram::VERTEX_ATTRIB_TEX_COORD, 2, GL_FLOAT, GL_FALSE, sizeof(V2F_C4B_T2F), (GLvoid *)offsetof(V2F_C4B_T2F, texCoords));
                }

                glDrawArrays(GL_TRIANGLES, 0, itnl->bufferCount);
                glBindBuffer(GL_ARRAY_BUFFER, 0);

                CC_INCREMENT_GL_DRAWN_BATCHES_AND_VERTICES(1, itnl->bufferCount);
                CHECK_GL_ERROR_DEBUG();
            };
            renderer->addCommand(&itnl->customCommand);
        }

    }
}
