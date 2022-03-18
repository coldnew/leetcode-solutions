#include <gtest/gtest.h>

#include "0316-Remove-Duplicatie-Letters.cpp"

TEST(RemoveDuplicateLettersTest, SolutionX) {
  auto RemoveDuplicateLetters = [](const char* str) {
    Solution1 s;
    return s.removeDuplicateLetters(std::string(str));
  };

  EXPECT_EQ("abc", RemoveDuplicateLetters("bcabc"));
  EXPECT_EQ("acdb", RemoveDuplicateLetters("cbacdcbc"));
  EXPECT_EQ("adbc", RemoveDuplicateLetters("cdadabcc"));
  EXPECT_EQ("letcod", RemoveDuplicateLetters("leetcode"));
  EXPECT_EQ("bcd", RemoveDuplicateLetters("bddbccd"));
  EXPECT_EQ("bde", RemoveDuplicateLetters("dbede"));
  EXPECT_EQ("abc", RemoveDuplicateLetters("aabbcc"));
  EXPECT_EQ("bac", RemoveDuplicateLetters("bbcaac"));
  EXPECT_EQ("hesitxyplovdqfkz",
            RemoveDuplicateLetters("thesqtitxyetpxloeevdeqifkz"));
}
