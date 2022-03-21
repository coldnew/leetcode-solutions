#-------------------------------------------------------------------------------
# Macros
#-------------------------------------------------------------------------------

# Usage:
# LEETCODE_UNITTEST (NAME source.cpp)
MACRO(LEETCODE_UNITTEST _srcname)
SET(_appname ${_srcname}-UnitTest)
ADD_EXECUTABLE(${_appname} ${_srcname}-UnitTest.cpp)
TARGET_LINK_LIBRARIES(${_appname} PUBLIC leetcode_utils ${GTEST_LIBRARIES})
SET_TARGET_PROPERTIES(${_appname} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)
ADD_TEST(NAME ${_appname} COMMAND ${_appname})
ENDMACRO()

# LEETCODE_BENCHMARK (NAME source.cpp)
MACRO(LEETCODE_BENCHMARK _srcname)
  IF(BENCHMARK_FOUND)
    SET(_appname ${_srcname}-BenchMark)
    ADD_EXECUTABLE(${_appname} ${_srcname}-BenchMark.cpp)
    TARGET_LINK_LIBRARIES(${_appname} PUBLIC leetcode_utils ${BENCHMARK_LIBRARIES})
    SET_TARGET_PROPERTIES(${_appname} PROPERTIES
      CXX_STANDARD 17
      CXX_STANDARD_REQUIRED ON)
  ENDIF()
ENDMACRO()

#-------------------------------------------------------------------------------
# Sub Projects
#-------------------------------------------------------------------------------

# utils should be the first subdirs to add
ADD_SUBDIRECTORY(leetcode_utils)

# other problems
ADD_SUBDIRECTORY(0001)
ADD_SUBDIRECTORY(0002)
ADD_SUBDIRECTORY(0007)
ADD_SUBDIRECTORY(0020)
ADD_SUBDIRECTORY(0027)
ADD_SUBDIRECTORY(0061)
ADD_SUBDIRECTORY(0071)
ADD_SUBDIRECTORY(0138)
ADD_SUBDIRECTORY(0206)
ADD_SUBDIRECTORY(0316)
ADD_SUBDIRECTORY(0445)
ADD_SUBDIRECTORY(0763)
ADD_SUBDIRECTORY(0856)
ADD_SUBDIRECTORY(0895)
ADD_SUBDIRECTORY(0946)
ADD_SUBDIRECTORY(1007)
ADD_SUBDIRECTORY(1114)
ADD_SUBDIRECTORY(1249)
