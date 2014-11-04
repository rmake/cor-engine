#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_STATE_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_STATE_H_

#include "cor_type/sources/basic_types.h"
#include "mruby.h"
#include "mrubybind.h"

namespace cor
{
    typedef mrubybind::MrubyBind MrubyBind;
    typedef mrubybind::MrubyRef MrubyRef;

    namespace mruby_interface
    {
        struct MrubyStateItnl;

        class MrubyState;
        typedef MrubyState* MrubyStatePtr;

        typedef std::shared_ptr<void> AnySP;
        typedef std::weak_ptr<void> AnyWP;

        class MrubyState
        {
            std::unique_ptr<MrubyStateItnl> itnl;
        
        public:

            typedef std::map<void*, AnySP> AnySPTable;
        
            MrubyState();
            virtual ~MrubyState();

            RBool init();

            static MrubyStatePtr& ref_current();
            static MrubyStatePtr get_current();

            MrubyBind& ref_binder();

            mrb_state* get_mrb();
            MrubyRef get_last_exception();

            void exception_store();
            void log_exception();
            void exception_store_log();

            MrubyRef load_string(const RString& file_name, const RString& code);
            MrubyRef load_string_log(const RString& file_name, const RString& code);
            MrubyRef load_string_error_log(const RString& file_name, const RString& code);

            MrubyRef load_string(const RString& code);
            MrubyRef load_string_log(const RString& code);
            MrubyRef load_string_error_log(const RString& code);

        private:
            void add_tmp_shared_itnl(AnySP v);
            void remove_tmp_shared_itnl(AnySP v);
        public:
            template<class T> void add_tmp_shared(T v)
            {
                add_tmp_shared_itnl(std::static_pointer_cast<void>(v));
            }
            template<class T> void remove_tmp_shared(T v)
            {
                remove_tmp_shared_itnl(std::static_pointer_cast<void>(v));
            }
            void clear_tmp_shared();
            void clear_tmp_shared_force();
            template<class T> static T add_tmp_shared_and_return(T v)
            {
                get_current()->add_tmp_shared(v);
                return v;
            }
            template<class T> static T remove_tmp_shared_and_return(T v)
            {
                get_current()->remove_tmp_shared(v);
                return v;
            }
        };
    }
}

#endif
