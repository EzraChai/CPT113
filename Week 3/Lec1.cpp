#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Student.h"
#include "Student.cpp"

using namespace std;

// class Rectangle
// {
// private:
//     double width;
//     double length;

// public:
//     void setWidth(double);
//     void setLength(double);
//     double getWidth() const;  // cannot change the private value
//     double getLength() const; // cannot change the private value
//     double getArea() const;   // cannot change the private value
// };

// void Rectangle::setWidth(double w)
// {
//     width = w;
// }

// void Rectangle::setLength(double l)
// {
//     length = l;
// }

// double Rectangle::getArea() const
// {
//     return width * length;
// }

int main()
{
    Rectangle r = Rectangle(12, 25);
    // r.setLength(12);
    // r.setWidth(25);
    cout << r.getArea() << endl;
    r.setLength(13);
    cout << r.getArea() << endl;

    Rectangle *rectPtr = new Rectangle();

    rectPtr->setLength(2);
    rectPtr->setWidth(4);
    cout << rectPtr->getArea() << endl;

    rectPtr->display();

    delete rectPtr;
    rectPtr = nullptr;

    Rectangle recArr[3];
    recArr[0].setLength(2);
    recArr[0].setWidth(3);
    recArr[0].display();

    Undergraduate *u1 = new Undergraduate("123", "Ezra", 3.82);
    u1->getInfo();
}