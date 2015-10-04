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

        
          void BasicBind_bind_func_3(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "set_max_cost", BasicBind_cor__data_structure__CostGridSpace_set_max_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "set_neighbor_mode", BasicBind_cor__data_structure__CostGridSpace_set_neighbor_mode);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get_neighbor_mode", BasicBind_cor__data_structure__CostGridSpace_get_neighbor_mode);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "resize_1", BasicBind_cor__data_structure__CostGridSpace_resize_1);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "resize_2", BasicBind_cor__data_structure__CostGridSpace_resize_2);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get_size", BasicBind_cor__data_structure__CostGridSpace_get_size);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get_width", BasicBind_cor__data_structure__CostGridSpace_get_width);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get_height", BasicBind_cor__data_structure__CostGridSpace_get_height);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "is_valid", BasicBind_cor__data_structure__CostGridSpace_is_valid);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "set", BasicBind_cor__data_structure__CostGridSpace_set);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get", BasicBind_cor__data_structure__CostGridSpace_get);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "search_nearest_path", BasicBind_cor__data_structure__CostGridSpace_search_nearest_path);
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "get_first_corner", BasicBind_cor__data_structure__CostGridSpace_get_first_corner);
            binder.bind_static_method("CorDataStructure", "SharedPtrTable", "create", BasicBind_cor__data_structure__SharedPtrTable_create);
            binder.bind_custom_method("CorDataStructure", "SharedPtrTable", "set", BasicBind_cor__data_structure__SharedPtrTable_set);
            binder.bind_custom_method("CorDataStructure", "SharedPtrTable", "get", BasicBind_cor__data_structure__SharedPtrTable_get);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_new_count", BasicBind_cor__system__AllocationMonitor_get_new_count);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_delete_count", BasicBind_cor__system__AllocationMonitor_get_delete_count);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_alloc_count", BasicBind_cor__system__AllocationMonitor_get_alloc_count);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_alloc_size", BasicBind_cor__system__AllocationMonitor_get_alloc_size);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_status_text", BasicBind_cor__system__AllocationMonitor_get_status_text);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "set_captured_status", BasicBind_cor__system__AllocationMonitor_set_captured_status);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_captured_status", BasicBind_cor__system__AllocationMonitor_get_captured_status);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "get_captured_data", BasicBind_cor__system__AllocationMonitor_get_captured_data);
            binder.bind_custom_method("CorSystem", "AllocationMonitor", "clear_caputred_data", BasicBind_cor__system__AllocationMonitor_clear_caputred_data);
            binder.bind_static_method("CorSystem", "AllocationMonitor", "get_instance", BasicBind_cor__system__AllocationMonitor_get_instance);
            binder.bind_static_method("CorSystem", "AllocationMonitor", "alloc", BasicBind_cor__system__AllocationMonitor_alloc);
            binder.bind_static_method("CorSystem", "AllocationMonitor", "al_free", BasicBind_cor__system__AllocationMonitor_al_free);
            binder.bind_static_method("CorSystem", "AllocationMonitor", "al_realloc", BasicBind_cor__system__AllocationMonitor_al_realloc);
            binder.bind_static_method("CorSystem", "CorCrypt", "set_enabled", BasicBind_cor__system__CorCrypt_set_enabled);
            binder.bind_static_method("CorSystem", "CorCrypt", "get_enabled", BasicBind_cor__system__CorCrypt_get_enabled);
            binder.bind_static_method("CorSystem", "CorCrypt", "encode", BasicBind_cor__system__CorCrypt_encode);
            binder.bind_static_method("CorSystem", "CorCrypt", "decode", BasicBind_cor__system__CorCrypt_decode);

          }

    }
}
