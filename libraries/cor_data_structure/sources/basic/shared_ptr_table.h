#ifndef ____COR_DATA_STRUCTURE_SOURCES_BASIC_SHARED_PTR_TABLE_H_
#define ____COR_DATA_STRUCTURE_SOURCES_BASIC_SHARED_PTR_TABLE_H_

#include "cor_type/sources/basic_types.h"


namespace cor
{
    namespace data_structure
    {
        struct SharedPtrTableItnl;

        class SharedPtrTable;
        typedef std::shared_ptr<SharedPtrTable> SharedPtrTableSP;
        typedef std::weak_ptr<SharedPtrTable> SharedPtrTableWP;
    
        class SharedPtrTable
        {
            std::unique_ptr<SharedPtrTableItnl> itnl;
        
        public:
        
            SharedPtrTable();
            virtual ~SharedPtrTable();

            static SharedPtrTableSP create();

            void set(RString key, AnySP value);
            AnySP get(RString key);
        };
    }
}

#endif
