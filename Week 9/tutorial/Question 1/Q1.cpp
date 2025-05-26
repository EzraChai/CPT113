/*
1. The following function accepts an int argument and returns half of its value as a double. Write a template that
will implement this function to accept an argument of any type.
double half (int number){
    return number/2.0;
}
*/
#include <iostream>
template <class T>
T half(T num)
{
    return num / 2.0;
}

int main()
{

    std::cout << half(2) << std::endl;
    std::cout << half(2.5) << std::endl;
    return 0;
}