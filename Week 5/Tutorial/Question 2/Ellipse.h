#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Circle.h"

class Ellipse : public Circle
{
private:
    double shortRadius;

public:
    Ellipse() : Circle(0, 0), shortRadius(0) {}
    Ellipse(double r, double sr) : Circle(r, 0), shortRadius(sr) {}
    ~Ellipse() {}
    double calcArea() const
    {
        return PI * radius * shortRadius;
    }
};

#endif