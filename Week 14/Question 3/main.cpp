/*
Write a temperature convertor program that receive the temperature from user. Then ask user if
the temperature should be converted to Celsius or Fahrenheit. Based on the user input functions
FtoC or CtoF is called, and the conversion is done. Try/catch block should be used for input
validation and also let the user continue in the case of any error occurrence
*/

#include <iostream>

double FtoC(double Fahrenheit);
double CtoF(double Celcius);

int main()
{
    int select = 0;
    double convert = 0.0;
    while (select != 1 && select != 2)
    {
        select = 0;
        convert = 0.0;
        try
        {
            std::cout << "------- TEMPERATURE CONVERTER -------" << std::endl;
            std::cout << "1. Celcius to Fahrenheit" << std::endl;
            std::cout << "2. Fahrenheit to Celcius" << std::endl;
            std::cout << "Please choose a either 1 or 2: ";
            std::cin >> select;
            if (select != 1 && select != 2)
            {
                throw "Please choose only 1 or 2";
            }
            else
            {
                if (select == 1)
                {
                    std::cout << "Celcius: ";
                    std::cin >> convert;
                    std::cout << "Fahrenheit: " << CtoF(convert) << std::endl;
                }
                else
                {
                    std::cout << "Fahrenheit: ";
                    std::cin >> convert;
                    std::cout << "Celcius: " << FtoC(convert) << std::endl;
                }
            }
        }
        catch (char const *e)
        {
            std::cout << e << std::endl;
            std::cout << std::endl;
        }
    }

    return 0;
}

double FtoC(double Fahrenheit)
{
    return (Fahrenheit - 32) * 5 / 9.0;
}

double CtoF(double Celcius)
{
    return (Celcius * 9 / 5.0) + 32;
}