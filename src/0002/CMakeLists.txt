ADD_EXECUTABLE(0002-Add-Two-Numbers-UnitTest
  0002-Add-Two-Numbers-UnitTest.cpp)
TARGET_LINK_LIBRARIES(0002-Add-Two-Numbers-UnitTest PUBLIC leetcode_utils ${GTEST_LIBRARIES} )
ADD_TEST(NAME 0002-Add-Two-Numbers-UnitTest COMMAND 0002-Add-Two-Numbers-UnitTest)
