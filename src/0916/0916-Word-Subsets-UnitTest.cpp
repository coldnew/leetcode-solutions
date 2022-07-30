#include "0916-Word-Subsets.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                            \
  TEST(TwowordSubsetsTest, SolutionX) {                                     \
    {                                                                       \
      std::vector<std::string> words1 = {"amazon", "apple", "facebook",     \
                                         "google", "leetcode"};             \
      std::vector<std::string> words2 = {"e", "o"};                         \
      std::vector<std::string> output = {"facebook", "google", "leetcode"}; \
      SolutionX s;                                                          \
      EXPECT_EQ(output, s.wordSubsets(words1, words2));                     \
    }                                                                       \
                                                                            \
    {                                                                       \
      std::vector<std::string> words1 = {"amazon", "apple", "facebook",     \
                                         "google", "leetcode"};             \
      std::vector<std::string> words2 = {"l", "e"};                         \
      std::vector<std::string> output = {"apple", "google", "leetcode"};    \
      SolutionX s;                                                          \
      EXPECT_EQ(output, s.wordSubsets(words1, words2));                     \
    }                                                                       \
  }

LEETCODE_TEST(Solution1);
