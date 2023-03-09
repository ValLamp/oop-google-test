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

add_executable(
        unit-test
        src/main.cpp
        tests/mainTest.cpp
)

target_compile_definitions(
        unit-test PUBLIC UNIT_TESTS
)
target_link_libraries(
        unit-test
        GTest::gtest_main
)