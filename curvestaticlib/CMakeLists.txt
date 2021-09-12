cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

project(curveStatic)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra")

include_directories(${PROJECT_NAME} include/)

file(GLOB source_files "${PROJECT_SOURCE_DIR}/source/*.cpp")

add_library(${PROJECT_NAME} STATIC ${source_files})