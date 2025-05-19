#include <iostream>

void doubleValue(int *ptr)
{
    *ptr *= 2;
}

void doublePointerValue(int *&ptr)
{
    *ptr *= 2;
}

int main()
{
    int a = 10;
    int *y = &a;
    doublePointerValue(y); 
    doubleValue(&a);
    int &b = a; // b is a reference to a
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    doubleValue(&b); // changing b changes a
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    int *ptr = &a; // ptr is a pointer to a
    std::cout << "ptr: " << ptr << std::endl;

    int *p;
    int x;
    p = &x;
    *p = 100;
    std::cout << "x: " << x << std::endl;
    std::cout << "ptr: " << *p << std::endl;

    const int ARRAY_SIZE = 5;
    short numbers[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    std::cout << "numbers: " << *(numbers) << std::endl;
    std::cout << "numbers: " << *(numbers + 4) << std::endl;
    short *ptr2 = numbers;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << *(ptr2 + i) << std::endl;
    }

    const int SIZE = 5;
    int numbers2[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> *(numbers2 + i);
    }

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << *(numbers2 + i) << " ";
    }
    std::cout << std::endl;

    double readings[20], totals[20];
    double *dptr = nullptr;
    // readings = totals;
    // totals = dptr;

    return 0;
}