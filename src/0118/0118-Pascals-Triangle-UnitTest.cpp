#include <gtest/gtest.h>

#include "0118-Pascals-Triangle.cpp"

#define LEETCODE_TEST(SolutionX)                                  \
  TEST(PascalsTriangleTest, SolutionX) {                          \
    {                                                             \
      int numRows = 5;                                            \
      std::vector<std::vector<int>> expect = {                    \
          {1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}}; \
      SolutionX s;                                                \
      EXPECT_EQ(expect, s.generate(numRows));                     \
    }                                                             \
                                                                  \
    {                                                             \
      int numRows = 1;                                            \
      std::vector<std::vector<int>> expect = {{1}};               \
      SolutionX s;                                                \
      EXPECT_EQ(expect, s.generate(numRows));                     \
    }                                                             \
  }

LEETCODE_TEST(Solution1);
