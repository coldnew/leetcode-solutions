#include "0682-Baseball-Game.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                              \
  TEST(BaseballGameTest, SolutionX##_0) {                                     \
    SolutionX s;                                                              \
    std::vector<std::string> ops = {"5", "2", "C", "D", "+"};                 \
    EXPECT_EQ(30, s.calPoints(ops));                                          \
  }                                                                           \
                                                                              \
  TEST(BaseballGameTest, SolutionX##_02) {                                    \
    SolutionX s;                                                              \
    std::vector<std::string> ops = {"5", "-2", "4", "C", "D", "9", "+", "+"}; \
    EXPECT_EQ(27, s.calPoints(ops));                                          \
  }                                                                           \
                                                                              \
  TEST(BaseballGameTest, SolutionX##_03) {                                    \
    SolutionX s;                                                              \
    std::vector<std::string> ops = {"1"};                                     \
    EXPECT_EQ(1, s.calPoints(ops));                                           \
  }

LEETCODE_TEST(Solution1)
