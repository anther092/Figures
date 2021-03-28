//
// Created by Bogdan on 28/03/2021.
//

#include "Square.h"

Square::Square(double a) : Rect(a, a) {}

std::string Square::getName() {
    return "Square";
}
