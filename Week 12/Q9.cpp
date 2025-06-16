/*
Write a recursive function that finds and returns the sum of the elements of an int array.
Also, write a program to test your function.
*/

#include <iostream>

int sumOfTheElements(int arr[], int size, int position = 0);

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 8, 6, 9, 3, 7};
    std::cout << sumOfTheElements(arr, 10) << std::endl;
    return 0;
}

int sumOfTheElements(int arr[], int size, int position)
{
    if (position >= size)
    {
        return 0;
    }
    return arr[position] + sumOfTheElements(arr, size, position + 1);
}