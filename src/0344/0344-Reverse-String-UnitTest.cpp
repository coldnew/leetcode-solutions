#include <gtest/gtest.h>
#include <vector>

#include "0344-Reverse-String.cpp"

#define LEETCODE_TEST(SolutionX)                                \
  TEST(ReverseStringTest, SolutionX) {                          \
    SolutionX s;                                                \
    std::vector<char> str = {'H', 'a', 'n', 'n', 'a', 'h'};     \
    std::vector<char> str_rev = {'h', 'a', 'n', 'n', 'a', 'H'}; \
    s.reverseString(str);                                       \
    EXPECT_EQ(str_rev, str);                                    \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
LEETCODE_TEST(Solution3)
