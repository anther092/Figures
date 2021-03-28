//
// Created by Bogdan on 28/03/2021.
//

#ifndef FIGURES_ISOSCELESTRIANGLE_H
#define FIGURES_ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    explicit IsoscelesTriangle(double a = 84, double base = 42);

    double calculateSquare() override;

    std::string getName() override;
};

#endif //FIGURES_ISOSCELESTRIANGLE_H
