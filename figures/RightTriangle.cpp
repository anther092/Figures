//
// Created by Bogdan on 28/03/2021.
//

#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b) : Triangle(a, b) {}

double RightTriangle::calculateSquare() {
    return _a * _b / 2;
}

std::string RightTriangle::getName() {
    return "Right triangle";
}
