/*
Write a function template to add two values with an optional third value. It means that the user can
pass either 2 or 3 values to the function template. Then test your function in a program.
*/
#include <iostream>

template <class T1, class T2>
T1 add(T1 x, T2 y)
{
    return x + y;
}

template <class T1, class T2, class T3>
T1 add(T1 x, T2 y, T3 z)
{
    return x + y + z;
}

int main()
{
    int datatype = 0;
    while (datatype != 1 && datatype != 2 && datatype != 3)
    {
        int ans = 0;

        std::cout << "--- ADDITION CALCULATOR ---" << std::endl;
        std::cout << "1. int" << std::endl;
        std::cout << "2. double" << std::endl;
        std::cout << "3. float" << std::endl;
        std::cout << "Please choose your datatype: ";
        std::cin >> datatype;

        int totalNum;
        std::cout << "Do you wish to enter 2 or 3 numbers?" << std::endl;
        std::cin >> totalNum;
        while (totalNum != 2 && totalNum != 3)
        {
            std::cout << "Please enter only 2 or 3" << std::endl;
        }

        if (datatype == 1)
        {
            int num1 = 0;
            int num2 = 0;
            int num3 = 0;
            if (totalNum == 2)
            {
                std::cout << "Please enter two numbers: ";
                std::cin >> num1 >> num2;
            }
            else
            {
                std::cout << "Please enter three numbers: ";
                std::cin >> num1 >> num2 >> num3;
            }
            if (totalNum == 2)
            {
                ans = add(num1, num2);
                std::cout << num1 << " + " << num2 << " = " << ans << std::endl;
            }
            else
            {
                ans = add(num1, num2, num3);
                std::cout << num1 << " + " << num2 << " + " << num3 << " = " << ans << std::endl;
            }
        }

        if (datatype == 2)
        {
            double num1 = 0;
            double num2 = 0;
            double num3 = 0;
            if (totalNum == 2)
            {
                std::cout << "Please enter two numbers: ";
                std::cin >> num1 >> num2;
            }
            else
            {
                std::cout << "Please enter three numbers: ";
                std::cin >> num1 >> num2 >> num3;
            }
            if (totalNum == 2)
            {
                ans = add(num1, num2);
                std::cout << num1 << " + " << num2 << " = " << ans << std::endl;
            }
            else
            {
                ans = add(num1, num2, num3);
                std::cout << num1 << " + " << num2 << " + " << num3 << " = " << ans << std::endl;
            }
        }
        if (datatype == 3)
        {
            float num1 = 0;
            float num2 = 0;
            float num3 = 0;
            if (totalNum == 2)
            {
                std::cout << "Please enter two numbers: ";
                std::cin >> num1 >> num2;
            }
            else
            {
                std::cout << "Please enter three numbers: ";
                std::cin >> num1 >> num2 >> num3;
            }
            if (totalNum == 2)
            {
                ans = add(num1, num2);
                std::cout << num1 << " + " << num2 << " = " << ans << std::endl;
            }
            else
            {
                ans = add(num1, num2, num3);
                std::cout << num1 << " + " << num2 << " + " << num3 << " = " << ans << std::endl;
            }
        }
    }

    return 0;
}