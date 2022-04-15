#include <gtest/gtest.h>

#include "leetcode_string.cpp"

TEST(LeetCodeStringTest, StringRemoveSquareBreaket) {
  EXPECT_EQ("1,2,3", StringRemoveSquareBreaket("[1,2,3]"));
  EXPECT_EQ("", StringRemoveSquareBreaket("[]"));
}

TEST(LeetCodeStringTest, StringSplit) {
  auto StringSplitWrapper = [](const std::string& str, const std::string& sep) {
    auto elems = StringSplit(str, sep);
    std::string raw_str = "\n";
    for (auto& s : elems) {
      raw_str += s;
      raw_str += "\n";
    }
    return raw_str;
  };

  EXPECT_EQ(
      R"(
[[7,null]
13,0]
11,4]
10,2]
1,0]]
)",
      StringSplitWrapper("[[7,null],[13,0],[11,4],[10,2],[1,0]]", ",["));

  EXPECT_EQ(
      R"(
7
null
)",
      StringSplitWrapper("7,null", ","));
}

TEST(LeetCodeStringTest, StringTrim) {
  {
    std::string str = " 1";
    StringTrim(str);
    EXPECT_EQ("1", str);
  }
  {
    std::string str = " 1 ";
    StringTrim(str);
    EXPECT_EQ("1", str);
  }
  {
    std::string str = "1 ";
    StringTrim(str);
    EXPECT_EQ("1", str);
  }
}
