#include <gtest/gtest.h>

#include "leetcode_lists.cpp"

TEST(leetcode_lists, ToString) {
  EXPECT_EQ("[1,2,3]", ToString(LIST(1, 2, 3)));
}

TEST(leetcode_lists, ToListNode) {
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1, 2, 3]")));
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1,2,3]")));
}

TEST(leetcode_lists, IsListEqual) {
  auto IsEqual = [](const std::string& l1, const std::string& l2) -> bool {
    return IsListEqual(ToListNode(l1), ToListNode(l2));
  };
  EXPECT_TRUE(IsEqual("[1, 2, 3]", "[1, 2, 3]"));
  EXPECT_FALSE(IsEqual("[1, 2]", "[1, 2, 3]"));
  EXPECT_FALSE(IsEqual("[4, 5]", "[1, 2, 3]"));
}
