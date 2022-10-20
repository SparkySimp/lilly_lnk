# CMakeList.txt : CMake project for lilly_linker, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("lilly_linker")

# Add source to this project's executable.
add_executable (lilly_linker "lilly_linker.cpp" "lilly_linker.h" "linker_fn.cpp")

# TODO: Add tests and install targets if needed.
