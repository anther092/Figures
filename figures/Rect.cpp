//
// Created by Bogdan on 28/03/2021.
//

#include "Rect.h"

Rect::Rect(double a, double b) : Parallelogram(90, a, b) {}

std::string Rect::getName() {
    return "Rect";
}

double Rect::calculateSquare() {
    return _a * _b;
}
