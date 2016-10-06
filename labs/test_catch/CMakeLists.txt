cmake_minimum_required(VERSION 2.8.7)	

project(test_catch)
	
include_directories(include)

set(SOURCE_EXE examples/main.cpp)

set(SOURCE_LIB sources/check.cpp)	

set(TESTS_SOURCE tests/main.cpp)

add_library(phw STATIC ${SOURCE_LIB})	

add_executable(main ${SOURCE_EXE})	

add_executable(tests ${TESTS_SOURCE})

target_link_libraries(main phw)

target_link_libraries(tests phw)