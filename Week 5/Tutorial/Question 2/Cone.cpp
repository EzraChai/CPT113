/*
Cone area = pi * radius * (radius + sqrt(height2 + radius2))
Cone volume = pi * radius2 * height
*/
#include "Cone.h"
#include <math.h>
#include <iostream>

void Cone::print() const
{
    std::cout <<"Radius: "<< radius << std::endl;
    std::cout << "Area: " << area << std::endl;
    std::cout << "Volume: " << volume << std::endl;
}

double Cone::calculateArea()
{
    area = PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
    return area;
}

double Cone::calculateVol()
{
    volume = PI * pow(radius, 2) * height;
    return volume;
}