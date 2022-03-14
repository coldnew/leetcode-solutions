#include <gtest/gtest.h>

#include "0071-Simplify-Path.cpp"

#define LEETCODE_TEST(SolutionX)                                  \
  TEST(SimplifyPathTest, SolutionX) {                             \
    SolutionX s;                                                  \
    EXPECT_EQ("/home", s.simplifyPath("/home/"));                 \
    EXPECT_EQ("/", s.simplifyPath("/../"));                       \
    EXPECT_EQ("/home/foo", s.simplifyPath("/home//foo/"));        \
    EXPECT_EQ("/c", s.simplifyPath("/a/./b/../../c/"));           \
    EXPECT_EQ("/a/b/c", s.simplifyPath("/a//b////c/d//././/..")); \
    EXPECT_EQ("/...", s.simplifyPath("/..."));                    \
    EXPECT_EQ("/", s.simplifyPath("/."));                         \
  }

LEETCODE_TEST(Solution1);
