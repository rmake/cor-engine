#ifndef _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASS_
#define _CPP_COR_BINDING_TEST_CPP_COR_BINDING_TEST_CLASS_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace binding_test
    {
        struct CorBindingTestClassItnl;
        
        class CorBindingTestClass
        {
            std::unique_ptr<CorBindingTestClassItnl> itnl;
        public:
        
            CorBindingTestClass();
            virtual ~CorBindingTestClass();
        };
    
    }

}


#endif
