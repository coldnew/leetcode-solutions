#include <gtest/gtest.h>

#include "0445-Add-Two-Numbers-II.cpp"

TEST(AddTwoNumbersTestII, Reverse) {
  auto Reverse = [](const std::string& val1) -> std::string {
    return ToString(reverse(ToListNode(val1)));
  };

  EXPECT_EQ("[]", Reverse("[]"));
  EXPECT_EQ("[1]", Reverse("[1]"));
  EXPECT_EQ("[5,6]", Reverse("[6,5]"));
  EXPECT_EQ("[7,0,8]", Reverse("[8,0,7]"));
  EXPECT_EQ("[1,2,3,4,5,6,7,8,9]", Reverse("[9,8,7,6,5,4,3,2,1]"));
}

TEST(AddTwoNumbersTestII, Solution1) {
  auto addTwoNumbers = [](const std::string& val1,
                          const std::string& val2) -> std::string {
    Solution1 s;
    return ToString(s.addTwoNumbers(ToListNode(val1), ToListNode(val2)));
  };

  EXPECT_EQ("[]", addTwoNumbers("[]", "[]"));
  EXPECT_EQ("[0]", addTwoNumbers("[0]", "[0]"));
  EXPECT_EQ("[8,0,7]", addTwoNumbers("[2,4,3]", "[5,6,4]"));
  EXPECT_EQ("[7,8,0,7]", addTwoNumbers("[7,2,4,3]", "[5,6,4]"));
}
