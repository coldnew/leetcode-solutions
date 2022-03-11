#include <gtest/gtest.h>

#include "0061-Rotate-List.cpp"

TEST(RotateListTest, GetListNodeLength) {
  auto GetListNodeLength = [](const std::string& l) -> int {
    return getListNodeLength(ToListNode(l));
  };

  EXPECT_EQ(0, GetListNodeLength("[]"));
  EXPECT_EQ(1, GetListNodeLength("[1]"));
  EXPECT_EQ(2, GetListNodeLength("[1,2]"));
  EXPECT_EQ(5, GetListNodeLength("[1,2,3,4,5]"));
  EXPECT_EQ(3, GetListNodeLength("[0,1,2]"));
}

#define LEETCODE_TEST(SolutionX)                                        \
  TEST(RotateListTest, SolutionX) {                                     \
    auto RotateRight = [](const std::string& l, int k) -> std::string { \
      SolutionX s;                                                      \
      return ToString(s.rotateRight(ToListNode(l), k));                 \
    };                                                                  \
                                                                        \
    EXPECT_EQ("[]", RotateRight("[]", 1));                              \
    EXPECT_EQ("[1]", RotateRight("[1]", 1));                            \
    EXPECT_EQ("[2,1]", RotateRight("[1,2]", 1));                        \
    EXPECT_EQ("[4,5,1,2,3]", RotateRight("[1,2,3,4,5]", 2));            \
    EXPECT_EQ("[2,0,1]", RotateRight("[0,1,2]", 4));                    \
  }

LEETCODE_TEST(Solution1)
