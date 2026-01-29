cmake_minimum_required(VERSION 3.31)
project(meanProject)

set(CMAKE_CXX_STANDARD 14)

# Enable CTest support
include(CTest)
enable_testing()

add_executable(mean DataSeries.cpp mean.cpp)
add_executable(max DataSeries.cpp max.cpp)

add_test(NAME testMean COMMAND mean)
add_test(NAME testMax  COMMAND max)