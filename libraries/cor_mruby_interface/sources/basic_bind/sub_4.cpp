#undef __SSE__
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
#undef RELATIVE
#undef ABSOLUTE
#include "cor_mruby_interface/sources/basic_bind.h"

namespace cor
{
    namespace mruby_interface
    {
        
        bool BasicBind_CostGridSpace_valid_question(std::weak_ptr<cor::data_structure::CostGridSpace> c);
        std::weak_ptr<cor::data_structure::CostGridSpace> BasicBind_CostGridSpace_create();
        bool BasicBind_SharedPtrTable_valid_question(std::weak_ptr<cor::data_structure::SharedPtrTable> c);
        bool BasicBind_JobQueue_valid_question(std::weak_ptr<cor::system::JobQueue> c);
        std::weak_ptr<cor::system::JobQueue> BasicBind_JobQueue_create();
        bool BasicBind_MrubyExperimentalBindTestStruct_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> BasicBind_MrubyExperimentalBindTestStruct_create();
        bool BasicBind_MrubyExperimentalBindTestClassInherited_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> BasicBind_MrubyExperimentalBindTestClassInherited_create();
        bool BasicBind_MrubyExperimentalBindTestClass_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_MrubyExperimentalBindTestClass_create_0(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> a0);
        bool BasicBind_MrubyRefContainer_valid_question(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c);
        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_MrubyRefContainer_create_0();
        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_MrubyRefContainer_create_1(mrubybind::MrubyRef a0);
        bool BasicBind_RCharArray_valid_question(std::weak_ptr<cor::RCharArray> c);
        std::weak_ptr<cor::RCharArray> BasicBind_RCharArray_create();
        cor::type::Vector2F BasicBind_Vector2F_create_0();
        cor::type::Vector2F BasicBind_Vector2F_create_1(cor::type::Vector2F a0);
        cor::type::Vector2F BasicBind_Vector2F_create_2(float a0, float a1);
        cor::type::Vector2I BasicBind_Vector2I_create_0();
        cor::type::Vector2I BasicBind_Vector2I_create_1(cor::type::Vector2I a0);
        cor::type::Vector2I BasicBind_Vector2I_create_2(int a0, int a1);
        cor::type::Vector3F BasicBind_Vector3F_create_0();
        cor::type::Vector3F BasicBind_Vector3F_create_1(cor::type::Vector3F a0);
        cor::type::Vector3F BasicBind_Vector3F_create_2(float a0, float a1, float a2);
        cor::type::Vector3I BasicBind_Vector3I_create_0();
        cor::type::Vector3I BasicBind_Vector3I_create_1(cor::type::Vector3I a0);
        cor::type::Vector3I BasicBind_Vector3I_create_2(int a0, int a1, int a2);
        cor::type::Vector4F BasicBind_Vector4F_create_0();
        cor::type::Vector4F BasicBind_Vector4F_create_1(cor::type::Vector4F a0);
        cor::type::Vector4F BasicBind_Vector4F_create_2(float a0, float a1, float a2, float a3);
        cor::type::Vector4I BasicBind_Vector4I_create_0();
        cor::type::Vector4I BasicBind_Vector4I_create_1(cor::type::Vector4I a0);
        cor::type::Vector4I BasicBind_Vector4I_create_2(int a0, int a1, int a2, int a3);
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_0();
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_1(cor::type::Matrix4x4F a0);
        cor::type::Matrix4x4F BasicBind_Matrix4x4F_create_2(float a0, float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15);
        cor::type::Box2F BasicBind_Box2F_create_0();
        cor::type::Box2F BasicBind_Box2F_create_1(cor::type::Vector2F a0, cor::type::Vector2F a1);
        cor::type::Box2F BasicBind_Box2F_create_2(float a0, float a1, float a2, float a3);
        cor::type::Box2I BasicBind_Box2I_create_0();
        cor::type::Box2I BasicBind_Box2I_create_1(cor::type::Vector2I a0, cor::type::Vector2I a1);
        cor::type::Box2I BasicBind_Box2I_create_2(int a0, int a1, int a2, int a3);
        cor::type::OBox2F BasicBind_OBox2F_create();
        cor::type::OBox2I BasicBind_OBox2I_create();
        cor::type::Sphere2F BasicBind_Sphere2F_create_0();
        cor::type::Sphere2F BasicBind_Sphere2F_create_1(cor::type::Vector2F a0, float a1);
        cor::type::Sphere2I BasicBind_Sphere2I_create_0();
        cor::type::Sphere2I BasicBind_Sphere2I_create_1(cor::type::Vector2I a0, int a1);
        cor::type::OSphere2F BasicBind_OSphere2F_create();
        cor::type::OSphere2I BasicBind_OSphere2I_create();
        bool BasicBind_MrubyExperimentalTemplateStructRInt32_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> BasicBind_MrubyExperimentalTemplateStructRInt32_create();
        bool BasicBind_MrubyExperimentalTemplateStructRString_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> BasicBind_MrubyExperimentalTemplateStructRString_create();
        cor::data_structure::CostGridSpaceItem BasicBind_CostGridSpaceItem_create_0();
        cor::data_structure::CostGridSpacePath BasicBind_CostGridSpacePath_create();
        void BasicBind_cor__data_structure__CostGridSpace_set_max_cost(std::weak_ptr<cor::data_structure::CostGridSpace> c, float a0);
        void BasicBind_cor__data_structure__CostGridSpace_set_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0);
        cor::data_structure::CostGridSpaceNeighborMode::Enum BasicBind_cor__data_structure__CostGridSpace_get_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c);
        void BasicBind_cor__data_structure__CostGridSpace_resize_1(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0);
        void BasicBind_cor__data_structure__CostGridSpace_resize_2(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0, int a1);
        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_size(std::weak_ptr<cor::data_structure::CostGridSpace> c);
        int BasicBind_cor__data_structure__CostGridSpace_get_width(std::weak_ptr<cor::data_structure::CostGridSpace> c);
        int BasicBind_cor__data_structure__CostGridSpace_get_height(std::weak_ptr<cor::data_structure::CostGridSpace> c);
        bool BasicBind_cor__data_structure__CostGridSpace_is_valid(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0);
        void BasicBind_cor__data_structure__CostGridSpace_set(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0, cor::data_structure::CostGridSpaceItem a1);
        cor::data_structure::CostGridSpaceItem BasicBind_cor__data_structure__CostGridSpace_get(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0);
        cor::data_structure::CostGridSpacePath BasicBind_cor__data_structure__CostGridSpace_search_nearest_path(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0);
        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_first_corner(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::data_structure::CostGridSpacePath a0);
        std::weak_ptr<cor::data_structure::SharedPtrTable> BasicBind_cor__data_structure__SharedPtrTable_create();
        void BasicBind_cor__data_structure__SharedPtrTable_set(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::basic_string<char> a0, cor::mruby_interface::AnyWP a1);
        cor::mruby_interface::AnyWP BasicBind_cor__data_structure__SharedPtrTable_get(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::basic_string<char> a0);
        int BasicBind_cor__system__JobQueue_empty(std::weak_ptr<cor::system::JobQueue> c);
        void BasicBind_cor__system__JobQueue_add_job(std::weak_ptr<cor::system::JobQueue> c, mrubybind::FuncPtr<void ()> a0);
        void BasicBind_cor__system__JobQueue_step(std::weak_ptr<cor::system::JobQueue> c);
        void BasicBind_cor__system__Logger_add_print_func_1(cor::system::Logger* c, mrubybind::FuncPtr<void (int, const std::basic_string<char> &)> a0);
        void BasicBind_cor__system__Logger_add_print_func_2(cor::system::Logger* c, std::basic_string<char> a0, mrubybind::FuncPtr<void (int, const std::basic_string<char> &)> a1);
        void BasicBind_cor__system__Logger_pop_print_func(cor::system::Logger* c);
        void BasicBind_cor__system__Logger_clear_print_func(cor::system::Logger* c, mrubybind::FuncPtr<void (int, const std::basic_string<char> &)> a0);
        void BasicBind_cor__system__Logger_call_print_func(cor::system::Logger* c, int a0, std::basic_string<char> a1);
        void BasicBind_cor__system__Logger_info(std::basic_string<char> a0);
        void BasicBind_cor__system__Logger_debug(std::basic_string<char> a0);
        void BasicBind_cor__system__Logger_warn(std::basic_string<char> a0);
        void BasicBind_cor__system__Logger_error(std::basic_string<char> a0);
        void BasicBind_cor__system__Logger_fatal(std::basic_string<char> a0);
        cor::system::Logger* BasicBind_cor__system__Logger_get_instance();
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c);
        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c, int a);
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c);
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_toast(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c);
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c);
        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c, int a);
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_1();
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_2(std::basic_string<char> a0);
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_get_null(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c);
        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_recieve(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> a0);
        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c);
        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_tmpl_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::RCharArray> a0);
        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_1();
        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_2(mrubybind::MrubyRef a0);
        void BasicBind_cor__mruby_interface__MrubyRefContainer_set_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c, mrubybind::MrubyRef a0);
        mrubybind::MrubyRef BasicBind_cor__mruby_interface__MrubyRefContainer_get_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c);
        void BasicBind_cor__RCharArray_begin_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_begin_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_end_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_end_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_rbegin_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_rbegin_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_rend_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_rend_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_cbegin(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_cend(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_crbegin(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_crend(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_size(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_max_size(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_shrink_to_fit(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_capacity(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_empty(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_front_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_front_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_back_1(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_back_2(std::weak_ptr<cor::RCharArray> c);
        char* BasicBind_cor__RCharArray_data_1(std::weak_ptr<cor::RCharArray> c);
        const char* BasicBind_cor__RCharArray_data_2(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_pop_back(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__RCharArray_clear(std::weak_ptr<cor::RCharArray> c);
        void BasicBind_cor__mruby_interface__AnyWP_lock(cor::mruby_interface::AnyWP& c);
        void BasicBind_cor__type__Vector2F_set(cor::type::Vector2F& c, float a0, float a1);
        void BasicBind_cor__type__Vector2F_begin_1(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_end_1(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_begin_2(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_end_2(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_size(cor::type::Vector2F& c);
        float* BasicBind_cor__type__Vector2F_get_p_1(cor::type::Vector2F& c);
        const float* BasicBind_cor__type__Vector2F_get_p_2(cor::type::Vector2F& c);
        float BasicBind_cor__type__Vector2F_get_square_magnitude(cor::type::Vector2F& c);
        float BasicBind_cor__type__Vector2F_get_magnitude(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_normalize(cor::type::Vector2F& c);
        float BasicBind_cor__type__Vector2F_dot(cor::type::Vector2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Vector2F_cross(cor::type::Vector2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Vector2F_distance(cor::type::Vector2F& c, cor::type::Vector2F a0);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_zero();
        cor::type::Vector2F BasicBind_cor__type__Vector2F_one();
        cor::type::Vector2F BasicBind_cor__type__Vector2F_max_vec(cor::type::Vector2F& c, cor::type::Vector2F a0);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_min_vec(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_all_less(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_some_less(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_all_greater(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_some_greater(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_all_less_equal(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_some_less_equal(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_all_greater_equal(cor::type::Vector2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Vector2F_some_greater_equal(cor::type::Vector2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Vector2F_sum(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_accessor_set_x(cor::type::Vector2F& c, float a);
        float BasicBind_cor__type__Vector2F_accessor_get_x(cor::type::Vector2F& c);
        void BasicBind_cor__type__Vector2F_accessor_set_y(cor::type::Vector2F& c, float a);
        float BasicBind_cor__type__Vector2F_accessor_get_y(cor::type::Vector2F& c);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__asterisk__0(cor::type::Vector2F & a0, float a1);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__plus__0(cor::type::Vector2F & a0, cor::type::Vector2F a1);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__minus__0(cor::type::Vector2F & a0, cor::type::Vector2F a1);
        cor::type::Vector2F BasicBind_cor__type__Vector2F_operator__minus_self__0(cor::type::Vector2F & a0);
        float BasicBind_cor__type__Vector2F_operator__brackets__0(cor::type::Vector2F & a0, int a1);
        float BasicBind_cor__type__Vector2F_operator__brackets_equal__0(cor::type::Vector2F & a0, int a1, float a2);
        void BasicBind_cor__type__Vector2I_set(cor::type::Vector2I& c, int a0, int a1);
        void BasicBind_cor__type__Vector2I_begin_1(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_end_1(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_begin_2(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_end_2(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_size(cor::type::Vector2I& c);
        int* BasicBind_cor__type__Vector2I_get_p_1(cor::type::Vector2I& c);
        const int* BasicBind_cor__type__Vector2I_get_p_2(cor::type::Vector2I& c);
        int BasicBind_cor__type__Vector2I_get_square_magnitude(cor::type::Vector2I& c);
        int BasicBind_cor__type__Vector2I_get_magnitude(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_normalize(cor::type::Vector2I& c);
        int BasicBind_cor__type__Vector2I_dot(cor::type::Vector2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Vector2I_cross(cor::type::Vector2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Vector2I_distance(cor::type::Vector2I& c, cor::type::Vector2I a0);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_zero();
        cor::type::Vector2I BasicBind_cor__type__Vector2I_one();
        cor::type::Vector2I BasicBind_cor__type__Vector2I_max_vec(cor::type::Vector2I& c, cor::type::Vector2I a0);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_min_vec(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_all_less(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_some_less(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_all_greater(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_some_greater(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_all_less_equal(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_some_less_equal(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_all_greater_equal(cor::type::Vector2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Vector2I_some_greater_equal(cor::type::Vector2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Vector2I_sum(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_accessor_set_x(cor::type::Vector2I& c, int a);
        int BasicBind_cor__type__Vector2I_accessor_get_x(cor::type::Vector2I& c);
        void BasicBind_cor__type__Vector2I_accessor_set_y(cor::type::Vector2I& c, int a);
        int BasicBind_cor__type__Vector2I_accessor_get_y(cor::type::Vector2I& c);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__asterisk__0(cor::type::Vector2I & a0, int a1);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__plus__0(cor::type::Vector2I & a0, cor::type::Vector2I a1);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__minus__0(cor::type::Vector2I & a0, cor::type::Vector2I a1);
        cor::type::Vector2I BasicBind_cor__type__Vector2I_operator__minus_self__0(cor::type::Vector2I & a0);
        int BasicBind_cor__type__Vector2I_operator__brackets__0(cor::type::Vector2I & a0, int a1);
        int BasicBind_cor__type__Vector2I_operator__brackets_equal__0(cor::type::Vector2I & a0, int a1, int a2);
        void BasicBind_cor__type__Vector3F_set(cor::type::Vector3F& c, float a0, float a1, float a2);
        void BasicBind_cor__type__Vector3F_begin_1(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_end_1(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_begin_2(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_end_2(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_size(cor::type::Vector3F& c);
        float* BasicBind_cor__type__Vector3F_get_p_1(cor::type::Vector3F& c);
        const float* BasicBind_cor__type__Vector3F_get_p_2(cor::type::Vector3F& c);
        float BasicBind_cor__type__Vector3F_get_square_magnitude(cor::type::Vector3F& c);
        float BasicBind_cor__type__Vector3F_get_magnitude(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_xy_1(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_xy_2(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_normalize(cor::type::Vector3F& c);
        float BasicBind_cor__type__Vector3F_dot(cor::type::Vector3F& c, cor::type::Vector3F a0);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_cross(cor::type::Vector3F& c, cor::type::Vector3F a0);
        float BasicBind_cor__type__Vector3F_distance(cor::type::Vector3F& c, cor::type::Vector3F a0);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_zero();
        cor::type::Vector3F BasicBind_cor__type__Vector3F_one();
        cor::type::Vector3F BasicBind_cor__type__Vector3F_max_vec(cor::type::Vector3F& c, cor::type::Vector3F a0);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_min_vec(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_all_less(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_some_less(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_all_greater(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_some_greater(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_all_less_equal(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_some_less_equal(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_all_greater_equal(cor::type::Vector3F& c, cor::type::Vector3F a0);
        void BasicBind_cor__type__Vector3F_some_greater_equal(cor::type::Vector3F& c, cor::type::Vector3F a0);
        float BasicBind_cor__type__Vector3F_sum(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_accessor_set_x(cor::type::Vector3F& c, float a);
        float BasicBind_cor__type__Vector3F_accessor_get_x(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_accessor_set_y(cor::type::Vector3F& c, float a);
        float BasicBind_cor__type__Vector3F_accessor_get_y(cor::type::Vector3F& c);
        void BasicBind_cor__type__Vector3F_accessor_set_z(cor::type::Vector3F& c, float a);
        float BasicBind_cor__type__Vector3F_accessor_get_z(cor::type::Vector3F& c);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__asterisk__0(cor::type::Vector3F & a0, float a1);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__plus__0(cor::type::Vector3F & a0, cor::type::Vector3F a1);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__minus__0(cor::type::Vector3F & a0, cor::type::Vector3F a1);
        cor::type::Vector3F BasicBind_cor__type__Vector3F_operator__minus_self__0(cor::type::Vector3F & a0);
        float BasicBind_cor__type__Vector3F_operator__brackets__0(cor::type::Vector3F & a0, int a1);
        float BasicBind_cor__type__Vector3F_operator__brackets_equal__0(cor::type::Vector3F & a0, int a1, float a2);
        void BasicBind_cor__type__Vector3I_set(cor::type::Vector3I& c, int a0, int a1, int a2);
        void BasicBind_cor__type__Vector3I_begin_1(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_end_1(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_begin_2(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_end_2(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_size(cor::type::Vector3I& c);
        int* BasicBind_cor__type__Vector3I_get_p_1(cor::type::Vector3I& c);
        const int* BasicBind_cor__type__Vector3I_get_p_2(cor::type::Vector3I& c);
        int BasicBind_cor__type__Vector3I_get_square_magnitude(cor::type::Vector3I& c);
        int BasicBind_cor__type__Vector3I_get_magnitude(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_xy_1(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_xy_2(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_normalize(cor::type::Vector3I& c);
        int BasicBind_cor__type__Vector3I_dot(cor::type::Vector3I& c, cor::type::Vector3I a0);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_cross(cor::type::Vector3I& c, cor::type::Vector3I a0);
        int BasicBind_cor__type__Vector3I_distance(cor::type::Vector3I& c, cor::type::Vector3I a0);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_zero();
        cor::type::Vector3I BasicBind_cor__type__Vector3I_one();
        cor::type::Vector3I BasicBind_cor__type__Vector3I_max_vec(cor::type::Vector3I& c, cor::type::Vector3I a0);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_min_vec(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_all_less(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_some_less(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_all_greater(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_some_greater(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_all_less_equal(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_some_less_equal(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_all_greater_equal(cor::type::Vector3I& c, cor::type::Vector3I a0);
        void BasicBind_cor__type__Vector3I_some_greater_equal(cor::type::Vector3I& c, cor::type::Vector3I a0);
        int BasicBind_cor__type__Vector3I_sum(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_accessor_set_x(cor::type::Vector3I& c, int a);
        int BasicBind_cor__type__Vector3I_accessor_get_x(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_accessor_set_y(cor::type::Vector3I& c, int a);
        int BasicBind_cor__type__Vector3I_accessor_get_y(cor::type::Vector3I& c);
        void BasicBind_cor__type__Vector3I_accessor_set_z(cor::type::Vector3I& c, int a);
        int BasicBind_cor__type__Vector3I_accessor_get_z(cor::type::Vector3I& c);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__asterisk__0(cor::type::Vector3I & a0, int a1);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__plus__0(cor::type::Vector3I & a0, cor::type::Vector3I a1);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__minus__0(cor::type::Vector3I & a0, cor::type::Vector3I a1);
        cor::type::Vector3I BasicBind_cor__type__Vector3I_operator__minus_self__0(cor::type::Vector3I & a0);
        int BasicBind_cor__type__Vector3I_operator__brackets__0(cor::type::Vector3I & a0, int a1);
        int BasicBind_cor__type__Vector3I_operator__brackets_equal__0(cor::type::Vector3I & a0, int a1, int a2);
        void BasicBind_cor__type__Vector4F_set(cor::type::Vector4F& c, float a0, float a1, float a2, float a3);
        void BasicBind_cor__type__Vector4F_begin_1(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_end_1(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_begin_2(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_end_2(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_size(cor::type::Vector4F& c);
        float* BasicBind_cor__type__Vector4F_get_p_1(cor::type::Vector4F& c);
        const float* BasicBind_cor__type__Vector4F_get_p_2(cor::type::Vector4F& c);
        float BasicBind_cor__type__Vector4F_get_square_magnitude(cor::type::Vector4F& c);
        float BasicBind_cor__type__Vector4F_get_magnitude(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_xy_1(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_xy_2(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_xyz_1(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_xyz_2(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_normalize(cor::type::Vector4F& c);
        float BasicBind_cor__type__Vector4F_dot(cor::type::Vector4F& c, cor::type::Vector4F a0);
        float BasicBind_cor__type__Vector4F_distance(cor::type::Vector4F& c, cor::type::Vector4F a0);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_zero();
        cor::type::Vector4F BasicBind_cor__type__Vector4F_one();
        cor::type::Vector4F BasicBind_cor__type__Vector4F_max_vec(cor::type::Vector4F& c, cor::type::Vector4F a0);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_min_vec(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_all_less(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_some_less(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_all_greater(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_some_greater(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_all_less_equal(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_some_less_equal(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_all_greater_equal(cor::type::Vector4F& c, cor::type::Vector4F a0);
        void BasicBind_cor__type__Vector4F_some_greater_equal(cor::type::Vector4F& c, cor::type::Vector4F a0);
        float BasicBind_cor__type__Vector4F_sum(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_accessor_set_x(cor::type::Vector4F& c, float a);
        float BasicBind_cor__type__Vector4F_accessor_get_x(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_accessor_set_y(cor::type::Vector4F& c, float a);
        float BasicBind_cor__type__Vector4F_accessor_get_y(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_accessor_set_z(cor::type::Vector4F& c, float a);
        float BasicBind_cor__type__Vector4F_accessor_get_z(cor::type::Vector4F& c);
        void BasicBind_cor__type__Vector4F_accessor_set_w(cor::type::Vector4F& c, float a);
        float BasicBind_cor__type__Vector4F_accessor_get_w(cor::type::Vector4F& c);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__asterisk__0(cor::type::Vector4F & a0, float a1);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__plus__0(cor::type::Vector4F & a0, cor::type::Vector4F a1);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__minus__0(cor::type::Vector4F & a0, cor::type::Vector4F a1);
        cor::type::Vector4F BasicBind_cor__type__Vector4F_operator__minus_self__0(cor::type::Vector4F & a0);
        float BasicBind_cor__type__Vector4F_operator__brackets__0(cor::type::Vector4F & a0, int a1);
        float BasicBind_cor__type__Vector4F_operator__brackets_equal__0(cor::type::Vector4F & a0, int a1, float a2);
        void BasicBind_cor__type__Vector4I_set(cor::type::Vector4I& c, int a0, int a1, int a2, int a3);
        void BasicBind_cor__type__Vector4I_begin_1(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_end_1(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_begin_2(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_end_2(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_size(cor::type::Vector4I& c);
        int* BasicBind_cor__type__Vector4I_get_p_1(cor::type::Vector4I& c);
        const int* BasicBind_cor__type__Vector4I_get_p_2(cor::type::Vector4I& c);
        int BasicBind_cor__type__Vector4I_get_square_magnitude(cor::type::Vector4I& c);
        int BasicBind_cor__type__Vector4I_get_magnitude(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_xy_1(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_xy_2(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_xyz_1(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_xyz_2(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_normalize(cor::type::Vector4I& c);
        int BasicBind_cor__type__Vector4I_dot(cor::type::Vector4I& c, cor::type::Vector4I a0);
        int BasicBind_cor__type__Vector4I_distance(cor::type::Vector4I& c, cor::type::Vector4I a0);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_zero();
        cor::type::Vector4I BasicBind_cor__type__Vector4I_one();
        cor::type::Vector4I BasicBind_cor__type__Vector4I_max_vec(cor::type::Vector4I& c, cor::type::Vector4I a0);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_min_vec(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_all_less(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_some_less(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_all_greater(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_some_greater(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_all_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_some_less_equal(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_all_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0);
        void BasicBind_cor__type__Vector4I_some_greater_equal(cor::type::Vector4I& c, cor::type::Vector4I a0);
        int BasicBind_cor__type__Vector4I_sum(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_accessor_set_x(cor::type::Vector4I& c, int a);
        int BasicBind_cor__type__Vector4I_accessor_get_x(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_accessor_set_y(cor::type::Vector4I& c, int a);
        int BasicBind_cor__type__Vector4I_accessor_get_y(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_accessor_set_z(cor::type::Vector4I& c, int a);
        int BasicBind_cor__type__Vector4I_accessor_get_z(cor::type::Vector4I& c);
        void BasicBind_cor__type__Vector4I_accessor_set_w(cor::type::Vector4I& c, int a);
        int BasicBind_cor__type__Vector4I_accessor_get_w(cor::type::Vector4I& c);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__asterisk__0(cor::type::Vector4I & a0, int a1);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__plus__0(cor::type::Vector4I & a0, cor::type::Vector4I a1);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__minus__0(cor::type::Vector4I & a0, cor::type::Vector4I a1);
        cor::type::Vector4I BasicBind_cor__type__Vector4I_operator__minus_self__0(cor::type::Vector4I & a0);
        int BasicBind_cor__type__Vector4I_operator__brackets__0(cor::type::Vector4I & a0, int a1);
        int BasicBind_cor__type__Vector4I_operator__brackets_equal__0(cor::type::Vector4I & a0, int a1, int a2);
        void BasicBind_cor__type__Matrix4x4F_begin_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_end_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_begin_2(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_end_2(cor::type::Matrix4x4F& c);
        float* BasicBind_cor__type__Matrix4x4F_get_array(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_x_vec_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_x_vec_2(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_y_vec_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_y_vec_2(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_z_vec_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_z_vec_2(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_o_vec_1(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_get_o_vec_2(cor::type::Matrix4x4F& c);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_x(float a0);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_y(float a0);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_rot_z(float a0);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_translate(float a0, float a1, float a2);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_scale(float a0, float a1, float a2);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_ortho_matrix(float a0, float a1, float a2, float a3, float a4, float a5);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse(cor::type::Matrix4x4F a0);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse_2(cor::type::Matrix4x4F& c);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose_inverse_3(cor::type::Matrix4x4F& c);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_affine_inverse(cor::type::Matrix4x4F a0);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_affine_inverse_2(cor::type::Matrix4x4F& c);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_affine_inverse_3(cor::type::Matrix4x4F& c);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_transpose(cor::type::Matrix4x4F& c);
        void BasicBind_cor__type__Matrix4x4F_equal(cor::type::Matrix4x4F& c, cor::type::Matrix4x4F a0, float a1);
        cor::type::Matrix4x4F BasicBind_cor__type__Matrix4x4F_operator__asterisk__0(cor::type::Matrix4x4F & a0, cor::type::Matrix4x4F a1);
        void BasicBind_cor__type__Box2F_set_1(cor::type::Box2F& c, cor::type::Vector2F a0, cor::type::Vector2F a1);
        void BasicBind_cor__type__Box2F_set_2(cor::type::Box2F& c, float a0, float a1, float a2, float a3);
        cor::type::Vector2F BasicBind_cor__type__Box2F_get_max(cor::type::Box2F& c);
        void BasicBind_cor__type__Box2F_set_max(cor::type::Box2F& c, cor::type::Vector2F a0);
        cor::type::Vector2F BasicBind_cor__type__Box2F_get_center(cor::type::Box2F& c);
        void BasicBind_cor__type__Box2F_is_include(cor::type::Box2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Box2F_get_distance(cor::type::Box2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Box2F_get_width_size(cor::type::Box2F& c);
        void BasicBind_cor__type__Box2F_accessor_set_p(cor::type::Box2F& c, cor::type::Vector2F a);
        cor::type::Vector2F BasicBind_cor__type__Box2F_accessor_get_p(cor::type::Box2F& c);
        void BasicBind_cor__type__Box2F_accessor_set_w(cor::type::Box2F& c, cor::type::Vector2F a);
        cor::type::Vector2F BasicBind_cor__type__Box2F_accessor_get_w(cor::type::Box2F& c);
        void BasicBind_cor__type__Box2I_set_1(cor::type::Box2I& c, cor::type::Vector2I a0, cor::type::Vector2I a1);
        void BasicBind_cor__type__Box2I_set_2(cor::type::Box2I& c, int a0, int a1, int a2, int a3);
        cor::type::Vector2I BasicBind_cor__type__Box2I_get_max(cor::type::Box2I& c);
        void BasicBind_cor__type__Box2I_set_max(cor::type::Box2I& c, cor::type::Vector2I a0);
        cor::type::Vector2I BasicBind_cor__type__Box2I_get_center(cor::type::Box2I& c);
        void BasicBind_cor__type__Box2I_is_include(cor::type::Box2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Box2I_get_distance(cor::type::Box2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Box2I_get_width_size(cor::type::Box2I& c);
        void BasicBind_cor__type__Box2I_accessor_set_p(cor::type::Box2I& c, cor::type::Vector2I a);
        cor::type::Vector2I BasicBind_cor__type__Box2I_accessor_get_p(cor::type::Box2I& c);
        void BasicBind_cor__type__Box2I_accessor_set_w(cor::type::Box2I& c, cor::type::Vector2I a);
        cor::type::Vector2I BasicBind_cor__type__Box2I_accessor_get_w(cor::type::Box2I& c);
        void BasicBind_cor__type__OBox2F_is_include(cor::type::OBox2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__OBox2F_get_distance(cor::type::OBox2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__OBox2F_get_vertices(cor::type::OBox2F& c);
        void BasicBind_cor__type__OBox2F_get_aabb(cor::type::OBox2F& c);
        void BasicBind_cor__type__OBox2I_is_include(cor::type::OBox2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__OBox2I_get_distance(cor::type::OBox2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__OBox2I_get_vertices(cor::type::OBox2I& c);
        void BasicBind_cor__type__OBox2I_get_aabb(cor::type::OBox2I& c);
        void BasicBind_cor__type__Sphere2F_set(cor::type::Sphere2F& c, cor::type::Vector2F a0, float a1);
        void BasicBind_cor__type__Sphere2F_is_include_point(cor::type::Sphere2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__Sphere2F_get_distance(cor::type::Sphere2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__Sphere2F_accessor_set_p(cor::type::Sphere2F& c, cor::type::Vector2F a);
        cor::type::Vector2F BasicBind_cor__type__Sphere2F_accessor_get_p(cor::type::Sphere2F& c);
        void BasicBind_cor__type__Sphere2F_accessor_set_r(cor::type::Sphere2F& c, float a);
        float BasicBind_cor__type__Sphere2F_accessor_get_r(cor::type::Sphere2F& c);
        void BasicBind_cor__type__Sphere2I_set(cor::type::Sphere2I& c, cor::type::Vector2I a0, int a1);
        void BasicBind_cor__type__Sphere2I_is_include_point(cor::type::Sphere2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__Sphere2I_get_distance(cor::type::Sphere2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__Sphere2I_accessor_set_p(cor::type::Sphere2I& c, cor::type::Vector2I a);
        cor::type::Vector2I BasicBind_cor__type__Sphere2I_accessor_get_p(cor::type::Sphere2I& c);
        void BasicBind_cor__type__Sphere2I_accessor_set_r(cor::type::Sphere2I& c, int a);
        int BasicBind_cor__type__Sphere2I_accessor_get_r(cor::type::Sphere2I& c);
        void BasicBind_cor__type__OSphere2F_is_include(cor::type::OSphere2F& c, cor::type::Vector2F a0);
        float BasicBind_cor__type__OSphere2F_get_distance(cor::type::OSphere2F& c, cor::type::Vector2F a0);
        void BasicBind_cor__type__OSphere2F_get_draw_vertices(cor::type::OSphere2F& c);
        void BasicBind_cor__type__OSphere2F_get_box(cor::type::OSphere2F& c);
        void BasicBind_cor__type__OSphere2I_is_include(cor::type::OSphere2I& c, cor::type::Vector2I a0);
        int BasicBind_cor__type__OSphere2I_get_distance(cor::type::OSphere2I& c, cor::type::Vector2I a0);
        void BasicBind_cor__type__OSphere2I_get_draw_vertices(cor::type::OSphere2I& c);
        void BasicBind_cor__type__OSphere2I_get_box(cor::type::OSphere2I& c);
        int BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add(int a0, int a1);
        int BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_add2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c, int a0, int a1, int a2);
        void BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRInt32_set_n(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> c, int a0);
        std::basic_string<char> BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add(std::basic_string<char> a0, std::basic_string<char> a1);
        std::basic_string<char> BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_add2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c, std::basic_string<char> a0, std::basic_string<char> a1, std::basic_string<char> a2);
        void BasicBind_cor__mruby_interface__MrubyExperimentalTemplateStructRString_set_n(std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> c, std::basic_string<char> a0);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_terminated(cor::data_structure::CostGridSpaceItem& c, int a);
        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_terminated(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passable(cor::data_structure::CostGridSpaceItem& c, int a);
        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passable(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_enter_cost(cor::data_structure::CostGridSpaceItem& c, float a);
        float BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_enter_cost(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_passed(cor::data_structure::CostGridSpaceItem& c, int a);
        int BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_passed(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_min_cost(cor::data_structure::CostGridSpaceItem& c, float a);
        float BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_min_cost(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_parent(cor::data_structure::CostGridSpaceItem& c, cor::type::Vector2I a);
        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_parent(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpaceItem_accessor_set_any(cor::data_structure::CostGridSpaceItem& c, cor::mruby_interface::AnyWP a);
        cor::mruby_interface::AnyWP BasicBind_cor__data_structure__CostGridSpaceItem_accessor_get_any(cor::data_structure::CostGridSpaceItem& c);
        void BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_cost(cor::data_structure::CostGridSpacePath& c, float a);
        float BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_cost(cor::data_structure::CostGridSpacePath& c);
        void BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_path(cor::data_structure::CostGridSpacePath& c, MrubyRef a);
        MrubyRef BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_path(cor::data_structure::CostGridSpacePath& c);

    
        
          void BasicBind_bind_func_4(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
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
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_1", BasicBind_cor__mruby_interface__MrubyRefContainer_create_1);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_2", BasicBind_cor__mruby_interface__MrubyRefContainer_create_2);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "set_value", BasicBind_cor__mruby_interface__MrubyRefContainer_set_value);
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "get_value", BasicBind_cor__mruby_interface__MrubyRefContainer_get_value);

          }

    }
}
