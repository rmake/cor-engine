#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/collision/collision_2d.h"
#include "cor_type/sources/collision/collision_2d_tmpl.h"
#include "cor_type/sources/cor_type.h"
#include "cor_type/sources/math/matrix4x4.h"
#include "cor_type/sources/math/matrix4x4_tmpl.h"
#include "cor_type/sources/math/vector2.h"
#include "cor_type/sources/math/vector2_tmpl.h"
#include "cor_type/sources/math/vector3.h"
#include "cor_type/sources/math/vector3_tmpl.h"
#include "cor_type/sources/math/vector4.h"
#include "cor_type/sources/math/vector4_tmpl.h"
#include "cor_type/sources/primitive/box.h"
#include "cor_type/sources/primitive/box_tmpl.h"
#include "cor_type/sources/primitive/o_box.h"
#include "cor_type/sources/primitive/o_box_tmpl.h"
#include "cor_type/sources/primitive/o_sphere.h"
#include "cor_type/sources/primitive/o_sphere_tmpl.h"
#include "cor_type/sources/primitive/sphere.h"
#include "cor_type/sources/primitive/sphere_tmpl.h"
#include "cor_data_structure/sources/ai/cost_grid_space.h"
#include "cor_data_structure/sources/ai/cost_grid_space_tmpl.h"
#include "cor_data_structure/sources/ai/priority_queue.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl.h"
#include "cor_data_structure/sources/ai/stack_decoder.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl.h"
#include "cor_data_structure/sources/array_pool.h"
#include "cor_data_structure/sources/array_pool_tmpl.h"
#include "cor_data_structure/sources/basic/shared_ptr_table.h"
#include "cor_data_structure/sources/geometry/r_tree_pool.h"
#include "cor_data_structure/sources/geometry/r_tree_pool_tmpl.h"
#include "cor_data_structure/sources/geometry/uniform_grid.h"
#include "cor_data_structure/sources/geometry/uniform_grid_tmpl.h"
#include "cor_data_structure/sources/tree_pool.h"
#include "cor_data_structure/sources/tree_pool_tmpl.h"
#include "cor_algorithm/sources/bit_operation.h"
#include "cor_algorithm/sources/bit_operation_tmpl.h"
#include "cor_algorithm/sources/utilities.h"
#include "cor_algorithm/sources/utilities_tmpl.h"
#include "cor_system/sources/allocation_monitor.h"
#include "cor_system/sources/cor_crypt.h"
#include "cor_system/sources/cor_time.h"
#include "cor_system/sources/job_queue.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/parallel_processor.h"
#include "cor_system/sources/thread_pool.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"

namespace cor
{
    namespace mruby_interface
    {
        
        int BasicBind_cor__type__OSphere2I_get_distance(cor::type::OSphere2I& c, cor::type::Vector2I a0)
        {

            return c.get_distance(a0);
        }

        void BasicBind_cor__type__OSphere2I_get_draw_vertices(cor::type::OSphere2I& c)
        {

            c.get_draw_vertices();
        }

        void BasicBind_cor__type__OSphere2I_get_box(cor::type::OSphere2I& c)
        {

            c.get_box();
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add(int a0, int a1)
        {

            return cor::mruby_interface::MrubyExperimentalTemplateStructRInt32::add(a0, a1);
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c, int a0, int a1, int a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->add2(a0, a1, a2);
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_set_n(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_n(a0);
        }

        std::basic_string<char, std::char_traits<char>, std::allocator<char>> BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add(std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a1)
        {

            return cor::mruby_interface::MrubyExperimentalTemplateStructRString::add(a0, a1);
        }

        std::basic_string<char, std::char_traits<char>, std::allocator<char>> BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a1, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a2)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->add2(a0, a1, a2);
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_set_n(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_n(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_terminated(cor::data_structure::CostGridSpaceItem& c, int a)
        {

            c.terminated = a;
        }

        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_terminated(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.terminated;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passable(cor::data_structure::CostGridSpaceItem& c, int a)
        {

            c.passable = a;
        }

        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passable(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.passable;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_enter_cost(cor::data_structure::CostGridSpaceItem& c, float a)
        {

            c.enter_cost = a;
        }

        float BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_enter_cost(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.enter_cost;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passed(cor::data_structure::CostGridSpaceItem& c, int a)
        {

            c.passed = a;
        }

        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passed(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.passed;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_min_cost(cor::data_structure::CostGridSpaceItem& c, float a)
        {

            c.min_cost = a;
        }

        float BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_min_cost(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.min_cost;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_parent(cor::data_structure::CostGridSpaceItem& c, cor::type::Vector2I a)
        {

            c.parent = a;
        }

        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_parent(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.parent;
        }

        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_any(cor::data_structure::CostGridSpaceItem& c, cor::mruby_interface::AnyWP a)
        {

            c.any = a.lock();
        }

        cor::mruby_interface::AnyWP BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_any(cor::data_structure::CostGridSpaceItem& c)
        {

            return c.any;
        }

        void BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_cost(cor::data_structure::CostGridSpacePath& c, float a)
        {

            c.cost = a;
        }

        float BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_cost(cor::data_structure::CostGridSpacePath& c)
        {

            return c.cost;
        }

        void BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_path(cor::data_structure::CostGridSpacePath& c, MrubyRef a)
        {

            c.path = cor::mruby_interface::MrubyArray::convert_mruby_to_std_vec<cor::type::Vector2Tmpl<int> >(a);
        }

        MrubyRef BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_path(cor::data_structure::CostGridSpacePath& c)
        {

            return cor::mruby_interface::MrubyArray::convert_std_vec_to_mruby(c.path);
        }



        


        
          void BasicBind_bind_func_13(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.add_convertable("CorMrubyInterface::MrubyExperimentalTemplateStructRInt32", "CorMrubyInterface::AnyWP");
            binder.add_convertable("CorMrubyInterface::MrubyExperimentalTemplateStructRString", "CorMrubyInterface::AnyWP");

          }

    }
}
