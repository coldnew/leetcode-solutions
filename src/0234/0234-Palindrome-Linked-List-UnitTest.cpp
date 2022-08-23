#include "0234-Palindrome-Linked-List.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                   \
  TEST(PalindromeLinkedListTest, SolutionX##_01) { \
    auto* head = ToListNode("[1,2,2,1]");          \
    SolutionX s;                                   \
    EXPECT_TRUE(s.isPalindrome(head));             \
    ListNodeDestroy(head);                         \
  }                                                \
                                                   \
  TEST(PalindromeLinkedListTest, SolutionX##_02) { \
    auto* head = ToListNode("[1,2]");              \
    SolutionX s;                                   \
    EXPECT_FALSE(s.isPalindrome(head));            \
    ListNodeDestroy(head);                         \
  }

LEETCODE_TEST(Solution1);
