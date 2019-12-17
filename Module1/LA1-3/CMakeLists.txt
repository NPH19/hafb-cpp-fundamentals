# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(LA1-3 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create a Static Library
add_library(my_functions
    STATIC   # not dynamic (will not change)
    my_functions.h
    my_functions.cpp
)


# main code with ouput name: ca1
# Note: In windows, the executable name will be: ca1.exe
# add_executable(<name> <main file name>)
add_executable(main main.cpp)

target_link_libraries(main my_functions) # Link Library
