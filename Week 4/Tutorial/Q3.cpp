/*
Write a program, creating 3 Rectangle object named kitchen, bedroom and den. Calculate
the total area of the three room. Measure, it should have a
a) class declaration
b) function to set length and width, getArea function and
c) display the total area of three room.
*/
#include <iostream>

class Rectangle
{
private:
    double length, width;

public:
    void setLength(double length)
    {
        this->length = length;
    }
    void setWidth(double width)
    {
        this->width = width;
    }
    double getArea() const
    {
        return length * width;
    }
};

int main()
{
    Rectangle kitchen;
    kitchen.setLength(12);
    kitchen.setWidth(6);

    Rectangle bedroom;
    bedroom.setLength(18);
    bedroom.setWidth(12);

    Rectangle den;
    den.setLength(19);
    den.setWidth(14);

    double totalArea = kitchen.getArea() + bedroom.getArea() + den.getArea();

    std::cout << "Total Area: " << totalArea << std::endl;
}