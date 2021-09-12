cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(curvesHierachy)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -fopenmp")

include_directories(${PROJECT_NAME} curvestaticlib/include/)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} "${PROJECT_SOURCE_DIR}/curvestaticlib/build/libcurveStatic.a")