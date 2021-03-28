//
// Created by Bogdan on 26/03/2021.
//

#ifndef FIGURES_PARALLELOGRAM_H
#define FIGURES_PARALLELOGRAM_H

#include "/Users/anther/CLionProjects/univerProjects/myFigures/Figure.h"

class Parallelogram : public Figure {
protected:
    const double _angle;
    const double _a;
    const double _b;

public:
    Parallelogram(double angle, double a, double b);

    std::string getName() override;

    double calculateSquare() override;
    double calculatePerimeter() override;
};

#endif //FIGURES_PARALLELOGRAM_H
