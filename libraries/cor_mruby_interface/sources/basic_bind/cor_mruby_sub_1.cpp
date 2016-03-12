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
#include "cor_mruby_interface/sources/import/external_code_importer.h"
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
        
        void BasicBind_cor__system__CorCrypt_encode(unsigned char * a0, unsigned int a1)
        {

            cor::system::CorCrypt::encode(a0, a1);
        }

        void BasicBind_cor__system__CorCrypt_decode(unsigned char * a0, unsigned int a1)
        {

            cor::system::CorCrypt::decode(a0, a1);
        }

        int BasicBind_cor__system__JobQueue_empty(std::weak_ptr<cor::system::JobQueue> c)
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

        void BasicBind_cor__system__Logger_add_print_func_2(cor::system::Logger* c, std::basic_string<char, std::char_traits<char>, std::allocator<char>> a0, mrubybind::FuncPtr<void (cor::system::LogType::Enum, const std::string &)> a1)
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

        void BasicBind_cor__system__Logger_call_print_func(cor::system::Logger* c, int a0, std::string a1)
        {

            c->call_print_func((cor::system::LogType::Enum)a0, a1);
        }

        unsigned int BasicBind_cor__system__Logger_get_local_count(cor::system::Logger* c, int a0)
        {

            return c->get_local_count((cor::system::LogType::Enum)a0);
        }

        unsigned int BasicBind_cor__system__Logger_get_local_debug_count(cor::system::Logger* c)
        {

            return c->get_local_debug_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_local_info_count(cor::system::Logger* c)
        {

            return c->get_local_info_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_local_warn_count(cor::system::Logger* c)
        {

            return c->get_local_warn_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_local_error_count(cor::system::Logger* c)
        {

            return c->get_local_error_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_local_fatal_count(cor::system::Logger* c)
        {

            return c->get_local_fatal_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_count(int a0)
        {

            return cor::system::Logger::get_count((cor::system::LogType::Enum)a0);
        }

        unsigned int BasicBind_cor__system__Logger_get_debug_count()
        {

            return cor::system::Logger::get_debug_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_info_count()
        {

            return cor::system::Logger::get_info_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_warn_count()
        {

            return cor::system::Logger::get_warn_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_error_count()
        {

            return cor::system::Logger::get_error_count();
        }

        unsigned int BasicBind_cor__system__Logger_get_fatal_count()
        {

            return cor::system::Logger::get_fatal_count();
        }

        void BasicBind_cor__system__Logger_info(std::string a0)
        {

            cor::system::Logger::info(a0);
        }

        void BasicBind_cor__system__Logger_debug(std::string a0)
        {

            cor::system::Logger::debug(a0);
        }

        void BasicBind_cor__system__Logger_warn(std::string a0)
        {

            cor::system::Logger::warn(a0);
        }

        void BasicBind_cor__system__Logger_error(std::string a0)
        {

            cor::system::Logger::error(a0);
        }

        void BasicBind_cor__system__Logger_fatal(std::string a0)
        {

            cor::system::Logger::fatal(a0);
        }

        cor::system::Logger* BasicBind_cor__system__Logger_get_instance()
        {

            return cor::system::Logger::get_instance();
        }

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
