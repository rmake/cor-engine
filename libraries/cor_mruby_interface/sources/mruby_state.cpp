#include "mruby_state.h"
#include "mruby/error.h"
#include "mruby/debug.h"
#include "cor_system/sources/logger.h"
#include "cor_system/sources/allocation_monitor.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyStateItnl
        {
            mrb_state* mrb;
            std::unique_ptr<mrubybind::MrubyBind> binder;
            mrubybind::MrubyRef last_exception;
            mrubybind::MrubyRef last_back_trace;
            MrubyState::AnySPTable tmp_shared;

        };
        
        MrubyState::MrubyState() : itnl(new MrubyStateItnl())
        {
            
        }
        
        MrubyState::~MrubyState()
        {
            clear_tmp_shared_force();

            if(itnl->mrb)
            {
                this->load_string_error_log("GC.start");
            }

            itnl->binder.reset();

            if(itnl->mrb)
            {
                this->load_string_error_log("GC.start");
            }

            if(itnl->mrb)
            {
                mrb_close(itnl->mrb);
                itnl->mrb = NULL;
            }
        }

        static void* alloc(struct mrb_state *mrb, void* p, size_t size, void* ud)
        {
            if(size == 0)
            {
                system::AllocationMonitor::al_free(p);
            }
            else
            {
                void* pa = system::AllocationMonitor::al_realloc(p, size);
                return pa;
            }
        }

        RBool MrubyState::init()
        {
            //itnl->mrb = mrb_open();
            itnl->mrb = mrb_open_allocf(alloc, this);

            itnl->binder = std::unique_ptr<mrubybind::MrubyBind>(new mrubybind::MrubyBind(itnl->mrb));

            return rtrue;
        }

        MrubyStatePtr& MrubyState::ref_current()
        {
            //THEAD_LOCAL MrubyStatePtr mrb = NULL;
            static MrubyStatePtr mrb = NULL;
            
            return mrb;
        }

        MrubyStatePtr MrubyState::get_current()
        {
            return ref_current();
        }

        MrubyBind& MrubyState::ref_binder()
        {
            return *itnl->binder.get();
        }

        mrb_state* MrubyState::get_mrb()
        {
            return itnl->mrb;
        }

        MrubyRef MrubyState::get_last_exception()
        {
            return itnl->last_exception;
        }

        MrubyRef MrubyState::load_string(const RString& file_name, const RString& code)
        {
            mrubybind::MrubyArenaStore mas(itnl->mrb);

            //log_debug("load_string \n", code);

            mrbc_context *c;
            c = mrbc_context_new(itnl->mrb);
            c->lineno = 1;
            //c->dump_result = TRUE;
            c->capture_errors = TRUE;

            mrb_sym zero_sym;

            //auto old_mrb = MrubyState::get_current();
            MrubyState::ref_current() = this;
            

            zero_sym = mrb_intern_lit(itnl->mrb, "$0");
            mrbc_filename(itnl->mrb, c, file_name.c_str());
            mrb_gv_set(itnl->mrb, zero_sym, mrb_str_new_cstr(itnl->mrb, file_name.c_str()));

            mrb_value tr;
            try
            {
                tr = mrb_load_string_cxt(itnl->mrb, code.c_str(), c);
            }
            catch(...)
            {
                tr = mrb_nil_value();
            }

            if(itnl->mrb->exc)
            {
                tr = mrb_nil_value();
            }


            //mrubybind::MrubyRef r = mrubybind::load_string(itnl->mrb, code);

            exception_store();

            MrubyRef r = MrubyRef(itnl->mrb, tr);

            mrbc_context_free(itnl->mrb, c);

            //MrubyState::ref_current() = old_mrb;

            return r;
        }

        void MrubyState::exception_store()
        {
            if(itnl->mrb->exc)
            {
                mrb_value exc = mrb_obj_value(itnl->mrb->exc);
                itnl->mrb->exc = NULL;
                itnl->last_exception = MrubyRef(itnl->mrb, exc);
                try
                {
                    mrb_value btv = mrb_exc_backtrace(itnl->mrb, exc);

                    itnl->last_back_trace = MrubyRef(itnl->mrb, btv);
                }
                catch(mrb_int e)
                {
                    itnl->last_back_trace = MrubyRef(itnl->mrb, mrb_nil_value());
                }
                
            }
            else
            {
                itnl->last_exception = MrubyRef(itnl->mrb, mrb_nil_value());
            }

            clear_tmp_shared();
        }

        void MrubyState::log_exception()
        {
            if(itnl->last_exception.test())
            {
                log_error("mruby exception -> ", itnl->last_exception.to_s());
                if(itnl->last_back_trace.test())
                {
                    log_error("mruby backtrace -> ", itnl->last_back_trace.call("join", "\n").to_s());
                }
                
            }
        }

        void MrubyState::exception_store_log()
        {
            exception_store();
            log_exception();
        }

        MrubyRef MrubyState::load_string_log(const RString& file_name, const RString& code)
        {
            MrubyRef r = load_string(file_name, code);

            log_debug("mruby result -> ", r.to_s());
            log_exception();

            return r;
        }

        MrubyRef MrubyState::load_string_error_log(const RString& file_name, const RString& code)
        {
            mrubybind::MrubyRef r = load_string(file_name, code);
            log_exception();

            return r;
        }

        MrubyRef MrubyState::load_string(const RString& code)
        {
            static int num = 0;
            RStringStream s;
            s << "load_string_" << num;
            num++;

            return load_string(s.str(), code);
        }

        MrubyRef MrubyState::load_string_log(const RString& code)
        {
            MrubyRef r = load_string(code);

            log_debug("mruby result -> ", r.to_s());
            log_exception();

            return r;
        }

        MrubyRef MrubyState::load_string_error_log(const RString& code)
        {
            mrubybind::MrubyRef r = load_string(code);
            log_exception();

            return r;
        }

        void MrubyState::add_tmp_shared_itnl(AnySP v)
        {
            itnl->tmp_shared[v.get()] = v;
        }

        void MrubyState::remove_tmp_shared_itnl(AnySP v)
        {
            itnl->tmp_shared.erase(v.get());
        }

        void MrubyState::clear_tmp_shared()
        {
            if(true)
            {
                itnl->tmp_shared.clear();
            }
            else
            {
                for(auto i = itnl->tmp_shared.begin(); i != itnl->tmp_shared.end();)
                {
                    if(i->second.use_count() <= 1)
                    {
                        i++;
                    }
                    else
                    {
                        auto ni = i;
                        ni++;
                        itnl->tmp_shared.erase(i);
                        i = ni;
                    }
                }
            }
            
        }
        
        void MrubyState::clear_tmp_shared_force()
        {
            itnl->tmp_shared.clear();
        }
        
    }
}
