#include "Prism.h"
#include "Cube.h"
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

bool Prism::operator==(Prism &p)
{
    if (p.volume == volume)
    {
        return true;
    }
    return false;
}
