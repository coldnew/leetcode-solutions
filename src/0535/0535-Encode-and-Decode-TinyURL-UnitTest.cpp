#include "0535-Encode-and-Decode-TinyURL.cpp"
#include <gtest/gtest.h>

#define LEETCODE_TEST(SolutionX)                                        \
  TEST(EncodeAndDecodeTinyURLTest, SolutionX) {                         \
    SolutionX s;                                                        \
    std::string input = "https://leetcode.com/problems/design-tinyurl"; \
    std::string output = "https://t/0";                                 \
    EXPECT_EQ(output, s.encode(input));                                 \
    EXPECT_EQ(input, s.decode(output));                                 \
  }

LEETCODE_TEST(Solution1)
