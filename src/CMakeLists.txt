#-------------------------------------------------------------------------------
# Macros
#-------------------------------------------------------------------------------

# Usage:
# LEETCODE_UNITTEST (NAME source.cpp)
MACRO(LEETCODE_UNITTEST _appname)
ADD_EXECUTABLE(${_appname} ${_appname}.cpp)
TARGET_LINK_LIBRARIES(${_appname} PUBLIC leetcode_utils ${GTEST_LIBRARIES} )
ADD_TEST(NAME ${_appname} COMMAND ${_appname})
ENDMACRO()

#-------------------------------------------------------------------------------
# Sub Projects
#-------------------------------------------------------------------------------

# utils should be the first subdirs to add
ADD_SUBDIRECTORY(leetcode_utils)

# other problems
ADD_SUBDIRECTORY(0002)
ADD_SUBDIRECTORY(0206)
ADD_SUBDIRECTORY(0445)
