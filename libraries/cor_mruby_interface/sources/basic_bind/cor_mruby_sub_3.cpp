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
        
        cor::type::Vector2I BasicBind_cor__type__Vector2I_max_vec(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.max_vec(a0);
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_min_vec(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector2I_all_less(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector2I_some_less(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector2I_all_greater(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector2I_some_greater(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector2I_all_less_equal(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector2I_some_less_equal(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector2I_all_greater_equal(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector2I_some_greater_equal(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            c.some_greater_equal(a0);
        }

        int BasicBind_cor__type__Vector2I_sum(cor::type::Vector2I& c)
        {

            return c.sum();
        }

        void BasicBind_cor__type__Vector2I_accessor_set_x(cor::type::Vector2I& c, int a)
        {

            c.x = a;
        }

        int BasicBind_cor__type__Vector2I_accessor_get_x(cor::type::Vector2I& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector2I_accessor_set_y(cor::type::Vector2I& c, int a)
        {

            c.y = a;
        }

        int BasicBind_cor__type__Vector2I_accessor_get_y(cor::type::Vector2I& c)
        {

            return c.y;
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__asterisk__0(cor::type::Vector2I & a0, int a1)
        {
            return a0*a1;
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__plus__0(cor::type::Vector2I & a0, cor::type::Vector2I a1)
        {
            return a0+a1;
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__minus__0(cor::type::Vector2I & a0, cor::type::Vector2I a1)
        {
            return a0-a1;
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__minus_self__0(cor::type::Vector2I & a0)
        {
            return -a0;
        }

        int BasicBind_cor__type__Vector2I_operator__brackets__0(cor::type::Vector2I & a0, int a1)
        {
            return a0[a1];
        }

        int BasicBind_cor__type__Vector2I_operator__brackets_equal__0(cor::type::Vector2I & a0, int a1, int a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Vector3F_set(cor::type::Vector3F& c, float a0, float a1, float a2)
        {

            c.set(a0, a1, a2);
        }

        void BasicBind_cor__type__Vector3F_begin_1(cor::type::Vector3F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector3F_end_1(cor::type::Vector3F& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector3F_begin_2(cor::type::Vector3F& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector3F_end_2(cor::type::Vector3F& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector3F_size(cor::type::Vector3F& c)
        {

            c.size();
        }

        float* BasicBind_cor__type__Vector3F_get_p_1(cor::type::Vector3F& c)
        {

            return c.get_p();
        }

        const float* BasicBind_cor__type__Vector3F_get_p_2(cor::type::Vector3F& c)
        {

            return const_cast<const float* >(c.get_p());
        }

        float BasicBind_cor__type__Vector3F_get_square_magnitude(cor::type::Vector3F& c)
        {

            return c.get_square_magnitude();
        }

        float BasicBind_cor__type__Vector3F_get_magnitude(cor::type::Vector3F& c)
        {

            return c.get_magnitude();
        }

        cor::type::Vector2F BasicBind_cor__type__Vector3F_xy(cor::type::Vector3F& c)
        {

            return c.xy();
        }

        void BasicBind_cor__type__Vector3F_normalize(cor::type::Vector3F& c)
        {

            c.normalize();
        }

        float BasicBind_cor__type__Vector3F_dot(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            return c.dot(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_cross(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            return c.cross(a0);
        }

        float BasicBind_cor__type__Vector3F_distance(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            return c.distance(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_zero()
        {

            return cor::type::Vector3F::zero();
        }



        
        cor::type::Vector3I BasicBind_Vector3I_create_0()
        {
            return cor::type::Vector3I();
        }
        cor::type::Vector3I BasicBind_Vector3I_create_1(cor::type::Vector3I a0)
        {
            return cor::type::Vector3I(a0);
        }
        cor::type::Vector3I BasicBind_Vector3I_create_2(int a0, int a1, int a2)
        {
            return cor::type::Vector3I(a0, a1, a2);
        }
        cor::type::Vector4F BasicBind_Vector4F_create_0()
        {
            return cor::type::Vector4F();
        }
        cor::type::Vector4F BasicBind_Vector4F_create_1(cor::type::Vector4F a0)
        {
            return cor::type::Vector4F(a0);
        }
        cor::type::Vector4F BasicBind_Vector4F_create_2(float a0, float a1, float a2, float a3)
        {
            return cor::type::Vector4F(a0, a1, a2, a3);
        }
        cor::type::Vector4I BasicBind_Vector4I_create_0()
        {
            return cor::type::Vector4I();
        }
        cor::type::Vector4I BasicBind_Vector4I_create_1(cor::type::Vector4I a0)
        {
            return cor::type::Vector4I(a0);
        }
        cor::type::Vector4I BasicBind_Vector4I_create_2(int a0, int a1, int a2, int a3)
        {
            return cor::type::Vector4I(a0, a1, a2, a3);
        }


        
          void BasicBind_bind_func_5(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_1", BasicBind_cor__mruby_interface__MrubyRefContainer_create_1);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_2", BasicBind_cor__mruby_interface__MrubyRefContainer_create_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "set_value", BasicBind_cor__mruby_interface__MrubyRefContainer_set_value);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "get_value", BasicBind_cor__mruby_interface__MrubyRefContainer_get_value);
            binder.bind_custom_method("Cor", "RCharArray", "capacity", BasicBind_cor__RCharArray_capacity);
            binder.bind_custom_method("Cor", "RCharArray", "begin_1", BasicBind_cor__RCharArray_begin_1);
            binder.bind_custom_method("Cor", "RCharArray", "begin_2", BasicBind_cor__RCharArray_begin_2);
            binder.bind_custom_method("Cor", "RCharArray", "end_1", BasicBind_cor__RCharArray_end_1);
            binder.bind_custom_method("Cor", "RCharArray", "end_2", BasicBind_cor__RCharArray_end_2);
            binder.bind_custom_method("Cor", "RCharArray", "rbegin_1", BasicBind_cor__RCharArray_rbegin_1);
            binder.bind_custom_method("Cor", "RCharArray", "rbegin_2", BasicBind_cor__RCharArray_rbegin_2);
            binder.bind_custom_method("Cor", "RCharArray", "rend_1", BasicBind_cor__RCharArray_rend_1);
            binder.bind_custom_method("Cor", "RCharArray", "rend_2", BasicBind_cor__RCharArray_rend_2);
            binder.bind_custom_method("Cor", "RCharArray", "cbegin", BasicBind_cor__RCharArray_cbegin);
            binder.bind_custom_method("Cor", "RCharArray", "cend", BasicBind_cor__RCharArray_cend);
            binder.bind_custom_method("Cor", "RCharArray", "crbegin", BasicBind_cor__RCharArray_crbegin);
            binder.bind_custom_method("Cor", "RCharArray", "crend", BasicBind_cor__RCharArray_crend);
            binder.bind_custom_method("Cor", "RCharArray", "shrink_to_fit", BasicBind_cor__RCharArray_shrink_to_fit);
            binder.bind_custom_method("Cor", "RCharArray", "size", BasicBind_cor__RCharArray_size);
            binder.bind_custom_method("Cor", "RCharArray", "max_size", BasicBind_cor__RCharArray_max_size);
            binder.bind_custom_method("Cor", "RCharArray", "empty", BasicBind_cor__RCharArray_empty);
            binder.bind_custom_method("Cor", "RCharArray", "get_allocator", BasicBind_cor__RCharArray_get_allocator);
            binder.bind_custom_method("Cor", "RCharArray", "data_1", BasicBind_cor__RCharArray_data_1);
            binder.bind_custom_method("Cor", "RCharArray", "data_2", BasicBind_cor__RCharArray_data_2);
            binder.bind_custom_method("Cor", "RCharArray", "front_1", BasicBind_cor__RCharArray_front_1);
            binder.bind_custom_method("Cor", "RCharArray", "front_2", BasicBind_cor__RCharArray_front_2);
            binder.bind_custom_method("Cor", "RCharArray", "back_1", BasicBind_cor__RCharArray_back_1);
            binder.bind_custom_method("Cor", "RCharArray", "back_2", BasicBind_cor__RCharArray_back_2);
            binder.bind_custom_method("Cor", "RCharArray", "pop_back", BasicBind_cor__RCharArray_pop_back);
            binder.bind_custom_method("Cor", "RCharArray", "clear", BasicBind_cor__RCharArray_clear);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "reset", BasicBind_cor__mruby_interface__AnyWP_reset);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "expired", BasicBind_cor__mruby_interface__AnyWP_expired);
            binder.bind_custom_method("CorMrubyInterface", "AnyWP", "lock", BasicBind_cor__mruby_interface__AnyWP_lock);
            binder.bind_custom_method("CorType", "Vector2F", "set", BasicBind_cor__type__Vector2F_set);
            binder.bind_custom_method("CorType", "Vector2F", "begin_1", BasicBind_cor__type__Vector2F_begin_1);
            binder.bind_custom_method("CorType", "Vector2F", "end_1", BasicBind_cor__type__Vector2F_end_1);
            binder.bind_custom_method("CorType", "Vector2F", "begin_2", BasicBind_cor__type__Vector2F_begin_2);
            binder.bind_custom_method("CorType", "Vector2F", "end_2", BasicBind_cor__type__Vector2F_end_2);
            binder.bind_custom_method("CorType", "Vector2F", "size", BasicBind_cor__type__Vector2F_size);
            binder.bind_custom_method("CorType", "Vector2F", "get_p_1", BasicBind_cor__type__Vector2F_get_p_1);
            binder.bind_custom_method("CorType", "Vector2F", "get_p_2", BasicBind_cor__type__Vector2F_get_p_2);
            binder.bind_custom_method("CorType", "Vector2F", "get_square_magnitude", BasicBind_cor__type__Vector2F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector2F", "get_magnitude", BasicBind_cor__type__Vector2F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector2F", "normalize", BasicBind_cor__type__Vector2F_normalize);
            binder.bind_custom_method("CorType", "Vector2F", "dot", BasicBind_cor__type__Vector2F_dot);
            binder.bind_custom_method("CorType", "Vector2F", "cross", BasicBind_cor__type__Vector2F_cross);
            binder.bind_custom_method("CorType", "Vector2F", "distance", BasicBind_cor__type__Vector2F_distance);
            binder.bind_static_method("CorType", "Vector2F", "zero", BasicBind_cor__type__Vector2F_zero);
            binder.bind_static_method("CorType", "Vector2F", "one", BasicBind_cor__type__Vector2F_one);
            binder.bind_custom_method("CorType", "Vector2F", "max_vec", BasicBind_cor__type__Vector2F_max_vec);
            binder.bind_custom_method("CorType", "Vector2F", "min_vec", BasicBind_cor__type__Vector2F_min_vec);
            binder.bind_custom_method("CorType", "Vector2F", "all_less", BasicBind_cor__type__Vector2F_all_less);
            binder.bind_custom_method("CorType", "Vector2F", "some_less", BasicBind_cor__type__Vector2F_some_less);
            binder.bind_custom_method("CorType", "Vector2F", "all_greater", BasicBind_cor__type__Vector2F_all_greater);
            binder.bind_custom_method("CorType", "Vector2F", "some_greater", BasicBind_cor__type__Vector2F_some_greater);
            binder.bind_custom_method("CorType", "Vector2F", "all_less_equal", BasicBind_cor__type__Vector2F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector2F", "some_less_equal", BasicBind_cor__type__Vector2F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector2F", "all_greater_equal", BasicBind_cor__type__Vector2F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector2F", "some_greater_equal", BasicBind_cor__type__Vector2F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector2F", "sum", BasicBind_cor__type__Vector2F_sum);
            binder.bind_custom_method("CorType", "Vector2F", "x=", BasicBind_cor__type__Vector2F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector2F", "x", BasicBind_cor__type__Vector2F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector2F", "y=", BasicBind_cor__type__Vector2F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector2F", "y", BasicBind_cor__type__Vector2F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector2F", "_asterisk__0", BasicBind_cor__type__Vector2F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2F", "*", BasicBind_cor__type__Vector2F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2F", "_plus__0", BasicBind_cor__type__Vector2F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2F", "+", BasicBind_cor__type__Vector2F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2F", "_minus__0", BasicBind_cor__type__Vector2F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2F", "-", BasicBind_cor__type__Vector2F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2F", "_minus_self__0", BasicBind_cor__type__Vector2F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2F", "-@", BasicBind_cor__type__Vector2F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2F", "_brackets__0", BasicBind_cor__type__Vector2F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2F", "[]", BasicBind_cor__type__Vector2F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2F", "_brackets_equal__0", BasicBind_cor__type__Vector2F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector2F", "[]=", BasicBind_cor__type__Vector2F_operator__brackets_equal__0);

          }

    }
}
