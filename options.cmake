#-------------------------------------------------------------------------------
# Packages
#-------------------------------------------------------------------------------

# gtest
PKG_CHECK_MODULES(GTEST REQUIRED gtest gtest_main)
SET_PACKAGE_PROPERTIES(gtest PROPERTIES
  DESCRIPTION "Google C++ Testing Framework"
  URL "https://github.com/google/googletest"
  TYPE REQUIRED)
IF(GTEST_FOUND)
  SET_PROPERTY(GLOBAL APPEND PROPERTY PACKAGES_FOUND gtest)
ENDIF()

# gmock
PKG_CHECK_MODULES(GMOCK REQUIRED gmock gmock_main)
SET_PACKAGE_PROPERTIES(gmock PROPERTIES
  DESCRIPTION "Google C++ Testing Framework"
  URL "https://github.com/google/googletest"
  TYPE REQUIRED)
IF(GMOCK_FOUND)
  SET_PROPERTY(GLOBAL APPEND PROPERTY PACKAGES_FOUND gmock)
ENDIF()

# benchmark (optional)
PKG_CHECK_MODULES(BENCHMARK benchmark)
SET_PACKAGE_PROPERTIES(benchmark PROPERTIES
  DESCRIPTION "A microbenchmark support library"
  URL "https://github.com/google/benchmark"
  TYPE OPTIONAL)
IF(BENCHMARK_FOUND)
  SET_PROPERTY(GLOBAL APPEND PROPERTY PACKAGES_FOUND benchmark)
ENDIF()

#-------------------------------------------------------------------------------
# Basic deps we need in this project
#-------------------------------------------------------------------------------

INCLUDE_DIRECTORIES (${GTEST_INCLUDE_DIRS})
INCLUDE_DIRECTORIES (${GMOCK_INCLUDE_DIRS})
INCLUDE_DIRECTORIES (${BENCHMARK_INCLUDE_DIRS})

