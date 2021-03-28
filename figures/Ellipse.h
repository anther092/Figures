//
// Created by Bogdan on 26/03/2021.
//

#ifndef FIGURES_ELLIPSE_H
#define FIGURES_ELLIPSE_H

#include "/Users/anther/CLionProjects/univerProjects/myFigures/Figure.h"

class Ellipse : public Figure {
protected:
    const double _a;
    const double _b;

public:
    explicit Ellipse(double semiMajor = 42, double semiMinor = 21);

    double calculatePerimeter() override;
    double calculateSquare() override;

    std::string getName() override;
};

#endif //FIGURES_ELLIPSE_H
