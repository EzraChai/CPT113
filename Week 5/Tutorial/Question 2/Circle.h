#ifndef CIRCLE_H
#define CIRCLE_H

const double PI = 3.142;

class Circle
{
private:
    double radian;
    double degree;
    double area;

protected:
    double radius;

public:
    Circle() : radius(0), radian(0), degree(0), area(0) {}
    Circle(double r, double d) : radius(r), radian(0), degree(d), area(0) {}
    ~Circle() {}

    void print() const;
    void setRadius(double r) { radius = r; }
    void setDegree(double d) { degree = d; }
    double getRadius() const { return radius; }
    double getRadian() const { return radian; }
    double getDegree() const { return degree; }
    double getArea() const { return area; }

    double calcRadian();
    double calcArea();
};

#endif