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
            struct AllocInfo;
            typedef AllocInfo* AllocInfoPtr;
            struct AllocInfo
            {
                void* ptr;
                size_t n;
                AllocInfoPtr next;
                AllocInfoPtr prev;

                void init(void* ptr, size_t n)
                {
                    this->n = n;
                    this->ptr = ptr;
                    this->next = this;
                    this->prev = this;
                }

                void remove() {
                    this->next->prev = this->prev;
                    this->prev->next = this->next;

                    this->prev = this;
                    this->next = this;
                }

                void insert(AllocInfoPtr p) {
                    p->remove();
                    p->prev = this->prev;
                    p->next = this;
                    this->prev->next = p;
                    this->prev = p;
                }
            };

            static const size_t AllocInfoTableSize = 4049;
            struct AllocInfoTable
            {
                AllocInfo table[AllocInfoTableSize];

                AllocInfoTable() {
                    for(size_t i = 0; i < AllocInfoTableSize; i++)
                    {
                        table[i].init(nullptr, 0);
                    }
                }

                size_t hash(void* p)
                {
                    return ((size_t)p) % AllocInfoTableSize;
                }

                AllocInfoPtr insert(void* p, size_t n)
                {
                    AllocInfoPtr ap = static_cast<AllocInfoPtr>(::malloc(sizeof(AllocInfo)));
                    ap->init(p, n);
                    auto k = hash(p);
                    table[k].insert(ap);
                    return ap;
                }

                AllocInfoPtr find(void* p)
                {
                    auto k = hash(p);
                    auto ap = table[k].next;
                    while(ap != &table[k])
                    {
                        if(p == ap->ptr)
                        {
                            return ap;
                        }
                        ap = ap->next;
                    }
                    return nullptr;
                }

                void remove(void* p)
                {
                    auto k = hash(p);
                    auto ap = find(p);
                    if(ap)
                    {
                        ap->remove();
                        ::free(static_cast<void*>(ap));
                    }
                    
                }

                void remove(AllocInfoPtr ap)
                {
                    if(ap)
                    {
                        ap->remove();
                        ::free(static_cast<void*>(ap));
                    }
                }
            };

            
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

            AllocInfoTable alloc_info_table;

            RSize new_count;
            RSize delete_count;
            RSize alloced_size;
            RSize illigal_free_count;
            RSize alloc_size;
            RBool available;

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
            itnl->available = rtrue;

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

            itnl->available = rfalse;

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
            PAllocationMonitor am = get_instance();
            AllocationMonitorItnl* itnl = am->itnl;
            if(am && itnl->available)
            {
                itnl->mutex.lock();

            }

            void* p = nullptr;
            p = ::malloc(n);

            itnl->alloc_info_table.insert(p, n);

            if(am && itnl->available)
            {
                
                itnl->alloc_size += n;
                itnl->new_count++;
                itnl->mutex.unlock();

            }

            return p;

        }

        void AllocationMonitor::al_free(void* p)
        {
            if(!p)
            {
                return;
            }

            PAllocationMonitor am = get_instance();
            AllocationMonitorItnl* itnl = am->itnl;
            if(am && itnl->available)
            {
                itnl->mutex.lock();

                auto ap = itnl->alloc_info_table.find(p);
                if(ap)
                {
                    itnl->alloc_size -= ap->n;
                    itnl->alloc_info_table.remove(ap);
                }

            }

            ::free(p);

            if(am && itnl->available)
            {
                itnl->delete_count++;
                itnl->mutex.unlock();
            }
            
        }

        void* AllocationMonitor::al_realloc(void* p, size_t n)
        {
            PAllocationMonitor am = get_instance();
            AllocationMonitorItnl* itnl = am->itnl;
            if(am && itnl->available)
            {
                itnl->mutex.lock();

                auto ap = itnl->alloc_info_table.find(p);
                if(ap)
                {
                    itnl->alloc_size -= ap->n;
                    itnl->alloc_info_table.remove(ap);
                }

            }

            void* np;

            np = ::realloc(p, n);

            if(am && itnl->available)
            {
                if(!p || !np)
                {
                    if(p)
                    {
                        itnl->delete_count++;
                    }
                    if(np)
                    {
                        itnl->alloc_info_table.insert(np, n);
                        itnl->new_count++;
                    }
                }
                itnl->mutex.unlock();
                
                

                //itnl->alloc_size -= sz;
                //itnl->delete_count++;

            }

            return np;
        }

    }
}


//#if 0
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
//#endif


