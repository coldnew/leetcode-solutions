#include "0410-Split-Array-Largest-Sum.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                   \
  TEST(SplitArrayLargestSumTest, SolutionX##_01) { \
    std::vector<int> nums = {7, 2, 5, 10, 8};      \
    Solution1 s;                                   \
    EXPECT_EQ(18, s.splitArray(nums, 2));          \
  }                                                \
                                                   \
  TEST(SplitArrayLargestSumTest, SolutionX##_02) { \
    std::vector<int> nums = {1, 2, 3, 4, 5};       \
    Solution1 s;                                   \
    EXPECT_EQ(9, s.splitArray(nums, 2));           \
  }                                                \
                                                   \
  TEST(SplitArrayLargestSumTest, SolutionX##_03) { \
    std::vector<int> nums = {1, 4, 4};             \
    Solution1 s;                                   \
    EXPECT_EQ(4, s.splitArray(nums, 3));           \
  }

LEETCODE_TEST(Solution1)
