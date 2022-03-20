#include "1007-Minimum-Domino-Rotations-For-Equal-Row.cpp"
#include <gtest/gtest.h>
#include <vector>

#define LEETCODE_TEST(SolutionX)                               \
  TEST(MinimumDominoRotationsForEqualRowTest, SolutionX) {     \
    {                                                          \
      SolutionX s;                                             \
      auto top1 = std::vector<int>{2, 1, 2, 4, 2, 2};          \
      auto bottom1 = std::vector<int>{5, 2, 6, 2, 3, 2};       \
      EXPECT_EQ(2, s.minDominoRotations(top1, bottom1));       \
    }                                                          \
                                                               \
    {                                                          \
      SolutionX s;                                             \
      auto top2 = std::vector<int>{3, 5, 1, 2, 3};             \
      auto bottom2 = std::vector<int>{3, 6, 3, 3, 4};          \
      EXPECT_EQ(-1, s.minDominoRotations(top2, bottom2));      \
    }                                                          \
                                                               \
    {                                                          \
      SolutionX s;                                             \
      auto top3 = std::vector<int>{3, 3, 3, 3, 3};             \
      auto bottom3 = std::vector<int>{3, 6, 3, 3, 4};          \
      EXPECT_EQ(0, s.minDominoRotations(top3, bottom3));       \
    }                                                          \
                                                               \
    {                                                          \
      SolutionX s;                                             \
      auto top4 = std::vector<int>{2, 3, 2, 1, 1, 1, 2, 2};    \
      auto bottom4 = std::vector<int>{2, 1, 2, 1, 1, 3, 1, 1}; \
      EXPECT_EQ(-1, s.minDominoRotations(top4, bottom4));      \
    }                                                          \
                                                               \
    {                                                          \
      SolutionX s;                                             \
      auto top5 = std::vector<int>{1, 2, 3, 4, 6};             \
      auto bottom5 = std::vector<int>{6, 6, 6, 6, 5};          \
      EXPECT_EQ(1, s.minDominoRotations(top5, bottom5));       \
    }                                                          \
  }

LEETCODE_TEST(Solution1);
