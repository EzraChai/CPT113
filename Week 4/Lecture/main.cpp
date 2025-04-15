#include "Box.h"
#include "Rectangle.h"
#include "Rectangle.cpp"
#include <iostream>

int main()
{
    Box b(20, 10, 42);
    std::cout << b.getVolume() << std::endl;

    return 0;
}