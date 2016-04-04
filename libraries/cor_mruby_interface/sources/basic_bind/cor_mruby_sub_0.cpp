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
        
        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c, int a)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->a = a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestStruct_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_toast(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->toast();
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_test_2(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_set_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c, int a)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->a = a;
        }

        int BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClassInherited_accessor_get_a(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->a;
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyExperimentalBindTestClass::create());
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_create_2(std::string a0)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyExperimentalBindTestClass::create(a0));
        }

        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_get_null(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(tmp_c->get_null());
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_recieve(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->recieve(*a0.lock().get());
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->test();
        }

        void BasicBind_cor__mruby_interface__MrubyExperimentalBindTestClass_tmpl_test(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c, std::weak_ptr<cor::RCharArray> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->tmpl_test(*a0.lock().get());
        }

        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_1()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyRefContainer::create());
        }

        std::weak_ptr<cor::mruby_interface::MrubyRefContainer> BasicBind_cor__mruby_interface__MrubyRefContainer_create_2(mrubybind::MrubyRef a0)
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::mruby_interface::MrubyRefContainer::create(a0));
        }

        void BasicBind_cor__mruby_interface__MrubyRefContainer_set_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c, mrubybind::MrubyRef a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_value(a0);
        }

        mrubybind::MrubyRef BasicBind_cor__mruby_interface__MrubyRefContainer_get_value(std::weak_ptr<cor::mruby_interface::MrubyRefContainer> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_value();
        }

        void BasicBind_cor__RCharArray_capacity(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->capacity();
        }

        void BasicBind_cor__RCharArray_begin_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->begin();
        }

        void BasicBind_cor__RCharArray_begin_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->begin();
        }

        void BasicBind_cor__RCharArray_end_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->end();
        }

        void BasicBind_cor__RCharArray_end_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->end();
        }

        void BasicBind_cor__RCharArray_rbegin_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rbegin();
        }

        void BasicBind_cor__RCharArray_rbegin_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rbegin();
        }

        void BasicBind_cor__RCharArray_rend_1(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rend();
        }

        void BasicBind_cor__RCharArray_rend_2(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->rend();
        }

        void BasicBind_cor__RCharArray_cbegin(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->cbegin();
        }

        void BasicBind_cor__RCharArray_cend(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->cend();
        }

        void BasicBind_cor__RCharArray_crbegin(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->crbegin();
        }

        void BasicBind_cor__RCharArray_crend(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->crend();
        }

        void BasicBind_cor__RCharArray_shrink_to_fit(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->shrink_to_fit();
        }

        void BasicBind_cor__RCharArray_size(std::weak_ptr<cor::RCharArray> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->size();
        }



        
        bool BasicBind_MrubyExperimentalBindTestStruct_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestStruct> BasicBind_MrubyExperimentalBindTestStruct_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestStruct>());
        }
        bool BasicBind_MrubyExperimentalBindTestClassInherited_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClassInherited> BasicBind_MrubyExperimentalBindTestClassInherited_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestClassInherited>());
        }
        bool BasicBind_MrubyExperimentalBindTestClass_valid_question(std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::mruby_interface::MrubyExperimentalBindTestClass> BasicBind_MrubyExperimentalBindTestClass_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::mruby_interface::MrubyExperimentalBindTestClass>());
        }


        
          void BasicBind_bind_func_2(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
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
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        void BasicBind_cor__system__CorCrypt_set_enabled(int a0)
        {

            cor::system::CorCrypt::set_enabled(a0);
        }

        RBool BasicBind_cor__system__CorCrypt_get_enabled()
        {

            return cor::system::CorCrypt::get_enabled();
        }

        void BasicBind_cor__system__CorCrypt_encode(unsigned char * a0, cor::RSize a1)
        {

            cor::system::CorCrypt::encode(a0, a1);
        }

        void BasicBind_cor__system__CorCrypt_decode(unsigned char * a0, cor::RSize a1)
        {

            cor::system::CorCrypt::decode(a0, a1);
        }

        RBool BasicBind_cor__system__JobQueue_empty(std::weak_ptr<cor::system::JobQueue> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->empty();
        }

        void BasicBind_cor__system__JobQueue_add_job(std::weak_ptr<cor::system::JobQueue> c, mrubybind::FuncPtr<void ()> a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->add_job(
              [=](){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()();
                      }
                  }, [&]() {

                  });
              }
);
        }

        void BasicBind_cor__system__JobQueue_step(std::weak_ptr<cor::system::JobQueue> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->step();
        }

        void BasicBind_cor__system__Logger_add_print_func_1(cor::system::Logger* c, mrubybind::FuncPtr<void (cor::system::LogType::Enum, const std::string &)> a0)
        {

            c->add_print_func(
              [=](cor::system::LogType::Enum b0, const std::string & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a0.is_living()) {
                          a0.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void BasicBind_cor__system__Logger_add_print_func_2(cor::system::Logger* c, std::string a0, mrubybind::FuncPtr<void (cor::system::LogType::Enum, const std::string &)> a1)
        {

            c->add_print_func(a0, 
              [=](cor::system::LogType::Enum b0, const std::string & b1){
                  cor::mruby_interface::MrubyState::catch_error([&](){
                      if(a1.is_living()) {
                          a1.func()(b0, b1);
                      }
                  }, [&]() {

                  });
              }
);
        }

        void BasicBind_cor__system__Logger_pop_print_func(cor::system::Logger* c)
        {

            c->pop_print_func();
        }

        void BasicBind_cor__system__Logger_clear_print_func(cor::system::Logger* c)
        {

            c->clear_print_func();
        }

        void BasicBind_cor__system__Logger_call_print_func(cor::system::Logger* c, int a0, RString a1)
        {

            c->call_print_func((cor::system::LogType::Enum)a0, a1);
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_count(cor::system::Logger* c, int a0)
        {

            return c->get_local_count((cor::system::LogType::Enum)a0);
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_debug_count(cor::system::Logger* c)
        {

            return c->get_local_debug_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_info_count(cor::system::Logger* c)
        {

            return c->get_local_info_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_warn_count(cor::system::Logger* c)
        {

            return c->get_local_warn_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_error_count(cor::system::Logger* c)
        {

            return c->get_local_error_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_local_fatal_count(cor::system::Logger* c)
        {

            return c->get_local_fatal_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_count(int a0)
        {

            return cor::system::Logger::get_count((cor::system::LogType::Enum)a0);
        }

        cor::RSize BasicBind_cor__system__Logger_get_debug_count()
        {

            return cor::system::Logger::get_debug_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_info_count()
        {

            return cor::system::Logger::get_info_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_warn_count()
        {

            return cor::system::Logger::get_warn_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_error_count()
        {

            return cor::system::Logger::get_error_count();
        }

        cor::RSize BasicBind_cor__system__Logger_get_fatal_count()
        {

            return cor::system::Logger::get_fatal_count();
        }

        void BasicBind_cor__system__Logger_info(RString a0)
        {

            cor::system::Logger::info(a0);
        }

        void BasicBind_cor__system__Logger_debug(RString a0)
        {

            cor::system::Logger::debug(a0);
        }

        void BasicBind_cor__system__Logger_warn(RString a0)
        {

            cor::system::Logger::warn(a0);
        }

        void BasicBind_cor__system__Logger_error(RString a0)
        {

            cor::system::Logger::error(a0);
        }

        void BasicBind_cor__system__Logger_fatal(RString a0)
        {

            cor::system::Logger::fatal(a0);
        }

        cor::system::Logger* BasicBind_cor__system__Logger_get_instance()
        {

            return cor::system::Logger::get_instance();
        }



        
        bool BasicBind_JobQueue_valid_question(std::weak_ptr<cor::system::JobQueue> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::system::JobQueue> BasicBind_JobQueue_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::system::JobQueue>());
        }


        
          void BasicBind_bind_func_1(mruby_interface::MrubyState& mrb)
          {
                auto& binder = mrb.ref_binder();
                (void)binder;
                            binder.bind_class<cor::type::Vector2I >("CorType", "Vector2I");
            binder.bind_static_method("CorType", "Vector2I", "create_0", BasicBind_Vector2I_create_0);
            binder.bind_static_method("CorType", "Vector2I", "create_1", BasicBind_Vector2I_create_1);
            binder.bind_static_method("CorType", "Vector2I", "create_2", BasicBind_Vector2I_create_2);
            binder.bind_class<cor::type::Vector3F >("CorType", "Vector3F");
            binder.bind_static_method("CorType", "Vector3F", "create_0", BasicBind_Vector3F_create_0);
            binder.bind_static_method("CorType", "Vector3F", "create_1", BasicBind_Vector3F_create_1);
            binder.bind_static_method("CorType", "Vector3F", "create_2", BasicBind_Vector3F_create_2);
            binder.bind_class<cor::type::Vector3I >("CorType", "Vector3I");
            binder.bind_static_method("CorType", "Vector3I", "create_0", BasicBind_Vector3I_create_0);
            binder.bind_static_method("CorType", "Vector3I", "create_1", BasicBind_Vector3I_create_1);
            binder.bind_static_method("CorType", "Vector3I", "create_2", BasicBind_Vector3I_create_2);
            binder.bind_class<cor::type::Vector4F >("CorType", "Vector4F");
            binder.bind_static_method("CorType", "Vector4F", "create_0", BasicBind_Vector4F_create_0);
            binder.bind_static_method("CorType", "Vector4F", "create_1", BasicBind_Vector4F_create_1);
            binder.bind_static_method("CorType", "Vector4F", "create_2", BasicBind_Vector4F_create_2);
            binder.bind_class<cor::type::Vector4I >("CorType", "Vector4I");
            binder.bind_static_method("CorType", "Vector4I", "create_0", BasicBind_Vector4I_create_0);
            binder.bind_static_method("CorType", "Vector4I", "create_1", BasicBind_Vector4I_create_1);
            binder.bind_static_method("CorType", "Vector4I", "create_2", BasicBind_Vector4I_create_2);
            binder.bind_class<cor::type::Matrix4x4F >("CorType", "Matrix4x4F");
            binder.bind_static_method("CorType", "Matrix4x4F", "create_0", BasicBind_Matrix4x4F_create_0);
            binder.bind_static_method("CorType", "Matrix4x4F", "create_1", BasicBind_Matrix4x4F_create_1);
            binder.bind_static_method("CorType", "Matrix4x4F", "create_2", BasicBind_Matrix4x4F_create_2);
            binder.bind_class<cor::type::Box2F >("CorType", "Box2F");
            binder.bind_static_method("CorType", "Box2F", "create_0", BasicBind_Box2F_create_0);
            binder.bind_static_method("CorType", "Box2F", "create_1", BasicBind_Box2F_create_1);
            binder.bind_static_method("CorType", "Box2F", "create_2", BasicBind_Box2F_create_2);
            binder.bind_static_method("CorType", "Box2F", "create_3", BasicBind_Box2F_create_3);
            binder.bind_class<cor::type::Box2I >("CorType", "Box2I");
            binder.bind_static_method("CorType", "Box2I", "create_0", BasicBind_Box2I_create_0);
            binder.bind_static_method("CorType", "Box2I", "create_1", BasicBind_Box2I_create_1);
            binder.bind_static_method("CorType", "Box2I", "create_2", BasicBind_Box2I_create_2);
            binder.bind_static_method("CorType", "Box2I", "create_3", BasicBind_Box2I_create_3);
            binder.bind_class<cor::type::OBox2F >("CorType", "OBox2F");
            binder.bind_static_method("CorType", "OBox2F", "create", BasicBind_OBox2F_create);
            binder.bind_class<cor::type::OBox2I >("CorType", "OBox2I");
            binder.bind_static_method("CorType", "OBox2I", "create", BasicBind_OBox2I_create);
            binder.bind_class<cor::type::Sphere2F >("CorType", "Sphere2F");
            binder.bind_static_method("CorType", "Sphere2F", "create_0", BasicBind_Sphere2F_create_0);
            binder.bind_static_method("CorType", "Sphere2F", "create_1", BasicBind_Sphere2F_create_1);
            binder.bind_static_method("CorType", "Sphere2F", "create_2", BasicBind_Sphere2F_create_2);
            binder.bind_class<cor::type::Sphere2I >("CorType", "Sphere2I");
            binder.bind_static_method("CorType", "Sphere2I", "create_0", BasicBind_Sphere2I_create_0);
            binder.bind_static_method("CorType", "Sphere2I", "create_1", BasicBind_Sphere2I_create_1);
            binder.bind_static_method("CorType", "Sphere2I", "create_2", BasicBind_Sphere2I_create_2);
            binder.bind_class<cor::type::OSphere2F >("CorType", "OSphere2F");
            binder.bind_static_method("CorType", "OSphere2F", "create", BasicBind_OSphere2F_create);

          }

    }
}
#include "cor_mruby_interface/sources/basic_bind.h"
#include "sub_binding_generated.h"
#include "cor_mruby_interface/sources/mruby_state.h"
#include "cor_mruby_interface/sources/mruby_array.h"

namespace cor
{
    namespace mruby_interface
    {
        
        void BasicBind_cor__data_structure__CostGridSpace_set_max_cost(std::weak_ptr<cor::data_structure::CostGridSpace> c, float a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_max_cost(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_set_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set_neighbor_mode((cor::data_structure::CostGridSpaceNeighborMode::Enum)a0);
        }

        cor::data_structure::CostGridSpaceNeighborMode::Enum BasicBind_cor__data_structure__CostGridSpace_get_neighbor_mode(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_neighbor_mode();
        }

        void BasicBind_cor__data_structure__CostGridSpace_resize_1(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->resize(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_resize_2(std::weak_ptr<cor::data_structure::CostGridSpace> c, int a0, int a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->resize(a0, a1);
        }

        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_size(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_size();
        }

        int BasicBind_cor__data_structure__CostGridSpace_get_width(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_width();
        }

        int BasicBind_cor__data_structure__CostGridSpace_get_height(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_height();
        }

        bool BasicBind_cor__data_structure__CostGridSpace_is_valid(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->is_valid(a0);
        }

        void BasicBind_cor__data_structure__CostGridSpace_set(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0, cor::data_structure::CostGridSpaceItem a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set(a0, a1);
        }

        cor::data_structure::CostGridSpaceItem BasicBind_cor__data_structure__CostGridSpace_get(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get(a0);
        }

        cor::data_structure::CostGridSpacePath BasicBind_cor__data_structure__CostGridSpace_search_nearest_path(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::type::Vector2I a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->search_nearest_path(a0);
        }

        cor::type::Vector2I BasicBind_cor__data_structure__CostGridSpace_get_first_corner(std::weak_ptr<cor::data_structure::CostGridSpace> c, cor::data_structure::CostGridSpacePath a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get_first_corner(a0);
        }

        std::weak_ptr<cor::data_structure::SharedPtrTable> BasicBind_cor__data_structure__SharedPtrTable_create()
        {

            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(cor::data_structure::SharedPtrTable::create());
        }

        void BasicBind_cor__data_structure__SharedPtrTable_set(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::string a0, cor::mruby_interface::AnyWP a1)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            tmp_c->set(a0, a1.lock());
        }

        cor::mruby_interface::AnyWP BasicBind_cor__data_structure__SharedPtrTable_get(std::weak_ptr<cor::data_structure::SharedPtrTable> c, std::string a0)
        {
            auto tmp_c = c.lock();
            if(!tmp_c)
            {
                auto mrb = cor::mruby_interface::MrubyState::get_current()->get_mrb();
                mrb_raisef(mrb, E_TYPE_ERROR, "self reference to released shared_ptr");
            }

            return tmp_c->get(a0);
        }

        cor::RSize BasicBind_cor__system__AllocationMonitor_get_new_count(cor::system::AllocationMonitor* c)
        {

            return c->get_new_count();
        }

        cor::RSize BasicBind_cor__system__AllocationMonitor_get_delete_count(cor::system::AllocationMonitor* c)
        {

            return c->get_delete_count();
        }

        cor::RSize BasicBind_cor__system__AllocationMonitor_get_alloc_count(cor::system::AllocationMonitor* c)
        {

            return c->get_alloc_count();
        }

        cor::RSize BasicBind_cor__system__AllocationMonitor_get_alloc_size(cor::system::AllocationMonitor* c)
        {

            return c->get_alloc_size();
        }

        RString BasicBind_cor__system__AllocationMonitor_get_status_text(cor::system::AllocationMonitor* c)
        {

            return c->get_status_text();
        }

        void BasicBind_cor__system__AllocationMonitor_set_enable(cor::system::AllocationMonitor* c, int a0)
        {

            c->set_enable(a0);
        }

        void BasicBind_cor__system__AllocationMonitor_set_captured_status(cor::system::AllocationMonitor* c, int a0)
        {

            c->set_captured_status(a0);
        }

        int BasicBind_cor__system__AllocationMonitor_get_captured_status(cor::system::AllocationMonitor* c)
        {

            return c->get_captured_status();
        }

        RString BasicBind_cor__system__AllocationMonitor_get_captured_data(cor::system::AllocationMonitor* c)
        {

            return c->get_captured_data();
        }

        void BasicBind_cor__system__AllocationMonitor_clear_caputred_data(cor::system::AllocationMonitor* c)
        {

            c->clear_caputred_data();
        }

        cor::system::AllocationMonitor* BasicBind_cor__system__AllocationMonitor_get_instance()
        {

            return cor::system::AllocationMonitor::get_instance();
        }

        void* BasicBind_cor__system__AllocationMonitor_alloc(cor::RSize a0)
        {

            return cor::system::AllocationMonitor::alloc(a0);
        }

        void BasicBind_cor__system__AllocationMonitor_al_free(void * a0)
        {

            cor::system::AllocationMonitor::al_free(a0);
        }

        void* BasicBind_cor__system__AllocationMonitor_al_realloc(void * a0, cor::RSize a1)
        {

            return cor::system::AllocationMonitor::al_realloc(a0, a1);
        }



        
        bool BasicBind_CostGridSpace_valid_question(std::weak_ptr<cor::data_structure::CostGridSpace> c)
        {
            return !c.expired();
        }
        std::weak_ptr<cor::data_structure::CostGridSpace> BasicBind_CostGridSpace_create()
        {
            return cor::mruby_interface::MrubyState::add_tmp_shared_and_return(std::make_shared<cor::data_structure::CostGridSpace>());
        }
        bool BasicBind_SharedPtrTable_valid_question(std::weak_ptr<cor::data_structure::SharedPtrTable> c)
        {
            return !c.expired();
        }


        
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
            binder.bind_class<cor::type::Vector2F >("CorType", "Vector2F");
            binder.bind_static_method("CorType", "Vector2F", "create_0", BasicBind_Vector2F_create_0);
            binder.bind_static_method("CorType", "Vector2F", "create_1", BasicBind_Vector2F_create_1);
            binder.bind_static_method("CorType", "Vector2F", "create_2", BasicBind_Vector2F_create_2);

          }

    }
}
