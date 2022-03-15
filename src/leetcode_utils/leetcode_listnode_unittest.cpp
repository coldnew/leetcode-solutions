#include <gtest/gtest.h>

#include "leetcode_listnode.cpp"

TEST(LeetCodeListNodeTest, ToString) {
  EXPECT_EQ("[1,2,3]", ToString(LISTNODE(1, 2, 3)));
}

TEST(LeetCodeListNodeTest, ToListNode) {
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1, 2, 3]")));
  EXPECT_EQ("[1,2,3]", ToString(ToListNode("[1,2,3]")));
}

TEST(LeetCodeListNodeTest, IsListNodeEqual) {
  auto IsEqual = [](const std::string& l1, const std::string& l2) -> bool {
    return IsListNodeEqual(ToListNode(l1), ToListNode(l2));
  };
  EXPECT_TRUE(IsEqual("[1, 2, 3]", "[1, 2, 3]"));
  EXPECT_FALSE(IsEqual("[1, 2]", "[1, 2, 3]"));
  EXPECT_FALSE(IsEqual("[4, 5]", "[1, 2, 3]"));
}

TEST(LeetCodeListNodeTest, ListNodePrint) {
  auto ListNodePrintToStdOut = [](const std::string& node) -> std::string {
    testing::internal::CaptureStdout();
    ListNodePrint(ToListNode(node));
    return testing::internal::GetCapturedStdout();
  };

  EXPECT_EQ("1 -> 2 -> nullptr\n", ListNodePrintToStdOut("[1, 2]"));
  EXPECT_EQ("1 -> 2 -> 3 -> 4 -> nullptr\n",
            ListNodePrintToStdOut("[1,2,3,4]"));
}
