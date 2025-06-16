/*
Write a recursive function named sumSquares which returns the sum of the squares of the
numbers from 0 to num, in which num is a nonnegative int variable. Do not use global
variables; use the appropriate parameters. Also write a program to test your function.
*/
#include <iostream>

int sumSquares(int);

int main()
{
    // 1+4+9 = 14
    std::cout << sumSquares(5) << std::endl;
    return 0;
}

int sumSquares(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    return num * num + sumSquares(num - 1);
}