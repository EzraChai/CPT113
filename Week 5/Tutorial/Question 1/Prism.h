#ifndef PRISM_H
#define PRISM_H
#include "Shape.h"

class Prism : public Shape
{
private:
    double volume;

public:
    Prism() : Shape(), volume(0) {}
    Prism(double h, double w, double l, double v) : Shape(h, w, l), volume(v) {}
    ~Prism() {}
    void print() const;
    void setDimension(double h, double w, double l);
    double calculateVol();
};

#endif