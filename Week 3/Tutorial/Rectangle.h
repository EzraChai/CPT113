#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;

public:
    Rectangle();
    ~Rectangle();
    Rectangle(double, double);
    void setWidth(double);
    void setLength(double);
    //  inline function
    double getWidth() const
    {
        return width;
    } // cannot change the private value
    double getLength() const
    {
        return length;
    } // cannot change the private value
    double getArea() const; // cannot change the private value
    void display() const;
};

#endif