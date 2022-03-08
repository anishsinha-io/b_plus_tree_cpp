//
// Created by Anish Sinha on 3/7/22.
//

#ifndef B_TREE_NODE_H
#define B_TREE_NODE_H

#include <iterator>

template<class T>
class Node {
public:

    explicit Node(std::uint32_t min_order = 2) {
        order = min_order, data = std::vector<T>(), children = std::vector<Node>(), leaf = true;
    }

    explicit Node(std::vector<T> _data, std::vector<Node> _children, std::uint32_t min_order) {
        data = _data, children = _children, order = min_order, leaf = true;
    }

    bool full() {
        return data.size() == 2 * order - 1;
    }

    uint32_t get_order() {
        return order;
    }

    std::vector<T> get_data() {
        return data;
    }

    std::vector<Node> get_children() {
        return children;
    }

    void push_key(const T &key) {
        data.push_back(key);
    }

    void push_key(const T &key, uint32_t index) {
        data.insert(key, index);
    }

    void push_child(const Node &node) {
        children.push_back(node);
    }

    void push_child(const Node &node, uint32_t index) {
        children.insert(node, index);
    }

    static std::tuple<Node &, Node &, T &> split(Node &node) {
        Node<T> *left, *right;
        std::uint32_t const half_keys = node.data.size() / 2;
        std::vector<Node> left_children = std::vector<Node>(), right_children = std::vector<Node>();
        auto mid(node.data.begin() + node.data.size() / 2);

    }

private:
    bool leaf;
    std::uint32_t order;
    std::vector<T> data;
    std::vector<Node> children;
};


#endif //B_TREE_NODE_H
