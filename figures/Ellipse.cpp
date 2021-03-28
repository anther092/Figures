//
// Created by Bogdan on 26/03/2021.
//

#include <iostream>
#include <cmath>
#include "Ellipse.h"



Ellipse::Ellipse(double semiMajor, double semiMinor) : _a(semiMajor), _b(semiMinor) {}

double Ellipse::calculateSquare() {
    return M_PI*_a*_b;
}

double Ellipse::calculatePerimeter() {
    return (4*M_PI*_b*_a + (_a - _b)*(_a - _b))/(_a + _b);
}

std::string Ellipse::getName() {
    return "Ellipse";
}
