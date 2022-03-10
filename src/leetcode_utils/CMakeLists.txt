#-------------------------------------------------------------------------------
# Generate Binary
#-------------------------------------------------------------------------------

ADD_LIBRARY (leetcode_utils STATIC
  leetcode_lists.cpp
  )

#-------------------------------------------------------------------------------
# Export Interface
#-------------------------------------------------------------------------------
TARGET_INCLUDE_DIRECTORIES(leetcode_utils
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

##-------------------------------------------------------------------------------
## UnitTest
##-------------------------------------------------------------------------------
#ADD_EXECUTABLE(leetcode_utils_unittest
#  leetcode_lists_unittest.cpp)
#TARGET_LINK_LIBRARIES(leetcode_utils_unittest PUBLIC ${GTEST_LIBRARIES})
#ADD_TEST(NAME leetcode_utils_unittest COMMAND leetcode_utils_unittest)
