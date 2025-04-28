#ifndef CUBE_H
#define CUBE_H
#include "Shape.h"
// #include "Prism.h"

class Prism;

class Cube
{
private:
    double volume;
    Shape shape;

public:
    Cube() : shape(0, 0, 0), volume(0) {}
    ~Cube() {}

    void print() const;
    void setDimension(double l, double w, double h);
    double calculateVol();
    void compareAreaAndVolume(Prism &obj);
};

#endif