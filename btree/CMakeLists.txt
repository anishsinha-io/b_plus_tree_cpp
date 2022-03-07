add_library(btree src/btree/btree.cpp include/btree/btree.h src/btree/node.cpp include/btree/node.h)
target_include_directories(btree PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)