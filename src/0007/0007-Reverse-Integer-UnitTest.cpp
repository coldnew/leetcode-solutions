#include <gtest/gtest.h>

#include "0007-Reverse-Integer.cpp"

TEST(ReverseIntegerTest, SolutionX) {
  Solution1 s;
  EXPECT_EQ(321, s.reverse(123));
  EXPECT_EQ(-321, s.reverse(-123));
  EXPECT_EQ(21, s.reverse(120));
}
