//
// Created by Bogdan on 26/03/2021.
//

#include <cmath>
#include "Parallelogram.h"

std::string Parallelogram::getName() {
    return "Parallelogram";
}

Parallelogram::Parallelogram(double angle, double a, double b) : _angle(angle), _a(a), _b(b) {}

double Parallelogram::calculatePerimeter() {
    return 2*(_a + _b);
}

double Parallelogram::calculateSquare() {
    return _a * _b * sin((_angle * M_PI / 180));
}
