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

# Add all solution subdirs with regexp [0-9]+
FILE(GLOB subdirs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/*)
FOREACH(dir ${subdirs})
  IF((IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${dir}) AND ("${dir}" MATCHES "[0-9]+"))
    ADD_SUBDIRECTORY(${dir})
  ENDIF()
ENDFOREACH()
