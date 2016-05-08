#ifndef _CPP_COR_SYSTEM_UTILITY_FOR_TEST_
#define _CPP_COR_SYSTEM_UTILITY_FOR_TEST_

#include "cor_type/sources/basic_types.h"
#define COR_SYSTEM_FORCE_LINK_THIS(x) int force_link_##x = 0;
#define COR_SYSTEM_FORCE_LINK_THAT(x) { extern int force_link_##x; force_link_##x = 1; }

namespace cor
{
    namespace system
    {
        struct UtilityForTestItnl;

        class UtilityForTest
        {
            std::unique_ptr<UtilityForTestItnl> itnl;
        public:

            UtilityForTest();
            virtual ~UtilityForTest();
        };

    }

}


#endif
