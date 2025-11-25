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
        CppCodeForge/src/04-ArraysAndVectors/Exercise.cpp
        CppCodeForge/src/05-StatementsAndOperators/AssignmentOperators.cpp
        "CppCodeForge/src/05-StatementsAndOperators/ArithmeticOperators.cpp"
        CppCodeForge/src/05-StatementsAndOperators/RmbConverterExercise.cpp
        CppCodeForge/src/05-StatementsAndOperators/IncrementDecrementOperators.cpp
        CppCodeForge/src/05-StatementsAndOperators/MixedExpressions.cpp
        CppCodeForge/src/05-StatementsAndOperators/EqualityOperators.cpp
        CppCodeForge/src/05-StatementsAndOperators/RelationalOperators.cpp
        CppCodeForge/src/05-StatementsAndOperators/LogicalOperators.cpp
        CppCodeForge/src/05-StatementsAndOperators/Exercise.cpp
        CppCodeForge/src/06-ControllingProgramFlow/IfStatement.cpp
        CppCodeForge/src/06-ControllingProgramFlow/WeddingExercise.cpp
        CppCodeForge/src/06-ControllingProgramFlow/NestedIfStatements.cpp
        CppCodeForge/src/06-ControllingProgramFlow/DeliveryCost.cpp
        CppCodeForge/src/06-ControllingProgramFlow/SwtichStatement.cpp
        CppCodeForge/src/06-ControllingProgramFlow/SwitchEnum.cpp
        CppCodeForge/src/06-ControllingProgramFlow/TernaryOperator.cpp
        CppCodeForge/src/06-ControllingProgramFlow/ForLoop.cpp
        CppCodeForge/src/06-ControllingProgramFlow/SumOfEvenIntegers.cpp
        CppCodeForge/src/06-ControllingProgramFlow/RangeBasedForLoop.cpp
        CppCodeForge/src/06-ControllingProgramFlow/MonthOfTheYear.cpp
        CppCodeForge/src/06-ControllingProgramFlow/WhileLoop.cpp
        CppCodeForge/src/06-ControllingProgramFlow/DoWhileLoop.cpp
        CppCodeForge/src/06-ControllingProgramFlow/MultiplicationTable.cpp
        CppCodeForge/src/06-ControllingProgramFlow/Histogram.cpp
        CppCodeForge/src/06-ControllingProgramFlow/ControlFlowChallenge.cpp
)

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)