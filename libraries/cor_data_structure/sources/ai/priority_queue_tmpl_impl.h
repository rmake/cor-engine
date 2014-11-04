#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_PRIORITY_QUEUE_TMPL_IMPL_H_

#include "priority_queue_tmpl.h"
#include "cor_system/sources/logger.h"

namespace cor
{
    namespace data_structure
    {
        
        template<class Key, class Value> PriorityQueueTmpl<Key, Value>::PriorityQueueTmpl()
        {
            max_size = SIZE_MAX;
        }

        template<class Key, class Value> PriorityQueueTmpl<Key, Value>::~PriorityQueueTmpl()
        {
            
        }

        template<class Key, class Value> RBool PriorityQueueTmpl<Key, Value>::empty() const
        {
            return queue.empty();
        }

        template<class Key, class Value> void PriorityQueueTmpl<Key, Value>::clear()
        {
            queue.clear();
        }

        template<class Key, class Value> RSize PriorityQueueTmpl<Key, Value>::size() const
        {
            return queue.size();
        }

        template<class Key, class Value> void PriorityQueueTmpl<Key, Value>::set_max_size(RSize max_size)
        {
            this->max_size = max_size;
        }

        template<class Key, class Value> RSize PriorityQueueTmpl<Key, Value>::get_max_size()
        {
            return max_size;
        }

        template<class Key, class Value> Key PriorityQueueTmpl<Key, Value>::get_current_min_cost()
        {
            if(queue.size() <= 0)
            {
                throw std::runtime_error("PriorityQueueTmpl queue size == 0. cannot return get_current_min_cost.");
            }
            return queue.begin()->first;
        }

        template<class Key, class Value> void PriorityQueueTmpl<Key, Value>::enqueue(const Key& k, const Value& v)
        {
            queue.insert(std::make_pair(k, v));
            if(queue.size() > max_size)
            {
                auto i = queue.rbegin();
                i++;
                queue.erase(i.base());
            }
        }

        template<class Key, class Value>typename PriorityQueueTmpl<Key, Value>::Pair PriorityQueueTmpl<Key, Value>::dequeue()
        {
            auto i = queue.begin();
            auto v = *i;
            queue.erase(i);
            return v;
        }


    }
}

#endif
