
#include "shared_ptr_table.h"

namespace cor
{
    namespace data_structure
    {
        struct SharedPtrTableItnl
        {
            std::map<RString, AnySP> table;
        };
        
        SharedPtrTable::SharedPtrTable() : itnl(new SharedPtrTableItnl())
        {
            
        }
        
        SharedPtrTable::~SharedPtrTable()
        {
            
        }

        SharedPtrTableSP SharedPtrTable::create()
        {
            return std::make_shared<SharedPtrTable>();
        }

        void SharedPtrTable::set(RString key, AnySP value)
        {
            itnl->table[key] = value;
        }

        AnySP SharedPtrTable::get(RString key)
        {
            return itnl->table[key];
        }
    }
}
