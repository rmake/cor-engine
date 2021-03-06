#include "../../cor_type/sources/basic_types.h"
#include "../../cor_type/sources/collision/collision_2d.h"
#include "../../cor_type/sources/collision/collision_2d_tmpl.h"
#include "../../cor_type/sources/cor_type.h"
#include "../../cor_type/sources/math/matrix4x4.h"
#include "../../cor_type/sources/math/matrix4x4_tmpl.h"
#include "../../cor_type/sources/math/vector2.h"
#include "../../cor_type/sources/math/vector2_tmpl.h"
#include "../../cor_type/sources/math/vector3.h"
#include "../../cor_type/sources/math/vector3_tmpl.h"
#include "../../cor_type/sources/math/vector4.h"
#include "../../cor_type/sources/math/vector4_tmpl.h"
#include "../../cor_type/sources/primitive/box.h"
#include "../../cor_type/sources/primitive/box_tmpl.h"
#include "../../cor_type/sources/primitive/o_box.h"
#include "../../cor_type/sources/primitive/o_box_tmpl.h"
#include "../../cor_type/sources/primitive/o_sphere.h"
#include "../../cor_type/sources/primitive/o_sphere_tmpl.h"
#include "../../cor_type/sources/primitive/sphere.h"
#include "../../cor_type/sources/primitive/sphere_tmpl.h"
#include "../../cor_data_structure/sources/ai/cost_grid_space.h"
#include "../../cor_data_structure/sources/ai/cost_grid_space_tmpl.h"
#include "../../cor_data_structure/sources/ai/priority_queue.h"
#include "../../cor_data_structure/sources/ai/priority_queue_tmpl.h"
#include "../../cor_data_structure/sources/ai/stack_decoder.h"
#include "../../cor_data_structure/sources/ai/stack_decoder_tmpl.h"
#include "../../cor_data_structure/sources/array_pool.h"
#include "../../cor_data_structure/sources/array_pool_tmpl.h"
#include "../../cor_data_structure/sources/basic/shared_ptr_table.h"
#include "../../cor_data_structure/sources/geometry/r_tree_pool.h"
#include "../../cor_data_structure/sources/geometry/r_tree_pool_tmpl.h"
#include "../../cor_data_structure/sources/geometry/uniform_grid.h"
#include "../../cor_data_structure/sources/geometry/uniform_grid_tmpl.h"
#include "../../cor_data_structure/sources/tree_pool.h"
#include "../../cor_data_structure/sources/tree_pool_tmpl.h"
#include "../../cor_algorithm/sources/bit_operation.h"
#include "../../cor_algorithm/sources/bit_operation_tmpl.h"
#include "../../cor_algorithm/sources/utilities.h"
#include "../../cor_algorithm/sources/utilities_tmpl.h"
#include "../../cor_system/sources/allocation_monitor.h"
#include "../../cor_system/sources/cor_crypt.h"
#include "../../cor_system/sources/cor_time.h"
#include "../../cor_system/sources/job_queue.h"
#include "../../cor_system/sources/logger.h"
#include "../../cor_system/sources/parallel_processor.h"
#include "../../cor_system/sources/thread_pool.h"
#include "../../cor_mruby_interface/sources/basic_bind.h"
#include "../../cor_mruby_interface/sources/mruby_array.h"
#include "../../cor_mruby_interface/sources/mruby_array_tmpl.h"
#include "../../cor_mruby_interface/sources/mruby_experimental.h"
#include "../../cor_mruby_interface/sources/mruby_ref_container.h"
#include "../../cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/basic_bind.h"

namespace cor
{
    namespace mruby_interface
    {
        
          void BasicBind_bind_func_0(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_1(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_2(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_3(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_4(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_5(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_6(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_7(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_8(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_9(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_10(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_11(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_12(mruby_interface::MrubyState& mrb);
          void BasicBind_bind_func_13(mruby_interface::MrubyState& mrb);

    }
}

