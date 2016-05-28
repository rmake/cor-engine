#ifndef _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_TEMPLATES_
#define _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_TEMPLATES_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace binding_test
    {
        struct CorBindingTestTemplatesItnl;

        class CorBindingTestTemplates
        {
            std::unique_ptr<CorBindingTestTemplatesItnl> itnl;
        public:

            CorBindingTestTemplates();
            virtual ~CorBindingTestTemplates();
        };

        template<typename T>class SimpleTemplate
        {
            T v;
        public:
            void set_v(const T& v)
            {
                this->v = v;
            }

            T get_v()
            {
                return v;
            }

            SimpleTemplate operator+(const SimpleTemplate& a) const
            {
                SimpleTemplate s;
                s.v = this->v + a.v;
                return s;
            }

        };

        typedef SimpleTemplate<RInt32> SimpleTemplateInt32;
        typedef SimpleTemplate<RDouble> SimpleTemplateDouble;
        typedef SimpleTemplate<RString> SimpleTemplateString;
    }

}


#endif
