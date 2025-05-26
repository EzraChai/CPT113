#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;

public:
    class NegativeSize
    {
    };

    Rectangle() : width(0.0), length(0.0) {}
    void setWidth(double width);

    void setLength(double length);

    double getLength() const
    {
        return length;
    }

    double getWidth() const
    {
        return width;
    }

    double getArea() const
    {
        return width * length;
    }
};

#endif