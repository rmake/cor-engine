#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_TMPL_IMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_TMPL_IMPL_H_

#include "r_tree_pool_tmpl.h"
#include "cor_algorithm/sources/utilities.h"
#include "cor_data_structure/sources/tree_pool_tmpl_impl.h"
#include "cor_type/sources/primitive/box_tmpl_impl.h"
#include "cor_data_structure/sources/tree_pool_tmpl_impl.h"
#include "cor_data_structure/sources/ai/priority_queue_tmpl_impl.h"
#include "cor_data_structure/sources/ai/stack_decoder_tmpl_impl.h"
#include "cor_system/sources/cor_time.h"
#include <algorithm>

namespace cor
{
    namespace data_structure
    {
        template<class T, class Vec, class VecI, class Data, class Func> typename RTreePoolLeafItemTmpl<T, Vec, VecI, Data, Func>::Box RTreePoolLeafItemTmpl<T, Vec, VecI, Data, Func>::get_box()
        {
            return Func::get_box(data);
        }

        template<class T, class Vec, class VecI, class Data, class Func> T RTreePoolLeafItemTmpl<T, Vec, VecI, Data, Func>::get_distance(const Vec& p)
        {
            return Func::get_distance(data, p);
        }

        template<class T, class Vec, class VecI, class Data> typename RTreePoolFuncDefaultTmpl<T, Vec, VecI, Data>::Box RTreePoolFuncDefaultTmpl<T, Vec, VecI, Data>::get_box(Data& data)
        {
            return data->get_box();
        }

        template<class T, class Vec, class VecI, class Data> T RTreePoolFuncDefaultTmpl<T, Vec, VecI, Data>::get_distance(Data& data, const Vec& p)
        {
            return data->get_distance(p);
        }

        template<class T, class Vec, class VecI, class Data, class Func> RTreePoolTmpl<T, Vec, VecI, Data, Func>::RTreePoolTmpl()
        {
            common_init();
        }

        template<class T, class Vec, class VecI, class Data, class Func> RTreePoolTmpl<T, Vec, VecI, Data, Func>::RTreePoolTmpl(RSize block_width) : nodes(block_width), leafs(block_width)
        {
            common_init();
        }

