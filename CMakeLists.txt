cmake_minimum_required(VERSION 3.17.3)
project(StateEstimation)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 REQUIRED)
find_package(manif REQUIRED)

add_library("${PROJECT_NAME}Lib" INTERFACE)
target_include_directories("${PROJECT_NAME}Lib" SYSTEM INTERFACE ${EIGEN3_INCLUDE_DIRS} ${manif_INCLUDE_DIRS})

add_subdirectory(examples)

add_executable("${PROJECT_NAME}Exec" main.cpp)
target_link_libraries("${PROJECT_NAME}Exec" PRIVATE "${PROJECT_NAME}Lib")
