#include <iostream>

double divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        std::string exceptionString = "ERROR: Cannot divide by zero.\n";
        throw exceptionString;
    }
    else
    {
        return (static_cast<double>(numerator) / denominator);
    }
}

int main()
{
    int num1, num2;
    std::cout << "Please enter two numbers: ";
    std::cin >> num1 >> num2;
    try
    {
        std::cout << divide(num1, num2) << std::endl;
    }
    catch (std::string exceptionString)
    {
        std::cout << exceptionString;
    }
    return 0;
}