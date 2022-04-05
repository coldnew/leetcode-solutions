#include "0011-Container-With-Most-Water.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                           \
  TEST(ContainerWithMostWater, SolutionX##_01) {           \
    SolutionX s;                                           \
    std::vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7}; \
    EXPECT_EQ(49, s.maxArea(height));                      \
  }                                                        \
                                                           \
  TEST(ContainerWithMostWater, SolutionX##_02) {           \
    SolutionX s;                                           \
    std::vector<int> height = {1, 1};                      \
    EXPECT_EQ(1, s.maxArea(height));                       \
  }

LEETCODE_TEST(Solution1)
