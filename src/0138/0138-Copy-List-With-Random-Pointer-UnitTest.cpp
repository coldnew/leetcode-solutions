#include <gtest/gtest.h>
#include <string>
#include <tuple>
#include <vector>

#include "0138-Copy-List-With-Random-Pointer.cpp"

#define LEETCODE_TEST(SolutionX)                                  \
  TEST(CopyListWithRandomPointerTest, SolutionX) {                \
    auto CopyRandomList =                                         \
        [](const std::string& list) -> std::tuple<Node*, Node*> { \
      SolutionX s;                                                \
      Node* node = ToNode(list);                                  \
      return {node, s.copyRandomList(node)};                      \
    };                                                            \
                                                                  \
    std::vector<std::string> data{                                \
        "[[1,1],[2,1]]",                                          \
        "[[7,null],[13,0],[11,4],[10,2],[1,0]]",                  \
        "[[3,null],[3,0],[3,null]]",                              \
        "[[7,null],[13,0],[11,4],[10,2],[1,0]]",                  \
    };                                                            \
                                                                  \
    for (auto& d : data) {                                        \
      auto [node, node_new] = CopyRandomList(d);                  \
      EXPECT_EQ(d, ToString(node_new));                           \
      EXPECT_FALSE(IsNodeEqual(node, node_new));                  \
    }                                                             \
  }

LEETCODE_TEST(Solution1)
