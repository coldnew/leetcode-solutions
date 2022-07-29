#include "0890-Find-and-Replace-Pattern.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                  \
  TEST(TwoSumTest, SolutionX) {                                   \
    {                                                             \
      std::vector<std::string> words = {"abc", "deq", "mee",      \
                                        "aqq", "dkd", "ccc"};     \
      std::string pattern = "abb";                                \
      std::vector<std::string> output = {"mee", "aqq"};           \
      SolutionX s;                                                \
      EXPECT_EQ(output, s.findAndReplacePattern(words, pattern)); \
    }                                                             \
                                                                  \
    {                                                             \
      std::vector<std::string> words = {"a", "b", "c"};           \
      std::string pattern = "a";                                  \
      std::vector<std::string> output = {"a", "b", "c"};          \
      SolutionX s;                                                \
      EXPECT_EQ(output, s.findAndReplacePattern(words, pattern)); \
    }                                                             \
  }

LEETCODE_TEST(Solution1)
