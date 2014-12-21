
#include "collision_2d_node.h"
#include "cor_algorithm/sources/utilities.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl_impl.h"
#include "base/CCRefPtr.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        Collision2dNodeObject::Collision2dNodeObject()
        {
            this->node = NULL;
            this->tag = 0;
            this->collision = nullptr;
        }

        Collision2dNodeObject::Collision2dNodeObject(Collision2dNodePtr collision, cocos2d::Node* node, type::Box2F box, CollisionCallback callback)
        {
            this->node = node;
            this->tag = 0;
            this->collision = collision;
            this->callback = callback;
            node->retain();

            this->shape = type::OBox2F(type::Matrix4x4F(), box);
            update_shape();
        }

        Collision2dNodeObject::Collision2dNodeObject(Collision2dNodePtr collision, cocos2d::Node* node, type::Sphere2F sphere, CollisionCallback callback)
        {
            this->node = node;
            this->tag = 0;
            this->collision = collision;
            this->callback = callback;
            node->retain();

            this->shape = type::OSphere2F(type::Matrix4x4F(), sphere);
            update_shape();
        }

        Collision2dNodeObject::~Collision2dNodeObject()
        {
            if(node)
            {
                node->release();
                node = NULL;
            }
        }

        cocos2d::Node* Collision2dNodeObject::get_node()
        {
            return node;
        }

        Collision2dNodeObject::CollisionCallback Collision2dNodeObject::get_callback()
        {
            return callback;
        }

        void Collision2dNodeObject::set_box(type::Box2F box)
        {
            this->shape = type::OBox2F(type::Matrix4x4F(), box);
            update_shape();
        }

        void Collision2dNodeObject::set_sphere(type::Sphere2F sphere)
        {
            this->shape = type::OSphere2F(type::Matrix4x4F(), sphere);
            update_shape();
        }

        void Collision2dNodeObject::update_shape()
        {
            type::Matrix4x4F m;
            auto tm = node->getNodeToWorldTransform() * collision->get_current_transform();
            convert(tm, m);
            if(auto o_box = boost::get<type::OBox2F>(&this->shape))
            {
                this->shape = type::OBox2F(m, o_box->box);
            }
            else if(auto o_sphere = boost::get<type::OSphere2F>(&this->shape))
            {
                this->shape = type::OSphere2F(m, o_sphere->sphere);
            }
        }

        void Collision2dNodeObject::update(type::Collision2dShapePtr shape)
        {
            update_shape();
            
            shape->shape = this->shape;
        }

        void Collision2dNodeObject::draw(cocos2d::DrawNode* draw_node)
        {
            if(auto o_box = boost::get<type::OBox2F>(&this->shape))
            {
                auto a = o_box->get_vertices();
                RSize i, isz;
                
                auto tr = this->collision->get_transform_to_render();
                for(auto& v : a)
                {
                    v = tr.transform(type::Vector3F(v.x, v.y, 0.0f)).xy();
                }

                isz = a.size();                
                for(i = 0; i < isz; i++)
                {
                    auto& v0 = a[i];
                    auto& v1 = a[(i + 1) % isz];
                    draw_node->drawSegment(cocos2d::Vec2(v0.x, v0.y), cocos2d::Vec2(v1.x, v1.y), 1.0f, cocos2d::Color4F(1.0f, 0.0f, 0.0f, 0.5f));

                }
            }
            else if(auto o_sphere = boost::get<type::OSphere2F>(&this->shape))
            {
                auto a = o_sphere->get_draw_vertices();
                RSize i, isz;
                
                auto tr = this->collision->get_transform_to_render();
                for(auto& v : a)
                {
                    v = tr.transform(type::Vector3F(v.x, v.y, 0.0f)).xy();
                }
                
                isz = a.size();
                for(i = 0; i < isz; i++)
                {
                    auto& v0 = a[i];
                    auto& v1 = a[(i + 1) % isz];
                    draw_node->drawSegment(cocos2d::Vec2(v0.x, v0.y), cocos2d::Vec2(v1.x, v1.y), 1.0f, cocos2d::Color4F(1.0f, 0.0f, 0.0f, 0.5f));

                }
            }
            
        }

        void Collision2dNodeObject::set_tag(RInt32 tag)
        {
            this->tag = tag;
        }

        RInt32 Collision2dNodeObject::get_tag()
        {
            return this->tag;
        }

        type::Matrix4x4F Collision2dNodeObject::get_transform() const
        {
            if(auto o_box = boost::get<type::OBox2F>(&this->shape))
            {
                return o_box->m;
            }
            else if(auto o_sphere = boost::get<type::OSphere2F>(&this->shape))
            {
                return o_sphere->m;
            }
            return type::Matrix4x4F();
        }

        struct Collision2dNodeRefItnl
        {
            type::Collision2dRef ref;

        };

        Collision2dNodeRef::Collision2dNodeRef() : itnl(std::make_shared<Collision2dNodeRefItnl>())
        {
            
        }

        Collision2dNodeRef::Collision2dNodeRef(const type::Collision2dRef& ref) : itnl(std::make_shared<Collision2dNodeRefItnl>())
        {
            itnl->ref = ref;
        }

        Collision2dNodeRef::~Collision2dNodeRef()
        {
            
        }

        void Collision2dNodeRef::release()
        {
            itnl->ref.release();
        }

        bool Collision2dNodeRef::is_valid() const
        {
            return itnl->ref;
        }

        cocos2d::Node* Collision2dNodeRef::get_node() const
        {
            auto o = itnl->ref->data.obj;
            Collision2dNodeObjectSP osp = std::static_pointer_cast<Collision2dNodeObject>(o);
            return osp->get_node();
        }

        void Collision2dNodeRef::set_tag(RInt32 tag)
        {
            auto o = itnl->ref->data.obj;
            Collision2dNodeObjectSP osp = std::static_pointer_cast<Collision2dNodeObject>(o);
            osp->set_tag(tag);
        }

        RInt32 Collision2dNodeRef::get_tag() const
        {
            auto o = itnl->ref->data.obj;
            Collision2dNodeObjectSP osp = std::static_pointer_cast<Collision2dNodeObject>(o);
            return osp->get_tag();
        }

        RFloat Collision2dNodeRef::get_distance(const type::Vector2F& p) const
        {
            return itnl->ref->get_distance(p);
        }

        RInt32 Collision2dNodeRef::get_type_id() const
        {
            return itnl->ref->data.group->get_type_id();
        }

        type::Matrix4x4F Collision2dNodeRef::get_transform() const
        {
            auto o = itnl->ref->data.obj;
            Collision2dNodeObjectSP osp = std::static_pointer_cast<Collision2dNodeObject>(o);
            return osp->get_transform();
        }

        Collision2dNodeObjectSP Collision2dNodeRef::get_object() const
        {
            auto o = itnl->ref->data.obj;
            Collision2dNodeObjectSP osp = std::static_pointer_cast<Collision2dNodeObject>(o);
            return osp;
        }

        bool Collision2dNodeRef::is_box() const
        {
            return boost::get<type::OBox2F>(&itnl->ref->data.shape);
        }

        const type::OBox2F& Collision2dNodeRef::get_box() const
        {
            return *boost::get<type::OBox2F>(&itnl->ref->data.shape);
        }

        bool Collision2dNodeRef::is_sphere() const
        {
            return boost::get<type::OSphere2F>(&itnl->ref->data.shape);
        }

        const type::OSphere2F& Collision2dNodeRef::get_sphere() const
        {
            return *boost::get<type::OSphere2F>(&itnl->ref->data.shape);
        }


        struct Collision2dNodeItnl
        {
            type::Collision2d collision;
            cocos2d::RefPtr<cocos2d::Node> transform_to;
            cocos2d::Mat4 current_transform;
            type::Matrix4x4F transform_to_render;

            Collision2dNodeItnl()
            {
                
            }

            ~Collision2dNodeItnl()
            {

            }
        };
        
        Collision2dNode::Collision2dNode() : itnl(new Collision2dNodeItnl())
        {
            
        }
        
        Collision2dNode::~Collision2dNode()
        {
            
        }

        void Collision2dNode::update_current_transform()
        {
            if(itnl->transform_to)
            {
                itnl->current_transform = itnl->transform_to->getNodeToWorldTransform();
                itnl->current_transform.inverse();
            }
        }

        void Collision2dNode::set_transform_to_render(const type::Matrix4x4F& transform_to_render)
        {
            itnl->transform_to_render = transform_to_render;
        }

        const type::Matrix4x4F& Collision2dNode::get_transform_to_render()
        {
            return itnl->transform_to_render;
        }

        cocos2d::Mat4 Collision2dNode::get_current_transform()
        {
            return itnl->current_transform;
        }

        type::Collision2dGroupTable& Collision2dNode::ref_groups()
        {
            return itnl->collision.ref_groups();
        }

        void Collision2dNode::set_transform_to(cocos2d::Node* transform_to)
        {
            itnl->transform_to = transform_to;
        }

        cocos2d::Node* Collision2dNode::get_transform_to()
        {
            return itnl->transform_to;
        }

        void Collision2dNode::set_collision_group_pair(RInt32 id0, RInt32 id1, RBool collidable)
        {
            itnl->collision.set_collision_group_pair(id0, id1, collidable);
        }

        RBool Collision2dNode::get_collision_group_pair(RInt32 id0, RInt32 id1)
        {
            return itnl->collision.get_collision_group_pair(id0, id1);
        }

        Collision2dNodeRef Collision2dNode::add_o_box(cocos2d::Node* node, RInt32 type_id, type::Box2F box, CollisionCallback callback)
        {
            auto cb = [=](type::Collision2dCrossInfo& cross_info){
                auto o0 = std::static_pointer_cast<Collision2dNodeObject>(cross_info.s0->data->obj);
                auto o1 = std::static_pointer_cast<Collision2dNodeObject>(cross_info.s1->data->obj);
                callback(o0->get_node(), o1->get_node());
            };
            type::Collision2dObjectBaseSP obj = std::make_shared<Collision2dNodeObject>(this, node, box, callback);
            auto r = itnl->collision.create_o_box(type_id, obj, cb, type::OBox2F());
            return Collision2dNodeRef(r);
        }

        Collision2dNodeRef Collision2dNode::add_o_sphere(cocos2d::Node* node, RInt32 type_id, type::Sphere2F sphere, CollisionCallback callback)
        {
            auto cb = [=](type::Collision2dCrossInfo& cross_info){
                auto o0 = std::static_pointer_cast<Collision2dNodeObject>(cross_info.s0->data->obj);
                auto o1 = std::static_pointer_cast<Collision2dNodeObject>(cross_info.s1->data->obj);
                callback(o0->get_node(), o1->get_node());
            };
            type::Collision2dObjectBaseSP obj = std::make_shared<Collision2dNodeObject>(this, node, sphere, callback);
            auto r = itnl->collision.create_o_sphere(type_id, obj, cb, type::OSphere2F());
            return Collision2dNodeRef(r);
        }

        type::Collision2dShape Collision2dNode_get_shape(Collision2dNodePtr collision, cocos2d::Node* node, type::Box2F box, type::Collision2dObjectBaseSP& obj)
        {
            obj = std::make_shared<Collision2dNodeObject>(collision, node, box, [=](cocos2d::Node*, cocos2d::Node*){});
            type::Matrix4x4F m;
            convert(node->getNodeToWorldTransform() * collision->get_current_transform(), m);
            auto shape = type::Collision2dShape(obj, type::Collision2dCallback(), type::OBox2F(m, box));
            return shape;
        }

        void Collision2dNode::find_o_box(cocos2d::Node* node, RInt32 type_id, type::Box2F box, CollisionCallback callback)
        {
            update_current_transform();

            type::Collision2dObjectBaseSP obj;
            auto shape = Collision2dNode_get_shape(this, node, box, obj);

            auto g = itnl->collision.get_group(type_id);
            auto tp = g->get_tree_pool();
            if(g->get_changed())
            {
                tp->update_leaf_box();
                tp->construct();
                g->set_changed(rfalse);
            }

            tp->find(shape.get_box(), [&](type::Collision2dRef& r){
                auto o = std::static_pointer_cast<Collision2dNodeObject>(r->data->obj);

                RBool collided = itnl->collision.leaf_collision_check(shape.shape, r->data.shape);

                if(collided)
                {
                    callback(node, o->get_node());
                }
                
            });
        }

        void Collision2dNode::find_o_box(const type::Matrix4x4F& m, RInt32 type_id, type::Box2F box, std::function<void(cocos2d::Node*)> callback)
        {
            update_current_transform();

            type::Collision2dShape::Shape shape = type::OBox2F(m, box);

            auto g = itnl->collision.get_group(type_id);
            auto tp = g->get_tree_pool();
            if(g->get_changed())
            {
                tp->update_leaf_box();
                tp->construct();
                g->set_changed(rfalse);
            }

            type::Box2F tb;
            tb.set_rect(m, box);

            tp->find(tb, [&](type::Collision2dRef& r){
                auto o = std::static_pointer_cast<Collision2dNodeObject>(r->data->obj);

                RBool collided = itnl->collision.leaf_collision_check(shape, r->data.shape);

                if(collided)
                {
                    callback(o->get_node());
                }

            });
        }

        void Collision2dNode::find_pair(RInt32 id0, RInt32 id1, std::function<void(Collision2dNodeRef&, Collision2dNodeRef&)> callback)
        {
            update_current_transform();

            itnl->collision.find_pair(id0, id1, [&](type::Collision2dRef& r0, type::Collision2dRef& r1){
                Collision2dNodeRef nr0(r0);
                Collision2dNodeRef nr1(r1);
                callback(nr0, nr1);
            });
        }

        void Collision2dNode::all_find_pair(std::function<void(Collision2dNodeRef& r0, Collision2dNodeRef& r1)> callback)
        {
            update_current_transform();

            itnl->collision.all_find_pair([&](type::Collision2dRef& r0, type::Collision2dRef& r1){
                Collision2dNodeRef nr0(r0);
                Collision2dNodeRef nr1(r1);
                callback(nr0, nr1);
            });
        }

        void Collision2dNode::all_pair_call()
        {
            update_current_transform();

            itnl->collision.all_pair_call();
        }

        RBool Collision2dNode::find_nearest(RInt32 type_id, const type::Vector2F& p, RInt32 tag_mask, std::function<void(RFloat, Collision2dNodeRef, cocos2d::Node*)> callback)
        {
            update_current_transform();

            RBool founded = rfalse;
            auto g = itnl->collision.get_group(type_id);
            itnl->collision.find_near(g, p, [&](const RFloat& d, type::Collision2dRef& r){
                auto o = std::static_pointer_cast<Collision2dNodeObject>(r->data->obj);
                if(o->get_tag() & tag_mask)
                {
                    callback(d, r, o->get_node());
                    founded = rtrue;
                    return rtrue;
                }
                else
                {
                    return rfalse;
                }
            });
            return founded;
        }

        void Collision2dNode::fit(RInt32 type_id)
        {
            update_current_transform();
            auto g = itnl->collision.get_group(type_id);
            auto tp = g->get_tree_pool();
            tp->update_leaf_box();
            tp->fit();
        }

        void Collision2dNode::set_changed(RInt32 type_id)
        {
            itnl->collision.get_group(type_id)->set_changed();
        }

        void Collision2dNode::render_to_draw_node(cocos2d::DrawNode* draw_node)
        {
            update_current_transform();

            auto& groups = itnl->collision.ref_groups();

            for(auto& p : groups)
            {
                const auto& i = p.first;
                auto& g = p.second;
                g.get_tree_pool()->each_ref([&](type::Collision2dRef& r){
                    auto o = std::static_pointer_cast<Collision2dNodeObject>(r->data.obj);
                    o->draw(draw_node);
                });
            }

        }

        void Collision2dNode::render_to_draw_node_o_box(cocos2d::Node* node, type::Box2F box, cocos2d::DrawNode* draw_node)
        {
            update_current_transform();
            type::Collision2dObjectBaseSP obj;
            (void)Collision2dNode_get_shape(this, node, box, obj);

            auto o = std::static_pointer_cast<Collision2dNodeObject>(obj);
            o->draw(draw_node);
        }


    }
}
