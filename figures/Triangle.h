//
// Created by Bogdan on 26/03/2021.
//

#ifndef FIGURES_TRIANGLE_H
#define FIGURES_TRIANGLE_H

#include "/Users/anther/CLionProjects/univerProjects/myFigures/Figure.h"

class Triangle : public Figure {
protected:
    const double _a;
    const double _b;
    const double _c;

public:
    explicit Triangle(double a = 84, double b = 42, double c = 21);

    double calculatePerimeter() override;
    double calculateSquare() override;

    std::string getName() override;
};

#endif //FIGURES_TRIANGLE_H
