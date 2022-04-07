#include "1046-Last-Stone-Weight.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                  \
  TEST(LastStoneWeightTest, SolutionX##_01) {     \
    SolutionX s;                                  \
    std::vector<int> stones = {2, 7, 4, 1, 8, 1}; \
    EXPECT_EQ(1, s.lastStoneWeight(stones));      \
  }                                               \
                                                  \
  TEST(LastStoneWeightTest, SolutionX##_02) {     \
    SolutionX s;                                  \
    std::vector<int> stones = {1};                \
    EXPECT_EQ(1, s.lastStoneWeight(stones));      \
  }

LEETCODE_TEST(Solution1)
