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

        
          void BasicBind_bind_func_10(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
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
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "cost=", BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "cost", BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_cost);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "path=", BasicBind_cor__data_structure__CostGridSpacePath_accessor_set_path);
            binder.bind_custom_method("CorDataStructure", "CostGridSpacePath", "path", BasicBind_cor__data_structure__CostGridSpacePath_accessor_get_path);

          }

    }
}
