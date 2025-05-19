/*
2. Write a function template named arrange that accepts 3 reference variables as arguments and arrange them in
ascending order. Write the main function to demonstrate the template with int, double and char data types.
*/
#include <iostream>

template <class T>
void sort(T &x, T &y, T &z)
{
    // x = y;
    // T buffer =y;
    if (x > y)
    {
        T buffer = x;
        x = y;
        y = buffer;
    }

    if (y > z)
    {
        T buffer = y;
        y = z;
        z = buffer;
    }
    if (x > z)
    {
        T buffer = x;
        x = z;
        z = buffer;
    }
}

template <class T>
void printValues(T *&ptr, int val)
{
    for (int i = 0; i < val; i++)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int int1 = 1;
    int int2 = 3;
    int int3 = 2;
    sort(int1, int2, int3);
    std::cout << int1 << " " << int2 << " " << int3 << std::endl;

    double double1 = 2.6;
    double double2 = 6.4;
    double double3 = 6.2;
    sort(double1, double2, double3);
    std::cout << double1 << " " << double2 << " " << double3 << std::endl;

    char char1 = 'a';
    char char2 = 'v';
    char char3 = 't';
    sort(char1, char2, char3);
    std::cout << char1 << " " << char2 << " " << char3 << std::endl;

    return 0;
}