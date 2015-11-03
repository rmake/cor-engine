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
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        cor::type::Vector2F BasicBind_cor__type__Vector2F_min_vec(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            return c.min_vec(a0);
        }

        void BasicBind_cor__type__Vector2F_all_less(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.all_less(a0);
        }

        void BasicBind_cor__type__Vector2F_some_less(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.some_less(a0);
        }

        void BasicBind_cor__type__Vector2F_all_greater(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.all_greater(a0);
        }

        void BasicBind_cor__type__Vector2F_some_greater(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.some_greater(a0);
        }

        void BasicBind_cor__type__Vector2F_all_less_equal(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.all_less_equal(a0);
        }

        void BasicBind_cor__type__Vector2F_some_less_equal(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.some_less_equal(a0);
        }

        void BasicBind_cor__type__Vector2F_all_greater_equal(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.all_greater_equal(a0);
        }

        void BasicBind_cor__type__Vector2F_some_greater_equal(cor::type::Vector2F& c, cor::type::Vector2F a0)
        {

            c.some_greater_equal(a0);
        }

        float BasicBind_cor__type__Vector2F_sum(cor::type::Vector2F& c)
        {

            return c.sum();
        }

        void BasicBind_cor__type__Vector2F_accessor_set_x(cor::type::Vector2F& c, float a)
        {

            c.x = a;
        }

        float BasicBind_cor__type__Vector2F_accessor_get_x(cor::type::Vector2F& c)
        {

            return c.x;
        }

        void BasicBind_cor__type__Vector2F_accessor_set_y(cor::type::Vector2F& c, float a)
        {

            c.y = a;
        }

        float BasicBind_cor__type__Vector2F_accessor_get_y(cor::type::Vector2F& c)
        {

            return c.y;
        }

        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__asterisk__0(cor::type::Vector2F & a0, float a1)
        {
            return a0*a1;
        }

        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__plus__0(cor::type::Vector2F & a0, cor::type::Vector2F a1)
        {
            return a0+a1;
        }

        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__minus__0(cor::type::Vector2F & a0, cor::type::Vector2F a1)
        {
            return a0-a1;
        }

        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__minus_self__0(cor::type::Vector2F & a0)
        {
            return -a0;
        }

        float BasicBind_cor__type__Vector2F_operator__brackets__0(cor::type::Vector2F & a0, int a1)
        {
            return a0[a1];
        }

        float BasicBind_cor__type__Vector2F_operator__brackets_equal__0(cor::type::Vector2F & a0, int a1, float a2)
        {
            return a0[a1] = a2;
        }

        void BasicBind_cor__type__Vector2I_set(cor::type::Vector2I& c, int a0, int a1)
        {

            c.set(a0, a1);
        }

        void BasicBind_cor__type__Vector2I_begin_1(cor::type::Vector2I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector2I_end_1(cor::type::Vector2I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector2I_begin_2(cor::type::Vector2I& c)
        {

            c.begin();
        }

        void BasicBind_cor__type__Vector2I_end_2(cor::type::Vector2I& c)
        {

            c.end();
        }

        void BasicBind_cor__type__Vector2I_size(cor::type::Vector2I& c)
        {

            c.size();
        }

        int* BasicBind_cor__type__Vector2I_get_p_1(cor::type::Vector2I& c)
        {

            return c.get_p();
        }

        const int* BasicBind_cor__type__Vector2I_get_p_2(cor::type::Vector2I& c)
        {

            return const_cast<const int* >(c.get_p());
        }

        int BasicBind_cor__type__Vector2I_get_square_magnitude(cor::type::Vector2I& c)
        {

            return c.get_square_magnitude();
        }

        int BasicBind_cor__type__Vector2I_get_magnitude(cor::type::Vector2I& c)
        {

            return c.get_magnitude();
        }

        void BasicBind_cor__type__Vector2I_normalize(cor::type::Vector2I& c)
        {

            c.normalize();
        }

        int BasicBind_cor__type__Vector2I_dot(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.dot(a0);
        }

        int BasicBind_cor__type__Vector2I_cross(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.cross(a0);
        }

        int BasicBind_cor__type__Vector2I_distance(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.distance(a0);
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_zero()
        {

            return cor::type::Vector2I::zero();
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_one()
        {

            return cor::type::Vector2I::one();
        }

        cor::type::Vector2I BasicBind_cor__type__Vector2I_max_vec(cor::type::Vector2I& c, cor::type::Vector2I a0)
        {

            return c.max_vec(a0);
        }



        
        cor::type::Vector2F BasicBind_Vector2F_create_0()
        {
            return cor::type::Vector2F();
        }
        cor::type::Vector2F BasicBind_Vector2F_create_1(cor::type::Vector2F a0)
        {
            return cor::type::Vector2F(a0);
        }
        cor::type::Vector2F BasicBind_Vector2F_create_2(float a0, float a1)
        {
            return cor::type::Vector2F(a0, a1);
        }
        cor::type::Vector2I BasicBind_Vector2I_create_0()
        {
            return cor::type::Vector2I();
        }
        cor::type::Vector2I BasicBind_Vector2I_create_1(cor::type::Vector2I a0)
        {
            return cor::type::Vector2I(a0);
        }
        cor::type::Vector2I BasicBind_Vector2I_create_2(int a0, int a1)
        {
            return cor::type::Vector2I(a0, a1);
        }
        cor::type::Vector3F BasicBind_Vector3F_create_0()
        {
            return cor::type::Vector3F();
        }
        cor::type::Vector3F BasicBind_Vector3F_create_1(cor::type::Vector3F a0)
        {
            return cor::type::Vector3F(a0);
        }
        cor::type::Vector3F BasicBind_Vector3F_create_2(float a0, float a1, float a2)
        {
            return cor::type::Vector3F(a0, a1, a2);
        }


        
          void BasicBind_bind_func_4(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorSystem", "Logger", "add_print_func_1", BasicBind_cor__system__Logger_add_print_func_1);
            binder.bind_custom_method("CorSystem", "Logger", "add_print_func_2", BasicBind_cor__system__Logger_add_print_func_2);
            binder.bind_custom_method("CorSystem", "Logger", "pop_print_func", BasicBind_cor__system__Logger_pop_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "clear_print_func", BasicBind_cor__system__Logger_clear_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "call_print_func", BasicBind_cor__system__Logger_call_print_func);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_count", BasicBind_cor__system__Logger_get_local_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_debug_count", BasicBind_cor__system__Logger_get_local_debug_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_info_count", BasicBind_cor__system__Logger_get_local_info_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_warn_count", BasicBind_cor__system__Logger_get_local_warn_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_error_count", BasicBind_cor__system__Logger_get_local_error_count);
            binder.bind_custom_method("CorSystem", "Logger", "get_local_fatal_count", BasicBind_cor__system__Logger_get_local_fatal_count);
            binder.bind_static_method("CorSystem", "Logger", "get_count", BasicBind_cor__system__Logger_get_count);
            binder.bind_static_method("CorSystem", "Logger", "get_debug_count", BasicBind_cor__system__Logger_get_debug_count);
            binder.bind_static_method("CorSystem", "Logger", "get_info_count", BasicBind_cor__system__Logger_get_info_count);
            binder.bind_static_method("CorSystem", "Logger", "get_warn_count", BasicBind_cor__system__Logger_get_warn_count);
            binder.bind_static_method("CorSystem", "Logger", "get_error_count", BasicBind_cor__system__Logger_get_error_count);
            binder.bind_static_method("CorSystem", "Logger", "get_fatal_count", BasicBind_cor__system__Logger_get_fatal_count);
            binder.bind_static_method("CorSystem", "Logger", "info", BasicBind_cor__system__Logger_info);
            binder.bind_static_method("CorSystem", "Logger", "debug", BasicBind_cor__system__Logger_debug);
            binder.bind_static_method("CorSystem", "Logger", "warn", BasicBind_cor__system__Logger_warn);
            binder.bind_static_method("CorSystem", "Logger", "error", BasicBind_cor__system__Logger_error);
            binder.bind_static_method("CorSystem", "Logger", "fatal", BasicBind_cor__system__Logger_fatal);
            binder.bind_static_method("CorSystem", "Logger", "get_instance", BasicBind_cor__system__Logger_get_instance);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "test_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_test_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "a=", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_set_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "a", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_get_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "toast", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_toast);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "test_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_test_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "a=", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_set_a);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "a", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_get_a);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create_1", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_1);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create_2", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "get_null", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_get_null);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "recieve", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_recieve);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "test", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_test);
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "tmpl_test", BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_tmpl_test);

          }

    }
}
