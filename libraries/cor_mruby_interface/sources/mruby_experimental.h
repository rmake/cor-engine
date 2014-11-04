#ifndef ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_EXPERIMENTAL_H_
#define ____COR_MRUBY_INTERFACE_SOURCES_MRUBY_EXPERIMENTAL_H_

#include "basic_bind.h"

namespace cor
{
    namespace mruby_interface
    {
        struct MrubyExperimentalItnl;

        template<class T = int>struct MrubyExperimentalTemplateStruct
        {
        private:
            T n;

        public:
            static T add(T a, T b)
            {
                return a + b;
            }

            T add2(T a, T b, T c)
            {
                return this->n + a + b + c;
            }

            void set_n(T n)
            {
                this->n = n;
            }
        };

        typedef MrubyExperimentalTemplateStruct<RInt32> MrubyExperimentalTemplateStructRInt32T;

        typedef MrubyExperimentalTemplateStructRInt32T MrubyExperimentalTemplateStructRInt32;
        typedef MrubyExperimentalTemplateStruct<RString> MrubyExperimentalTemplateStructRString;

        struct MrubyExperimentalBindTestStruct
        {
            int a;
            RInt32 test();
        };

        class MrubyExperimentalBindTestClassInherited : public MrubyExperimentalBindTestStruct
        {
        public:
            RInt32 toast();

        };
        
        class MrubyExperimentalBindTestClass
        {
            std::string str;

        public:

            typedef std::shared_ptr<MrubyExperimentalBindTestClass> BindTestClassPtr;

            static BindTestClassPtr create();
            static BindTestClassPtr create(std::string str);

            BindTestClassPtr get_null();

            void recieve(MrubyExperimentalBindTestClass obj);

            void test();

            void tmpl_test(const std::vector<char>& a);
        };
    
        class MrubyExperimental
        {
            std::unique_ptr<MrubyExperimentalItnl> itnl;
        
        public:
        
            MrubyExperimental();
            virtual ~MrubyExperimental();

            static MrubyRef bind_funcs(MrubyState& mrb);
        };
    }
}

#endif
