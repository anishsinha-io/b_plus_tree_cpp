//
// Created by Anish Sinha on 3/7/22.
//

#ifndef B_TREE_NODE_H
#define B_TREE_NODE_H

#include <vector>

template<class T>
class Node final {
public:
    explicit Node(uint32_t min_order = 2) {
        leaf = false;
        order = min_order;
        data = std::vector<T>(), children = std::vector<Node>();
    }

    // returns whether the node is a leaf node or not
    bool is_leaf();

    // returns the node's minimum order
    uint32_t get_order();

    // returns a const reference to the data in a node
    const std::vector<T> &get_data();

    // returns a const reference to the children in a node
    const std::vector<Node> &get_children();

    // sets the `leaf` property of a node
    void set_leaf(bool);
    
private:
    bool leaf;
    uint32_t order;
    std::vector<T> data;
    std::vector<Node> children;
};

#endif //B_TREE_NODE_H
