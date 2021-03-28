//
// Created by Bogdan on 26/03/2021.
//

#include <cmath>
#include <assert.h>
#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) : _a(a), _b(b), _c(c) {
    assert(a < b + c);
    assert(b < a + c);
    assert(c < b + c);
}

double Triangle::calculatePerimeter() {
    return _a + _b + _c;
}

double Triangle::calculateSquare() {
    double p = calculatePerimeter()/2;
    return sqrt(p*(p - _a)*(p - _b)*(p - _c));
}

std::string Triangle::getName() {
    return "Triangle";
}
