//
// Created by Anish Sinha on 3/7/22.
//

#ifndef B_TREE_USER_H
#define B_TREE_USER_H

#include <utility>
#include <vector>
#include <string>

class User {
public:
    explicit User(uint32_t user_id, std::string n, std::string u) {
        id = user_id;
        name = std::move(n);
        username = std::move(u);
    }

    // overloads
    bool operator==(const User &) const;
    bool operator>(const User &) const;
    bool operator<(const User &) const;
    bool operator>=(const User &) const;
    bool operator<=(const User &) const;

    // print a user
    void print();
    [[nodiscard]] uint32_t get_id() const;
private:
    uint32_t id;
    std::string name;
    std::string username;
};

#endif //B_TREE_USER_H
