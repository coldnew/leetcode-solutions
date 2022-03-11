#include <gtest/gtest.h>

#include "0445-Add-Two-Numbers-II.cpp"

TEST(AddTwoNumbersIITest, ReverseList) {
  auto ReverseList = [](const std::string& val1) -> std::string {
    return ToString(reverseList(ToListNode(val1)));
  };

  EXPECT_EQ("[]", ReverseList("[]"));
  EXPECT_EQ("[1]", ReverseList("[1]"));
  EXPECT_EQ("[5,6]", ReverseList("[6,5]"));
  EXPECT_EQ("[7,0,8]", ReverseList("[8,0,7]"));
  EXPECT_EQ("[1,2,3,4,5,6,7,8,9]", ReverseList("[9,8,7,6,5,4,3,2,1]"));
}

#define LEETCODE_TEST(SolutionX)                                            \
  TEST(AddTwoNumbersIITest, SolutionX) {                                    \
    auto addTwoNumbers = [](const std::string& val1,                        \
                            const std::string& val2) -> std::string {       \
      SolutionX s;                                                          \
      return ToString(s.addTwoNumbers(ToListNode(val1), ToListNode(val2))); \
    };                                                                      \
                                                                            \
    EXPECT_EQ("[]", addTwoNumbers("[]", "[]"));                             \
    EXPECT_EQ("[0]", addTwoNumbers("[0]", "[0]"));                          \
    EXPECT_EQ("[8,0,7]", addTwoNumbers("[2,4,3]", "[5,6,4]"));              \
    EXPECT_EQ("[7,8,0,7]", addTwoNumbers("[7,2,4,3]", "[5,6,4]"));          \
  }

LEETCODE_TEST(Solution1)
