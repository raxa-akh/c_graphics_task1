cmake_minimum_required(VERSION 3.20)

project(cpp-course-task1)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type" FORCE)
endif()

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

set(CMAKE_C_STANDARD 11)

set(CRITERION_DIR "${CMAKE_SOURCE_DIR}/external/criterion-2.4.2")

add_library(edu_math STATIC src/edu_math.c)
target_include_directories(edu_math PUBLIC include)
target_compile_options(edu_math PRIVATE -Wall -Wextra -pedantic -Werror)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address,leak,undefined")

enable_testing()
add_subdirectory(test)
