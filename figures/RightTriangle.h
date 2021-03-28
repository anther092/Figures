//
// Created by Bogdan on 28/03/2021.
//

#ifndef FIGURES_RIGHTTRIANGLE_H
#define FIGURES_RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    explicit RightTriangle(double a = 84, double b = 42);

    double calculateSquare() override;

    std::string getName() override;
};

#endif //FIGURES_RIGHTTRIANGLE_H
