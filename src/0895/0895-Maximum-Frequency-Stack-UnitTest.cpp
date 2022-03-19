#include <gtest/gtest.h>
#include <memory>

#include "0895-Maximum-Frequency-Stack.cpp"

#define LEETCODE_TEST(FreqStackX)                       \
  TEST(MaximumFrequencyStackTest, FreqStackX) {         \
    {                                                   \
      auto freqStackA = std::make_unique<FreqStackX>(); \
      freqStackA->push(5);                              \
      freqStackA->push(7);                              \
      freqStackA->push(5);                              \
      freqStackA->push(7);                              \
      freqStackA->push(4);                              \
      freqStackA->push(5);                              \
      EXPECT_EQ(5, freqStackA->pop());                  \
      EXPECT_EQ(7, freqStackA->pop());                  \
      EXPECT_EQ(5, freqStackA->pop());                  \
      EXPECT_EQ(4, freqStackA->pop());                  \
    }                                                   \
                                                        \
    {                                                   \
      auto freqStackB = std::make_unique<FreqStackX>(); \
      freqStackB->push(4);                              \
      freqStackB->push(0);                              \
      freqStackB->push(9);                              \
      freqStackB->push(3);                              \
      freqStackB->push(4);                              \
      freqStackB->push(2);                              \
      EXPECT_EQ(4, freqStackB->pop());                  \
      freqStackB->push(6);                              \
      EXPECT_EQ(6, freqStackB->pop());                  \
      freqStackB->push(1);                              \
      EXPECT_EQ(1, freqStackB->pop());                  \
      freqStackB->push(1);                              \
      EXPECT_EQ(1, freqStackB->pop());                  \
      freqStackB->push(4);                              \
      EXPECT_EQ(4, freqStackB->pop());                  \
      EXPECT_EQ(2, freqStackB->pop());                  \
      EXPECT_EQ(3, freqStackB->pop());                  \
      EXPECT_EQ(9, freqStackB->pop());                  \
      EXPECT_EQ(0, freqStackB->pop());                  \
      EXPECT_EQ(4, freqStackB->pop());                  \
    }                                                   \
  }

LEETCODE_TEST(FreqStack1);
LEETCODE_TEST(FreqStack2);
