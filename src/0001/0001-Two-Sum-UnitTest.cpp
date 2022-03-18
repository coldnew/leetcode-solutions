#include <gtest/gtest.h>

#include "0001-Two-Sum.cpp"

#define LEETCODE_TEST(SolutionX)            \
  TEST(TwoSumTest, SolutionX) {             \
    {                                       \
      std::vector<int> q1 = {2, 7, 11, 15}; \
      std::vector<int> a1 = {0, 1};         \
      SolutionX s;                          \
      EXPECT_EQ(a1, s.twoSum(q1, 9));       \
    }                                       \
                                            \
    {                                       \
      std::vector<int> q2 = {3, 2, 4};      \
      std::vector<int> a2 = {1, 2};         \
      SolutionX s;                          \
      EXPECT_EQ(a2, s.twoSum(q2, 6));       \
    }                                       \
                                            \
    {                                       \
      std::vector<int> q3 = {3, 3};         \
      std::vector<int> a3 = {0, 1};         \
      SolutionX s;                          \
      EXPECT_EQ(a3, s.twoSum(q3, 6));       \
    }                                       \
  }

LEETCODE_TEST(Solution1);
