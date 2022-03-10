ADD_EXECUTABLE(0206-Reverse-Linked-List-Unittest
  0206-Reverse-Linked-List-Unittest.cpp)
TARGET_LINK_LIBRARIES(0206-Reverse-Linked-List-Unittest PUBLIC leetcode_utils ${GTEST_LIBRARIES} )
ADD_TEST(NAME 0206-Reverse-Linked-List-Unittest COMMAND 0206-Reverse-Linked-List-Unittest)
