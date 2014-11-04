#ifndef ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_TREE_POOL_TMPL_IMPL_H_

#include "tree_pool_tmpl.h"
#include "cor_data_structure/sources/array_pool_tmpl_impl.h"
#include "cor_system/sources/logger.h"  

namespace cor
{
    namespace data_structure
    {
        template<class T> TreePoolItemTmpl<T>::TreePoolItemTmpl()
        {
        
        }

        template<class T> TreePoolItemTmpl<T>::~TreePoolItemTmpl()
        {
            
        }

        template<class T> void TreePoolItemTmpl<T>::set_self(Ref self)
        {
            this->senior = self;
            this->junior = self;
        }
        
        template<class T> T* TreePoolItemTmpl<T>::get()
        {
            return &data;
        }

        template<class T> T& TreePoolItemTmpl<T>::ref()
        {
            return data;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_parent()
        {
            return parent;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_child()
        {
            return child;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_senior()
        {
            if(parent)
            {
                if(parent->child.get() == senior.get())
                {
                    return Ref();
                }
            }
            return senior;
            
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_junior()
        {
            if(parent)
            {
                if(parent->child.get() == senior.get())
                {
                    return Ref();
                }
            }
            return junior;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_senior_loop()
        {
            return senior;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_junior_loop()
        {

            return junior;
        }

        template<class T> typename TreePoolItemTmpl<T>::Ref TreePoolItemTmpl<T>::get_self()
        {
            return senior->junior;
        }

        //
        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_parent_p()
        {
            return parent.get_p();
        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_child_p()
        {
            return child.get_p();
        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_senior_p()
        {
            if(parent)
            {
                if(parent->chil.get_p() == senior.get_p())
                {
                    return nullptr;
                }
            }
            return senior.get_p();

        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_junior_p()
        {
            if(parent)
            {
                if(parent->child.get_p() == senior.get_p())
                {
                    return nullptr;
                }
            }
            return junior.get_p();
        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_senior_loop_p()
        {
            return senior.get_p();
        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_junior_loop_p()
        {

            return junior.get_p();
        }

        template<class T> typename TreePoolItemTmpl<T>::ArrayItemPtr TreePoolItemTmpl<T>::get_self_p()
        {
            return senior->junior.get_p();
        }

        template<class T> void TreePoolItemTmpl<T>::add_child(const Ref& child)
        {
            child->remove();

            if(!this->child)
            {
                this->child = child;
            }

            Ref old_child = this->child;

            child->senior = old_child->senior;
            child->junior = old_child;

            old_child->senior->junior = child;
            old_child->senior = child;

            child->parent = get_self();
        }

        template<class T> void TreePoolItemTmpl<T>::remove()
        {
            if(parent)
            {
                if(parent->child.get() == get_self().get())
                {
                    Ref pc = parent->child;
                    if(pc->junior.get() == pc.get())
                    {
                        parent->child.reset();
                    }
                    else
                    {
                        parent->child = pc->junior;
                    }
                }

                junior->senior = senior;
                senior->junior = junior;
                
                Ref self = get_self();
                senior = self;
                junior = self;

                parent.reset();
            }
        }

        template<class T> RBool TreePoolItemTmpl<T>::validate()
        {
            if(junior->senior.get() != senior->junior.get())
            {
                return rfalse;
            }
            auto self = get_self();
            if(parent)
            {
                RBool found = rfalse;
                auto t = parent->child;
                while(t)
                {
                    if(t.get() == self.get())
                    {
                        found = rtrue;
                    }
                    t = t->get_junior();
                }

                if(!found)
                {
                    return rfalse;
                }
            }
            if(child && child->parent.get() != self.get())
            {
                return rfalse;
            }
            return rtrue;
        }

        template<class T> void TreePoolItemTmpl<T>::traverse_traverser(std::function<void(Traverser&)> pre_order, std::function<void(Traverser&)> post_order)
        {
            Traverser traverser(get_self());
            while(traverser.is_not_end())
            {
                if(traverser.is_preorder())
                {
                    pre_order(traverser);
                }
                else if(traverser.is_postorder())
                {
                    post_order(traverser);
                }

                traverser.move_next();
            }
            post_order(traverser);
        }

        template<class T> void TreePoolItemTmpl<T>::traverse(std::function<void(Ref&)> pre_order, std::function<void(typename TreePoolItemTmpl<T>::Ref&)> post_order)
        {
            traverse_traverser([&](Traverser& t){
                Ref r(t.get_current_p());
                pre_order(r);
            }, [&](Traverser& t){
                Ref r(t.get_current_p());
                post_order(r);
            });
        }

        template<class T> void TreePoolItemTmpl<T>::traverse_p(std::function<void(ArrayItemPtr)> pre_order, std::function<void(ArrayItemPtr)> post_order)
        {
            traverse_traverser([&](Traverser& t){
                auto r = t.get_current_p();
                pre_order(r);
            }, [&](Traverser& t){
                auto r = t.get_current_p();
                post_order(r);
            });
        }

        //template<class T> void  TreePoolItemTmpl<T>::traverse_traverser(std::function<void(Traverser&)> pre_order, std::function<void(Traverser&)> post_order)
        //{
        //    traverse(pre_order, post_order);
        //}

        template<class T> void TreePoolItemTmpl<T>::pre_order(std::function<void(typename TreePoolItemTmpl<T>::Ref&)> f)
        {
            traverse([&](Ref& r){
                f(r);
            }, [&](Ref& r){

            });
        }

        template<class T> void TreePoolItemTmpl<T>::pre_order_p(std::function<void(typename TreePoolItemTmpl<T>::ArrayItemPtr)> f)
        {
            traverse_p([&](ArrayItemPtr r){
                f(r);
            }, [&](ArrayItemPtr r){

            });
        }

        template<class T> void TreePoolItemTmpl<T>::pre_order_with_depth(std::function<void(typename TreePoolItemTmpl<T>::Ref&, RInt32)> f)
        {
            RInt32 depth = 0;
            traverse([&](Ref& r){
                f(r, depth);
                depth++;
            }, [&](Ref& r){
                depth--;
            });
        }

        template<class T> void TreePoolItemTmpl<T>::post_order(std::function<void(typename TreePoolItemTmpl<T>::Ref&)> f)
        {
            traverse([&](Ref& r){
                
            }, [&](Ref& r){
                f(r);
            });
        }

        template<class T> void TreePoolItemTmpl<T>::post_order_p(std::function<void(typename TreePoolItemTmpl<T>::ArrayItemPtr)> f)
        {
            traverse_p([&](ArrayItemPtr r){

            }, [&](ArrayItemPtr r){
                f(r);
            });
        }

        template<class T> void TreePoolItemTmpl<T>::post_order_with_depth(std::function<void(typename TreePoolItemTmpl<T>::Ref&, RInt32)> f)
        {
            RInt32 depth = 0;
            traverse([&](Ref& r){
                depth++;
            }, [&](Ref& r){
                depth--;
                f(r, depth);
            });
        }



        template<class T> TreePoolTraverserTmpl<T>::TreePoolTraverserTmpl()
        {
            this->state = down;
        }

        template<class T> TreePoolTraverserTmpl<T>::TreePoolTraverserTmpl(typename TreePoolTraverserTmpl<T>::ArrayItemPtr root)
        {
            this->root = root;
            this->current = root;
            this->state = down;
        }

        template<class T> TreePoolTraverserTmpl<T>::TreePoolTraverserTmpl(const typename TreePoolTraverserTmpl<T>::Ref& root)
        {
            this->root = root.get_p();
            this->current = root.get_p();
            this->state = down;
        }

        template<class T> TreePoolTraverserTmpl<T>::~TreePoolTraverserTmpl()
        {
        
        }

        template<class T> typename TreePoolTraverserTmpl<T>::Ref TreePoolTraverserTmpl<T>::get_root()
        {
            return Ref(root);
        }

        template<class T> typename TreePoolTraverserTmpl<T>::Ref TreePoolTraverserTmpl<T>::get_current()
        {
            return Ref(current);
        }

        template<class T> typename TreePoolTraverserTmpl<T>::ArrayItemPtr TreePoolTraverserTmpl<T>::get_root_p()
        {
            return root;
        }

        template<class T> typename TreePoolTraverserTmpl<T>::ArrayItemPtr TreePoolTraverserTmpl<T>::get_current_p()
        {
            return current;
        }


        template<class T> RBool TreePoolTraverserTmpl<T>::is_preorder()
        {
            return state == down;
        }

        template<class T> RBool TreePoolTraverserTmpl<T>::is_postorder()
        {
            return state == up;
        }

        template<class T> void TreePoolTraverserTmpl<T>::prune()
        {
            state = up;
        }

        template<class T> RBool TreePoolTraverserTmpl<T>::is_end()
        {
            return root == current && state == up;
        }

        template<class T> RBool TreePoolTraverserTmpl<T>::is_not_end()
        {
            return !is_end();
        }

        template<class T> void TreePoolTraverserTmpl<T>::move_next()
        {
            if(state == down)
            {
                auto cp = current->data.get_child_p();
                if(!cp)
                {
                    state = up;
                }
                else
                {
                    current = cp;
                }
            }
            else if(state == up)
            {
                auto pa = current->data.get_parent_p();
                if(pa &&
                    current == pa->data.get_child_p()->data.get_senior_loop_p())
                {
                    current = pa;
                }
                else if(pa)
                {
                    state = down;
                    current = current->data.get_junior_loop_p();
                }
            }
                
        }


        template<class T> TreePoolTmpl<T>::TreePoolTmpl()
        {

        }

        template<class T> TreePoolTmpl<T>::TreePoolTmpl(RSize block_width) : array_pool(block_width)
        {

        }

        template<class T> TreePoolTmpl<T>::~TreePoolTmpl()
        {

        }

        template<class T> void TreePoolTmpl<T>::clear()
        {
            array_pool.clear();
        }

        template<class T> RSize TreePoolTmpl<T>::size()
        {
            return array_pool.size();
        }

        template<class T> RSize TreePoolTmpl<T>::block_size()
        {
            return array_pool.block_size();
        }

        template<class T> typename TreePoolTmpl<T>::Ref TreePoolTmpl<T>::select(RSize index)
        {
            return array_pool.select(index);
        }

        template<class T> typename TreePoolTmpl<T>::Ref TreePoolTmpl<T>::create()
        {
            Ref r = array_pool.create();
            r->set_self(r);
            return r;
        }

        template<class T> void TreePoolTmpl<T>::each(std::function<void(const typename TreePoolTmpl<T>::Item&)> f)
        {
            array_pool.each(f);
        }

        template<class T> void TreePoolTmpl<T>::each_p(std::function<void(typename TreePoolTmpl<T>::ArrayItemPtr)> f)
        {
            array_pool.each_p(f);
        }

        template<class T> void TreePoolTmpl<T>::each_ref(std::function<void(typename TreePoolTmpl<T>::Ref&)> f)
        {
            array_pool.each_ref(f);
        }


    }
}

#endif
