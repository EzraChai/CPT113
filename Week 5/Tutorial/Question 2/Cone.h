#ifndef CONE_H
#define CONE_H
#include "Circle.h"

class Cone : public Circle
{

private:
    double height, area, volume;

public:
    Cone() : Circle(), height(0), area(0), volume(0) {}
    Cone(double r, double h) : Circle(r, 0), height(h), area(0), volume(0) {};
    ~Cone() {}

    void print() const;
    void setDimension(double r, double h)
    {
        radius = r;
        height = h;
    };

    double calculateArea();
    double calculateVol();
};

#endif