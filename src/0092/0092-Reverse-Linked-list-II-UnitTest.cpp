#include <gtest/gtest.h>

#include "0092-Reverse-Linked-list-II.cpp"

#define LEETCODE_TEST(SolutionX)                                             \
  TEST(ReverseLinkedListII, SolutionX) {                                     \
    {                                                                        \
      auto* in = LISTNODE(1, 2, 3, 4, 5);                                    \
      auto* out = LISTNODE(1, 4, 3, 2, 5);                                   \
      int left = 2, right = 4;                                               \
      SolutionX s;                                                           \
      EXPECT_EQ(ToString(out), ToString(s.reverseBetween(in, left, right))); \
      ListNodeDestroy(in);                                                   \
      ListNodeDestroy(out);                                                  \
    }                                                                        \
  }

LEETCODE_TEST(Solution1);
