#ifndef ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_TMPL_H_
#define ____COR_DATA_STRUCTURE_SOURCES_GEOMETRY_R_TREE_POOL_TMPL_H_

#include "cor_type/sources/basic_types.h"
#include "cor_type/sources/primitive/box_tmpl.h"
#include "cor_data_structure/sources/tree_pool_tmpl.h"

namespace cor
{
    namespace data_structure
    {
        
        template<class T, class Vec, class VecI, class Data, class Func> class RTreePoolLeafItemTmpl
        {
        public:
            typedef type::BoxTmpl<T, Vec> Box;

            Box box;
            Vec center;
            VecI index;
            RBool left;
            Data data;

            Box get_box();
            T get_distance(const Vec& p);

        };

        template<class T, class Vec, class VecI, class Data, class Func> class RTreePoolNodeItemTmpl
        {
        public:
            typedef type::BoxTmpl<T, Vec> Box;
            typedef RTreePoolLeafItemTmpl<T, Vec, VecI, Data, Func> Item;
            typedef ArrayPoolRefTmpl<Item> Ref;

            Box box;
            Ref leaf;
            Ref _reserve1;
            Ref _reserve2;
            Ref _reserve3;
        };

        template<class T, class Vec, class VecI, class Data> class RTreePoolFuncDefaultTmpl
        {
        public:
            typedef type::BoxTmpl<T, Vec> Box;
            static Box get_box(Data& data);
            static T get_distance(Data& data, const Vec& p);
        };

        template<class T, class Vec, class VecI, class Data, class Func = RTreePoolFuncDefaultTmpl<T, Vec, VecI, Data> > class RTreePoolTmpl
        {
        public:
            typedef type::BoxTmpl<T, Vec> Box;
            typedef RTreePoolNodeItemTmpl<T, Vec, VecI, Data, Func> NodeItem;
            typedef TreePoolTmpl<NodeItem> NodePool;
            typedef typename TreePoolTmpl<NodeItem>::Ref NodeRef;
            typedef typename TreePoolTmpl<NodeItem>::ArrayItemPtr NodeItemPtr;
            typedef RTreePoolLeafItemTmpl<T, Vec, VecI, Data, Func> Item;
            typedef ArrayPoolTmpl<Item> LeafPool;
            typedef ArrayPoolRefTmpl<Item> Ref;
            typedef typename LeafPool::ItemPtr LeafItemPtr;
            typedef std::vector<Ref> RefArray;

        private:
            
            NodePool nodes;
            LeafPool leafs;
            NodeRef root_node;
            RSize reserve_item_size;
            RSize dimension;

            void common_init();

        public:

            RTreePoolTmpl();
            RTreePoolTmpl(RSize block_width);
            ~RTreePoolTmpl();

            void clear();

            RSize size();
            RSize block_size();
            Ref select(RSize index);
            Ref create(const Data& data);

            void each(std::function<void(const Item&)> f);
            void each_p(std::function<void(LeafItemPtr)> f);
            void each_ref(std::function<void(Ref&)> f);

            NodeRef get_root_node();
            void update_leaf_box();
            void fit();
            void construct();
            void find(const Box& box, std::function<void(Ref&)>);
            void find_pair(RTreePoolTmpl& tp, std::function<void(Ref&, Ref&)>);
            void find_near(const Vec& p, std::function<RBool(const T&, Ref&)>);

        };
    }
}

#endif
