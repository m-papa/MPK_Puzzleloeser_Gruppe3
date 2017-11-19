cmake_minimum_required(VERSION 3.8)
project(MPK_Puzzleloeser_Gruppe3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Input/Part.cpp src/Creator/PuzzleCreator.cpp src/Solver/PuzzleSolverGrp3.cpp src/Output/SolutionElement.cpp)
add_executable(MPK_Puzzleloeser_Gruppe3 ${SOURCE_FILES})