#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_TMPL_IMPL_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_ARRAY_TMPL_IMPL_H_

#include "mruby_array_tmpl.h"
#include "cor_algorithm/sources/utilities.h"

namespace cor
{
    namespace mruby_interface
    {
        template<class T>MrubyArrayTmpl<T>::MrubyArrayTmpl()
        {
            
        }

        template<class T>MrubyArrayTmpl<T>::MrubyArrayTmpl(const Array& a)
        {
            this->a = a;
        }

        template<class T>MrubyArrayTmpl<T>::operator Array()
        {
            return this->a;
        }

        template<class T>MrubyArrayTmpl<T>::~MrubyArrayTmpl()
        {
            
        }

        template<class T>void MrubyArrayTmpl<T>::each(std::function<void(T)> f)
        {
            for(auto v : this->a)
            {
                f(v);
            }
        }
    }
}

#endif
