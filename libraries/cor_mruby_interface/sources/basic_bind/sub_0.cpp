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

        
          void BasicBind_bind_func_0(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<std::weak_ptr<cor::data_structure::CostGridSpace> >("CorDataStructure", "CostGridSpace");
            binder.bind_custom_method("CorDataStructure", "CostGridSpace", "valid?", BasicBind_CostGridSpace_valid_question);
            binder.bind_static_method("CorDataStructure", "CostGridSpace", "create", BasicBind_CostGridSpace_create);
            binder.bind_class<std::weak_ptr<cor::data_structure::SharedPtrTable> >("CorDataStructure", "SharedPtrTable");
            binder.bind_custom_method("CorDataStructure", "SharedPtrTable", "valid?", BasicBind_SharedPtrTable_valid_question);
            binder.bind_class<cor::system::AllocationMonitor* >("CorSystem", "AllocationMonitor");
            binder.bind_class<cor::system::CorCrypt* >("CorSystem", "CorCrypt");
            binder.bind_class<std::weak_ptr<cor::system::JobQueue> >("CorSystem", "JobQueue");
            binder.bind_custom_method("CorSystem", "JobQueue", "valid?", BasicBind_JobQueue_valid_question);
            binder.bind_static_method("CorSystem", "JobQueue", "create", BasicBind_JobQueue_create);
            binder.bind_class<cor::system::Logger* >("CorSystem", "Logger");
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> >("CorMrubyInterface", "MrubyExperimentalBindTestStruct");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "valid?", BasicBind_MrubyExperimentalBindTestStruct_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestStruct", "create", BasicBind_MrubyExperimentalBindTestStruct_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> >("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "valid?", BasicBind_MrubyExperimentalBindTestClassInherited_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClassInherited", "create", BasicBind_MrubyExperimentalBindTestClassInherited_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> >("CorMrubyInterface", "MrubyExperimentalBindTestClass");
            binder.bind_custom_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "valid?", BasicBind_MrubyExperimentalBindTestClass_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyExperimentalBindTestClass", "create", BasicBind_MrubyExperimentalBindTestClass_create);
            binder.bind_class<std::weak_ptr<cor::mruby_interface::MrubyRefContainer> >("CorMrubyInterface", "MrubyRefContainer");
            binder.bind_custom_method("CorMrubyInterface", "MrubyRefContainer", "valid?", BasicBind_MrubyRefContainer_valid_question);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_0", BasicBind_MrubyRefContainer_create_0);
            binder.bind_static_method("CorMrubyInterface", "MrubyRefContainer", "create_1", BasicBind_MrubyRefContainer_create_1);
            binder.bind_class<std::weak_ptr<cor::RCharArray> >("Cor", "RCharArray");
            binder.bind_custom_method("Cor", "RCharArray", "valid?", BasicBind_RCharArray_valid_question);
            binder.bind_static_method("Cor", "RCharArray", "create_0", BasicBind_RCharArray_create_0);
            binder.bind_static_method("Cor", "RCharArray", "create_1", BasicBind_RCharArray_create_1);
            binder.bind_class<cor::mruby_interface::AnyWP >("CorMrubyInterface", "AnyWP");

          }

    }
}
