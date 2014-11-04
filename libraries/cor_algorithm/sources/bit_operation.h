#ifndef ____COR_ALGORITHM_SOURCES_BIT_OPERATION_H_
#define ____COR_ALGORITHM_SOURCES_BIT_OPERATION_H_

#include "bit_operation_tmpl.h"


namespace cor
{
    namespace algorithm
    {
        struct BitOperationItnl;
    
        class BitOperation
        {
            std::unique_ptr<BitOperationItnl> itnl;
        
        public:

            static RSize count_one_int32(RInt32 d)
            {
                d = ((d >> 1) & 0x55555555) + (d & 0x55555555);
                d = ((d >> 2) & 0x33333333) + (d & 0x33333333);
                d = ((d >> 4) & 0x0f0f0f0f) + (d & 0x0f0f0f0f);
                d = ((d >> 8) & 0x00ff00ff) + (d & 0x00ff00ff);
                d = ((d >> 16) & 0x0000ffff) + (d & 0x0000ffff);
                return static_cast<RSize>(d);
            }

            static RSize count_one_int64(RInt64 d)
            {
                return static_cast<RSize>(
                    count_one_int32(static_cast<RInt32>(d)) + count_one_int32(static_cast<RInt32>(d >> 32))
                );
            }


            template<class T> static RSize count_one(T d)
            {
                if(sizeof(d) <= 4)
                {
                    return count_one_int32(static_cast<RInt32>(d));
                }
                else
                {
                    return count_one_int64(static_cast<RInt64>(d));
                }
                
                return 0;
            }

            template<class T> static RSize ciel_pow_two(T d)
            {
                if(d == 0)
                {
                    return 0;
                }
                d -= 1;
                RSize i;
                RSize isz = sizeof(d) * 8;
                for(i = 1; i < isz; i = i << 1)
                {
                    d = d | (d >> i);
                }
                return count_one(d);
            }

            template<class T> static RSize ciel_pow_two_size(T d)
            {
                return 1 << ciel_pow_two(d);
            }

        
            BitOperation();
            virtual ~BitOperation();
        };
    }
}

#endif
