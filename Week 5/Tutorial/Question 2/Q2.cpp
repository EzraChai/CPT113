/*
This question has four parts. You need to answer them sequentially.
Part 1:
Write a class called Circle where the variables can hold the values: radius,
radian, degree and area which is declared as private and the methods declared as
a public member of the class. Declare PI as a constant member class variable. Write the
following function:
a) print
b) setVal to set the values of radius and degree
c) getVal to access all the values of variable in Circle
d) calcRadian
e) calcArea
f) default constructor
g) overloading constructor
h) destructor
i) write the main to test all functions

Part 2:
Create another class that is inherited from Circle called Cone. Cone has three private members
to retain the height, area and volume. Cone has the following function:
a) print to print radius, height, area and volume
b) setDimension to set the radius and height
c) calculateArea to calculate the surface area of the cone
d) calculateVol to calculate the volume of the Cone
e) default constructor
f) overloading constructor that accepts two parameters
g) destructor
h) write the main to test overloading Circle constructor and to calculate the area and volume and
print it out.
P.S.: Change radius variable from Circle to protected. Others must be maintained. Add
method(s) if necessary in the base class.

Part 3:
Write a new class called Cylinder. Cylinder has two private members: volume and
composition of class Circle. Circle has the following functions:
a) print to print radius, height, area & volume
b) setDimension to set the radius and height
c) calculateVol to calculate the volume of the Cylinder
d) default constructor
e) destructor
f) write the main to test the functions created.
Part 4
Create a class name Ellipse inherited from Circle with another variable as a private member
representing the shorter radius. Write the function to calculate the Ellipse area.
Formula:
Radian calculation = degree × pi /180
Circle area = pi * radius2
Cone area = pi * radius * (radius + sqrt(height2 + radius2))
Cone volume = pi * radius2 * height
Cylinder surface area = (2 * pi * radius2)+ (2 * pi * radius * height)
Cylinder volume = pi * radius2 * height
Ellipse area = pi * radius * shortRadius
 */
#include "Circle.h"
#include "Circle.cpp"
#include "Cone.h"
#include "Cone.cpp"
#include "Cylinder.h"

int main()
{
    Circle c(2, 3);
    c.calcArea();
    c.calcRadian();
    c.print();

    Cone c1(2, 3);
    c1.calculateArea();
    c1.calculateVol();
    c1.print();

    Cylinder cy();

    return 0;
}