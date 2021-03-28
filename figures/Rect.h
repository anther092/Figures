//
// Created by Bogdan on 28/03/2021.
//

#ifndef FIGURES_RECT_H
#define FIGURES_RECT_H

#include <string>
#include "Parallelogram.h"

class Rect : public Parallelogram {
public:
    Rect(double a, double b);

    std::string getName() override;

    double calculateSquare() override;
};

#endif //FIGURES_RECT_H
