cmake_minimum_required(VERSION 4.0)
project(CppCodeForge)

set(CMAKE_CXX_STANDARD 14)

# Find your source files
file(GLOB_RECURSE SOURCES
        "src/*.cpp"
        "src/*.c"
        "*.cpp"
        "*.c"
)

# Find your header files
file(GLOB_RECURSE HEADERS
        "src/*.h"
        "src/*.hpp"
        "include/*.h"
        "include/*.hpp"
        "*.h"
        "*.hpp"
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS}
        CppCodeForge/src/03-VariablesAndConstants/PrimitiveTypes.cpp
        CppCodeForge/src/03-VariablesAndConstants/SizeofOperator.cpp
        CppCodeForge/src/03-VariablesAndConstants/Exercise.cpp
        CppCodeForge/src/04-ArraysAndVectors/Arrays.cpp
        CppCodeForge/src/04-ArraysAndVectors/vectors.cpp
        CppCodeForge/src/04-ArraysAndVectors/Exercise.cpp)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)