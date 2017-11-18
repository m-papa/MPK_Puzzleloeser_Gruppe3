cmake_minimum_required(VERSION 3.8)
project(MPK_Puzzleloeser_Gruppe3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Part.cpp PuzzleCreator.cpp PuzzleSolverGrp3.cpp SolutionElement.cpp)
add_executable(MPK_Puzzleloeser_Gruppe3 ${SOURCE_FILES})