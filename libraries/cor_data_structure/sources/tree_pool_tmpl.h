#ifndef ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_data_structure/sources/array_pool_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        template<class T>class TreePoolItemTmpl;
        template<class T>class TreePoolTmpl;
        template<class T>class TreePoolTraverserTmpl;

        template<class T>class TreePoolItemTmpl
        {
        public:
            typedef TreePoolItemTmpl<T> Item;
            typedef ArrayPoolTmpl<Item > ArrayPool;
            typedef TreePoolTmpl<T> TreePool;
            typedef ArrayPoolRefTmpl<Item> Ref;
            typedef TreePoolTraverserTmpl<T> Traverser;
            typedef typename ArrayPoolTmpl<Item>::ItemPtr ArrayItemPtr;

        private:
            Ref parent;
            Ref child;
            Ref senior;
            Ref junior;
            T data;

        public:

            TreePoolItemTmpl();
            ~TreePoolItemTmpl();

            void set_self(Ref self);
            T* get();
            T& ref();

            Ref get_parent();
            Ref get_child();
            Ref get_senior();
            Ref get_junior();
            Ref get_senior_loop();
            Ref get_junior_loop();
            Ref get_self();

            ArrayItemPtr get_parent_p();
            ArrayItemPtr get_child_p();
            ArrayItemPtr get_senior_p();
            ArrayItemPtr get_junior_p();
            ArrayItemPtr get_senior_loop_p();
            ArrayItemPtr get_junior_loop_p();
            ArrayItemPtr get_self_p();

            void add_child(const Ref& child);
            void remove();

            RBool validate();

            void traverse(std::function<void(Ref&)> pre_order, std::function<void(Ref&)> post_order);
            void traverse_p(std::function<void(ArrayItemPtr)> pre_order, std::function<void(ArrayItemPtr)> post_order);
            //void traverse(std::function<void(Traverser&)> pre_order, std::function<void(Traverser&)> post_order);
            void traverse_traverser(std::function<void(Traverser&)> pre_order, std::function<void(Traverser&)> post_order);
            void pre_order(std::function<void(Ref&)> f);
            void pre_order_p(std::function<void(ArrayItemPtr)> f);
            void pre_order_with_depth(std::function<void(Ref&, RInt32)> f);
            void post_order(std::function<void(Ref&)> f);
            void post_order_p(std::function<void(ArrayItemPtr)> f);
            void post_order_with_depth(std::function<void(Ref&, RInt32)> f);
        
        };

        template<class T>class TreePoolTraverserTmpl
        {
        public:
            typedef TreePoolItemTmpl<T> Item;
            typedef ArrayPoolTmpl<Item> ArrayPool;
            typedef TreePoolTmpl<T> TreePool;
            typedef ArrayPoolRefTmpl<Item> Ref;
            typedef typename ArrayPoolTmpl<Item>::ItemPtr ArrayItemPtr;

        private:
            static const RSize down = 0;
            static const RSize up = 1;
            ArrayItemPtr root;
            ArrayItemPtr current;
            RSize state;

        public:

            TreePoolTraverserTmpl();
            TreePoolTraverserTmpl(ArrayItemPtr root);
            TreePoolTraverserTmpl(const Ref& root);
            ~TreePoolTraverserTmpl();

            Ref get_root();
            Ref get_current();
            ArrayItemPtr get_root_p();
            ArrayItemPtr get_current_p();
            RBool is_preorder();
            RBool is_postorder();
            void prune();
            RBool is_end();
            RBool is_not_end();
            void move_next();

        };


        template<class T>class TreePoolTmpl
        {
        public:
            typedef TreePoolItemTmpl<T> Item;
            typedef ArrayPoolTmpl<Item> ArrayPool;
            typedef ArrayPoolRefTmpl<Item> Ref;
            typedef std::vector<Item> Array;
            typedef TreePoolTraverserTmpl<T> Traverser;
            typedef Item* ItemPtr;
            typedef typename ArrayPoolTmpl<Item>::ItemPtr ArrayItemPtr;

        private:
            ArrayPool array_pool;

        public:
            TreePoolTmpl();
            TreePoolTmpl(RSize block_width);
            ~TreePoolTmpl();

            void clear();

            RSize size();
            RSize block_size();
            Ref select(RSize index);
            Ref create();

            void each(std::function<void(const Item&)> f);
            void each_p(std::function<void(ArrayItemPtr)> f);
            void each_ref(std::function<void(Ref&)> f);

        };
    }
}

#endif
