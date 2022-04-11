#include "1260-Shift-2D-Grid.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)           \
  TEST(Shift2DGridTest, SolutionX##_01) {  \
    SolutionX s;                           \
    std::vector<std::vector<int>> grid = { \
        {1, 2, 3},                         \
        {4, 5, 6},                         \
        {7, 8, 9},                         \
    };                                     \
    int k = 1;                             \
    std::vector<std::vector<int>> ans = {  \
        {9, 1, 2},                         \
        {3, 4, 5},                         \
        {6, 7, 8},                         \
    };                                     \
    EXPECT_EQ(ans, s.shiftGrid(grid, k));  \
  }                                        \
                                           \
  TEST(Shift2DGridTest, SolutionX##_02) {  \
    SolutionX s;                           \
    std::vector<std::vector<int>> grid = { \
        {1, 2, 3},                         \
        {4, 5, 6},                         \
        {7, 8, 9},                         \
    };                                     \
    int k = 9;                             \
    std::vector<std::vector<int>> ans = {  \
        {1, 2, 3},                         \
        {4, 5, 6},                         \
        {7, 8, 9},                         \
    };                                     \
    EXPECT_EQ(ans, s.shiftGrid(grid, k));  \
  }

LEETCODE_TEST(Solution1)
