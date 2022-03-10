#include <gtest/gtest.h>

#include "leetcode_lists.cpp"

TEST(leetcode_lists, ToString) {
  EXPECT_EQ("[1,2,3]", ToString(LIST(1, 2, 3)));
}

TEST(leetcode_lists, ToListNode) {
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1, 2, 3]")));
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1,2,3]")));
}
