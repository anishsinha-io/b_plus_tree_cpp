#include <iostream>
#include "user/user.h"
#include "btree/node.h"

int main() {
    Node<User> node1 = Node<User>(2);
    User anish = User(2, "anishsinha", "anish");
    User xiang = User(5, "xianghuang", "xiang");
    User volodymyr = User(1, "volodymyr", "zelenskyy");
    node1.push_key(anish);
    node1.push_key(xiang);
    node1.push_key(volodymyr);
    Node<User>::split(node1);
    return 0;
}
