#include "Rectangle.h"
#include "Rectangle.cpp"
#include <iostream>

int main()
{
    double width = 1;
    double length = -2;
    Rectangle myRec;

    try
    {
        /* code */
        myRec.setWidth(width);
        myRec.setLength(length);
    }
    catch (Rectangle::NegativeSize)
    {
        std::cout << "Error: a negative value was entered" << std::endl;
    }

    return 0;
}