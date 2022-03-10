#include <gtest/gtest.h>

#include "0206-Reverse-Linked-List.cpp"

#define LEETCODE_TEST(SolutionX)                                          \
  TEST(ReverseLinkedListTest, SolutionX) {                                \
    auto ReverseList = [](const std::string& val1) -> std::string {       \
      SolutionX s;                                                        \
      return ToString(s.reverseList(ToListNode(val1)));                   \
    };                                                                    \
                                                                          \
    EXPECT_EQ("[]", ReverseList("[]"));                                   \
    EXPECT_EQ("[1]", ReverseList("[1]"));                                 \
    EXPECT_EQ("[5,6]", ReverseList("[6,5]"));                             \
    EXPECT_EQ("[7,0,8]", ReverseList("[8,0,7]"));                         \
    EXPECT_EQ("[1,2,3,4,5,6,7,8,9]", ReverseList("[9,8,7,6,5,4,3,2,1]")); \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
