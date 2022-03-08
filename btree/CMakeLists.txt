add_library(btree src/user/user.cpp include/user/user.h include/btree/node.h)
target_include_directories(btree PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)