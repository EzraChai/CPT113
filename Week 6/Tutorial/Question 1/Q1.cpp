/*
Based on the tutorial from previous week, answer the following questions:
a) Write a friend function to compare the volume and the surface area of two objects: Prism
and Cube. Print out which object has a bigger volume and bigger surface area from the
friend function.
b) Write an operator overloading for operator ‘==’ which compare the surface and volume of
the same object type.
*/
#include "Cube.h"
#include "Prism.h"
#include <iostream>

int main()
{
    Cube c;
    c.setDimension(2, 3, 4);

    Prism p;
    p.setDimension(2, 3, 6);

    c.compareAreaAndVolume(p);

    Prism p2;
    p2.setDimension(2, 3, 6);

    std::cout << ((p == p2) ? "Yes" : "No") << std::endl;

    return 0;
}