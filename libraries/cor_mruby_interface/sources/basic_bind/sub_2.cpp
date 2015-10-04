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

        
          void BasicBind_bind_func_2(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::type::Sphere2I >("CorType", "Sphere2I");
            binder.bind_static_method("CorType", "Sphere2I", "create_0", BasicBind_Sphere2I_create_0);
            binder.bind_static_method("CorType", "Sphere2I", "create_1", BasicBind_Sphere2I_create_1);
            binder.bind_class<cor::type::OSphere2F >("CorType", "OSphere2F");
            binder.bind_static_method("CorType", "OSphere2F", "create", BasicBind_OSphere2F_create);
            binder.bind_class<cor::type::OSphere2I >("CorType", "OSphere2I");
            binder.bind_static_method("CorType", "OSphere2I", "create", BasicBind_OSphere2I_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRInt32> >("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "valid?", BasicBind_MrubyExperimentalTemplateStructRInt32_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRInt32", "create", BasicBind_MrubyExperimentalTemplateStructRInt32_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalTemplateStructRString> >("CorMrubyInterface", "MrubyExperimentalTemplateStructRString");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "valid?", BasicBind_MrubyExperimentalTemplateStructRString_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalTemplateStructRString", "create", BasicBind_MrubyExperimentalTemplateStructRString_create);
            binder.bind_class<cor::data_structure::CostGridSpaceItem >("CorDataStructure", "CostGridSpaceItem");
            binder.bind_static_method("CorDataStructure", "CostGridSpaceItem", "create_0", BasicBind_CostGridSpaceItem_create_0);
            binder.bind_class<cor::data_structure::CostGridSpacePath >("CorDataStructure", "CostGridSpacePath");
            binder.bind_static_method("CorDataStructure", "CostGridSpacePath", "create", BasicBind_CostGridSpacePath_create);

          }

    }
}
