
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

				l = (rect.origin.x + 0.5f) / w;
				r = l + (rect.size.width - 1.0f) / w;
				t = (rect.origin.y + 0.5f) / h;
				b = t + (rect.size.height - 1.0f) / h;

				n->add_triangle(
					cocos2d::Vec2(box.origin.x, box.origin.y), white, cocos2d::Tex2F(l, b),
					cocos2d::Vec2(box.origin.x, box.origin.y + box.size.height), white, cocos2d::Tex2F(l, t),
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y), white, cocos2d::Tex2F(r, b)
					);

				n->add_triangle(
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y), white, cocos2d::Tex2F(r, b),
					cocos2d::Vec2(box.origin.x, box.origin.y + box.size.height), white, cocos2d::Tex2F(l, t),
					cocos2d::Vec2(box.origin.x + box.size.width, box.origin.y + box.size.height), white, cocos2d::Tex2F(r, t)
					);

			};

			auto r0 = sf0->getRect();
			auto r1 = sf1->getRect();
			auto r2 = sf2->getRect();

			auto la = length - r0.size.height / 2 - r2.size.height / 2;

			mk_box(sf0, cocos2d::Rect(-r0.size.width / 2, -r0.size.height / 2, r0.size.width, r0.size.height));
			mk_box(sf1, cocos2d::Rect(-r1.size.width / 2, r0.size.height / 2, r1.size.width, la));
			mk_box(sf2, cocos2d::Rect(-r2.size.width / 2, -r2.size.height / 2 + length, r2.size.width, r2.size.height));

			return n;
		}
    }
}