        template<class T, class Vec, class VecI, class Data, class Func> RTreePoolTmpl<T, Vec, VecI, Data, Func>::~RTreePoolTmpl()
        {
            
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::clear()
        {
            nodes.clear();
            leafs.clear();
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::common_init()
        {
            Vec v;
            dimension = std::max(v.size(), static_cast<RSize>(1));
        }

        template<class T, class Vec, class VecI, class Data, class Func> RSize RTreePoolTmpl<T, Vec, VecI, Data, Func>::size()
        {
            return leafs.size();
        }

        template<class T, class Vec, class VecI, class Data, class Func> RSize RTreePoolTmpl<T, Vec, VecI, Data, Func>::block_size()
        {
            return leafs.block_size();
        }

        template<class T, class Vec, class VecI, class Data, class Func> typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref RTreePoolTmpl<T, Vec, VecI, Data, Func>::select(RSize index)
        {
            return leafs.select(index);
        }

        template<class T, class Vec, class VecI, class Data, class Func> typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref RTreePoolTmpl<T, Vec, VecI, Data, Func>::create(const Data& data)
        {
            auto r = leafs.create();
            r->data = data;
            return r;
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::each(std::function<void(const typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Item&)> f)
        {
            leafs.each(f);
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::each_p(std::function<void(typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::LeafItemPtr)> f)
        {
            leafs.each_p(f);
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::each_ref(std::function<void(typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref&)> f)
        {
            leafs.each_ref(f);
        }

        template<class T, class Vec, class VecI, class Data, class Func> typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::NodeRef RTreePoolTmpl<T, Vec, VecI, Data, Func>::get_root_node()
        {
            return root_node;
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::update_leaf_box()
        {
            //leafs.each_ref([&](Ref& r){
            //    r->box = r->get_box();
            //    r->center = r->box.get_center();
            //});
            leafs.each_p([&](LeafItemPtr r){
                r->data.box = r->data.get_box();
                r->data.center = r->data.box.get_center();
            });
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::fit()
        {
            if(!root_node)
            {
                return;
            }

            root_node->post_order_p([&](NodeItemPtr r){
                auto c = r->data.get_child_p();
                auto t = c;
                Box b;
                if(t)
                {
                    b.set_rect(t->data.get()->box);

                    t = t->data.get_junior_p();

                    while(t)
                    {
                        b.add_rect(t->data.get()->box);

                        t = t->data.get_junior_p();
                    }
                }
                auto& leaf = r->data.get()->leaf;
                if(leaf)
                {
                    if(c)
                    {
                        b.add_rect(leaf->box);
                    }
                    else
                    {
                        b.set_rect(leaf->box);
                    }
                }
                r->data.get()->box = b;

            });
        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::construct()
        {
            typedef std::vector<typename LeafPool::ItemPtr> RefPtrArray;
            RefPtrArray a;

            a.reserve(leafs.size());

            update_leaf_box();

            leafs.each_p([&](LeafItemPtr r){
                a.push_back(r);
            });

            std::vector<RefPtrArray> da;

            da.resize(dimension);

            algorithm::each_ref_all_index(da, [&](RefPtrArray& dta, RSize i){
                dta = a;
            });

            typedef typename LeafPool::ItemPtr ItemPtr;

            algorithm::each_ref_all_index(da, [&](RefPtrArray& dta, RSize i){
                auto greater = [&](ItemPtr r0, ItemPtr r1){
                    return r0->data.center[i] > r1->data.center[i];
                };

                std::stable_sort(dta.begin(), dta.end(), greater);
            });

            algorithm::each_ref_all_index(da, [&](RefPtrArray& dta, RSize i){
                algorithm::each_ref_all_index(dta, [&](ItemPtr r, RSize j){
                    r->data.index[i] = j;
                });
            });

            

            //
            {
                struct Range
                {
                    RSize start_index;
                    RSize end_index;
                    NodeRef node_ref;

                    Range(RSize start_index, RSize end_index, const NodeRef& node_ref)
                    {
                        this->start_index = start_index;
                        this->end_index = end_index;
                        this->node_ref = node_ref;
                    }
                };

                typedef std::vector<Range> RangeArray;
                RangeArray stack;
                stack.reserve(32);
                Box box;
                RefPtrArray ta;
                ta.resize(a.size());

                nodes.clear();

                root_node = nodes.create();

                if(a.size() <= 0)
                {
                    return;
                }

                stack.push_back(Range(0, a.size(), root_node));

                while(stack.size() > 0)
                {
                    auto range = stack.back();
                    stack.pop_back();

                    RSize i, ied;
                    i = range.start_index;
                    ied = range.end_index;

                    auto wa = ied - i;
                    auto ci = i + wa / 2;

                    auto& sxa = da[0];

                    box.set_rect(sxa[i]->data.box);
                    i++;

                    for(; i != ied; i++)
                    {
                        box.add_rect(sxa[i]->data.box);
                    }

                    auto& node_ref = range.node_ref;
                    node_ref->get()->box = box;

                    if(wa == 1)
                    {
                        i = range.start_index;
                        node_ref->get()->leaf = sxa[i];
                        continue;
                    }

                    RSize max_index = 0;
                    T w = (T)0.0;

                    algorithm::each_ref_all_index(da, [&](RefPtrArray& dta, RSize i){
                        if(w < box.w[i])
                        {
                            w = box.w[i];
                            max_index = i;
                        }
                    });

                    {
                        i = range.start_index;
                        ied = range.end_index;

                        auto li = i;
                        auto ri = ci;

                        auto& sca = da[max_index];

                        auto c_index = sca[ci]->data.index[max_index];

                        for(; i != ied; i++)
                        {
                            if(sca[i]->data.index[max_index] < c_index)
                            {
                                ta[li] = sca[i];
                                sca[i]->data.left = rtrue;
                                sca[i]->data.index[max_index] = li;
                                li++;
                            }
                            else
                            {
                                ta[ri] = sca[i];
                                sca[i]->data.left = rfalse;
                                sca[i]->data.index[max_index] = ri;
                                ri++;
                            }
                        }

                        i = range.start_index;
                        ied = range.end_index;

                        for(; i != ied; i++)
                        {
                            sca[i] = ta[i];
                        }

                    }

                    {
                        algorithm::each_ref_all_index(da, [&](RefPtrArray& dta, RSize j){

                            if(j == max_index)
                            {
                                return;
                            }

                            i = range.start_index;
                            ied = range.end_index;

                            auto li = i;
                            auto ri = ci;

                            auto& sca = da[j];

                            for(; i != ied; i++)
                            {
                                if(sca[i]->data.left)
                                {
                                    ta[li] = sca[i];
                                    sca[i]->data.index[j] = li;
                                    li++;
                                }
                                else
                                {
                                    ta[ri] = sca[i];
                                    sca[i]->data.index[j] = ri;
                                    ri++;
                                }
                            }

                            i = range.start_index;
                            ied = range.end_index;

                            for(; i != ied; i++)
                            {
                                sca[i] = ta[i];
                            }
                        });
                    }

                    
                    i = range.start_index;
                    ied = range.end_index;


                    NodeRef left;
                    NodeRef right;

                    //if(ci - i > 1)
                    {
                        left = nodes.create();
                        node_ref->add_child(left);
                        stack.push_back(Range(i, ci, left));
                    }
                    //else
                    //{
                    //    node_ref->get()->leaf = sxa[i];
                    //}

                    //if(ied - ci > 1)
                    {
                        right = nodes.create();
                        node_ref->add_child(right);
                        stack.push_back(Range(ci, ied, right));
                    }
                    //else
                    //{
                    //    node_ref->get()->leaf = sxa[ci];
                    //}

                }
            
            }



        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::find(const typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Box& box, std::function<void(typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref&)> f)
        {
            root_node->traverse_traverser([&](typename NodePool::Traverser& t){
                auto r = t.get_current();
                if(r->get()->box.is_cross(box))
                {
                    auto& leaf = r->get()->leaf;
                    if(leaf)
                    {
                        f(leaf);
                    }
                }
                else
                {
                    t.prune();
                }
            }, [&](typename NodePool::Traverser& t){
                
            });

        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::find_pair(RTreePoolTmpl<T, Vec, VecI, Data, Func>& tp, std::function<void(typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref&, typename RTreePoolTmpl<T, Vec, VecI, Data, Func>::Ref&)> f)
        {
            auto node0 = root_node;
            auto node1 = tp.root_node;

            struct NodePair
            {
                NodeItemPtr r0;
                NodeItemPtr r1;

                NodePair(const NodeItemPtr& r0, const NodeItemPtr& r1)
                {
                    this->r0 = r0;
                    this->r1 = r1;
                }
            };

            typedef std::vector<NodePair> PairArray;

            PairArray stack;

            stack.reserve(32);

            stack.push_back(NodePair(node0.get_p(), node1.get_p()));

            while(stack.size() > 0)
            {
                auto pair = stack.back();
                stack.pop_back();
                auto r0 = pair.r0;
                auto r1 = pair.r1;

                if(!r0 || !r1 || !r0->data.get()->box.is_cross(r1->data.get()->box))
                {
                    continue;
                }

                auto& l0 = r0->data.get()->leaf;
                auto& l1 = r1->data.get()->leaf;

                if(l0 && l1)
                {
                    if(l0.get() == l1.get())
                    {
                        continue;
                    }
                    
                    f(l0, l1);
                }
                else if(l0)
                {
                    auto t = r1->data.get_child_p();
                    while(t)
                    {
                        stack.push_back(NodePair(r0, t));
                        t = t->data.get_junior_p();
                    }
                }
                else if(l1)
                {
                    auto t = r0->data.get_child_p();
                    while(t)
                    {
                        stack.push_back(NodePair(t, r1));
                        t = t->data.get_junior_p();
                    }
                }
                else if(r0->data.get()->box.get_width_size() <= r1->data.get()->box.get_width_size())
                {
                    auto t = r1->data.get_child_p();
                    while(t)
                    {
                        stack.push_back(NodePair(r0, t));
                        t = t->data.get_junior_p();
                    }
                }
                else
                {
                    auto t = r0->data.get_child_p();
                    while(t)
                    {
                        stack.push_back(NodePair(t, r1));
                        t = t->data.get_junior_p();
                    }
                }


            }

        }

        template<class T, class Vec, class VecI, class Data, class Func> void RTreePoolTmpl<T, Vec, VecI, Data, Func>::find_near(const Vec& p, std::function<RBool(const T&, Ref&)> near_func)
        {
            struct NodeState
            {
                T d;
                NodeRef ref;
                const Vec& p;

                NodeState(const Vec& tp) : p(tp)
                {
                    
                }

                T cost()
                {
                    return d;
                }

                void set_ref(const NodeRef& ref)
                {
                    this->ref = ref;
                    auto& b = ref->get()->box;
                    d = b.get_distance(p);
                }

                void next_states(std::function<void(const NodeState&)> func) const
                {
                    auto c = ref->get_child();
                    while(c)
                    {
                        NodeState st(p);
                        st.set_ref(c);
                        func(st);

                        c = c->get_junior();
                    }

                }

                RBool terminated() const
                {
                    return ref->get_child().get() ? rfalse : rtrue;
                }
            };
            StackDecoderTmpl<T, NodeState> nsd;
            PriorityQueueTmpl<T, Ref> lpq;

            NodeState st(p);
            if(this->root_node)
            {
                st.set_ref(this->root_node);

                nsd.push(st);

                auto nf = [&](const NodeState& st){
                    auto l = st.ref->get()->leaf;
                    if(l)
                    {
                        lpq.enqueue(l->get_distance(p), l);
                    }
                    return rfalse;
                };

                RBool terminated = rfalse;
                while(!terminated && (nsd.size() != 0 || lpq.size() != 0))
                {
                    if(nsd.size() == 0)
                    {
                        auto l = lpq.dequeue();
                        terminated = near_func(l.first, l.second);
                    }
                    else if(lpq.size() == 0)
                    {
                        nsd.emit(nf);
                    }
                    else if(nsd.get_current_min_cost() < lpq.get_current_min_cost())
                    {
                        //terminated = 
                        nsd.emit(nf);
                    }
                    else
                    {
                        auto l = lpq.dequeue();
                        terminated = near_func(l.first, l.second);
                    }

                }
            }
            
        }

    }
}

#endif
