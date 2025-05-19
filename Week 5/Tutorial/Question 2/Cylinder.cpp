#include "Cylinder.h"
#include <iostream>

/*
radius, height, area & volume
*/
void Cylinder::print() const
{
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Area: " << (2 * PI * circle.getRadius() * circle.getRadius()) + (2 * PI * circle.getRadius() * height) << std::endl;
    std::cout << "Volume: " << volume << std::endl;
}

double Cylinder::calculateVol()
{
    volume = PI * circle.getRadius() * circle.getRadius() * height;
    return volume;
}

void Cylinder::setDimension(double r, double h)
{
    circle.setRadius(r);
    height = h;
}