#include "Cube.h"
#include "Prism.h"
#include <iostream>

void Cube::print() const
{
    shape.print();
    std::cout << "Volume: " << volume << std::endl;
}

void Cube::setDimension(double l, double w, double h)
{
    shape.setVal(h, w, l);
}

double Cube::calculateVol()
{
    double height = shape.getH();
    return height * height * height;
}

void Cube::compareAreaAndVolume(Prism &obj)
{
    if (volume > obj.calculateVol())
    {
        std::cout << "Cube has a bigger volume than Prism";
    }
    else
    {
        std::cout << "Prism has a bigger volume than Cube";
    }
}