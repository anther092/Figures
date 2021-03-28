cmake_minimum_required(VERSION 3.17)
project(figures)

set(CMAKE_CXX_STANDARD 14)

add_executable(figures main.cpp Figure.cpp Figure.h figures/Triangle.cpp figures/Triangle.h figures/Parallelogram.h figures/Parallelogram.cpp figures/Ellipse.cpp figures/Ellipse.h figures/Circle.cpp figures/Circle.h figures/Rect.cpp figures/Rect.h figures/Square.cpp figures/Square.h figures/RightTriangle.cpp figures/RightTriangle.h figures/IsoscelesTriangle.cpp figures/IsoscelesTriangle.h)