#include "Prism.h"
#include <iostream>

void Prism::print() const
{
    Shape::print();
    std::cout << "Volume: " << volume << std::endl;
}

void Prism::setDimension(double h, double w, double l)
{
    Shape(h, w, l);
}
double Prism::calculateVol()
{
    volume = getHW() * length;
    return volume;
}