#include "0289-Game-of-Life.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)             \
  TEST(GameOfLifeTest, SolutionX##_01) {     \
    SolutionX s;                             \
    std::vector<std::vector<int>> board = {  \
        {0, 1, 0},                           \
        {0, 0, 1},                           \
        {1, 1, 1},                           \
        {0, 0, 0},                           \
    };                                       \
                                             \
    std::vector<std::vector<int>> result = { \
        {0, 0, 0},                           \
        {1, 0, 1},                           \
        {0, 1, 1},                           \
        {0, 1, 0},                           \
    };                                       \
    s.gameOfLife(board);                     \
    EXPECT_EQ(result, board);                \
  }                                          \
                                             \
  TEST(GameOfLifeTest, SolutionX##_02) {     \
    SolutionX s;                             \
    std::vector<std::vector<int>> board = {  \
        {1, 1},                              \
        {1, 0},                              \
    };                                       \
                                             \
    std::vector<std::vector<int>> result = { \
        {1, 1},                              \
        {1, 1},                              \
    };                                       \
    s.gameOfLife(board);                     \
    EXPECT_EQ(result, board);                \
  }

LEETCODE_TEST(Solution1)
