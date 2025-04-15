#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle()
{
    width = 0;
    length = 0;
}

Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::getArea() const
{
    return width * length;
}

void Rectangle::display() const
{
    std::cout << "Width: " << width << std::endl;
    std::cout << "Length: " << length << std::endl;
}