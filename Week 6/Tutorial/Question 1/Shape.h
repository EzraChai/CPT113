#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
    double height;
    double width;

protected:
    double length;

public:
    Shape() : height(0), width(0), length(0) {}
    Shape(double h, double w, double l) : height(h), width(w), length(l) {}
    ~Shape() {}
    double getH() { return height; }
    void print() const;
    void setVal(double h, double w, double l);
    double getHW() const;
};
#endif