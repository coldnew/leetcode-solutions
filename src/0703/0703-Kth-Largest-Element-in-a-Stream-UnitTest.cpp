#include "0703-Kth-Largest-Element-in-a-Stream.cpp"
#include <gtest/gtest.h>
#include <memory>

#define LEETCODE_TEST(KthLargestX)                           \
  TEST(KthLargestElementInAStream, KthLargestX) {            \
    std::vector<int> arr = {4, 5, 8, 2};                     \
    auto kthLargest = std::make_unique<KthLargestX>(3, arr); \
    EXPECT_EQ(4, kthLargest->add(3));                        \
    EXPECT_EQ(5, kthLargest->add(5));                        \
    EXPECT_EQ(5, kthLargest->add(10));                       \
    EXPECT_EQ(8, kthLargest->add(9));                        \
    EXPECT_EQ(8, kthLargest->add(4));                        \
  }

LEETCODE_TEST(KthLargest1)
