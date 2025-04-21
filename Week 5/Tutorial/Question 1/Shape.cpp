#include <iostream>
#include "Shape.h"

void Shape::print() const
{
    std::cout << "Height: " << height << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Length: " << length << std::endl;
}

void Shape::setVal(double h, double w, double l)
{
    height = h;
    width = w;
    length = l;
}

double Shape::getHW() const
{
    return height * width;
}