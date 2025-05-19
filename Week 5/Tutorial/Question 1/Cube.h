#ifndef CUBE_H
#define CUBE_H
#include "Shape.h"

class Cube
{
private:
    double volume;
    Shape shape;

public:
    void print() const;
    void setDimension(double l, double w, double h);
    double calculateVol();
    Cube() : shape(0, 0, 0), volume(0) {}
    ~Cube() {}
};

#endif