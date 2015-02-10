
#include "rts_object_system.h"

#include "cocos2d.h"
#include "renderer/CCGLProgramStateCache.h"
#include "cor_system/sources/logger.h"
#include "cor_type/sources/primitive/box.h"
#include "cor_cocos2dx_converter/sources/type_converter.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectSystemItnl
        {
            
        };
        
        RtsObjectSystem::RtsObjectSystem() : itnl(new RtsObjectSystemItnl())
        {
            
        }
        
        RtsObjectSystem::~RtsObjectSystem()
        {
            
        }

        void RtsObjectSystem::setup_rts_rendering_state()
        {
            cocos2d::Director::getInstance()->setDepthTest(false);
            cocos2d::Director::getInstance()->setAlphaBlending(true);

        }

        cocos2d::GLProgram* rts_object_system_alpha_test_shader = NULL;
        cocos2d::GLProgram* rts_object_system_round_shader = NULL;


#define STRINGIFY(A)  #A

        void rts_object_system_load_shader()
        {
            static const char* alphatest_frag_shader = STRINGIFY(

                \n#ifdef GL_ES\n
                precision lowp float;
            \n#endif\n

                varying vec4 v_fragmentColor;
            varying vec2 v_texCoord;
            /*uniform float cc_alpha_value;*/

            void main()
            {
                vec4 texColor = texture2D(CC_Texture0, v_texCoord);
                float cc_alpha_value = 0.5;
                if(texColor.a <= cc_alpha_value)
                    discard;

                if(texColor.a <= 0.75)
                {
                    texColor.a = 0.5;
                }
                else
                {
                    texColor.a = 1.0;
                }
                gl_FragColor = texColor * v_fragmentColor;
            }
            );

            static const char* round_vertex_shader = STRINGIFY(
                attribute vec4 a_position;
            attribute vec2 a_texCoord;
            attribute vec4 a_color;

            \n#ifdef GL_ES\n
                varying lowp vec4 v_fragmentColor;
            varying mediump vec2 v_texCoord;
            \n#else\n
                varying vec4 v_fragmentColor;
            varying vec2 v_texCoord;
            \n#endif\n

                void main()
            {
                gl_Position = CC_PMatrix * a_position;
                gl_Position.x *= 400.0;
                gl_Position.y *= 240.0;
                gl_Position.xy = floor(gl_Position.xy + vec2(0.5, 0.5));
                gl_Position.x /= 400.0;
                gl_Position.y /= 240.0;
                v_fragmentColor = a_color;
                v_texCoord = a_texCoord;
            }
            );

            {
                static const char* my_frag_shader = alphatest_frag_shader;

                if(rts_object_system_alpha_test_shader)
                {
                    rts_object_system_alpha_test_shader->release();
                }

                auto ss = cocos2d::GLProgram::createWithByteArrays(round_vertex_shader, my_frag_shader);
                rts_object_system_alpha_test_shader = ss;
                ss->retain();

            }
            

            {
                const char* my_vert_shader = round_vertex_shader;

                if(rts_object_system_round_shader)
                {
                    rts_object_system_round_shader->release();
                }
                
                auto ss = cocos2d::GLProgram::createWithByteArrays(my_vert_shader, cocos2d::ccPositionTextureColor_noMVP_frag);
                //auto ss = cocos2d::GLProgram::createWithByteArrays(my_vert_shader, alphatest_frag_shader);
                rts_object_system_round_shader = ss;
                ss->retain();

                

            }
            
        }

        void RtsObjectSystem::setup_sprite_alphatest(cocos2d::Sprite* sprite)
        {
            static cocos2d::GLProgramState* s = NULL;
            if(!s)
            {
                rts_object_system_load_shader();
                s = cocos2d::GLProgramStateCache::getInstance()->getGLProgramState(rts_object_system_alpha_test_shader);
                s->retain();
            }
            sprite->setGLProgramState(s);
        }

        void RtsObjectSystem::setup_sprite_round(cocos2d::Node* sprite)
        {
            static cocos2d::GLProgramState* s = NULL;
            static RBool need_reset = rfalse;
            auto p_need_reset = &need_reset;
            auto ps = &s;
            if(!s)
            {
                auto shader = &rts_object_system_round_shader;
                rts_object_system_load_shader();
                s = cocos2d::GLProgramStateCache::getInstance()->getGLProgramState(*shader);
                s->retain();
                auto backToForegroundlistener = cocos2d::EventListenerCustom::create(EVENT_RENDERER_RECREATED, [=](cocos2d::EventCustom*) {
                    *p_need_reset = rtrue;

                });
                cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(backToForegroundlistener, -2);
                {
                    auto backToForegroundlistener = cocos2d::EventListenerCustom::create(EVENT_RENDERER_RECREATED, [=](cocos2d::EventCustom*) {
                        auto scn = cocos2d::Director::getInstance()->getRunningScene();
                        scn->enumerateChildren("//.*", [&](cocos2d::Node* n){
                            if(n->getGLProgramState() == s)
                            {
                                n->setGLProgramState(
                                    cocos2d::GLProgramState::getOrCreateWithGLProgramName(
                                    cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP));
                            }
                            return false;
                        });
                    });

                    cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(backToForegroundlistener, -3);
                }
            }
            sprite->setGLProgramState(s);
            {
                //auto backToForegroundlistener = cocos2d::EventListenerCustom::create(EVENT_RENDERER_RECREATED, [=](cocos2d::EventCustom*) {
                //    sprite->setGLProgramState(
                //        cocos2d::GLProgramState::getOrCreateWithGLProgramName(
                //            cocos2d::GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP));
                //});

                //// Memory leak.
                //sprite->getEventDispatcher()->addEventListenerWithFixedPriority(backToForegroundlistener, -3);
            }
            {
                auto shader = &rts_object_system_round_shader;
                auto backToForegroundlistener = cocos2d::EventListenerCustom::create(EVENT_RENDERER_RECREATED, [=](cocos2d::EventCustom*) {

                    RtsObjectSystem::delay_call(sprite, 0.01f, [=](){
                        if(*p_need_reset)
                        {
                            auto s = *ps;
                            s->release();
                            cocos2d::GLProgramStateCache::getInstance()->removeUnusedGLProgramState();
                            rts_object_system_load_shader();
                            s = cocos2d::GLProgramStateCache::getInstance()->getGLProgramState(*shader);
                            s->retain();
                            *ps = s;

                            *p_need_reset = rfalse;
                        }

                        sprite->setGLProgramState(*ps);
                    });
                });
                sprite->getEventDispatcher()->addEventListenerWithSceneGraphPriority(backToForegroundlistener, sprite);
                
                
            }
        }

        void RtsObjectSystem::setup_avoid_blur_texture(cocos2d::Texture2D* texture)
        {
            cocos2d::Texture2D::TexParams p;
            p.minFilter = GL_NEAREST;
            p.magFilter = GL_LINEAR;
            p.wrapS = GL_CLAMP_TO_EDGE;
            p.wrapT = GL_CLAMP_TO_EDGE;
            texture->setTexParameters(p);
        }

        cocos2d::Image* RtsObjectSystem::create_empty_image(RInt32 w, RInt32 h)
        {
            auto image = new cocos2d::Image();
            RByteArray a;
            a.resize(w * h * 4);
            image->initWithRawData(&a[0], a.size(), w, h, 32, true);
            return image;
        }

        void RtsObjectSystem::copy_rect_image(cocos2d::Image* src, cocos2d::Image* dst, RInt32 x, RInt32 y)
        {
            auto dd = dst->getData();
            auto dw = dst->getWidth();
            auto dh = dst->getHeight();
            auto sd = src->getData();
            auto sw = src->getWidth();
            auto sh = src->getHeight();

            auto iw = std::min(sw, dw - x);
            auto ih = std::min(sh, dh - y);

            for(auto i = 0; i < ih; i++)
            {
                auto cldp = dd + ((y + i) * dw + x) * 4;
                auto ldp = reinterpret_cast<RInt32*>(cldp);

                auto clsp = sd + (i * sw) * 4;
                auto lsp = reinterpret_cast<RInt32*>(clsp);

                for(auto j = 0; j < iw; j++)
                {
                    *ldp = *lsp;

                    ldp++;
                    lsp++;
                }

            }
        }

        cocos2d::Rect RtsObjectSystem::node_rect(cocos2d::Node* node)
        {
            auto bb = node->getBoundingBox();
            type::Matrix4x4F mat;
            convert(node->getNodeToWorldTransform(), mat);
            auto imat = mat.affine_inverse();
            type::Box2F b(type::Vector2F(bb.origin.x, bb.origin.y), type::Vector2F(bb.size.width, bb.size.height));
            type::Box2F ab;

            type::Box2F tb;
            if(bb.size.width > 0)
            {
                //tb.set_rect(imat, b);
                ab = b;
            }

            node->enumerateChildren("//.*", [&](cocos2d::Node* n){
                type::Matrix4x4F m;
                convert(n->getParent()->getNodeToWorldTransform(), m);

                type::Matrix4x4F tm;
                tm = imat * m;

                auto bb = n->getBoundingBox();
                type::Box2F b(type::Vector2F(bb.origin.x, bb.origin.y), type::Vector2F(bb.size.width, bb.size.height));
                type::Box2F tb;
                tb.set_rect(tm, b);
                ab.add_rect(tb);

                return false;
            });

            return cocos2d::Rect(ab.p.x, ab.p.y, ab.w.x, ab.w.y);
            
        }

        cocos2d::Rect RtsObjectSystem::nodes_rect(cocos2d::Vector<cocos2d::Node*> nodes)
        {
            //depricated
            if(nodes.size() > 0)
            {
                type::Box2F aab;


                for(auto node : nodes)
                {
                    auto bb = node->getBoundingBox();
                    type::Matrix4x4F mat;
                    convert(node->getNodeToWorldTransform(), mat);
                    auto imat = mat.affine_inverse();
                    type::Box2F b(type::Vector2F(bb.origin.x, bb.origin.y), type::Vector2F(bb.size.width, bb.size.height));
                    type::Box2F ab;
                    type::Box2F tb;
                    tb.set_rect(imat, b);
                    ab = tb;


                    node->enumerateChildren("//.*", [&](cocos2d::Node* n){
                        type::Matrix4x4F m;
                        convert(n->getParent()->getNodeToWorldTransform(), m);

                        type::Matrix4x4F tm;
                        tm = imat * m;

                        auto bb = n->getBoundingBox();
                        type::Box2F b(type::Vector2F(bb.origin.x, bb.origin.y), type::Vector2F(bb.size.width, bb.size.height));
                        type::Box2F tb;
                        tb.set_rect(tm, b);
                        ab.add_rect(tb);

                        return false;
                    });

                    tb.set_rect(mat, b);
                    ab = tb;

                    aab.add_rect(ab);
                }

                auto ab = aab;
                return cocos2d::Rect(ab.p.x, ab.p.y, ab.w.x, ab.w.y);
            }
            return cocos2d::Rect();
            
        }

        cocos2d::Action* RtsObjectSystem::delay_call(cocos2d::Node* node, RFloat interval, std::function<void()> callback)
        {
            cocos2d::Vector<cocos2d::FiniteTimeAction*> a;
            a.pushBack(cocos2d::DelayTime::create(interval));
            a.pushBack(cocos2d::CallFunc::create([=](){callback(); }));
            return node->runAction(cocos2d::Sequence::create(
                a
                ));
        }

        cocos2d::Action* RtsObjectSystem::interval_call(cocos2d::Node* node, RFloat interval, std::function<void()> callback)
        {
            cocos2d::Vector<cocos2d::FiniteTimeAction*> a;
            a.pushBack(cocos2d::DelayTime::create(interval));
            a.pushBack(cocos2d::CallFunc::create([=](){callback(); }));
            return node->runAction(
                cocos2d::RepeatForever::create(cocos2d::Sequence::create(
                a
                )));
        }

        void RtsObjectSystem::on_active()
        {
            //log_debug("RtsObjectSystem::on_active");
            //rts_object_system_load_shader();
        }


    }
}
