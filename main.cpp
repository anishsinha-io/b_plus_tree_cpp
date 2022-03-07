#include <iostream>
#include "user/user.h"

int main() {
    User anish = User(1, "anish sinha", "anish");
    User xiang = User(1, "xiang huang", "xiang");

    std::cout << (anish == xiang) << std::endl;
    std::cout << (anish < xiang) << std::endl;
    std::cout << (anish > xiang) << std::endl;

    return 0;
}
