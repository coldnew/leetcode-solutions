#include <gtest/gtest.h>
#include <memory>

#include "0895-Maximum-Frequency-Stack.cpp"

#define LEETCODE_TEST(FreqStackX)                    \
  TEST(MaximumFrequencyStackTest, FreqStackX) {      \
    auto freqStack = std::make_unique<FreqStackX>(); \
    freqStack->push(5);                              \
    freqStack->push(7);                              \
    freqStack->push(5);                              \
    freqStack->push(7);                              \
    freqStack->push(4);                              \
    freqStack->push(5);                              \
    EXPECT_EQ(5, freqStack->pop());                  \
    EXPECT_EQ(7, freqStack->pop());                  \
    EXPECT_EQ(5, freqStack->pop());                  \
    EXPECT_EQ(4, freqStack->pop());                  \
  }

LEETCODE_TEST(FreqStack1);
LEETCODE_TEST(FreqStack2);
