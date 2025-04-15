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
    int month;
    int day;
    int year;

public:
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    void printFormat1() const;
    void printFormat2() const;
    void printFormat3() const;
};

void Date::setDay(int day)
{
    if (day <= 31)
    {
        this->day = day;
    }
}

void Date::setMonth(int month)
{
    if (month <= 12)
    {
        this->month = month;
    }
}

void Date::setYear(int year)
{
    this->year = year;
}

std::string monthName(int monthNumber)
{
    std::string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    return month[monthNumber - 1];
}

void Date::printFormat1() const
{
    std::cout << day << "/" << month << "/" << year << std::endl;
}

void Date::printFormat2() const
{
    std::cout << monthName(month) << " " << day << ", " << year << std::endl;
}

void Date::printFormat3() const
{
    std::cout << day << " " << monthName(month) << " " << year << std::endl;
}

int main()

{
    Date d1;
    d1.setDay(31);
    d1.setMonth(3);
    d1.setYear(2022);
    d1.printFormat1();
    d1.printFormat2();
    d1.printFormat3();
    return 0;
}