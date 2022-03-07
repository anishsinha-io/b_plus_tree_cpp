//
// Created by Anish Sinha on 3/7/22.
//

#include <iostream>
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

void User::print() {
    std::cout << "{" << std::endl;
    std::cout << "\tid: " << id << std::endl;
    std::cout << "\tname: " << name << std::endl;
    std::cout << "\tusername: " << username << std::endl;
    std::cout << "}" << std::endl;
}
