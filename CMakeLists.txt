cmake_minimum_required(VERSION 3.3)
project(CStudy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES dynamic_array.cpp algorithm/PrintArray.cpp algorithm/PrintArray.h)
add_executable(CStudy ${SOURCE_FILES})