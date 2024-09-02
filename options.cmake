#-------------------------------------------------------------------------------
# Packages
#-------------------------------------------------------------------------------

INCLUDE(FetchContent)

# gtest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG 0953a17a4281fc26831da647ad3fcd5e21e6473b
  )

# For Windows: Prevent overriding the parent project's compiler/linker settings
SET(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

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

INCLUDE_DIRECTORIES (${BENCHMARK_INCLUDE_DIRS})

