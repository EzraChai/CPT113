#include "Circle.h"
#include <iostream>

void Circle::print() const
{
    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Radian: " << radian << std::endl;
    std::cout << "Degree: " << degree << std::endl;
    std::cout << "Area: " << area << std::endl;
}

double Circle::calcRadian()
{
    radian = degree * PI / 180;
    return radian;
}

double Circle::calcArea()
{
    area = PI * radius * radius;
    return area;
}