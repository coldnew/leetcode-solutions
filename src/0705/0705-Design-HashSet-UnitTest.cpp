#include "0705-Design-HashSet.cpp"
#include <gtest/gtest.h>
#include <memory>

#define LEETCODE_TEST(MyHashSetX)                    \
  TEST(DesignHashSetTest, MyHashSetX) {              \
    auto myHashSet = std::make_unique<MyHashSetX>(); \
    myHashSet->add(1);                               \
    myHashSet->add(2);                               \
    EXPECT_TRUE(myHashSet->contains(1));             \
    EXPECT_TRUE(myHashSet->contains(2));             \
    EXPECT_FALSE(myHashSet->contains(3));            \
    myHashSet->add(2);                               \
    EXPECT_TRUE(myHashSet->contains(2));             \
    myHashSet->remove(2);                            \
    EXPECT_FALSE(myHashSet->contains(2));            \
  }

LEETCODE_TEST(MyHashSet1)
LEETCODE_TEST(MyHashSet2)
