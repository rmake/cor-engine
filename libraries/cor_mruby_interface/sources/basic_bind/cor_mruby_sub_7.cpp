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
#include "cor_system/sources/utility_for_test.h"
#include "cor_mruby_interface/sources/basic_bind.h"
#include "cor_mruby_interface/sources/mruby_array.h"
#include "cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "cor_mruby_interface/sources/mruby_experimental.h"
#include "cor_mruby_interface/sources/mruby_ref_container.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#undef RELATIVE
#undef ABSOLUTE
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        int BasicBind_cor__type__Vector4I_get_magnitude(cor::type::Vector4I& c)
        {

            return c.get_magnitude();
        }

        cor::type::Vector2I BasicBind_cor__type__Vector4I_xy(cor::type::Vector4I& c)
        {

            return c.xy();
        }

        cor::type::Vector3I BasicBind_cor__type__Vector4I_xyz(cor::type::Vector4I& c)
        {

            return c.xyz();
        }

        void BasicBind_cor__type__Vector4I_normalize(cor::type::Vector4I& c)
        {

            c.normalize();
        }

        int BasicBind_cor__type__Vector4I_dot(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.dot(a0);
        }

        int BasicBind_cor__type__Vector4I_distance(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.distance(a0);
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_zero()
        {

            return cor::type::Vector4I::zero();
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_one()
        {

            return cor::type::Vector4I::one();
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_max_vec(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.max_vec(a0);
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_min_vec(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector4I_all_less(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector4I_some_less(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector4I_all_greater(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector4I_some_greater(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector4I_all_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_some_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_all_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector4I_some_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0)
        {

            c.some_greater_equal(a0);
        }

        int BasicBind_cor__type__Vector4I_sum(cor::type::Vector4I& c)
        {

            return c.sum();
        }

        void BasicBind_cor__type__Vector4I_accessor_set_x(cor::type::Vector4I& c, int a)
        {

            c.x = a;
        }

        int BasicBind_cor__type__Vector4I_accessor_get_x(cor::type::Vector4I& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector4I_accessor_set_y(cor::type::Vector4I& c, int a)
        {

            c.y = a;
        }

        int BasicBind_cor__type__Vector4I_accessor_get_y(cor::type::Vector4I& c)
        {

            return c.y;
        }

        void BasicBind_cor__type__Vector4I_accessor_set_z(cor::type::Vector4I& c, int a)
        {

            c.z = a;
        }

        int BasicBind_cor__type__Vector4I_accessor_get_z(cor::type::Vector4I& c)
        {

            return c.z;
        }

        void BasicBind_cor__type__Vector4I_accessor_set_w(cor::type::Vector4I& c, int a)
        {

            c.w = a;
        }

        int BasicBind_cor__type__Vector4I_accessor_get_w(cor::type::Vector4I& c)
        {

            return c.w;
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__asterisk__0(cor::type::Vector4I & a0, int a1)
        {
            return a0*a1;
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__plus__0(cor::type::Vector4I & a0, cor::type::Vector4I a1)
        {
            return a0+a1;
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__minus__0(cor::type::Vector4I & a0, cor::type::Vector4I a1)
        {
            return a0-a1;
        }

        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__minus_self__0(cor::type::Vector4I & a0)
        {
            return -a0;
        }

        int BasicBind_cor__type__Vector4I_operator__brackets__0(cor::type::Vector4I & a0, int a1)
        {
            return a0[a1];
        }

        int BasicBind_cor__type__Vector4I_operator__brackets_equal__0(cor::type::Vector4I & a0, int a1, int a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Matrix4x4F_begin_1(cor::type::Matrix4x4F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Matrix4x4F_end_1(cor::type::Matrix4x4F& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Matrix4x4F_begin_2(cor::type::Matrix4x4F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Matrix4x4F_end_2(cor::type::Matrix4x4F& c)
        {

            c.end();
        }

        float* BasicBind_cor__type__Matrix4x4F_get_array(cor::type::Matrix4x4F& c)
        {

            return c.get_array();
        }

        cor::type::Vector3F BasicBind_cor__type__Matrix4x4F_get_x_vec_1(cor::type::Matrix4x4F& c)
        {

            return c.get_x_vec();
        }



        
        bool BasicBind_MrubyExperimentalTemplateStructRInt32_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> BasicBind_MrubyExperimentalTemplateStructRInt32_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32>());
        }
        bool BasicBind_MrubyExperimentalTemplateStructRString_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> BasicBind_MrubyExperimentalTemplateStructRString_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalTemplateStructRString>());
        }
        cor::data_structure::CostGridSpaceItem BasicBind_CostGridSpaceItem_create_0()
        {
            return cor::data_structure::CostGridSpaceItem();
        }


        
          void BasicBind_bind_func_9(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "OSphere2I", "is_cross", BasicBind_cor__type__OSphere2I_is_cross);
            binder.bind_custom_method("CorType", "OSphere2I", "is_include", BasicBind_cor__type__OSphere2I_is_include);
            binder.bind_custom_method("CorType", "OSphere2I", "get_distance", BasicBind_cor__type__OSphere2I_get_distance);
            binder.bind_custom_method("CorType", "OSphere2I", "get_draw_vertices", BasicBind_cor__type__OSphere2I_get_draw_vertices);
            binder.bind_custom_method("CorType", "OSphere2I", "get_box", BasicBind_cor__type__OSphere2I_get_box);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "add", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "add2", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "set_n", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_set_n);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "add", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "add2", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "set_n", BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_set_n);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "terminated=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_terminated);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "terminated", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_terminated);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "passable=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passable);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "passable", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passable);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "enter_cost=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_enter_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "enter_cost", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_enter_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "passed=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passed);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "passed", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passed);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "min_cost=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_min_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "min_cost", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_min_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "parent=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_parent);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "parent", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_parent);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "any=", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_any);
            binder.bind_custom_method("CorDataStructure", "CostGridSpaceItem", "any", BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_any);

          }

    }
}
