cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Add the include directory to the include path
include_directories(include)

# Add the source files to the project
file(GLOB SOURCES "src/*.cpp")

# Create the library
add_library(MyProject ${SOURCES})

# Add the main function as an executable
add_executable(MyProjectExe src/main.cpp)

# Link the library to the executable
target_link_libraries(MyProjectExe MyProject)
