#include "allocation_monitor.h"
#include "cor_algorithm/sources/bit_operation.h"
#include <mutex>
#include <string.h>

namespace cor
{
    namespace system
    {
        struct AllocationMonitorItnl
        {
            struct Header;
            typedef Header* HeaderPtr;
            struct Header
            {
                size_t size;
                size_t n;
                HeaderPtr next;
                RBool freed;
            };

            RSize new_count;
            RSize delete_count;
            RSize alloced_size;
            RSize illigal_free_count;
            RSize alloc_size;

            static const RSize freed_table_size = 64 + 1;
            HeaderPtr freed_table[freed_table_size];

            std::recursive_mutex mutex;


        };

        PAllocationMonitor& AllocationMonitor::ref_instance_pointer()
        {
            static PAllocationMonitor am = nullptr;
            return am;
        }
        
        AllocationMonitor::AllocationMonitor() : itnl(new AllocationMonitorItnl())
        {
            ref_instance_pointer() = this;

            itnl->new_count = 0;
            itnl->delete_count = 0;
            itnl->alloc_size = 0;

            RSize i, isz;
            isz = AllocationMonitorItnl::freed_table_size;
            for(i = 0; i < isz; i++)
            {
                itnl->freed_table[i] = nullptr;
            }
        }
        
        AllocationMonitor::~AllocationMonitor()
        {
            RSize i, isz;
            isz = AllocationMonitorItnl::freed_table_size;
            for(i = 0; i < isz; i++)
            {
                while(itnl->freed_table[i])
                {
                    auto h = itnl->freed_table[i];
                    itnl->freed_table[i] = h->next;
                    ::free(h);
                }
            }


            ref_instance_pointer() = NULL;
        }

        RSize AllocationMonitor::get_new_count()
        {
            return itnl->new_count;
        }

        RSize AllocationMonitor::get_delete_count()
        {
            return itnl->delete_count;
        }

        RSize AllocationMonitor::get_alloc_count()
        {
            return itnl->new_count - itnl->delete_count;
        }

        RSize AllocationMonitor::get_alloc_size()
        {
            return itnl->alloc_size;
        }

        RString AllocationMonitor::get_status_text()
        {
            RStringStream s;
            //s << "new_count " << get_new_count();
            //s << ", delete_count " << get_delete_count();
            //s << ", alloc_count " << get_alloc_count();
            s << "alloc_count " << get_alloc_count();
            s << ", alloc_size " << get_alloc_size();
            return s.str();
        }

        PAllocationMonitor AllocationMonitor::get_instance()
        {
            PAllocationMonitor& am = ref_instance_pointer();
            return am;
        }

        void* AllocationMonitor::alloc(size_t n)
        {
            PAllocationMonitor& am = ref_instance_pointer();
            void* p = nullptr;
            auto s = algorithm::BitOperation::ciel_pow_two(n);
            auto ns = 1 << s;
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();
                itnl->mutex.lock();

                if(itnl->freed_table[s])
                {
                    p = itnl->freed_table[s];
                    itnl->freed_table[s] = itnl->freed_table[s]->next;
                }
            }

            RSize sz = sizeof(AllocationMonitorItnl::Header) + ns;

            if(!p)
            {
                p = ::malloc(sz);
            }
            auto bp = static_cast<RBytePtr>(p);
            auto h = static_cast<AllocationMonitorItnl::HeaderPtr>(p);
            h->size = sz;
            h->n = n;
            h->freed = rfalse;
            h->next = nullptr;
            bp += sizeof(AllocationMonitorItnl::Header);


            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();
                itnl->mutex.unlock();
                itnl->alloc_size += sz;
                itnl->new_count++;
            }

            return static_cast<void*>(bp);
        }

        void AllocationMonitor::free(void* p)
        {
            PAllocationMonitor& am = ref_instance_pointer();
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();
                itnl->mutex.lock();
            }

            size_t sz = 0;

            if(!am && p)
            {
                auto bp = static_cast<RBytePtr>(p);
                bp -= sizeof(AllocationMonitorItnl::Header);
                p = bp;
                auto h = static_cast<AllocationMonitorItnl::HeaderPtr>(p);
                h->freed = rtrue;
                sz = h->size;

                ::free(p);
            }

            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();

                if(p)
                {
                    auto bp = static_cast<RBytePtr>(p);
                    bp -= sizeof(AllocationMonitorItnl::Header);
                    auto h = static_cast<AllocationMonitorItnl::HeaderPtr>((void*)bp);
                    if(!h->freed)
                    {
                        h->freed = rtrue;
                        sz = h->size;

                        auto s = algorithm::BitOperation::ciel_pow_two(h->n);
                        h->next = itnl->freed_table[s];
                        itnl->freed_table[s] = h;
                    }
                    
                }

                itnl->mutex.unlock();
                if(p)
                {
                    itnl->delete_count++;
                    itnl->alloc_size -= sz;
                }
            }
            
        }

        void* AllocationMonitor::realloc(void* p, size_t n)
        {
            PAllocationMonitor& am = ref_instance_pointer();
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();
                itnl->mutex.lock();
            }

            void* np;

            if(n > 0)
            {
                np = AllocationMonitor::alloc(n);

                if(p)
                {

                    auto bp = static_cast<RBytePtr>(p);
                    bp -= sizeof(AllocationMonitorItnl::Header);
                    auto h = static_cast<AllocationMonitorItnl::HeaderPtr>((void*)bp);


                    if(!h->freed)
                    {
                        if(h->n > 0)
                        {
                            ::memmove(np, p, h->n < n ? h->n : n);
                        }
                        AllocationMonitor::free(p);
                    }
                    
                }
            }
            else
            {
                np = nullptr;
                AllocationMonitor::free(p);
            }

            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl.get();
                itnl->mutex.unlock();
            }

            return np;
        }

    }
}


//#ifdef COR_CUSTOM_NEW_OPERATOR
void* operator new(size_t n) throw(std::bad_alloc)
{
    return cor::system::AllocationMonitor::alloc(n);
}

void operator delete(void* p) throw()
{
    return cor::system::AllocationMonitor::free(p);
}

void* operator new[](size_t n) throw(std::bad_alloc)
{
    return cor::system::AllocationMonitor::alloc(n);
}

void operator delete[](void* p) throw()
{
    return cor::system::AllocationMonitor::free(p);
}
//#endif


