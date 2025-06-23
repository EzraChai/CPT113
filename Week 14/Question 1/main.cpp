/*
Write a program that dynamically allocates memory for a 2D array, assigns values to the array from
1 increasingly, displaying the array in 2D format and then frees the memory.
*/

#include <iostream>
#include <iomanip>

int main()
{
    int rows = 0;
    int columns = 0;
    std::cout << "Please enter the rows of the array: ";
    std::cin >> rows;

    std::cout << "Please enter the columns of the array: ";
    std::cin >> columns;
    int *arrPtr[columns];
    int counter = 1;

    for (int i = 0; i < columns; i++)
    {
        arrPtr[i] = new int;
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            arrPtr[i][j] = counter;
            counter++;
        }
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            std::cout << std::setw(4) << arrPtr[i][j] << " ";
        }
        std::cout << "\n";
    }

    for (int i = 0; i < columns; i++)
    {
        delete arrPtr[i];
    }

    return 0;
}