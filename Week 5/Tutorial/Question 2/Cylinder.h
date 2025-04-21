#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cylinder
{
private:
    double volume;
    double height;
    Circle circle;

public:
    Cylinder() : circle(), height(0), volume(0) {}
    ~Cylinder() {}

    void print() const;
    void setDimension(double r, double h);
    double calculateVol();
};

#endif