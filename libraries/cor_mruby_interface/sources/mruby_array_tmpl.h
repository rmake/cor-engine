#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_TMPL_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "mruby_state.h"

namespace cor
{
    namespace mruby_interface
    {
        template<class T>class MrubyArrayTmpl
        {
            typedef std::vector<T> Array;
            Array a;

        public:

            MrubyArrayTmpl();
            MrubyArrayTmpl(const Array& a);
            operator Array();

            virtual  ~MrubyArrayTmpl();
            
            void each(std::function<void(T)> f);

        };
    }
}

#endif
