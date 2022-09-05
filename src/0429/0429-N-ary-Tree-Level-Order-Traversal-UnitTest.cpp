#include <gtest/gtest.h>

#include "0429-N-ary-Tree-Level-Order-Traversal.cpp"

#define LEETCODE_TEST(SolutionX)                                              \
  TEST(NaryTreeLevelOrderTraversal, SolutionX) {                              \
    {                                                                         \
      auto node = NODE("[1,null,3,2,4,null,5,6]");                            \
      SolutionX s;                                                            \
      std::vector<std::vector<int>> result = {{1}, {3, 2, 4}, {5, 6}};        \
      std::vector<std::vector<int>> ans = s.levelOrder(node.get());           \
      for (int i = 0; i < result.size(); i++)                                 \
        for (int j = 0; j < result[i].size(); j++)                            \
          EXPECT_EQ(result[i][j], ans[i][j]);                                 \
    }                                                                         \
                                                                              \
    {                                                                         \
      auto node = NODE(                                                       \
          "[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null," \
          "12,null,13,null,null,14]");                                        \
      SolutionX s;                                                            \
      std::vector<std::vector<int>> result = {                                \
          {1}, {2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13}, {14}};           \
      std::vector<std::vector<int>> ans = s.levelOrder(node.get());           \
      for (int i = 0; i < result.size(); i++)                                 \
        for (int j = 0; j < result[i].size(); j++)                            \
          EXPECT_EQ(result[i][j], ans[i][j]);                                 \
    }                                                                         \
  }

LEETCODE_TEST(Solution1);
