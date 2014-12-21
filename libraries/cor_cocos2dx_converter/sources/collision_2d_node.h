#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_COLLISION_2D_NODE_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_COLLISION_2D_NODE_H_

#include "cor_type/sources/collision/collision_2d.h"
#include "2d/CCNode.h"
#include "2d/CCDrawNode.h"
#include "type_converter.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        class Collision2dNode;
        typedef std::shared_ptr<Collision2dNode> Collision2dNodeSP;
        typedef Collision2dNode* Collision2dNodePtr;

        struct Collision2dNodeItnl;

        class Collision2dNodeObject : public type::Collision2dObjectBase
        {
        public:
            typedef std::function<void(cocos2d::Node*, cocos2d::Node*)> CollisionCallback;

        private:
            cocos2d::Node* node;
            Collision2dNodePtr collision;
            boost::variant<type::OBox2F, type::OSphere2F> shape;
            CollisionCallback callback;
            RInt32 tag;
        public:

            Collision2dNodeObject();
            Collision2dNodeObject(Collision2dNodePtr collision, cocos2d::Node* node, type::Box2F box, CollisionCallback callback);
            Collision2dNodeObject(Collision2dNodePtr collision, cocos2d::Node* node, type::Sphere2F sphere, CollisionCallback callback);
            ~Collision2dNodeObject();

            cocos2d::Node* get_node();
            CollisionCallback get_callback();
            void set_box(type::Box2F box);
            void set_sphere(type::Sphere2F spher);
            void update_shape();
            virtual void update(type::Collision2dShapePtr shape);
            void draw(cocos2d::DrawNode* draw_node);
            void set_tag(RInt32 tag);
            RInt32 get_tag();
            type::Matrix4x4F get_transform() const;

            
        };

        typedef std::shared_ptr<Collision2dNodeObject> Collision2dNodeObjectSP;

        class Collision2dNodeCrossInfo
        {
        public:
            cocos2d::Node* node0;
            cocos2d::Node* node1;


        };

        struct Collision2dNodeRefItnl;

        class Collision2dNodeRef
        {
            std::shared_ptr<Collision2dNodeRefItnl> itnl;
            

        public:
            Collision2dNodeRef();
            Collision2dNodeRef(const type::Collision2dRef& ref);
            ~Collision2dNodeRef();

            void release();
            bool is_valid() const;
            cocos2d::Node* get_node() const;
            void set_tag(RInt32 tag);
            RInt32 get_tag() const;
            RFloat get_distance(const type::Vector2F& p) const;
            RInt32 get_type_id() const;
            type::Matrix4x4F get_transform() const;
            Collision2dNodeObjectSP get_object() const;
            
            bool is_box() const;
            const type::OBox2F& get_box() const;
            bool is_sphere() const;
            const type::OSphere2F& get_sphere() const;
        };
    
        class Collision2dNode
        {
            std::unique_ptr<Collision2dNodeItnl> itnl;
        
            
        public:
            typedef Collision2dNodeObject::CollisionCallback CollisionCallback;
        
            Collision2dNode();
            virtual ~Collision2dNode();

            void set_transform_to(cocos2d::Node* transform_to);
            cocos2d::Node* get_transform_to();
            cocos2d::Mat4 get_current_transform();
            type::Collision2dGroupTable& ref_groups();
            void update_current_transform();
            void set_transform_to_render(const type::Matrix4x4F& transform_to_render);
            const type::Matrix4x4F& get_transform_to_render();

            void set_collision_group_pair(RInt32 id0, RInt32 id1, RBool collidable);
            RBool get_collision_group_pair(RInt32 id0, RInt32 id1);

            Collision2dNodeRef add_o_box(cocos2d::Node* node, RInt32 type_id, type::Box2F box, CollisionCallback callback);
            Collision2dNodeRef add_o_sphere(cocos2d::Node* node, RInt32 type_id, type::Sphere2F sphere, CollisionCallback callback);
            void find_o_box(cocos2d::Node* node, RInt32 type_id, type::Box2F box, CollisionCallback callback);
            void find_o_box(const type::Matrix4x4F& m, RInt32 type_id, type::Box2F box, std::function<void(cocos2d::Node*)> callback);
            void find_pair(RInt32 id0, RInt32 id1, std::function<void(Collision2dNodeRef& r0, Collision2dNodeRef& r1)> callback);
            void all_find_pair(std::function<void(Collision2dNodeRef& r0, Collision2dNodeRef& r1)> callback);
            void all_pair_call();
            RBool find_nearest(RInt32 type_id, const type::Vector2F& p, RInt32 tag_mask, std::function<void(RFloat, Collision2dNodeRef r, cocos2d::Node*)> callback);
            void fit(RInt32 type_id);

            void set_changed(RInt32 type_id);
            void render_to_draw_node(cocos2d::DrawNode* draw_node);
            void render_to_draw_node_o_box(cocos2d::Node* node, type::Box2F box, cocos2d::DrawNode* draw_node);

        };
    }
}

#endif
