#-------------------------------------------------------------------------------
# Compoler Options
#-------------------------------------------------------------------------------
# we use C99 in this project
SET(CMAKE_C_STANDARD   99)
SET(CMAKE_C_STANDARD_REQUIRED ON)

# we use C++17 in this project
SET(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#-------------------------------------------------------------------------------
# Generate Binary
#-------------------------------------------------------------------------------

ADD_LIBRARY (leetcode_utils STATIC
  leetcode_listnode.cpp
  leetcode_string.cpp
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
ADD_EXECUTABLE(leetcode_utils_unittest
  leetcode_listnode_unittest.cpp
  leetcode_string_unittest.cpp
  )
TARGET_LINK_LIBRARIES(leetcode_utils_unittest PUBLIC ${GTEST_LIBRARIES})
ADD_TEST(NAME leetcode_utils_unittest COMMAND leetcode_utils_unittest)
