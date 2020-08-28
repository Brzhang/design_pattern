# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.0)

project(AbstractFactory)

# Import required CMake files
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.


set (EXECUTABLE_OUTPUT_PATH ./release)
set (CMAKE_BUILD_TYPE RELEASE)

include_directories( ${CMAKE_SOURCE_DIR})
aux_source_directory( ${CMAKE_SOURCE_DIR} DEMO)
aux_source_directory(${CMAKE_SOURCE_DIR}/src SOURCE)
add_executable(${PROJECT_NAME} ${SOURCE} ${DEMO})
