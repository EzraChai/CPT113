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

int main()
{
    int num;
    std::cout << "Enter the number of disks: ";
    std::cin >> num;
    move(num, 1, 2, 3);
    return 0;
}
// This program implements the Tower of Hanoi problem using recursion.