#ifndef ____COR_TYPE_SOURCES_COLLISION_COLLISION_2D_H_
#define ____COR_TYPE_SOURCES_COLLISION_COLLISION_2D_H_

#include "collision_2d_tmpl.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl.h"
#include "cor_type/sources/primitive/o_box.h"
#include "cor_type/sources/primitive/o_sphere.h"
#include "boost/variant.hpp"

namespace cor
{
    namespace type
    {
        class Collision2dObjectBase;
        typedef std::shared_ptr<Collision2dObjectBase> Collision2dObjectBaseSP;

        class Collision2dCrossInfo;

        typedef std::function<void(Collision2dCrossInfo& cross_info)> Collision2dCallback;

        class Collision2dShape;
        typedef Collision2dShape* Collision2dShapePtr;

        class Collision2dGroup;
        typedef Collision2dGroup* Collision2dGroupPtr;
        
        class Collision2dObjectBase
        {
        public:
            Collision2dObjectBase();
            virtual ~Collision2dObjectBase();

            virtual void update(Collision2dShapePtr shape);
        };

        typedef std::shared_ptr<void> Collision2dDataSP;

        class Collision2dShape
        {
        public:
            typedef boost::variant<OBox2F, OSphere2F> Shape;

            Collision2dObjectBaseSP obj;
            Collision2dCallback callback;
            Collision2dGroupPtr group;
            Collision2dDataSP data;

            Shape shape;

            Collision2dShape();
            Collision2dShape(Collision2dObjectBaseSP obj, Collision2dCallback callback, Shape shape);
            ~Collision2dShape();

            Box2F get_box();
            RFloat get_distance(const Vector2F& p);

            Collision2dShape* operator->();
        };

        typedef data_structure::RTreePoolTmpl<RFloat, Vector2F, Vector2I, Collision2dShape> Collision2dRTreePool;
        typedef Collision2dRTreePool* Collision2dRTreePoolPtr;
        typedef Collision2dRTreePool::Ref Collision2dRef;
        

        class Collision2dCrossInfo
        {
        public:
            Collision2dRef s0;
            Collision2dRef s1;

        };

        class Collision2dGroup
        {
            RBool changed;
            Collision2dRTreePool tree_pool;
            RInt32 type_id;
        public:
            

            Collision2dGroup();
            ~Collision2dGroup();

            Collision2dRTreePoolPtr get_tree_pool();

            void set_type_id(RInt32 type_id);
            RInt32 get_type_id();

            RBool get_changed();
            void set_changed();
            void set_changed(RBool changed);
        };

        typedef std::map<RInt32, Collision2dGroup> Collision2dGroupTable;
        typedef std::map<RInt32, std::map<RInt32, RBool> > Collision2dGroupPairTable;
        

        struct Collision2dItnl;
    
        class Collision2d
        {
            std::unique_ptr<Collision2dItnl> itnl;
        
        public:
            typedef boost::variant<OBox2F, OSphere2F> Shape;
        
            Collision2d();
            virtual ~Collision2d();

            Collision2dGroupTable& ref_groups();
            Collision2dGroup& ref_group(RInt32 id);

            Collision2dGroupTable* get_groups();
            Collision2dGroupPtr get_group(RInt32 id);

            void set_collision_group_pair(RInt32 id0, RInt32 id1, RBool collidable);
            RBool get_collision_group_pair(RInt32 id0, RInt32 id1);

            Collision2dRef create_o_box(RInt32 id, Collision2dObjectBaseSP obj, Collision2dCallback callback, OBox2F shape);
            Collision2dRef create_o_sphere(RInt32 id, Collision2dObjectBaseSP obj, Collision2dCallback callback, OSphere2F shape);

            RBool leaf_collision_check(Collision2dRef& r0, Collision2dRef& r1);
            RBool leaf_collision_check(Shape& s0, Shape& s1);
            void find_pair(Collision2dGroupPtr g0, Collision2dGroupPtr g1, std::function<void(Collision2dRef&, Collision2dRef&)> f);
            void find_pair(RInt32 id0, RInt32 id1, std::function<void(Collision2dRef&, Collision2dRef&)> f);
            void all_find_pair(std::function<void(Collision2dRef&, Collision2dRef&)> f);
            void all_pair_call();
            void find_near(Collision2dGroupPtr g, const Vector2F& p, std::function<RBool(const RFloat&, Collision2dRef&)> func);
        };
    }
}

#endif
