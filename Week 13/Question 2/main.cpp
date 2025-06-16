/*
2- Write C++program to do the following:
a. Declare a dynamic array named “first” type int with size 100;
b. Initialize the declared variable with odd numbers starting from 1;
c. Display all values in the array “first”
d. Declare a dynamic array named “second” as the same type and size as 2(a);
e. Copy the values of the array “first” to “second”.
f. Delete the array “first”
g. Display all values in the array “second”
*/
#include <iostream>

int main()
{

    int *first = new int[100];
    for (int i = 0; i < 100; i++)
    {
        first[i] = 1 + i * 2;
    }

    for (int i = 0; i < 100; i++)
    {
        std::cout << first[i] << " ";
    }
    std::cout << std::endl;

    int *second = new int[100];

    for (int i = 0; i < 100; i++)
    {
        second[i] = first[i];
    }

    delete[] first;
    std::cout << std::endl;

    for (int i = 0; i < 100; i++)
    {
        std::cout << second[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}