#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_TMPL_IMPL_H_

#include "stack_decoder_tmpl.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl_impl.h"

namespace cor
{
    namespace data_structure
    {
        template<class Key, class Value> StackDecoderStateTmpl<Key, Value>::StackDecoderStateTmpl()
        {
            
        }

        template<class Key, class Value> StackDecoderStateTmpl<Key, Value>::~StackDecoderStateTmpl()
        {
            
        }

        template<class Key, class Value> Key StackDecoderStateTmpl<Key, Value>::cost() const
        {
            return 0.0;
        }

        template<class Key, class Value> void StackDecoderStateTmpl<Key, Value>::next_states(NextStateFunc func) const
        {
            
        }

        template<class Key, class Value>  RBool StackDecoderStateTmpl<Key, Value>::terminated() const
        {
            return rtrue;
        }


        template<class Key, class State> StackDecoderTmpl<Key, State>::StackDecoderTmpl()
        {
            
        }

        template<class Key, class State> StackDecoderTmpl<Key, State>::~StackDecoderTmpl()
        {
            
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::clear()
        {
            queue.clear();
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::set_max_size(RSize max_size)
        {
            queue.set_max_size(max_size);
        }

        template<class Key, class State> RSize StackDecoderTmpl<Key, State>::get_max_size()
        {
            return queue.get_max_size();
        }

        template<class Key, class State> RSize StackDecoderTmpl<Key, State>::size()
        {
            return queue.size();
        }

        template<class Key, class State> Key StackDecoderTmpl<Key, State>::get_current_min_cost()
        {
            return queue.get_current_min_cost();
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::push(State state)
        {
            queue.enqueue(state.cost(), state);
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::on_emit(typename StackDecoderTmpl<Key, State>::EmitStateFunc emit_func)
        {
            this->emit_func = emit_func;
        }

        template<class Key, class State> RBool StackDecoderTmpl<Key, State>::emit(typename StackDecoderTmpl<Key, State>::FoundStateFunc found_func)
        {
            auto state = queue.dequeue();
            if(state.second.terminated())
            {
                auto terminated = found_func(state.second);
                return terminated;
            }
            else
            {
                state.second.next_states([&](const State& state){
                    if(emit_func)
                    {
                        emit_func(state);
                    }
                    push(state);
                });
            }

            return rfalse;
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::search(typename StackDecoderTmpl<Key, State>::FoundStateFunc found_func)
        {
            RBool terminated = rfalse;
            while(!terminated && queue.size() != 0)
            {
                terminated = emit(found_func);
            }
        }

        template<class Key, class State> void StackDecoderTmpl<Key, State>::search_first_n(RSize n, typename StackDecoderTmpl<Key, State>::FoundStateFunc found_func)
        {
            RSize ct = 0;
            search([&](const State& state){
                if(found_func(state))
                {
                    return rtrue;
                }
                ct++;
                if(ct >= n)
                {
                    return rtrue;
                }
                return rfalse;
            });
        }


    }
}

#endif
