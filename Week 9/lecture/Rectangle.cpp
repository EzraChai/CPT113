#include "Rectangle.h"
void Rectangle::setWidth(double width)
{
    if (width < 0)
    {
        throw NegativeSize();
    }
    this->width = width;
}

void Rectangle::setLength(double length)
{
    if (length < 0)
    {
        throw NegativeSize();
    }
    this->length = length;
}