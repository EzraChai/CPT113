/*
5. Write a program with structure Rectangle and creating 3 structure instance named kitchen,
bedroom and den. Calculate the total area of the three rooms. Measure, it should have a
a) structure instance
b) display the total area of three room.
*/

#include <iostream>
using namespace std;

struct Rectangle
{
    double length;
    double width;
};

int main()
{
    double totalArea;

    Rectangle kitchen;
    kitchen.length = 10.2;
    kitchen.width = 20;

    Rectangle bedroom;
    bedroom.length = 10.2;
    bedroom.width = 20;

    Rectangle den;
    den.length = 10.2;
    den.width = 20;

    totalArea += kitchen.length * kitchen.width;
    totalArea += bedroom.length * bedroom.width;
    totalArea += den.length * den.width;

    cout << "Total Area for this three rooms are: " << totalArea << "m^2";

    return 0;
}