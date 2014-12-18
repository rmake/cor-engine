#ifndef ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_AI_STACK_DECODER_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        template<class Key, class Value> class StackDecoderStateTmpl
        {
        public:
            typedef std::function<void(const StackDecoderStateTmpl&)> NextStateFunc;

            StackDecoderStateTmpl();
            ~StackDecoderStateTmpl();

            Key cost() const;
            void next_states(NextStateFunc func) const;
            RBool terminated() const;
        };

        template<class Key, class State> class StackDecoderTmpl
        {
        public:
            typedef PriorityQueueTmpl<Key, State> Queue;
            typedef std::function<void(const State&)> EmitStateFunc;
            typedef std::function<RBool(const State&)> FoundStateFunc;

        private:
            Queue queue;
            EmitStateFunc emit_func;

        public:

            StackDecoderTmpl();
            ~StackDecoderTmpl();

            void clear();
            void set_max_size(RSize max_size);
            RSize get_max_size();
            RSize size();
            Key get_current_min_cost();
            void push(State state);
            void on_emit(EmitStateFunc emit_func);
            RBool emit(FoundStateFunc found_func);
            void search(FoundStateFunc found_func);
            void search_first_n(RSize n, FoundStateFunc found_func);
        };

        template<class Key, class State> class InstantStackDecoderTmpl
        {
        public:
            typedef PriorityQueueTmpl<Key, State> Queue;
            typedef std::function<void(const State&)> EmitStateFunc;
            typedef std::function<RBool(const State&)> FoundStateFunc;
            typedef std::function<RFloat(const State&)> CostFunc;
            typedef std::function<void(const State&, std::function<void(const State&)>)> NextStatesFunc;
            typedef std::function<RBool(const State&)> GoalFunc;

        private:
            Queue queue;
            EmitStateFunc emit_func;
            CostFunc cost_func;
            NextStatesFunc next_states_func;
            GoalFunc goal_func;

        public:

            InstantStackDecoderTmpl();
            ~InstantStackDecoderTmpl();

            void clear();
            void set_max_size(RSize max_size);
            RSize get_max_size();
            RSize size();
            Key get_current_min_cost();
            void push(State state);
            void set_func(CostFunc cost_func, NextStatesFunc next_states_func, GoalFunc goal_func);
            void on_emit(EmitStateFunc emit_func);
            void on_cost(CostFunc cost_func);
            void on_next_states(NextStatesFunc next_states_func);
            void on_goal(GoalFunc goal_func);
            RBool emit(FoundStateFunc found_func);
            void search(FoundStateFunc found_func);
            void search_first_n(RSize n, FoundStateFunc found_func);
        };
    }
}

#endif
