#include <gtest/gtest.h>

#include "0114-Flatten-Binary-Tree-to-Linked-List.cpp"

#define LEETCODE_TEST(SolutionX)                              \
  TEST(FlattenBinaryTreeToLinkedListTest, SolutionX) {        \
    {                                                         \
      auto root = TREENODE("[1,2,5,3,4,null,6]");             \
      auto output = "[1,null,2,null,3,null,4,null,5,null,6]"; \
      SolutionX s;                                            \
      s.flatten(root.get());                                  \
      EXPECT_EQ(output, ToString(root.get()));                \
    }                                                         \
                                                              \
    {                                                         \
      auto root = TREENODE("[0]");                            \
      auto output = "[0]";                                    \
      SolutionX s;                                            \
      s.flatten(root.get());                                  \
      EXPECT_EQ(output, ToString(root.get()));                \
    }                                                         \
  }

LEETCODE_TEST(Solution1);
