cmake_minimum_required(VERSION 3.17.3)
set(target StereoCamera)

find_package(Eigen3 REQUIRED)
find_package(manif REQUIRED)
find_package(Python3 COMPONENTS Python Numpy)
find_package(matplotlib_cpp REQUIRED)

add_executable(${target} StereoCamera.cpp)
target_link_libraries(${target} PRIVATE ${Python3_LIBRARIES} INTERFACE "${PROJECT_NAME}Lib")
target_include_directories(${target} PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS} ${matplotlib_cpp_INCLUDE_DIRS} ${manif_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})