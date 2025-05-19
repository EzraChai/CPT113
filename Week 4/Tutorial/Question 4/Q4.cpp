/*
Design a class called Date. The class should store a date in three integers: month, day, and year.
There should be member functions to print the date in the following forms:
31/3/2022
March 31, 2022
31 March 2022
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept
values for the month greater than 12 or less than 1.
*/
#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date() : day(1), month(1), year(1) {}
    Date(int d, int m, int y)
    {
        if (d <= 31 && d >= 1)
        {
            day = d;
        }
        if (m <= 12 && m >= 1)
        {
            month = m;
        }
        year = y;
    }
    ~Date() {}

    std::string formatMonth(int n)
    {
        std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        return months[n - 1];
    }

    void printFormat1()
    {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
    void printFormat2()
    {
        std::cout << formatMonth(month) << " " << day << ", " << year << std::endl;
    }
    void printFormat3()
    {
        std::cout << day << " " << formatMonth(month) << " " << year << std::endl;
    }
};

int main()
{
    Date d(1, 2, 2024);
    d.printFormat1();
    d.printFormat2();
    d.printFormat3();

    return 0;
}