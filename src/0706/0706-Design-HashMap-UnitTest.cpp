#include "0706-Design-HashMap.cpp"
#include <gtest/gtest.h>
#include <memory>

#define LEETCODE_TEST(MyHashMapX)                    \
  TEST(DesignHashMapTest, MyHashMapX) {              \
    auto myHashMap = std::make_unique<MyHashMapX>(); \
    myHashMap->put(1, 1);                            \
    myHashMap->put(2, 2);                            \
    EXPECT_EQ(1, myHashMap->get(1));                 \
    EXPECT_EQ(-1, myHashMap->get(3));                \
    myHashMap->put(2, 1);                            \
    EXPECT_EQ(1, myHashMap->get(2));                 \
    myHashMap->remove(2);                            \
    EXPECT_EQ(-1, myHashMap->get(2));                \
  }

LEETCODE_TEST(MyHashMap1)
