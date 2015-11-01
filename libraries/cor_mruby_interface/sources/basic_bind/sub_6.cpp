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

        cor::type::Vector3F BasicBind_cor__type__Vector3F_one()
        {

            return cor::type::Vector3F::one();
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_max_vec(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            return c.max_vec(a0);
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_min_vec(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector3F_all_less(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector3F_some_less(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector3F_all_greater(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector3F_some_greater(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector3F_all_less_equal(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector3F_some_less_equal(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector3F_all_greater_equal(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector3F_some_greater_equal(cor::type::Vector3F& c, cor::type::Vector3F a0)
        {

            c.some_greater_equal(a0);
        }

        float BasicBind_cor__type__Vector3F_sum(cor::type::Vector3F& c)
        {

            return c.sum();
        }

        void BasicBind_cor__type__Vector3F_accessor_set_x(cor::type::Vector3F& c, float a)
        {

            c.x = a;
        }

        float BasicBind_cor__type__Vector3F_accessor_get_x(cor::type::Vector3F& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector3F_accessor_set_y(cor::type::Vector3F& c, float a)
        {

            c.y = a;
        }

        float BasicBind_cor__type__Vector3F_accessor_get_y(cor::type::Vector3F& c)
        {

            return c.y;
        }

        void BasicBind_cor__type__Vector3F_accessor_set_z(cor::type::Vector3F& c, float a)
        {

            c.z = a;
        }

        float BasicBind_cor__type__Vector3F_accessor_get_z(cor::type::Vector3F& c)
        {

            return c.z;
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__asterisk__0(cor::type::Vector3F & a0, float a1)
        {
            return a0*a1;
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__plus__0(cor::type::Vector3F & a0, cor::type::Vector3F a1)
        {
            return a0+a1;
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__minus__0(cor::type::Vector3F & a0, cor::type::Vector3F a1)
        {
            return a0-a1;
        }

        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__minus_self__0(cor::type::Vector3F & a0)
        {
            return -a0;
        }

        float BasicBind_cor__type__Vector3F_operator__brackets__0(cor::type::Vector3F & a0, int a1)
        {
            return a0[a1];
        }

        float BasicBind_cor__type__Vector3F_operator__brackets_equal__0(cor::type::Vector3F & a0, int a1, float a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Vector3I_set(cor::type::Vector3I& c, int a0, int a1, int a2)
        {

            c.set(a0, a1, a2);
        }

        void BasicBind_cor__type__Vector3I_begin_1(cor::type::Vector3I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector3I_end_1(cor::type::Vector3I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector3I_begin_2(cor::type::Vector3I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector3I_end_2(cor::type::Vector3I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector3I_size(cor::type::Vector3I& c)
        {

            c.size();
        }

        int* BasicBind_cor__type__Vector3I_get_p_1(cor::type::Vector3I& c)
        {

            return c.get_p();
        }

        const int* BasicBind_cor__type__Vector3I_get_p_2(cor::type::Vector3I& c)
        {

            return const_cast<const int* >(c.get_p());
        }



        
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_0()
        {
            return cor::type::Matrix4x4F();
        }
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_1(cor::type::Matrix4x4F a0)
        {
            return cor::type::Matrix4x4F(a0);
        }
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_2(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15)
        {
            return cor::type::Matrix4x4F(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        }
        cor::type::Box2F BasicBind_Box2F_create_0()
        {
            return cor::type::Box2F();
        }
        cor::type::Box2F BasicBind_Box2F_create_1(cor::type::Vector2F a0, cor::type::Vector2F a1)
        {
            return cor::type::Box2F(a0, a1);
        }
        cor::type::Box2F BasicBind_Box2F_create_2(float a0, float a1, float a2, float a3)
        {
            return cor::type::Box2F(a0, a1, a2, a3);
        }
        cor::type::Box2I BasicBind_Box2I_create_0()
        {
            return cor::type::Box2I();
        }
        cor::type::Box2I BasicBind_Box2I_create_1(cor::type::Vector2I a0, cor::type::Vector2I a1)
        {
            return cor::type::Box2I(a0, a1);
        }
        cor::type::Box2I BasicBind_Box2I_create_2(int a0, int a1, int a2, int a3)
        {
            return cor::type::Box2I(a0, a1, a2, a3);
        }


        
          void BasicBind_bind_func_6(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorType", "Vector2I", "set", BasicBind_cor__type__Vector2I_set);
            binder.bind_custom_method("CorType", "Vector2I", "begin_1", BasicBind_cor__type__Vector2I_begin_1);
            binder.bind_custom_method("CorType", "Vector2I", "end_1", BasicBind_cor__type__Vector2I_end_1);
            binder.bind_custom_method("CorType", "Vector2I", "begin_2", BasicBind_cor__type__Vector2I_begin_2);
            binder.bind_custom_method("CorType", "Vector2I", "end_2", BasicBind_cor__type__Vector2I_end_2);
            binder.bind_custom_method("CorType", "Vector2I", "size", BasicBind_cor__type__Vector2I_size);
            binder.bind_custom_method("CorType", "Vector2I", "get_p_1", BasicBind_cor__type__Vector2I_get_p_1);
            binder.bind_custom_method("CorType", "Vector2I", "get_p_2", BasicBind_cor__type__Vector2I_get_p_2);
            binder.bind_custom_method("CorType", "Vector2I", "get_square_magnitude", BasicBind_cor__type__Vector2I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector2I", "get_magnitude", BasicBind_cor__type__Vector2I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector2I", "normalize", BasicBind_cor__type__Vector2I_normalize);
            binder.bind_custom_method("CorType", "Vector2I", "dot", BasicBind_cor__type__Vector2I_dot);
            binder.bind_custom_method("CorType", "Vector2I", "cross", BasicBind_cor__type__Vector2I_cross);
            binder.bind_custom_method("CorType", "Vector2I", "distance", BasicBind_cor__type__Vector2I_distance);
            binder.bind_static_method("CorType", "Vector2I", "zero", BasicBind_cor__type__Vector2I_zero);
            binder.bind_static_method("CorType", "Vector2I", "one", BasicBind_cor__type__Vector2I_one);
            binder.bind_custom_method("CorType", "Vector2I", "max_vec", BasicBind_cor__type__Vector2I_max_vec);
            binder.bind_custom_method("CorType", "Vector2I", "min_vec", BasicBind_cor__type__Vector2I_min_vec);
            binder.bind_custom_method("CorType", "Vector2I", "all_less", BasicBind_cor__type__Vector2I_all_less);
            binder.bind_custom_method("CorType", "Vector2I", "some_less", BasicBind_cor__type__Vector2I_some_less);
            binder.bind_custom_method("CorType", "Vector2I", "all_greater", BasicBind_cor__type__Vector2I_all_greater);
            binder.bind_custom_method("CorType", "Vector2I", "some_greater", BasicBind_cor__type__Vector2I_some_greater);
            binder.bind_custom_method("CorType", "Vector2I", "all_less_equal", BasicBind_cor__type__Vector2I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector2I", "some_less_equal", BasicBind_cor__type__Vector2I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector2I", "all_greater_equal", BasicBind_cor__type__Vector2I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector2I", "some_greater_equal", BasicBind_cor__type__Vector2I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector2I", "sum", BasicBind_cor__type__Vector2I_sum);
            binder.bind_custom_method("CorType", "Vector2I", "x=", BasicBind_cor__type__Vector2I_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector2I", "x", BasicBind_cor__type__Vector2I_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector2I", "y=", BasicBind_cor__type__Vector2I_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector2I", "y", BasicBind_cor__type__Vector2I_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector2I", "_asterisk__0", BasicBind_cor__type__Vector2I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2I", "*", BasicBind_cor__type__Vector2I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector2I", "_plus__0", BasicBind_cor__type__Vector2I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2I", "+", BasicBind_cor__type__Vector2I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector2I", "_minus__0", BasicBind_cor__type__Vector2I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2I", "-", BasicBind_cor__type__Vector2I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector2I", "_minus_self__0", BasicBind_cor__type__Vector2I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2I", "-@", BasicBind_cor__type__Vector2I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector2I", "_brackets__0", BasicBind_cor__type__Vector2I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2I", "[]", BasicBind_cor__type__Vector2I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector2I", "_brackets_equal__0", BasicBind_cor__type__Vector2I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector2I", "[]=", BasicBind_cor__type__Vector2I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3F", "set", BasicBind_cor__type__Vector3F_set);
            binder.bind_custom_method("CorType", "Vector3F", "begin_1", BasicBind_cor__type__Vector3F_begin_1);
            binder.bind_custom_method("CorType", "Vector3F", "end_1", BasicBind_cor__type__Vector3F_end_1);
            binder.bind_custom_method("CorType", "Vector3F", "begin_2", BasicBind_cor__type__Vector3F_begin_2);
            binder.bind_custom_method("CorType", "Vector3F", "end_2", BasicBind_cor__type__Vector3F_end_2);
            binder.bind_custom_method("CorType", "Vector3F", "size", BasicBind_cor__type__Vector3F_size);
            binder.bind_custom_method("CorType", "Vector3F", "get_p_1", BasicBind_cor__type__Vector3F_get_p_1);
            binder.bind_custom_method("CorType", "Vector3F", "get_p_2", BasicBind_cor__type__Vector3F_get_p_2);
            binder.bind_custom_method("CorType", "Vector3F", "get_square_magnitude", BasicBind_cor__type__Vector3F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector3F", "get_magnitude", BasicBind_cor__type__Vector3F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector3F", "xy", BasicBind_cor__type__Vector3F_xy);
            binder.bind_custom_method("CorType", "Vector3F", "normalize", BasicBind_cor__type__Vector3F_normalize);
            binder.bind_custom_method("CorType", "Vector3F", "dot", BasicBind_cor__type__Vector3F_dot);
            binder.bind_custom_method("CorType", "Vector3F", "cross", BasicBind_cor__type__Vector3F_cross);
            binder.bind_custom_method("CorType", "Vector3F", "distance", BasicBind_cor__type__Vector3F_distance);
            binder.bind_static_method("CorType", "Vector3F", "zero", BasicBind_cor__type__Vector3F_zero);
            binder.bind_static_method("CorType", "Vector3F", "one", BasicBind_cor__type__Vector3F_one);
            binder.bind_custom_method("CorType", "Vector3F", "max_vec", BasicBind_cor__type__Vector3F_max_vec);
            binder.bind_custom_method("CorType", "Vector3F", "min_vec", BasicBind_cor__type__Vector3F_min_vec);
            binder.bind_custom_method("CorType", "Vector3F", "all_less", BasicBind_cor__type__Vector3F_all_less);
            binder.bind_custom_method("CorType", "Vector3F", "some_less", BasicBind_cor__type__Vector3F_some_less);
            binder.bind_custom_method("CorType", "Vector3F", "all_greater", BasicBind_cor__type__Vector3F_all_greater);
            binder.bind_custom_method("CorType", "Vector3F", "some_greater", BasicBind_cor__type__Vector3F_some_greater);
            binder.bind_custom_method("CorType", "Vector3F", "all_less_equal", BasicBind_cor__type__Vector3F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector3F", "some_less_equal", BasicBind_cor__type__Vector3F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector3F", "all_greater_equal", BasicBind_cor__type__Vector3F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector3F", "some_greater_equal", BasicBind_cor__type__Vector3F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector3F", "sum", BasicBind_cor__type__Vector3F_sum);
            binder.bind_custom_method("CorType", "Vector3F", "x=", BasicBind_cor__type__Vector3F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector3F", "x", BasicBind_cor__type__Vector3F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector3F", "y=", BasicBind_cor__type__Vector3F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector3F", "y", BasicBind_cor__type__Vector3F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector3F", "z=", BasicBind_cor__type__Vector3F_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector3F", "z", BasicBind_cor__type__Vector3F_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector3F", "_asterisk__0", BasicBind_cor__type__Vector3F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3F", "*", BasicBind_cor__type__Vector3F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3F", "_plus__0", BasicBind_cor__type__Vector3F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3F", "+", BasicBind_cor__type__Vector3F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3F", "_minus__0", BasicBind_cor__type__Vector3F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3F", "-", BasicBind_cor__type__Vector3F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3F", "_minus_self__0", BasicBind_cor__type__Vector3F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3F", "-@", BasicBind_cor__type__Vector3F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3F", "_brackets__0", BasicBind_cor__type__Vector3F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3F", "[]", BasicBind_cor__type__Vector3F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3F", "_brackets_equal__0", BasicBind_cor__type__Vector3F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3F", "[]=", BasicBind_cor__type__Vector3F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3I", "set", BasicBind_cor__type__Vector3I_set);
            binder.bind_custom_method("CorType", "Vector3I", "begin_1", BasicBind_cor__type__Vector3I_begin_1);
            binder.bind_custom_method("CorType", "Vector3I", "end_1", BasicBind_cor__type__Vector3I_end_1);
            binder.bind_custom_method("CorType", "Vector3I", "begin_2", BasicBind_cor__type__Vector3I_begin_2);
            binder.bind_custom_method("CorType", "Vector3I", "end_2", BasicBind_cor__type__Vector3I_end_2);
            binder.bind_custom_method("CorType", "Vector3I", "size", BasicBind_cor__type__Vector3I_size);
            binder.bind_custom_method("CorType", "Vector3I", "get_p_1", BasicBind_cor__type__Vector3I_get_p_1);
            binder.bind_custom_method("CorType", "Vector3I", "get_p_2", BasicBind_cor__type__Vector3I_get_p_2);
            binder.bind_custom_method("CorType", "Vector3I", "get_square_magnitude", BasicBind_cor__type__Vector3I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector3I", "get_magnitude", BasicBind_cor__type__Vector3I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector3I", "xy", BasicBind_cor__type__Vector3I_xy);
            binder.bind_custom_method("CorType", "Vector3I", "normalize", BasicBind_cor__type__Vector3I_normalize);
            binder.bind_custom_method("CorType", "Vector3I", "dot", BasicBind_cor__type__Vector3I_dot);
            binder.bind_custom_method("CorType", "Vector3I", "cross", BasicBind_cor__type__Vector3I_cross);
            binder.bind_custom_method("CorType", "Vector3I", "distance", BasicBind_cor__type__Vector3I_distance);
            binder.bind_static_method("CorType", "Vector3I", "zero", BasicBind_cor__type__Vector3I_zero);
            binder.bind_static_method("CorType", "Vector3I", "one", BasicBind_cor__type__Vector3I_one);
            binder.bind_custom_method("CorType", "Vector3I", "max_vec", BasicBind_cor__type__Vector3I_max_vec);
            binder.bind_custom_method("CorType", "Vector3I", "min_vec", BasicBind_cor__type__Vector3I_min_vec);
            binder.bind_custom_method("CorType", "Vector3I", "all_less", BasicBind_cor__type__Vector3I_all_less);
            binder.bind_custom_method("CorType", "Vector3I", "some_less", BasicBind_cor__type__Vector3I_some_less);
            binder.bind_custom_method("CorType", "Vector3I", "all_greater", BasicBind_cor__type__Vector3I_all_greater);
            binder.bind_custom_method("CorType", "Vector3I", "some_greater", BasicBind_cor__type__Vector3I_some_greater);
            binder.bind_custom_method("CorType", "Vector3I", "all_less_equal", BasicBind_cor__type__Vector3I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector3I", "some_less_equal", BasicBind_cor__type__Vector3I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector3I", "all_greater_equal", BasicBind_cor__type__Vector3I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector3I", "some_greater_equal", BasicBind_cor__type__Vector3I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector3I", "sum", BasicBind_cor__type__Vector3I_sum);
            binder.bind_custom_method("CorType", "Vector3I", "x=", BasicBind_cor__type__Vector3I_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector3I", "x", BasicBind_cor__type__Vector3I_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector3I", "y=", BasicBind_cor__type__Vector3I_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector3I", "y", BasicBind_cor__type__Vector3I_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector3I", "z=", BasicBind_cor__type__Vector3I_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector3I", "z", BasicBind_cor__type__Vector3I_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector3I", "_asterisk__0", BasicBind_cor__type__Vector3I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3I", "*", BasicBind_cor__type__Vector3I_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector3I", "_plus__0", BasicBind_cor__type__Vector3I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3I", "+", BasicBind_cor__type__Vector3I_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector3I", "_minus__0", BasicBind_cor__type__Vector3I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3I", "-", BasicBind_cor__type__Vector3I_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector3I", "_minus_self__0", BasicBind_cor__type__Vector3I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3I", "-@", BasicBind_cor__type__Vector3I_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector3I", "_brackets__0", BasicBind_cor__type__Vector3I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3I", "[]", BasicBind_cor__type__Vector3I_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector3I", "_brackets_equal__0", BasicBind_cor__type__Vector3I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector3I", "[]=", BasicBind_cor__type__Vector3I_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4F", "set", BasicBind_cor__type__Vector4F_set);
            binder.bind_custom_method("CorType", "Vector4F", "begin_1", BasicBind_cor__type__Vector4F_begin_1);
            binder.bind_custom_method("CorType", "Vector4F", "end_1", BasicBind_cor__type__Vector4F_end_1);
            binder.bind_custom_method("CorType", "Vector4F", "begin_2", BasicBind_cor__type__Vector4F_begin_2);
            binder.bind_custom_method("CorType", "Vector4F", "end_2", BasicBind_cor__type__Vector4F_end_2);
            binder.bind_custom_method("CorType", "Vector4F", "size", BasicBind_cor__type__Vector4F_size);
            binder.bind_custom_method("CorType", "Vector4F", "get_p_1", BasicBind_cor__type__Vector4F_get_p_1);
            binder.bind_custom_method("CorType", "Vector4F", "get_p_2", BasicBind_cor__type__Vector4F_get_p_2);
            binder.bind_custom_method("CorType", "Vector4F", "get_square_magnitude", BasicBind_cor__type__Vector4F_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector4F", "get_magnitude", BasicBind_cor__type__Vector4F_get_magnitude);
            binder.bind_custom_method("CorType", "Vector4F", "xy", BasicBind_cor__type__Vector4F_xy);
            binder.bind_custom_method("CorType", "Vector4F", "xyz", BasicBind_cor__type__Vector4F_xyz);
            binder.bind_custom_method("CorType", "Vector4F", "normalize", BasicBind_cor__type__Vector4F_normalize);
            binder.bind_custom_method("CorType", "Vector4F", "dot", BasicBind_cor__type__Vector4F_dot);
            binder.bind_custom_method("CorType", "Vector4F", "distance", BasicBind_cor__type__Vector4F_distance);
            binder.bind_static_method("CorType", "Vector4F", "zero", BasicBind_cor__type__Vector4F_zero);
            binder.bind_static_method("CorType", "Vector4F", "one", BasicBind_cor__type__Vector4F_one);
            binder.bind_custom_method("CorType", "Vector4F", "max_vec", BasicBind_cor__type__Vector4F_max_vec);
            binder.bind_custom_method("CorType", "Vector4F", "min_vec", BasicBind_cor__type__Vector4F_min_vec);
            binder.bind_custom_method("CorType", "Vector4F", "all_less", BasicBind_cor__type__Vector4F_all_less);
            binder.bind_custom_method("CorType", "Vector4F", "some_less", BasicBind_cor__type__Vector4F_some_less);
            binder.bind_custom_method("CorType", "Vector4F", "all_greater", BasicBind_cor__type__Vector4F_all_greater);
            binder.bind_custom_method("CorType", "Vector4F", "some_greater", BasicBind_cor__type__Vector4F_some_greater);
            binder.bind_custom_method("CorType", "Vector4F", "all_less_equal", BasicBind_cor__type__Vector4F_all_less_equal);
            binder.bind_custom_method("CorType", "Vector4F", "some_less_equal", BasicBind_cor__type__Vector4F_some_less_equal);
            binder.bind_custom_method("CorType", "Vector4F", "all_greater_equal", BasicBind_cor__type__Vector4F_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector4F", "some_greater_equal", BasicBind_cor__type__Vector4F_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector4F", "sum", BasicBind_cor__type__Vector4F_sum);
            binder.bind_custom_method("CorType", "Vector4F", "x=", BasicBind_cor__type__Vector4F_accessor_set_x);
            binder.bind_custom_method("CorType", "Vector4F", "x", BasicBind_cor__type__Vector4F_accessor_get_x);
            binder.bind_custom_method("CorType", "Vector4F", "y=", BasicBind_cor__type__Vector4F_accessor_set_y);
            binder.bind_custom_method("CorType", "Vector4F", "y", BasicBind_cor__type__Vector4F_accessor_get_y);
            binder.bind_custom_method("CorType", "Vector4F", "z=", BasicBind_cor__type__Vector4F_accessor_set_z);
            binder.bind_custom_method("CorType", "Vector4F", "z", BasicBind_cor__type__Vector4F_accessor_get_z);
            binder.bind_custom_method("CorType", "Vector4F", "w=", BasicBind_cor__type__Vector4F_accessor_set_w);
            binder.bind_custom_method("CorType", "Vector4F", "w", BasicBind_cor__type__Vector4F_accessor_get_w);
            binder.bind_custom_method("CorType", "Vector4F", "_asterisk__0", BasicBind_cor__type__Vector4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4F", "*", BasicBind_cor__type__Vector4F_operator__asterisk__0);
            binder.bind_custom_method("CorType", "Vector4F", "_plus__0", BasicBind_cor__type__Vector4F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4F", "+", BasicBind_cor__type__Vector4F_operator__plus__0);
            binder.bind_custom_method("CorType", "Vector4F", "_minus__0", BasicBind_cor__type__Vector4F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4F", "-", BasicBind_cor__type__Vector4F_operator__minus__0);
            binder.bind_custom_method("CorType", "Vector4F", "_minus_self__0", BasicBind_cor__type__Vector4F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4F", "-@", BasicBind_cor__type__Vector4F_operator__minus_self__0);
            binder.bind_custom_method("CorType", "Vector4F", "_brackets__0", BasicBind_cor__type__Vector4F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4F", "[]", BasicBind_cor__type__Vector4F_operator__brackets__0);
            binder.bind_custom_method("CorType", "Vector4F", "_brackets_equal__0", BasicBind_cor__type__Vector4F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4F", "[]=", BasicBind_cor__type__Vector4F_operator__brackets_equal__0);
            binder.bind_custom_method("CorType", "Vector4I", "set", BasicBind_cor__type__Vector4I_set);
            binder.bind_custom_method("CorType", "Vector4I", "begin_1", BasicBind_cor__type__Vector4I_begin_1);
            binder.bind_custom_method("CorType", "Vector4I", "end_1", BasicBind_cor__type__Vector4I_end_1);
            binder.bind_custom_method("CorType", "Vector4I", "begin_2", BasicBind_cor__type__Vector4I_begin_2);
            binder.bind_custom_method("CorType", "Vector4I", "end_2", BasicBind_cor__type__Vector4I_end_2);
            binder.bind_custom_method("CorType", "Vector4I", "size", BasicBind_cor__type__Vector4I_size);
            binder.bind_custom_method("CorType", "Vector4I", "get_p_1", BasicBind_cor__type__Vector4I_get_p_1);
            binder.bind_custom_method("CorType", "Vector4I", "get_p_2", BasicBind_cor__type__Vector4I_get_p_2);
            binder.bind_custom_method("CorType", "Vector4I", "get_square_magnitude", BasicBind_cor__type__Vector4I_get_square_magnitude);
            binder.bind_custom_method("CorType", "Vector4I", "get_magnitude", BasicBind_cor__type__Vector4I_get_magnitude);
            binder.bind_custom_method("CorType", "Vector4I", "xy", BasicBind_cor__type__Vector4I_xy);
            binder.bind_custom_method("CorType", "Vector4I", "xyz", BasicBind_cor__type__Vector4I_xyz);
            binder.bind_custom_method("CorType", "Vector4I", "normalize", BasicBind_cor__type__Vector4I_normalize);
            binder.bind_custom_method("CorType", "Vector4I", "dot", BasicBind_cor__type__Vector4I_dot);
            binder.bind_custom_method("CorType", "Vector4I", "distance", BasicBind_cor__type__Vector4I_distance);
            binder.bind_static_method("CorType", "Vector4I", "zero", BasicBind_cor__type__Vector4I_zero);
            binder.bind_static_method("CorType", "Vector4I", "one", BasicBind_cor__type__Vector4I_one);
            binder.bind_custom_method("CorType", "Vector4I", "max_vec", BasicBind_cor__type__Vector4I_max_vec);
            binder.bind_custom_method("CorType", "Vector4I", "min_vec", BasicBind_cor__type__Vector4I_min_vec);
            binder.bind_custom_method("CorType", "Vector4I", "all_less", BasicBind_cor__type__Vector4I_all_less);
            binder.bind_custom_method("CorType", "Vector4I", "some_less", BasicBind_cor__type__Vector4I_some_less);
            binder.bind_custom_method("CorType", "Vector4I", "all_greater", BasicBind_cor__type__Vector4I_all_greater);
            binder.bind_custom_method("CorType", "Vector4I", "some_greater", BasicBind_cor__type__Vector4I_some_greater);
            binder.bind_custom_method("CorType", "Vector4I", "all_less_equal", BasicBind_cor__type__Vector4I_all_less_equal);
            binder.bind_custom_method("CorType", "Vector4I", "some_less_equal", BasicBind_cor__type__Vector4I_some_less_equal);
            binder.bind_custom_method("CorType", "Vector4I", "all_greater_equal", BasicBind_cor__type__Vector4I_all_greater_equal);
            binder.bind_custom_method("CorType", "Vector4I", "some_greater_equal", BasicBind_cor__type__Vector4I_some_greater_equal);
            binder.bind_custom_method("CorType", "Vector4I", "sum", BasicBind_cor__type__Vector4I_sum);

          }

    }
}
