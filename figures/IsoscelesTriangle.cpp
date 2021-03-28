//
// Created by Bogdan on 28/03/2021.
//

#include <cmath>
#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double base) : Triangle(a, a, base) {}

double IsoscelesTriangle::calculateSquare() {
    double h = sqrt(_a * _a - _c * _c / 4);
    return h * _c / 2;
}

std::string IsoscelesTriangle::getName() {
    return "Isosceles triangle";
}
