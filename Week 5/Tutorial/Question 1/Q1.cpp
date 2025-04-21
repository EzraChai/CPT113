/*
Write a class called Shape where the variables can hold the following
values: height, width, length which are declared as private and the methods declared as
a public member of the class. Write the following function:
a) print
b) setVal to set the values of all the variables
c) getHW to access the values of height and width
d) default constructor
e) overloading constructor
f) destructor
g) write the main to test all functions

Part 2:
Create another class that is inherited from Shape called Prism. Prism has one private
member to retain the volume. Prism has the following function:
a) print to print l, w, h & volume
b) setDimension to set the length, width and height
c) calculateVol to calculate the volume of the prism
d) default constructor
e) overloading constructor that accepts four parameters
f) destructor
g) write the main to test overloading Prism constructor and to calculate the volume and print it out.
P.S.: Only change length variable from Shape to protected. Others must be maintained.

Part 3:
Write a new class called Cube. Cube has two private members: volume and composition of
class Shape. Cube has the following functions:
a) print to print l, w, h & volume
b) setDimension to set the length, width and height
c) calculateVol to calculate the volume of the Cube
d) default constructor
e) destructor
f) write the main to test the functions created.
Formula:
Prism volume = length * height * width
Cube volume = height * height * height
*/
#include <iostream>
#include "Shape.h"
#include "Shape.cpp"
#include "Prism.h"
#include "Prism.cpp"
#include "Cube.h"
#include "Cube.cpp"

int main()
{
    Shape s(1, 2, 3);
    s.print();
    s.setVal(2, 4, 6);
    s.print();
    std::cout << "Height * Width: " << s.getHW() << std::endl;

    std::cout << std::endl;
    Prism p(2, 4, 6, 8);
    p.calculateVol();
    p.print();

    Cube cube;
    cube.setDimension(2, 2, 2);
    cube.print();

    return 0;
}