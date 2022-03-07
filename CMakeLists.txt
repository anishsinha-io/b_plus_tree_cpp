cmake_minimum_required(VERSION 3.20)
project(b_tree)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(btree)
add_executable(b_tree main.cpp)
target_link_libraries(b_tree PUBLIC btree)
