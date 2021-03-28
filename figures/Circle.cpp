//
// Created by Bogdan on 26/03/2021.
//

#include <cmath>
#include "Circle.h"

Circle::Circle(double radius) : Ellipse(radius, radius) {}

double Circle::calculatePerimeter() {
    return 2*M_PI*_a;
}

std::string Circle::getName() {
    return "Circle";
}


