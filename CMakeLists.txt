#-------------------------------------------------------------------------------
# CMake Setups
#-------------------------------------------------------------------------------
CMAKE_MINIMUM_REQUIRED (VERSION 3.15)

SET(CMAKE_VERBOSE_MAKEFILE ON)
SET(CMAKE_COLOR_MAKEFILE ON)
SET(CMAKE_ERROR_DEPRECATED ON)
SET(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#-------------------------------------------------------------------------------
# Project Setups
#-------------------------------------------------------------------------------
PROJECT (leetcode-solutions)
SET(PROJECT_DESCRIPTION "My leetcode solutions http://leetcode.com/")
ENABLE_LANGUAGE(C CXX)
ENABLE_TESTING()

#-------------------------------------------------------------------------------
# Compoler Options
#-------------------------------------------------------------------------------
# we use C99 in this project
SET(CMAKE_C_STANDARD   99)
SET(CMAKE_C_STANDARD_REQUIRED ON)

# we use C++11 in this project
SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

#-------------------------------------------------------------------------------
# CMake Modules
#-------------------------------------------------------------------------------
INCLUDE(FeatureSummary)
INCLUDE(FindPkgConfig)

# Detect avaliable options directly
INCLUDE(options.cmake)

#-------------------------------------------------------------------------------
# Sub Projects
#-------------------------------------------------------------------------------
ADD_SUBDIRECTORY(src)

#-------------------------------------------------------------------------------
# Show Project Summary Information
#-------------------------------------------------------------------------------
FEATURE_SUMMARY(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)
