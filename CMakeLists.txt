cmake_minimum_required(VERSION 3.5)
project(TrigonometrySaver)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Input.hpp Fractions.hpp TrigonometricOperations.hpp Help.hpp TrigValues.hpp TrigonometricOperations.cpp TrigValues.cpp Input.cpp Help.cpp Fractions.cpp)
add_executable(TrigonometrySaver ${SOURCE_FILES})