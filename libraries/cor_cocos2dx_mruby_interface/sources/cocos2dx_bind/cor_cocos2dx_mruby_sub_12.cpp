#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/import/external_code_importer.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_cocos2dx_converter/sources/cocos2dx_experimental.h"
#include "cor_cocos2dx_converter/sources/collision_2d_node.h"
#include "cor_cocos2dx_converter/sources/easy_http_client.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_cost_grid_space.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_cost_grid_space_e.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_effect.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_group.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_sensor.h"
#include "cor_cocos2dx_converter/sources/rts/rts_object_system.h"
#include "cor_cocos2dx_converter/sources/step_size_scene.h"
#include "cor_cocos2dx_converter/sources/textured_triangle_node.h"
#include "cor_cocos2dx_converter/sources/type_converter.h"
#include "cor_cocos2dx_converter/sources/type_converter_tmpl.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_experimental.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_array.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_mruby_ref.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_value.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/mruby_script_engine.h"
#include "cor_cocos2dx_mruby_interface/sources/sprite_experimental.h"
#undef RELATIVE
#undef ABSOLUTE
#include "../projects/cor_lib_test_main/cocos2d/cocos/cocos2d.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/ui/UIEditBox/UIEditBox.h"
#include "../projects/cor_lib_test_main/cocos2d/extensions/GUI/CCScrollView/CCScrollView.h"
#include "../projects/cor_lib_test_main/cocos2d/cocos/audio/include/SimpleAudioEngine.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos_weak_ptr.h"
#include "cor_cocos2dx_mruby_interface/sources/cocos2dx_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace cocos2dx_mruby_interface
    {
        
        void Cocos2dxBind_cocos2d__TMXObjectGroup_set_group_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, std::string a0)
        {

            c->setGroupName(a0);
        }

        cocos2d::Value Cocos2dxBind_cocos2d__TMXObjectGroup_get_property(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, std::string a0)
        {

            return c->getProperty(a0);
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__TMXObjectGroup_get_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, std::string a0)
        {

            return c->getObject(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXObjectGroup_get_position_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->getPositionOffset();
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_set_position_offset(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, cocos2d::Vec2 a0)
        {

            c->setPositionOffset(a0);
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__TMXObjectGroup_get_properties_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->getProperties();
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_set_properties(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {

            c->setProperties(a0);
        }

        std::vector<cocos2d::Value, std::allocator<cocos2d::Value> > Cocos2dxBind_cocos2d__TMXObjectGroup_get_objects_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->getObjects();
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_set_objects(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, std::vector<cocos2d::Value, std::allocator<cocos2d::Value> > a0)
        {

            c->setObjects(a0);
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TMXObjectGroup_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TMXObjectGroup_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__TMXObjectGroup_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> Cocos2dxBind_cocos2d__TMXLayer_create(cocos2d::TMXTilesetInfo * a0, cocos2d::TMXLayerInfo * a1, cocos2d::TMXMapInfo * a2)
        {

            return cocos2d::TMXLayer::create(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_init_with_tileset_info(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::TMXTilesetInfo * a0, cocos2d::TMXLayerInfo * a1, cocos2d::TMXMapInfo * a2)
        {

            return c->initWithTilesetInfo(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_release_map(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->releaseMap();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> Cocos2dxBind_cocos2d__TMXLayer_get_tile_at(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->getTileAt(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__TMXLayer_get_tile_gid_at(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0, cocos2d::TMXTileFlags_ * a1)
        {

            return c->getTileGIDAt(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_tile_gid_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, unsigned int a0, cocos2d::Vec2 a1)
        {

            c->setTileGID(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_tile_gid_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, unsigned int a0, cocos2d::Vec2 a1, int a2)
        {

            c->setTileGID(a0, a1, (cocos2d::TMXTileFlags_)a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_tile_at(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            c->removeTileAt(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_get_position_at(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->getPositionAt(a0);
        }

        cocos2d::Value Cocos2dxBind_cocos2d__TMXLayer_get_property(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            return c->getProperty(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_setup_tiles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->setupTiles();
        }

        std::string Cocos2dxBind_cocos2d__TMXLayer_get_layer_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getLayerName();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_layer_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            c->setLayerName(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXLayer_get_layer_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getLayerSize();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_layer_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Size a0)
        {

            c->setLayerSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXLayer_get_map_tile_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getMapTileSize();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_map_tile_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Size a0)
        {

            c->setMapTileSize(a0);
        }

        unsigned int* Cocos2dxBind_cocos2d__TMXLayer_get_tiles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getTiles();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_tiles(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, unsigned int * a0)
        {

            c->setTiles(a0);
        }

        cocos2d::TMXTilesetInfo* Cocos2dxBind_cocos2d__TMXLayer_get_tile_set(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getTileSet();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_tile_set(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::TMXTilesetInfo * a0)
        {

            c->setTileSet(a0);
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_layer_orientation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getLayerOrientation();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_layer_orientation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->setLayerOrientation(a0);
        }

        std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > Cocos2dxBind_cocos2d__TMXLayer_get_properties_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getProperties();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_properties(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {

            c->setProperties(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_child(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        std::string Cocos2dxBind_cocos2d__TMXLayer_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getDescription();
        }

        cocos2d::TextureAtlas* Cocos2dxBind_cocos2d__TMXLayer_get_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getTextureAtlas();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_texture_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::TextureAtlas * a0)
        {

            c->setTextureAtlas(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__TMXLayer_get_descendants_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getDescendants());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_increase_atlas_capacity_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->increaseAtlasCapacity();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_child_at_index_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, long long a0, bool a1)
        {

            c->removeChildAtIndex(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_append_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            c->appendChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_sprite_from_atlas_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            c->removeSpriteFromAtlas(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_rebuild_index_in_order_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, long long a1)
        {

            return c->rebuildIndexInOrder(a0.get(), a1);
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_highest_atlas_index_in_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            return c->highestAtlasIndexInChild(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_lowest_atlas_index_in_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0)
        {

            return c->lowestAtlasIndexInChild(a0.get());
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_atlas_index_for_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1)
        {

            return c->atlasIndexForChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_reorder_batch_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->reorderBatch(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__TMXLayer_get_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__TMXLayer_get_blend_func_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_visit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_reorder_child_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_all_children_with_cleanup_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_sort_all_children_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->sortAllChildren();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_draw_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_insert_quad_from_sprite_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, long long a1)
        {

            c->insertQuadFromSprite(a0.get(), a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> Cocos2dxBind_cocos2d__TMXLayer_add_sprite_without_quad_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite> a0, int a1, int a2)
        {

            return c->addSpriteWithoutQuad(a0.get(), a1, a2);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_init_with_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0, long long a1)
        {

            return c->initWithTexture(a0.get(), a1);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_init_with_file_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0, long long a1)
        {

            return c->initWithFile(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_init_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TMXLayer_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXLayer_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TMXLayer_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__TMXLayer_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXLayer_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXLayer_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXLayer_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__TMXLayer_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXLayer_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__TMXLayer_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->removeAllChildren();
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__TMXLayer_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__TMXLayer_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__TMXLayer_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TMXLayer_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__TMXLayer_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__TMXLayer_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__TMXLayer_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__TMXLayer_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__TMXLayer_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__TMXLayer_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__TMXLayer_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__TMXLayer_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TMXLayer_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TMXLayer_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__TMXLayer_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__TMXLayer_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__TMXLayer_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXLayer_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXLayer_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXLayer_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXLayer_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXLayer_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXLayer_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXLayer_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXLayer_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__TMXLayer_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__TMXLayer_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TMXLayer_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TMXLayer_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXLayer_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__TMXLayer_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXLayer_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TMXLayer_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TMXLayer_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TMXLayer_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> Cocos2dxBind_cocos2d__TMXTiledMap_create(std::string a0)
        {

            return cocos2d::TMXTiledMap::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> Cocos2dxBind_cocos2d__TMXTiledMap_create_with_xml(std::string a0, std::string a1)
        {

            return cocos2d::TMXTiledMap::createWithXML(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXLayer> Cocos2dxBind_cocos2d__TMXTiledMap_get_layer(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->getLayer(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> Cocos2dxBind_cocos2d__TMXTiledMap_get_object_group(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->getObjectGroup(a0);
        }

        cocos2d::Value Cocos2dxBind_cocos2d__TMXTiledMap_get_property(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->getProperty(a0);
        }

        cocos2d::Value Cocos2dxBind_cocos2d__TMXTiledMap_get_properties_for_gid_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            return c->getPropertiesForGID(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_get_properties_for_gid_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0, cocos2d::Value ** a1)
        {

            return c->getPropertiesForGID(a0, a1);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXTiledMap_get_map_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getMapSize();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_map_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Size a0)
        {

            c->setMapSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXTiledMap_get_tile_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getTileSize();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_tile_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Size a0)
        {

            c->setTileSize(a0);
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_map_orientation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getMapOrientation();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_map_orientation(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->setMapOrientation(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__TMXTiledMap_get_object_groups_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getObjectGroups());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_object_groups(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, MrubyRef a0)
        {

            c->setObjectGroups(cor::cocos2dx_mruby_interface::CocosArray::convert_mruby_to_cocos_vec<cocos2d::TMXObjectGroup>(a0));
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_properties(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::unordered_map<std::string, cocos2d::Value, std::hash<std::string >, std::equal_to<std::string >, std::allocator<std::pair<const std::string, cocos2d::Value> > > a0)
        {

            c->setProperties(a0);
        }

        std::string Cocos2dxBind_cocos2d__TMXTiledMap_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getDescription();
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_init_with_tmx_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->initWithTMXFile(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_init_with_xml(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0, std::string a1)
        {

            return c->initWithXML(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TMXTiledMap_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__TMXTiledMap_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__TMXTiledMap_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXTiledMap_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXTiledMap_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__TMXTiledMap_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__TMXTiledMap_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__TMXTiledMap_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__TMXTiledMap_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__TMXTiledMap_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TMXTiledMap_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__TMXTiledMap_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__TMXTiledMap_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getGLProgram();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_gl_program_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__TMXTiledMap_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getGLProgramState();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_gl_program_state_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->cleanup();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_draw_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_draw_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->draw();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_visit_31(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_visit_32(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->visit();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__TMXTiledMap_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScene();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__TMXTiledMap_get_bounding_box_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__TMXTiledMap_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__TMXTiledMap_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__TMXTiledMap_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TMXTiledMap_run_action_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__TMXTiledMap_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__TMXTiledMap_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__TMXTiledMap_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__TMXTiledMap_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXTiledMap_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXTiledMap_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__TMXTiledMap_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__TMXTiledMap_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__TMXTiledMap_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__TMXTiledMap_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__TMXTiledMap_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TMXTiledMap_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__TMXTiledMap_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__TMXTiledMap_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        bool Cocos2dxBind_cocos2d__TMXTiledMap_init_13(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->init();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__TMXTiledMap_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__TMXTiledMap_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__TMXTiledMap_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXTiledMap> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Mesh_create_1(std::vector<float> a0, std::vector<float> a1, std::vector<float> a2, std::vector<unsigned short, std::allocator<unsigned short> > a3)
        {

            return cocos2d::Mesh::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Mesh_create_2(std::vector<float> a0, int a1, std::vector<unsigned short, std::allocator<unsigned short> > a2, std::vector<cocos2d::MeshVertexAttrib> a3)
        {

            return cocos2d::Mesh::create(a0, a1, a2, a3);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Mesh_create_3(std::string a0, cocos2d::MeshIndexData * a1, cocos2d::MeshSkin * a2)
        {

            return cocos2d::Mesh::create(a0, a1, a2);
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_get_vertex_buffer(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getVertexBuffer();
        }

        bool Cocos2dxBind_cocos2d__Mesh_has_vertex_attrib(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, int a0)
        {

            return c->hasVertexAttrib(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Mesh_get_mesh_vertex_attrib_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getMeshVertexAttribCount();
        }

        cocos2d::MeshVertexAttrib Cocos2dxBind_cocos2d__Mesh_get_mesh_vertex_attribute(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, int a0)
        {

            return c->getMeshVertexAttribute(a0);
        }

        int Cocos2dxBind_cocos2d__Mesh_get_vertex_size_in_bytes(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getVertexSizeInBytes();
        }

        void Cocos2dxBind_cocos2d__Mesh_set_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, std::string a0)
        {

            c->setTexture(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> Cocos2dxBind_cocos2d__Mesh_get_texture(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getTexture();
        }

        void Cocos2dxBind_cocos2d__Mesh_set_visible(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Mesh_is_visible(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->isVisible();
        }

        cocos2d::MeshSkin* Cocos2dxBind_cocos2d__Mesh_get_skin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getSkin();
        }

        cocos2d::MeshIndexData* Cocos2dxBind_cocos2d__Mesh_get_mesh_index_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getMeshIndexData();
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Mesh_get_gl_program_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getGLProgramState();
        }

        std::string Cocos2dxBind_cocos2d__Mesh_get_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Mesh_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__Mesh_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getBlendFunc();
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_get_primitive_type(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getPrimitiveType();
        }

        ssize_t Cocos2dxBind_cocos2d__Mesh_get_index_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getIndexCount();
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_get_index_format(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getIndexFormat();
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_get_index_buffer(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getIndexBuffer();
        }

        cocos2d::AABB Cocos2dxBind_cocos2d__Mesh_get_aabb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getAABB();
        }

        void Cocos2dxBind_cocos2d__Mesh_set_gl_program_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_set_material(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::Material * a0)
        {

            c->setMaterial(a0);
        }

        cocos2d::Material* Cocos2dxBind_cocos2d__Mesh_get_material(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getMaterial();
        }

        void Cocos2dxBind_cocos2d__Mesh_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::Renderer * a0, float a1, cocos2d::Mat4 a2, unsigned int a3, unsigned int a4, cocos2d::Vec4 a5, bool a6)
        {

            c->draw(a0, a1, a2, a3, a4, a5, a6);
        }

        void Cocos2dxBind_cocos2d__Mesh_set_skin(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::MeshSkin * a0)
        {

            c->setSkin(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_set_mesh_index_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, cocos2d::MeshIndexData * a0)
        {

            c->setMeshIndexData(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_set_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, std::string a0)
        {

            c->setName(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_calculate_aabb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            c->calculateAABB();
        }

        void Cocos2dxBind_cocos2d__Mesh_set_force2_d_queue(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, bool a0)
        {

            c->setForce2DQueue(a0);
        }

        void Cocos2dxBind_cocos2d__Mesh_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Mesh_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Mesh_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->getReferenceCount();
        }

        void Cocos2dxBind_cocos2d__Mesh_accessor_set__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, unsigned int a)
        {

            c->_ID = a;
        }

        unsigned int Cocos2dxBind_cocos2d__Mesh_accessor_get__id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->_ID;
        }

        void Cocos2dxBind_cocos2d__Mesh_accessor_set__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, int a)
        {

            c->_luaID = a;
        }

        int Cocos2dxBind_cocos2d__Mesh_accessor_get__lua_id(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->_luaID;
        }

        void Cocos2dxBind_cocos2d__Mesh_accessor_set__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c, void * a)
        {

            c->_scriptObject = a;
        }

        void * Cocos2dxBind_cocos2d__Mesh_accessor_get__script_object(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> c)
        {

            return c->_scriptObject;
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> Cocos2dxBind_cocos2d__Sprite3D_create_1()
        {

            return cocos2d::Sprite3D::create();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> Cocos2dxBind_cocos2d__Sprite3D_create_2(std::string a0)
        {

            return cocos2d::Sprite3D::create(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> Cocos2dxBind_cocos2d__Sprite3D_create_3(std::string a0, std::string a1)
        {

            return cocos2d::Sprite3D::create(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_create_async_1(std::string a0, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D>, void *)> a1, void * a2)
        {

            cocos2d::Sprite3D::createAsync(a0, 
              [=](cocos2d::Sprite3D * b0, void * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_create_async_2(std::string a0, std::string a1, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D>, void *)> a2, void * a3)
        {

            cocos2d::Sprite3D::createAsync(a0, a1, 
              [=](cocos2d::Sprite3D * b0, void * b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a2.is_living()) {
                          a2.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
, a3);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_texture_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            c->setTexture(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_texture_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Texture2D> a0)
        {

            c->setTexture(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Sprite3D_get_mesh_by_index(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            return c->getMeshByIndex(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Sprite3D_get_mesh_by_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->getMeshByName(a0);
        }

        MrubyRef Cocos2dxBind_cocos2d__Sprite3D_get_mesh_array_by_name(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_std_vec_to_mruby(c->getMeshArrayByName(a0));
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> Cocos2dxBind_cocos2d__Sprite3D_get_mesh(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getMesh();
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite3D_get_mesh_count(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getMeshCount();
        }

        cocos2d::Skeleton3D* Cocos2dxBind_cocos2d__Sprite3D_get_skeleton(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getSkeleton();
        }

        cocos2d::AttachNode* Cocos2dxBind_cocos2d__Sprite3D_get_attach_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->getAttachNode(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_attach_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            c->removeAttachNode(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_all_attach_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->removeAllAttachNode();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::BlendFunc a0)
        {

            c->setBlendFunc(a0);
        }

        cocos2d::BlendFunc Cocos2dxBind_cocos2d__Sprite3D_get_blend_func(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getBlendFunc();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_gl_program_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::GLProgramState * a0)
        {

            c->setGLProgramState(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_gl_program(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::GLProgram * a0)
        {

            c->setGLProgram(a0);
        }

        cocos2d::AABB Cocos2dxBind_cocos2d__Sprite3D_get_aabb(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getAABB();
        }

        cocos2d::AABB Cocos2dxBind_cocos2d__Sprite3D_get_aabb_recursively(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getAABBRecursively();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Sprite3D_run_action(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            return c->runAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_force_depth_write(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setForceDepthWrite(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_force_depth_write(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isForceDepthWrite();
        }

        cocos2d::Rect Cocos2dxBind_cocos2d__Sprite3D_get_bounding_box(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getBoundingBox();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_cull_face(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, unsigned int a0)
        {

            c->setCullFace(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_cull_face_enabled(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setCullFaceEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_light_mask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, unsigned int a0)
        {

            c->setLightMask(a0);
        }

        unsigned int Cocos2dxBind_cocos2d__Sprite3D_get_light_mask(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getLightMask();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_draw(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->draw(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_material_1(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Material * a0)
        {

            c->setMaterial(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_material_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Material * a0, int a1)
        {

            c->setMaterial(a0, a1);
        }

        cocos2d::Material* Cocos2dxBind_cocos2d__Sprite3D_get_material(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            return c->getMaterial(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_force2_d_queue(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setForce2DQueue(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_init(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->init();
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_init_with_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->initWithFile(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_init_from(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::NodeDatas a0, cocos2d::MeshDatas a1, cocos2d::MaterialDatas a2)
        {

            return c->initFrom(a0, a1, a2);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_load_from_cache(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->loadFromCache(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_load_from_file(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0, cocos2d::NodeDatas * a1, cocos2d::MeshDatas * a2, cocos2d::MaterialDatas * a3)
        {

            return c->loadFromFile(a0, a1, a2, a3);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_visit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_gen_gl_program_state(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->genGLProgramState(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_create_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::NodeData * a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a1, cocos2d::MaterialDatas a2, bool a3)
        {

            c->createNode(a0, a1.get(), a2, a3);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_create_attach_sprite3_d_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::NodeData * a0, cocos2d::MaterialDatas a1)
        {

            c->createAttachSprite3DNode(a0, a1);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> Cocos2dxBind_cocos2d__Sprite3D_create_sprite3_d_node(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::NodeData * a0, cocos2d::ModelData * a1, cocos2d::MaterialDatas a2)
        {

            return c->createSprite3DNode(a0, a1, a2);
        }

        cocos2d::MeshIndexData* Cocos2dxBind_cocos2d__Sprite3D_get_mesh_index_data(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->getMeshIndexData(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_add_mesh(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Mesh> a0)
        {

            c->addMesh(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_on_aabb_dirty(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->onAABBDirty();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_after_async_load(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, void * a0)
        {

            c->afterAsyncLoad(a0);
        }

        cocos2d::AABB Cocos2dxBind_cocos2d__Sprite3D_get_aabb_recursively_imp(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return cocos2d::Sprite3D::getAABBRecursivelyImp(a0.get());
        }

        std::string Cocos2dxBind_cocos2d__Sprite3D_get_description_15(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getDescription();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->setLocalZOrder(a0);
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_local_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getLocalZOrder();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_global_z_order_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setGlobalZOrder(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_global_z_order_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getGlobalZOrder();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scale_x_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setScaleX(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_scale_x_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScaleX();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scale_y_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setScaleY(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_scale_y_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScaleY();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setScaleZ(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_scale_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScaleZ();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scale_45(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setScale(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_scale_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScale();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scale_46(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position_49(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            c->setNormalizedPosition(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_get_position_55(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_get_normalized_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNormalizedPosition();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position_50(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0, float a1)
        {

            c->setPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_get_position_56(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float * a0, float * a1)
        {

            c->getPosition(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setPositionX(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_position_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPositionX();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setPositionY(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_position_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPositionY();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec3 a0)
        {

            c->setPosition3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Sprite3D_get_position3_d_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPosition3D();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_position_z_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setPositionZ(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_position_z_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPositionZ();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getSkewX();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getSkewY();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_anchor_point_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            c->setAnchorPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_get_anchor_point_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getAnchorPoint();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_get_anchor_point_in_points_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getAnchorPointInPoints();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_content_size_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        cocos2d::Size Cocos2dxBind_cocos2d__Sprite3D_get_content_size_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getContentSize();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_visible_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setVisible(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_visible_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isVisible();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_rotation_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setRotation(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_rotation_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getRotation();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec3 a0)
        {

            c->setRotation3D(a0);
        }

        cocos2d::Vec3 Cocos2dxBind_cocos2d__Sprite3D_get_rotation3_d_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getRotation3D();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Quaternion a0)
        {

            c->setRotationQuat(a0);
        }

        cocos2d::Quaternion Cocos2dxBind_cocos2d__Sprite3D_get_rotation_quat_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getRotationQuat();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_rotation_skew_x_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setRotationSkewX(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_rotation_skew_x_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getRotationSkewX();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_rotation_skew_y_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->setRotationSkewY(a0);
        }

        float Cocos2dxBind_cocos2d__Sprite3D_get_rotation_skew_y_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getRotationSkewY();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->setOrderOfArrival(a0);
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_order_of_arrival_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getOrderOfArrival();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_ignore_anchor_point_for_position_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->ignoreAnchorPointForPosition(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_ignore_anchor_point_for_position_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isIgnoreAnchorPointForPosition();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_add_child_113(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->addChild(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_add_child_114(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->addChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_add_child_115(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, int a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_add_child_116(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1, std::string a2)
        {

            c->addChild(a0.get(), a1, a2);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite3D_get_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            return c->getChildByTag(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite3D_get_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->getChildByName(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_enumerate_children_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0, mrubybind::FuncPtr<bool (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>)> a1)
        {

            c->enumerateChildren(a0, 
              [=](cocos2d::Node * b0){
                  bool  r;
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          r = a1.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node>(b0));
                      }
                  }, [&]() {
                      r = bool ();
                  });
                  return r;
              }
);
        }

        MrubyRef Cocos2dxBind_cocos2d__Sprite3D_get_children_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return cor::cocos2dx_mruby_interface::CocosArray::convert_cocos_vec_to_mruby(c->getChildren());
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite3D_get_children_count_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getChildrenCount();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            c->setParent(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__Sprite3D_get_parent_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getParent();
        }

        const cocos2d::Node* Cocos2dxBind_cocos2d__Sprite3D_get_parent_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return const_cast<const cocos2d::Node* >(c->getParent());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_from_parent_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->removeFromParent();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_from_parent_and_cleanup_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->removeFromParentAndCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_child_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, bool a1)
        {

            c->removeChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_child_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0, bool a1)
        {

            c->removeChildByTag(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_child_by_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0, bool a1)
        {

            c->removeChildByName(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_all_children_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->removeAllChildren();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_all_children_with_cleanup_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->removeAllChildrenWithCleanup(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_reorder_child_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0, int a1)
        {

            c->reorderChild(a0.get(), a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_sort_all_children_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->sortAllChildren();
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getTag();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->setTag(a0);
        }

        std::string Cocos2dxBind_cocos2d__Sprite3D_get_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getName();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_name_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            c->setName(a0);
        }

        void* Cocos2dxBind_cocos2d__Sprite3D_get_user_data_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getUserData();
        }

        const void* Cocos2dxBind_cocos2d__Sprite3D_get_user_data_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return const_cast<const void* >(c->getUserData());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_user_data_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, void * a0)
        {

            c->setUserData(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Sprite3D_get_user_object_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getUserObject();
        }

        const cocos2d::Ref* Cocos2dxBind_cocos2d__Sprite3D_get_user_object_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return const_cast<const cocos2d::Ref* >(c->getUserObject());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_user_object_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> a0)
        {

            c->setUserObject(a0.get());
        }

        cocos2d::GLProgram* Cocos2dxBind_cocos2d__Sprite3D_get_gl_program_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getGLProgram();
        }

        cocos2d::GLProgramState* Cocos2dxBind_cocos2d__Sprite3D_get_gl_program_state_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getGLProgramState();
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_running_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isRunning();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_update_with_priority_lua_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0, int a1)
        {

            c->scheduleUpdateWithPriorityLua(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_on_enter_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_on_enter_transition_did_finish_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->onEnterTransitionDidFinish();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_on_exit_18(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_on_exit_transition_did_start_24(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->onExitTransitionDidStart();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_cleanup_25(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->cleanup();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Scene> Cocos2dxBind_cocos2d__Sprite3D_get_scene_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScene();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> a0)
        {

            c->setEventDispatcher(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventDispatcher> Cocos2dxBind_cocos2d__Sprite3D_get_event_dispatcher_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getEventDispatcher();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_action_manager_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> a0)
        {

            c->setActionManager(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ActionManager> Cocos2dxBind_cocos2d__Sprite3D_get_action_manager_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getActionManager();
        }

        const cocos2d::ActionManager* Cocos2dxBind_cocos2d__Sprite3D_get_action_manager_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return const_cast<const cocos2d::ActionManager* >(c->getActionManager());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_stop_all_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->stopAllActions();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_stop_action_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> a0)
        {

            c->stopAction(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_stop_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->stopActionByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_stop_all_actions_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->stopAllActionsByTag(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_stop_actions_by_flags_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, unsigned int a0)
        {

            c->stopActionsByFlags(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Action> Cocos2dxBind_cocos2d__Sprite3D_get_action_by_tag_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            return c->getActionByTag(a0);
        }

        ssize_t Cocos2dxBind_cocos2d__Sprite3D_get_number_of_running_actions_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNumberOfRunningActions();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_scheduler_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Scheduler * a0)
        {

            c->setScheduler(a0);
        }

        cocos2d::Scheduler* Cocos2dxBind_cocos2d__Sprite3D_get_scheduler_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getScheduler();
        }

        const cocos2d::Scheduler* Cocos2dxBind_cocos2d__Sprite3D_get_scheduler_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return const_cast<const cocos2d::Scheduler* >(c->getScheduler());
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_scheduled_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->isScheduled(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->scheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_update_with_priority_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->scheduleUpdateWithPriority(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_unschedule_update_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->unscheduleUpdate();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_once_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->scheduleOnce(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_172(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void (float)> a0, std::string a1)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_173(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void (float)> a0, float a1, std::string a2)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_schedule_174(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void (float)> a0, float a1, unsigned int a2, float a3, std::string a4)
        {

            c->schedule(
              [=](float b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0);
                      }
                  }, [&]() {

                  });
              }
, a1, a2, a3, a4);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_unschedule_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            c->unschedule(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_unschedule_all_callbacks_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->unscheduleAllCallbacks();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_resume_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->resume();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_pause_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->pause();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, float a0)
        {

            c->update(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_transform_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->updateTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNodeToParentTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_affine_transform_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNodeToParentAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentTransform(a0.get());
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite3D_get_node_to_parent_affine_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> a0)
        {

            return c->getNodeToParentAffineTransform(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_node_to_parent_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Mat4 a0)
        {

            c->setNodeToParentTransform(a0);
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite3D_get_parent_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getParentToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite3D_get_parent_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getParentToNodeAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite3D_get_node_to_world_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNodeToWorldTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite3D_get_node_to_world_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getNodeToWorldAffineTransform();
        }

        cocos2d::Mat4 Cocos2dxBind_cocos2d__Sprite3D_get_world_to_node_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getWorldToNodeTransform();
        }

        cocos2d::AffineTransform Cocos2dxBind_cocos2d__Sprite3D_get_world_to_node_affine_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getWorldToNodeAffineTransform();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_to_world_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpace(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            return c->convertToNodeSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_to_world_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Vec2 a0)
        {

            return c->convertToWorldSpaceAR(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_touch_to_node_space_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpace(a0.get());
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__Sprite3D_convert_touch_to_node_space_ar_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0)
        {

            return c->convertTouchToNodeSpaceAR(a0.get());
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_additional_transform_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::AffineTransform a0)
        {

            c->setAdditionalTransform(a0);
        }

        cocos2d::Component* Cocos2dxBind_cocos2d__Sprite3D_get_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->getComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_add_component_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Component * a0)
        {

            return c->addComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_remove_component_57(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, std::string a0)
        {

            return c->removeComponent(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_remove_component_58(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Component * a0)
        {

            return c->removeComponent(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_all_components_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->removeAllComponents();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> a0)
        {

            c->setPhysicsBody(a0.get());
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> Cocos2dxBind_cocos2d__Sprite3D_get_physics_body_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getPhysicsBody();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_remove_from_physics_world_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->removeFromPhysicsWorld();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_transform_from_physics_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Mat4 a0, unsigned int a1)
        {

            c->updateTransformFromPhysics(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_physics_body_transform_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Mat4 a0, unsigned int a1, float a2, float a3)
        {

            c->updatePhysicsBodyTransform(a0, a1, a2, a3);
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_opacity_28(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getOpacity();
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_displayed_opacity_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getDisplayedOpacity();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_opacity_26(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->setOpacity(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_displayed_opacity_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0)
        {

            c->updateDisplayedOpacity(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isCascadeOpacityEnabled();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_cascade_opacity_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setCascadeOpacityEnabled(a0);
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Sprite3D_get_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getColor();
        }

        cocos2d::Color3B Cocos2dxBind_cocos2d__Sprite3D_get_displayed_color_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getDisplayedColor();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_color_27(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Color3B a0)
        {

            c->setColor(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_update_displayed_color_23(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, cocos2d::Color3B a0)
        {

            c->updateDisplayedColor(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isCascadeColorEnabled();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_cascade_color_enabled_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setCascadeColorEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, bool a0)
        {

            c->setOpacityModifyRGB(a0);
        }

        bool Cocos2dxBind_cocos2d__Sprite3D_is_opacity_modify_rgb_21(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->isOpacityModifyRGB();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_on_enter_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnEnterCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_on_exit_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setOnExitCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_seton_enter_transition_did_finish_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonEnterTransitionDidFinishCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_seton_exit_transition_did_start_callback_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, mrubybind::FuncPtr<void ()> a0)
        {

            c->setonExitTransitionDidStartCallback(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        int Cocos2dxBind_cocos2d__Sprite3D_get_camera_mask_29(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getCameraMask();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_set_camera_mask_22(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c, int a0, bool a1)
        {

            c->setCameraMask(a0, a1);
        }

        void Cocos2dxBind_cocos2d__Sprite3D_retain_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->retain();
        }

        void Cocos2dxBind_cocos2d__Sprite3D_release_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            c->release();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref> Cocos2dxBind_cocos2d__Sprite3D_autorelease_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->autorelease();
        }

        unsigned int Cocos2dxBind_cocos2d__Sprite3D_get_reference_count_176(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Sprite3D> c)
        {

            return c->getReferenceCount();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__Widget_create()
        {

            return cocos2d::ui::Widget::create();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setEnabled(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_bright_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setBright(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_bright_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isBright();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_touch_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setTouchEnabled(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_bright_style_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setBrightStyle((cocos2d::ui::Widget::BrightStyle)a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_touch_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isTouchEnabled();
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_highlighted_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isHighlighted();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_highlighted_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setHighlighted(a0);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_left_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getLeftBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_bottom_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getBottomBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_right_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getRightBoundary();
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_top_boundary_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getTopBoundary();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_visit_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Renderer * a0, cocos2d::Mat4 a1, unsigned int a2)
        {

            c->visit(a0, a1, a2);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_touch_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>, cocos2d::ui::Widget::TouchEventType)> a0)
        {

            c->addTouchEventListener(
              [=](cocos2d::Ref * b0, cocos2d::ui::Widget::TouchEventType b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_click_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>)> a0)
        {

            c->addClickEventListener(
              [=](cocos2d::Ref * b0){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0));
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_add_ccs_event_listener_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, mrubybind::FuncPtr<void (cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>, int)> a0)
        {

            c->addCCSEventListener(
              [=](cocos2d::Ref * b0, int b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Ref>(b0), b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            c->setPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            c->setPositionPercent(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_position_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPositionPercent();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setPositionType((cocos2d::ui::Widget::PositionType)a0);
        }

        cocos2d::ui::Widget::PositionType Cocos2dxBind_cocos2d__ui__Widget_get_position_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getPositionType();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_flipped_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setFlippedX(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_flipped_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isFlippedX();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_flipped_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setFlippedY(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_flipped_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isFlippedY();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setScaleX(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setScaleY(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scale_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0)
        {

            c->setScale(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_scale_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, float a0, float a1)
        {

            c->setScale(a0, a1);
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_scale_x_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScaleX();
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_scale_y_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScaleY();
        }

        float Cocos2dxBind_cocos2d__ui__Widget_get_scale_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getScale();
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_clipping_parent_contains_point_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            return c->isClippingParentContainsPoint(a0);
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_touch_began_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getTouchBeganPosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_touch_move_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getTouchMovePosition();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_touch_end_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getTouchEndPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_content_size(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Size a0)
        {

            c->setContentSize(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_size_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Vec2 a0)
        {

            c->setSizePercent(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_size_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setSizeType((cocos2d::ui::Widget::SizeType)a0);
        }

        cocos2d::ui::Widget::SizeType Cocos2dxBind_cocos2d__ui__Widget_get_size_type_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getSizeType();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Widget_get_custom_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getCustomSize();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Widget_get_layout_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getLayoutSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_size_percent_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getSizePercent();
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_on_touch_began_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            return c->onTouchBegan(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_touch_moved_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchMoved(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_touch_ended_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchEnded(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_touch_cancelled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Touch> a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Event> a1)
        {

            c->onTouchCancelled(a0.get(), a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_layout_parameter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::ui::LayoutParameter * a0)
        {

            c->setLayoutParameter(a0);
        }

        cocos2d::ui::LayoutParameter* Cocos2dxBind_cocos2d__ui__Widget_get_layout_parameter_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getLayoutParameter();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_ignore_content_adapt_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->ignoreContentAdaptWithSize(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_ignore_content_adapt_with_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isIgnoreContentAdaptWithSize();
        }

        cocos2d::Vec2 Cocos2dxBind_cocos2d__ui__Widget_get_world_position_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getWorldPosition();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::Node> Cocos2dxBind_cocos2d__ui__Widget_get_virtual_renderer_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getVirtualRenderer();
        }

        cocos2d::Size Cocos2dxBind_cocos2d__ui__Widget_get_virtual_renderer_size_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getVirtualRendererSize();
        }

        std::string Cocos2dxBind_cocos2d__ui__Widget_get_description(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getDescription();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__Widget_clone_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->clone();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_enter(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->onEnter();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_on_exit(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->onExit();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_size_and_position_3(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->updateSizeAndPosition();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_update_size_and_position_4(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, cocos2d::Size a0)
        {

            c->updateSizeAndPosition(a0);
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_action_tag_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0)
        {

            c->setActionTag(a0);
        }

        int Cocos2dxBind_cocos2d__ui__Widget_get_action_tag_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getActionTag();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_propagate_touch_events_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setPropagateTouchEvents(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_propagate_touch_events_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isPropagateTouchEvents();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_swallow_touches_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setSwallowTouches(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_swallow_touches_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isSwallowTouches();
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_focused_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isFocused();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_focused_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setFocused(a0);
        }

        bool Cocos2dxBind_cocos2d__ui__Widget_is_focus_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->isFocusEnabled();
        }

        void Cocos2dxBind_cocos2d__ui__Widget_set_focus_enabled_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, bool a0)
        {

            c->setFocusEnabled(a0);
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__Widget_find_next_focused_widget_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c, int a0, cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> a1)
        {

            return c->findNextFocusedWidget((cocos2d::ui::Widget::FocusDirection)a0, a1.get());
        }

        void Cocos2dxBind_cocos2d__ui__Widget_request_focus_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            c->requestFocus();
        }

        cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> Cocos2dxBind_cocos2d__ui__Widget_get_current_focused_widget_2(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::ui::Widget> c)
        {

            return c->getCurrentFocusedWidget();
        }



        
        bool Cocos2dxBind_PhysicsBody_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsBody> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_PhysicsContact_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::PhysicsContact> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerPhysicsContact_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContact> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerPhysicsContactWithBodies_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithBodies> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerPhysicsContactWithShapes_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithShapes> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_EventListenerPhysicsContactWithGroup_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::EventListenerPhysicsContactWithGroup> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_AnimationCache_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::AnimationCache> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_SpriteBatchNode_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::SpriteBatchNode> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TextFieldTTF_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TextFieldTTF> c)
        {
            return c.is_valid();
        }
        bool Cocos2dxBind_TMXObjectGroup_valid_question(cor::cocos2dx_mruby_interface::CocosWeakPtrTmpl<cocos2d::TMXObjectGroup> c)
        {
            return c.is_valid();
        }


        
          void Cocos2dxBind_bind_func_12(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContact", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithBodies", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithShapes", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListenerPhysicsContact");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListenerCustom");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::EventListener");
            binder.add_convertable("Cocos2d::EventListenerPhysicsContactWithGroup", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::PhysicsJointFixed", "Cocos2d::PhysicsJoint");
            binder.add_convertable("Cocos2d::AnimationCache", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::SpriteBatchNode", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::SpriteBatchNode", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Label");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TextFieldTTF", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXObjectGroup", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::SpriteBatchNode");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TMXLayer", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::TMXTiledMap", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::TMXTiledMap", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Mesh", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::Sprite3D", "Cocos2d::Node");
            binder.add_convertable("Cocos2d::Sprite3D", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::ProtectedNode");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::Widget", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::Scale9Sprite", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::Scale9Sprite", "Cocos2d::Ref");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2dUi::Widget");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::ProtectedNode");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::Node");
            binder.add_convertable("Cocos2dUi::EditBox", "Cocos2d::Ref");
            binder.add_convertable("Cocos2d::EventKeyboard", "Cocos2d::Event");
            binder.add_convertable("Cocos2d::EventKeyboard", "Cocos2d::Ref");

          }

    }
}
