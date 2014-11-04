
#include "cor_time.h"

#ifdef _MSC_VER
#include <windows.h>
#else
#include <time.h>
#include <sys/time.h>
#endif

namespace cor
{
    namespace system
    {
        struct TimeItnl
        {
            
        };
        
        Time::Time() : itnl(new TimeItnl())
        {
            
        }
        
        Time::~Time()
        {
            
        }

        RInt64 Time::get_time_ms()
        {
#ifdef _MSC_VER
            static RBool first = rtrue;
            static LARGE_INTEGER time;
            static LARGE_INTEGER freq;

            LARGE_INTEGER tmp_time;

            if(first)
            {
                QueryPerformanceFrequency(&freq);
                QueryPerformanceCounter(&time);

                first = rfalse;
            }

            QueryPerformanceCounter(&tmp_time);

            RInt64 tm;
            tm = (RInt64)((tmp_time.QuadPart - time.QuadPart) * 1000.0 / freq.QuadPart);
            return tm;

#else
            static RBool first = rtrue;
            static timeval base_timeval;
            static struct timezone base_timezone;

            timeval tmp_timeval;
            struct timezone tmp_timezone;

            if(first)
            {
                gettimeofday(&base_timeval, &base_timezone);

                first = rfalse;
            }

            gettimeofday(&tmp_timeval, &tmp_timezone);

            time_t sec;
            RInt32 usec;

            sec = tmp_timeval.tv_sec - base_timeval.tv_sec;
            usec = (RInt32)tmp_timeval.tv_usec - (RInt32)base_timeval.tv_usec;

            if(usec < 0)
            {
                sec -= 1;
                usec += 1000000;
            }

            RInt64 tm;
            tm = ((RInt64)(sec * 1000000) + (RInt64)usec) / 1000;
            return tm;
#endif

        }


    }
}
