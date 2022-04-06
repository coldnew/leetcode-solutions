#include "0923-3Sum-With-Multiplicity.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                           \
  TEST(Test3SumWithMultiplicity, SolutionX##_01) {         \
    Solution1 s;                                           \
    std::vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5}; \
    EXPECT_EQ(20, s.threeSumMulti(arr, 8));                \
  }                                                        \
                                                           \
  TEST(Test3SumWithMultiplicity, SolutionX##02) {          \
    Solution1 s;                                           \
    std::vector<int> arr = {1, 1, 2, 2, 2, 2};             \
    EXPECT_EQ(12, s.threeSumMulti(arr, 5));                \
  }

LEETCODE_TEST(Solution1)
