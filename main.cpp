#include <iostream>
#include <vector>
#include "Figure.h"
#include "figures/Ellipse.h"
#include "figures/Circle.h"
#include "figures/Parallelogram.h"
#include "figures/Rect.h"
#include "figures/Square.h"
#include "figures/Triangle.h"
#include "figures/RightTriangle.h"
#include "figures/IsoscelesTriangle.h"

#include <cmath>

int main() {
    Figure *f;
    std::vector<Figure*> figures;

    f = new Ellipse(42, 1/M_PI);
    figures.push_back(f);
    f = new Circle(sqrt(42/M_PI));
    figures.push_back(f);
    f = new Parallelogram(30, 42, 2);
    figures.push_back(f);
    f = new Rect(42, 1);
    figures.push_back(f);
    f = new Square(sqrt(42));
    figures.push_back(f);
    f = new Triangle(7, 15, 20);
    figures.push_back(f);
    f = new RightTriangle(4, 21);
    figures.push_back(f);
    f = new IsoscelesTriangle(sqrt(505)/2., 8);
    figures.push_back(f);


    for (auto & figure : figures) {
        std::cout << "Name: "  << figure->getName() << std::endl;
        std::cout << "Square: " << figure->calculateSquare() << std::endl;
        std::cout << "Perimeter: " << figure->calculatePerimeter() << std::endl;
        std::cout << std::endl;
    }


    return 0;
}
