#include <gtest/gtest.h>

#include "0074-Search-A-2D-Matrix.cpp"

#define LEETCODE_TEST(SolutionX)              \
  TEST(SearchA2DMatrixTest, SolutionX##_01) { \
    std::vector<std::vector<int>> matrix = {  \
        {1, 3, 5, 7},                         \
        {10, 11, 16, 20},                     \
        {23, 30, 34, 60},                     \
    };                                        \
    SolutionX s;                              \
    EXPECT_TRUE(s.searchMatrix(matrix, 3));   \
  }                                           \
                                              \
  TEST(SearchA2DMatrixTest, SolutionX##_02) { \
    std::vector<std::vector<int>> matrix = {  \
        {1, 3, 5, 7},                         \
        {10, 11, 16, 20},                     \
        {23, 30, 34, 60},                     \
    };                                        \
    SolutionX s;                              \
    EXPECT_FALSE(s.searchMatrix(matrix, 13)); \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
LEETCODE_TEST(Solution3)
