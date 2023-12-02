# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.14...3.22)

# Project name
project(gb_emulator_root)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the src subdirectory
add_subdirectory(src)