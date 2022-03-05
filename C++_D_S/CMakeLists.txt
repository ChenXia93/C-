cmake_minimum_required(VERSION 3.21)
project(C___D_S)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___D_S main.cpp)
add_executable(pointer pointer/Pointer.cpp)
add_executable(con Class/conversionConstructor.cpp)
add_executable(stock personalStockFile/main.cpp)
add_executable(safeArray CSCI381_Project_1/safeArray.cpp)
add_executable(safeArrayTemplate CSCI381_Project_1/safeArrayTemplate.cpp)
add_executable(matrix Matrix/BasicMatrix.cpp)