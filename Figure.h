//
// Created by Bogdan on 26/03/2021.
//

#ifndef FIGURES_FIGURE_H
#define FIGURES_FIGURE_H

#include <string>

class Figure {
public:
    virtual std::string getName();

    virtual double calculateSquare() = 0;
    virtual double calculatePerimeter() = 0;
};

#endif //FIGURES_FIGURE_H
