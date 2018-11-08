cmake_minimum_required(VERSION 3.0)
set(PROJECT_NAME opencl-test-example)
project(${PROJECT_NAME})
set(SOURCES 
        src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES} )