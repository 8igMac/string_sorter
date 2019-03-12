cmake_minimum_required(VERSION 3.12)
project(string_sorter)
option(BUILD_TESTS "Build tests" ON)

## Dependencies
# gtest
if(BUILD_TESTS)
    enable_testing()
    include(GoogleTest)
endif()

## Compiler related
set(CMAKE_CXX_STANDARD 17)
include_directories(include)

if(BUILD_TESTS)
    add_executable(sais_test unit_test/sais_test.cpp)
    target_link_libraries(sais_test gtest gtest_main)
    add_test(sais_test sais_test)

    add_executable(dcs_test unit_test/dcs_test.cpp)
    target_link_libraries(dcs_test gtest gtest_main)
    add_test(dcs_test dcs_test)
endif()

