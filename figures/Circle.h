//
// Created by Bogdan on 26/03/2021.
//

#ifndef FIGURES_CIRCLE_H
#define FIGURES_CIRCLE_H

#include "Ellipse.h"

class Circle : public Ellipse {
public:
    explicit Circle(double radius);
    double calculatePerimeter() override;

    std::string getName() override;
};

#endif //FIGURES_CIRCLE_H
