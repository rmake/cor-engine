#ifndef ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_GROUP_H_
#define ____COR_COCOS2DX_CONVERTER_SOURCES_RTS_RTS_OBJECT_GROUP_H_

#include "cor_type/sources/basic_types.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object.h"

namespace cor
{
    namespace cocos2dx_converter
    {
        struct RtsObjectGroupItnl;
    
        class RtsObjectGroup;
        typedef std::shared_ptr<RtsObjectGroup> RtsObjectGroupSP;

        class RtsObjectGroup : public std::enable_shared_from_this<RtsObjectGroup>
        {
            std::unique_ptr<RtsObjectGroupItnl> itnl;
        
        public:
        
            RtsObjectGroup();
            RtsObjectGroup(Collision2dNodeSP collision);
            virtual ~RtsObjectGroup();

            static RtsObjectGroupSP create();
            static RtsObjectGroupSP create(Collision2dNodeSP collision);

            RtsObjectSP create_object(const Collision2dNodeRef& node_ref);
            void release_object(cocos2d::Node* node);

            void set_dt(RFloat dt);
            RFloat get_dt();

            void set_debug_draw_node(cocos2d::DrawNode* debug_draw_node);
            cocos2d::DrawNode* get_debug_draw_node();

            RInt32 get_internal_state();

            RtsObjectSP search_from_node(cocos2d::Node* node);

            Collision2dNodeSP get_collision();
            void set_transform_to_render(const type::Matrix4x4F& transform_to_render);
            const type::Matrix4x4F& get_transform_to_render();

            void set_contact_pair(RInt32 id0, RInt32 id1, RBool collidable);
            type::Collision2dGroupPairTable& ref_contact_pair_table();
            void solve_contact(RInt32 id0, RInt32 id1, const RtsObjectSP& o0, const RtsObjectSP& o1);
            void solve_contact();

            void poll();
        };
    }
}

#endif
