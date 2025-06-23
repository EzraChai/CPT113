#include <iostream>

void move(int num, int A, int B, int C)
{
    if (num == 1)
    {
        std::cout << "Move disk 1 from " << A << " to " << C << std::endl;
    }
    else
    {
        move(num - 1, A, C, B);
        std::cout << "Move disk " << num << " from " << A << " to " << C << std::endl;
        move(num - 1, B, A, C);
    }
}

int sumOfFirstNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfFirstNNumbers(n - 1);
}

int sumofSquares(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return n * n + sumofSquares(n - 1);
}

int main()
{
    int num;
    // 1 + 2 + 3 + 4 = 10
    std::cout << sumOfFirstNNumbers(4) << std::endl;
    std::cout << sumofSquares(2) << std::endl;
    std::cout << "Enter the number of disks: ";
    std::cin >> num;
    move(num, 1, 2, 3);
    return 0;
}
// This program implements the Tower of Hanoi problem using recursion.