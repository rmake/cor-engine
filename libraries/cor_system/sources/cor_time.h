#ifndef ____COR_SYSTEM_SOURCES_COR_TIME_H_
#define ____COR_SYSTEM_SOURCES_COR_TIME_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace system
    {
        struct TimeItnl;
    
        class Time
        {
            std::unique_ptr<TimeItnl> itnl;
        
        public:
        
            Time();
            virtual ~Time();

            static RInt64 get_time_ms();
        };
    }
}

#endif
