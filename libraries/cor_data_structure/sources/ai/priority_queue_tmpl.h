#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_TMPL_H_

#include "cor_type/sources/basic_types.h"

namespace cor
{
    namespace data_structure
    {
        template<class Key, class Value> class PriorityQueueTmpl
        {
        public:
            typedef std::pair<Key, Value> Pair;

        private:
            typedef std::multimap<Key, Value> Queue;

            RSize max_size;
            Queue queue;

        public:
            
            PriorityQueueTmpl();
            ~PriorityQueueTmpl();

            RBool empty() const;
            void clear();
            RSize size() const;
            void set_max_size(RSize max_size);
            RSize get_max_size();
            Key get_current_min_cost();
            void enqueue(const Key& k, const Value& v);
            Pair dequeue();


        };
    }
}

#endif
