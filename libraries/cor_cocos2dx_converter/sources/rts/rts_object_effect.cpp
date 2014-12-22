
#include "rts_object_effect.h"
#include "cocos2d.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectEffectItnl
        {
            
        };
        
        RtsObjectEffect::RtsObjectEffect() : itnl(new RtsObjectEffectItnl())
        {
            
        }
        
        RtsObjectEffect::~RtsObjectEffect()
        {
            
        }

		cocos2d::Node* RtsObjectEffect::create_layser(cocos2d::SpriteFrame* sf0, cocos2d::SpriteFrame* sf1, cocos2d::SpriteFrame* sf2, RFloat length)
		{
			auto texture = sf0->getTexture();

			auto n = TexturedTriangleNode::create(texture);

			auto w = texture->getPixelsWide();
			auto h = texture->getPixelsHigh();

			auto white = cocos2d::Color4B(255, 255, 255, 255);

			auto mk_box = [&](cocos2d::SpriteFrame* f, cocos2d::Rect box){
				
				auto rect = f->getRect();

				RFloat l, r, t, b;

				l = rect.origin.x / w;
				r = l + rect.size.width / w;
				t = rect.origin.y / h;
				b = t + rect.size.width / h;

				n->add_triangle(
					cocos2d::Vec2(box.origin.x, box.origin.y), white, cocos2d::Tex2F(l, t),
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y), white, cocos2d::Tex2F(r, t),
					cocos2d::Vec2(box.origin.x, box.origin.y + box.size.height), white, cocos2d::Tex2F(l, b)
					);

				n->add_triangle(
					cocos2d::Vec2(box.origin.x, box.origin.y + box.size.height), white, cocos2d::Tex2F(l, b),
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y), white, cocos2d::Tex2F(r, t),
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y + box.size.height), white, cocos2d::Tex2F(r, b)
					);

			};

			auto la = length - 16;

			mk_box(sf0, cocos2d::Rect(-16, -8, 32, 16));
			mk_box(sf1, cocos2d::Rect(-16, -la / 2, 32, la));
			mk_box(sf2, cocos2d::Rect(-16, -8 + la, 32, 16));

			return n;
		}
    }
}
