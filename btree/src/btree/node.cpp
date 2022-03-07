//
// Created by Anish Sinha on 3/7/22.
//

#include "btree/node.h"

template<class T>
bool Node<T>::is_leaf() {
    return leaf;
}

template<class T>
const std::vector<T> &Node<T>::get_data() {
    return data;
}

template<class T>
const std::vector<Node<T>> &Node<T>::get_children() {
    return children;
}

template<class T>
uint32_t Node<T>::get_order() {
    return order;
}

template<class T>
void Node<T>::set_leaf(bool is_leaf) {
    leaf = is_leaf;
}