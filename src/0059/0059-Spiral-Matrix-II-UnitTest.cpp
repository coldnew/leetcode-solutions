#include "0059-Spiral-Matrix-II.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)             \
  TEST(SpiralMatrixIITest, SolutionX##_01) { \
    SolutionX s;                             \
    std::vector<std::vector<int>> result = { \
        {1, 2, 3},                           \
        {8, 9, 4},                           \
        {7, 6, 5},                           \
    };                                       \
    int n = 3;                               \
    EXPECT_EQ(result, s.generateMatrix(n));  \
  }                                          \
                                             \
  TEST(SpiralMatrixIITest, SolutionX##_02) { \
    SolutionX s;                             \
    std::vector<std::vector<int>> result = { \
        {1},                                 \
    };                                       \
    int n = 1;                               \
    EXPECT_EQ(result, s.generateMatrix(n));  \
  }

LEETCODE_TEST(Solution1)
