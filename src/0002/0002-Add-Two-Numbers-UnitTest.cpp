#include <gtest/gtest.h>

#include "0002-Add-Two-Numbers.cpp"

TEST(AddTwoNumbersTest, Solution1) {
  Solution1 s;
  EXPECT_LIST_EQ("[]", s.addTwoNumbers(LIST(), LIST()));
  EXPECT_LIST_EQ("[1]", s.addTwoNumbers(LIST(1), LIST(0)));
  EXPECT_LIST_EQ("[5]", s.addTwoNumbers(LIST(1), LIST(4)));
  EXPECT_LIST_EQ("[5,6]", s.addTwoNumbers(LIST(4, 1), LIST(1, 5)));
  EXPECT_LIST_EQ("[7,0,8]", s.addTwoNumbers(LIST(2, 4, 3), LIST(5, 6, 4)));
  EXPECT_LIST_EQ("[8,9,9,9,0,0,0,1]",
                 s.addTwoNumbers(LIST(9, 9, 9, 9, 9, 9, 9), LIST(9, 9, 9, 9)));
}
