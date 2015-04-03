#ifdef WIN32
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <windows.h>
#endif

#include "allocation_monitor.h"
#include "cor_algorithm/sources/bit_operation.h"
#include <mutex>
#include <string.h>


//#define COR_ALLOCATION_MONITOR_INDEX_COUNT
//#define COR_ALLOCATION_MONITOR_LEAK_CHECK

//#define COR_ALLOCATION_MONITOR_CAPTURE_MODE

#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
#include <typeinfo.h>
#include <iostream>
#endif

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
#ifdef COR_ALLOCATION_MONITOR_INDEX_COUNT
                size_t count;
#endif
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
                RInt32 mark;
                RInt32 captured_index;
#endif
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

#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            RSize captured_count;
            RInt32 captured_status;
            struct Captured
            {
                HeaderPtr p;
                RInt32 status;
            };
            Captured captured_list[1024 * 1024 * 20];
#endif

            std::recursive_mutex mutex;


        };

        PAllocationMonitor& AllocationMonitor::ref_instance_pointer()
        {
            //static AllocationMonitor amo;
            static PAllocationMonitor am;
            return am;
        }
        
        AllocationMonitor::AllocationMonitor()
        {
            static AllocationMonitorItnl itnl_;
            itnl = &itnl_;
            //ref_instance_pointer() = this;

            itnl->new_count = 0;
            itnl->delete_count = 0;
            itnl->alloc_size = 0;

            RSize i, isz;
            isz = AllocationMonitorItnl::freed_table_size;
            for(i = 0; i < isz; i++)
            {
                itnl->freed_table[i] = nullptr;
            }
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            itnl->captured_count = 0;
            itnl->captured_status = 0;
#endif
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


            //ref_instance_pointer() = NULL;
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

        void AllocationMonitor::set_captured_status(RInt32 captured_status)
        {
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            itnl->captured_status = captured_status;
#endif
        }

        RInt32 AllocationMonitor::get_captured_status()
        {
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            return itnl->captured_status;
#else
            return 0;
#endif      
        }

#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
        class AllocationMonitorBaseT
        {
            AllocationMonitorBaseT(){}
            virtual ~AllocationMonitorBaseT(){}
        };
#endif

        RString AllocationMonitor::get_captured_data()
        {
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            

            std::vector<RString> data;
            RSize sz = itnl->captured_count;
            for(RSize i = 0 ; i < sz ; i++)
            {
                if(itnl->captured_list[i].p)
                { 
                    RStringStream s;
                    RBytePtr bp = (RBytePtr)itnl->captured_list[i].p;
                    bp += sizeof(AllocationMonitorItnl::Header);
                    //s << (RSize)bp;
                    //s << ":";
                    s << i;
                    s << ":";
                    s << itnl->captured_list[i].p->captured_index;
                    s << ":";
                    s << itnl->captured_list[i].p->n;
                    s << ":";
                    //try
                    //{
                    //    s << typeid(*(AllocationMonitorBaseT*)bp).name();
                    //    s << ":";
                    //}
                    //catch(std::__non_rtti_object& bt)
                    //{
                    //    s << "no rtti";
                    //    s << ":";
                    //}
                    //catch(std::bad_typeid& bt)
                    //{
                    //    s << "no name";
                    //    s << ":";
                    //}
                    s << itnl->captured_list[i].status;
                    OutputDebugStringA((s.str() + "\n").c_str());
                    data.push_back(s.str());
                }
                
            }
            RString str;
            for(auto i : data)
            {
                str += i;
                str += "\n";
            }
            return str;
#else
            return RString();
#endif        
        }

        void AllocationMonitor::clear_caputred_data()
        {
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            itnl->captured_count = 0;
#endif
        }

        PAllocationMonitor AllocationMonitor::get_instance()
        {
            //PAllocationMonitor& am = ref_instance_pointer();
            static AllocationMonitor amo;
            return &amo;
        }
        
#ifdef COR_ALLOCATION_MONITOR_LEAK_CHECK
#ifdef WIN32
        struct LeakCheck
        {
            LeakCheck()
            {
                _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
            }

            ~LeakCheck()
            {
                //_CrtDumpMemoryLeaks();
            }
        };
        LeakCheck lc;
#endif
#endif


        void* AllocationMonitor::alloc(size_t n)
        {
            {
#ifdef COR_ALLOCATION_MONITOR_LEAK_CHECK
#ifdef WIN32
                static LeakCheck lx;
#endif
#endif
            }

            PAllocationMonitor am = get_instance();
            void* p = nullptr;
            auto s = algorithm::BitOperation::ciel_pow_two(n);
            auto ns = 1 << s;
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl;
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
#ifdef COR_ALLOCATION_MONITOR_INDEX_COUNT
            static size_t count = 0;
            h->count = count;
            count++;
#endif
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
            h->mark = 0xABCDEEFF;
            h->captured_index = -1;
#endif
            h->size = sz;
            h->n = n;
            h->freed = rfalse;
            h->next = nullptr;
            bp += sizeof(AllocationMonitorItnl::Header);


            if(am)
            {
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
                if(am->itnl->captured_status)
                {
                    auto ct = am->itnl->captured_count;
                    am->itnl->captured_list[ct].p = h;
                    am->itnl->captured_list[ct].status = am->itnl->captured_status;
                    h->captured_index = ct;
                    am->itnl->captured_count++;
                }
#endif
                AllocationMonitorItnl* itnl = am->itnl;
                itnl->mutex.unlock();
                itnl->alloc_size += sz;
                itnl->new_count++;
            }

            return static_cast<void*>(bp);
        }

        void AllocationMonitor::al_free(void* p)
        {
            PAllocationMonitor am = get_instance();
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl;
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
                AllocationMonitorItnl* itnl = am->itnl;

                if(p)
                {
                    auto bp = static_cast<RBytePtr>(p);
                    bp -= sizeof(AllocationMonitorItnl::Header);
                    auto h = static_cast<AllocationMonitorItnl::HeaderPtr>((void*)bp);
#ifdef COR_ALLOCATION_MONITOR_CAPTURE_MODE
                    if(h->mark == 0xABCDEEFF && h->captured_index >= 0)
                    {
                        am->itnl->captured_list[h->captured_index].p = nullptr;
                        am->itnl->captured_list[h->captured_index].status = 0xffffffff;
                        h->captured_index = -1;
                    }
#endif

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

        void* AllocationMonitor::al_realloc(void* p, size_t n)
        {
            PAllocationMonitor am = get_instance();
            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl;
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
                        AllocationMonitor::al_free(p);
                    }
                    
                }
            }
            else
            {
                np = nullptr;
                AllocationMonitor::al_free(p);
            }

            if(am)
            {
                AllocationMonitorItnl* itnl = am->itnl;
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
    return cor::system::AllocationMonitor::al_free(p);
}

void* operator new[](size_t n) throw(std::bad_alloc)
{
    return cor::system::AllocationMonitor::alloc(n);
}

void operator delete[](void* p) throw()
{
    return cor::system::AllocationMonitor::al_free(p);
}
//#endif


