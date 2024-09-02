#include "0538-Convert-BST-to-Greater-Tree.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                               \
  TEST(ConvertBSTToGreaterTreeTest, SolutionX) {                               \
    SolutionX s;                                                               \
    auto root = TREENODE("[4,1,6,0,2,5,7,null,null,null,3,null,null,null,8]"); \
    auto result =                                                              \
        TREENODE("[30,36,21,36,35,26,15,null,null,null,33,null,null,null,8]"); \
    EXPECT_TRUE(IsTreeNodeEqual(result, s.convertBST(root.get())));            \
  }

LEETCODE_TEST(Solution1)
LEETCODE_TEST(Solution2)
