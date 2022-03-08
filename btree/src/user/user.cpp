//
// Created by Anish Sinha on 3/7/22.
//

#include <iostream>
#include <optional>
#include "user/user.h"

bool User::operator==(const User &u) const {
    return id == u.get_id();
}

bool User::operator>(const User &u) const {
    return id > u.get_id();
}

bool User::operator<(const User &u) const {
    return id < u.get_id();
}

bool User::operator>=(const User &u) const {
    return id >= u.get_id();
}

bool User::operator<=(const User &u) const {
    return id <= u.get_id();
}

uint32_t User::get_id() const {
    return this->id;
}

std::pair<std::optional<User *>, uint32_t> User::find_index(std::vector<User> &users, const User &new_user) {
    uint32_t start = 0, end = users.size() - 1;
    while (start <= end) {
        uint32_t mid = (start + end) / 2;
        if (users[mid] == new_user) return std::make_pair(&(users[mid]), mid);
        if (users[mid] < new_user) start = mid + 1;
        else end = mid - 1;
    }
    return std::make_pair(std::nullopt, end + 1);
}

void User::print() {
    std::cout << "{" << std::endl;
    std::cout << "\tid: " << id << std::endl;
    std::cout << "\tname: " << name << std::endl;
    std::cout << "\tusername: " << username << std::endl;
    std::cout << "}" << std::endl;
}
