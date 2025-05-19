/*
2. Write a function template named arrange that accepts 3 reference variables as arguments and arrange them in
ascending order. Write the main function to demonstrate the template with int, double and char data types.
*/
#include <iostream>

template <class T>
T *sort(T &x, T &y, T &z)
{
    T *list = new T[3];
    if (x > y && y > z)
    {
        list[2] = x;
    }
    else if (y > z && y > x)
    {
        list[2] = y;
    }
    else
    {
        list[2] = z;
    }
    if (x > y)
    {
        list[0] = y;
        list[1] = x;
    }
    else
    {
        list[0] = x;
        list[1] = y;
    }
    return list;
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
    int int2 = 2;
    int int3 = 3;
    int *intPtr = new int[3];
    intPtr = sort(int1, int2, int3);
    printValues(intPtr, 3);

    double double1 = 2.6;
    double double2 = 6.4;
    double double3 = 6.2;
    double *doublePtr = new double[3];
    doublePtr = sort(double1, double2, double3);
    printValues(doublePtr, 3);

    char char1 = 'a';
    char char2 = 'v';
    char char3 = 't';
    char *charPtr = new char[3];
    charPtr = sort(char1, char2, char3);
    printValues(charPtr, 3);

    return 0;
}