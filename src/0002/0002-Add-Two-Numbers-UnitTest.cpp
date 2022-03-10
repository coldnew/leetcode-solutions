#include <gtest/gtest.h>

#include "0002-Add-Two-Numbers.cpp"

TEST(AddTwoNumbersTest, Solution1) {
  auto addTwoNumbers = [](const std::string& val1,
                          const std::string& val2) -> std::string {
    Solution1 s;
    return ListString(s.addTwoNumbers(ToListNode(val1), ToListNode(val2)));
  };

  EXPECT_EQ("[]", addTwoNumbers("[]", "[]"));
  EXPECT_EQ("[1]", addTwoNumbers("[1]", "[0]"));
  EXPECT_EQ("[5]", addTwoNumbers("[1]", "[4]"));
  EXPECT_EQ("[5,6]", addTwoNumbers("[4,1]", "[1,5]"));
  EXPECT_EQ("[7,0,8]", addTwoNumbers("[2,4,3]", "[5,6,4]"));
  EXPECT_EQ("[8,9,9,9,0,0,0,1]", addTwoNumbers("[9,9,9,9,9,9,9]", "[9,9,9,9]"));
}
