//
// Created by Bogdan on 28/03/2021.
//

#ifndef FIGURES_SQUARE_H
#define FIGURES_SQUARE_H

#include "Rect.h"

class Square : public Rect {
public:
    Square(double a);

    std::string getName() override;
};

#endif //FIGURES_SQUARE_H
