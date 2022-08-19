#include <gtest/gtest.h>

#include "0659-Split-Array-Into-Consecutive-Subsequences.cpp"

#define LEETCODE_TEST(SolutionX)                               \
  TEST(SplitArrayIntoConsecutiveSubsequencesTest, SolutionX) { \
    {                                                          \
      std::vector<int> nums = {1, 2, 3, 3, 4, 5};              \
      SolutionX s;                                             \
      EXPECT_TRUE(s.isPossible(nums));                         \
    }                                                          \
                                                               \
    {                                                          \
      std::vector<int> nums = {1, 2, 3, 3, 4, 4, 5, 5};        \
      SolutionX s;                                             \
      EXPECT_TRUE(s.isPossible(nums));                         \
    }                                                          \
                                                               \
    {                                                          \
      std::vector<int> nums = {1, 2, 3, 4, 4, 5};              \
      SolutionX s;                                             \
      EXPECT_FALSE(s.isPossible(nums));                        \
    }                                                          \
                                                               \
    {                                                          \
      std::vector<int> nums = {1, 2, 3, 4, 5, 5, 6, 7};        \
      SolutionX s;                                             \
      EXPECT_TRUE(s.isPossible(nums));                         \
    }                                                          \
  }

LEETCODE_TEST(Solution1);
