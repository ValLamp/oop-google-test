cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_STANDARD 17)

project(OOP)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(main/include)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_library(oop-src main/src/Dummy.cpp main/include/Dummy.hpp)
add_executable(oop-main main/main.cpp)
add_executable(unit-test test/dummyTest.cpp)

target_compile_options(oop-main PRIVATE -Wall -Wextra -pedantic -std=c++17 -g -gdwarf-4)
target_compile_options(oop-src PRIVATE -Wall -Wextra -pedantic -std=c++17 -g -gdwarf-4)

target_link_libraries(oop-main oop-src)
target_link_libraries(unit-test oop-src GTest::gtest_main)

# Change a1 to the name of your executable
set_target_properties(oop-main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ../main/testing OUTPUT_NAME a1)