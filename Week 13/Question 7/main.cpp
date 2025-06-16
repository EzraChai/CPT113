/*
The sum of a series of consecutive numbers from 1 to n can be defined
recursively as:
sum(1) = 1;
sum(n) = n+sum(n-1)
Write a recursive C++ function that accepts n as an argument and calculates the
sum of the numbers from 1 to n.
*/
#include <iostream>

int sum(int n);
int sumOfDigit(int n);
int sumOfOddNumber(int n);
int sumOfEvenNumber(int n);
int factorial(int n);

int main()
{
    std::cout << sum(3) << std::endl;
    std::cout << sumOfDigit(12345) << std::endl;
    std::cout << sumOfOddNumber(4) << std::endl;
    std::cout << sumOfEvenNumber(4) << std::endl;
    std::cout << factorial(4) << std::endl;
    return 0;
}

int sumOfDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumOfDigit(n / 10);
}

int sumOfOddNumber(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (2 * n - 1) + sumOfOddNumber(n - 1);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumOfEvenNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (2 * n) + sumOfEvenNumber(n - 1);
}

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}