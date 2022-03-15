#include <gtest/gtest.h>
#include <vector>

#include "0027-Remove-Element.cpp"

TEST(RemoveElementTest, SolutionX) {
  Solution1 s;

  {
    auto data = std::vector<int>{3, 2, 2, 3};
    EXPECT_EQ(2, s.removeElement(data, 3));

    auto verify = std::vector<int>{2, 2};
    for (auto i = 0; i < verify.size(); i++)
      EXPECT_EQ(verify[i], data[i]);
  }

  {
    auto data = std::vector<int>{0, 1, 2, 2, 3, 0, 4, 2};
    EXPECT_EQ(5, s.removeElement(data, 2));

    auto verify = std::vector<int>{0, 1, 3, 0, 4};
    for (auto i = 0; i < verify.size(); i++)
      EXPECT_EQ(verify[i], data[i]);
  }
}
