#include "1337-The-K-Weakest-Rows-in-a-Matrix.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                           \
  TEST(TheKWeakestRowsInAMatrixTest, SolutionX##_01) {     \
    SolutionX s;                                           \
    std::vector<std::vector<int>> matrix = {               \
        {1, 1, 0, 0, 0}, {1, 1, 1, 1, 0}, {1, 0, 0, 0, 0}, \
        {1, 1, 0, 0, 0}, {1, 1, 1, 1, 1},                  \
    };                                                     \
    std::vector<int> ans = {2, 0, 3};                      \
    EXPECT_EQ(ans, s.kWeakestRows(matrix, 3));             \
  }                                                        \
                                                           \
  TEST(TheKWeakestRowsInAMatrixTest, SolutionX##_02) {     \
    SolutionX s;                                           \
    std::vector<std::vector<int>> matrix = {               \
        {1, 0, 0, 0},                                      \
        {1, 1, 1, 1},                                      \
        {1, 0, 0, 0},                                      \
        {1, 0, 0, 0},                                      \
    };                                                     \
    std::vector<int> ans = {0, 2};                         \
    EXPECT_EQ(ans, s.kWeakestRows(matrix, 2));             \
  }                                                        \
                                                           \
  TEST(TheKWeakestRowsInAMatrixTest, SolutionX##_03) {     \
    SolutionX s;                                           \
    std::vector<std::vector<int>> matrix = {               \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},  \
        {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},  \
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},  \
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},  \
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},  \
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},  \
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},  \
    };                                                     \
                                                           \
    std::vector<int> ans = {17, 21, 3, 7, 12, 25, 1};      \
    EXPECT_EQ(ans, s.kWeakestRows(matrix, 7));             \
  }

LEETCODE_TEST(Solution1);
