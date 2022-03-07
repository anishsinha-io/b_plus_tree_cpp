//
// Created by Anish Sinha on 3/4/22.
//

#ifndef B_TREE_BTREE_H
#define B_TREE_BTREE_H

#include <btree/node.h>

template<class T>
class Tree final {
public:
    Tree() {
        root = nullptr;
    }


private:
    Node<T> *root;
};

#endif //B_TREE_BTREE_H
