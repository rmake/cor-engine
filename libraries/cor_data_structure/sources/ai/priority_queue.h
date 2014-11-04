#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_H_

#include "priority_queue_tmpl.h"


namespace cor
{
    namespace data_structure
    {
        struct PriorityQueueItnl;
    
        class PriorityQueue
        {
            std::unique_ptr<PriorityQueueItnl> itnl;
        
        public:
        
            PriorityQueue();
            virtual ~PriorityQueue();
        };
    }
}

#endif
