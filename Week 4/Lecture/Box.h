
#ifndef BOX_H
#define BOX_H
#include "Rectangle.h"

class Box : public Rectangle
{
    double height;
    double volume;

public:
    Box() : Rectangle()
    {
        height = 0;
        volume = 0;
    }

    Box(double w, double l, double h) : Rectangle(w, l)
    {
        height = h;
        volume = w * l * h;
    }

    double getVolume() const
    {
        return getArea() * height;
    }
};

#endif
