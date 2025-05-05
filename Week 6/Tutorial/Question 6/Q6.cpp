/*
Modify the DayOfYear class, written in Programming Challenge 2, to add a constructor that
takes two parameters: a string object representing a month and an integer in the range 0
through 31 representing the day of the month. The constructor should then initialize the integer
member of the class to represent the day specified by the month and day of month parameters.
The constructor should terminate the program with an appropriate error message if the number
entered for a day is outside the range of days for the month given.
Add the following overloaded operators:
++ prefix and postfix increment operators. These operators should modify the DayOfYear
object so that it represents the next day. If the day is already the end of the year, the new value
of the object will represent the first day of the year.
−− prefix and postfix decrement operators . These operators should modify the DayOfYear
object so that it represents the previous day. If the day is already the first day of the year, the
new value of the object will represent the last day of the year.
*/
#include <iostream>

class DayOfYear
{
private:
    std::string month;
    int day;

public:
    DayOfYear() : month(""), day(1) {}
    DayOfYear(std::string m, int d)
    {
        int dayOfMonth = findDayOfMonth(m);
        if (d > dayOfMonth || d < 1)
        {
            return;
        }
        month = m;
        day = d;
    }
    ~DayOfYear() {}

    int findDayOfMonth(std::string m)
    {
        if (m == "February")
        {
            return 28;
        }
        else if (m == "January" || m == "March" || m == "May" || m == "July" || m == "August" || m == "October" || m == "December")
        {
            return 31;
        }
        else
        {
            return 30;
        }
    }

    std::string previousMonth(std::string m)
    {
        std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        if (m == "January")
        {
            return "December";
        }
        for (int i = 1; i < 12; i++)
        {
            if (m == months[i])
            {
                return months[i - 1];
            }
        }
        return "";
    }

    std::string nextMonth(std::string m)
    {
        std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        if (m == "December")
        {
            return "January";
        }

        for (int i = 0; i < 11; i++)
        {
            if (m == months[i])
            {
                return months[i + 1];
            }
        }
        return "";
    }

    DayOfYear &operator++()
    {
        if (day < findDayOfMonth(month))
        {
            day++;
        }
        else
        {
            day = 1;
            month = nextMonth(month);
        }
        return *this;
    }

    DayOfYear operator++(int)
    {
        DayOfYear temp = *this;
        ++(*this);
        return temp;
    }

    DayOfYear &operator--()
    {
        if (day == 1)
        {
            int dayOfMonth = findDayOfMonth(previousMonth(month));
            day = dayOfMonth;
            month = previousMonth(month);
        }
        else
        {
            day--;
        }
        return *this;
    }

    DayOfYear operator--(int)
    {
        DayOfYear temp = *this;
        --(*this);
        return temp;
    }

    DayOfYear &operator=(const DayOfYear &obj)
    {
        if (this != &obj)
        {
            this->day = obj.day;
            this->month = obj.month;
        }
        return *this;
    }

    void print()
    {
        std::cout << month << " " << day << std::endl;
    }
};

int main()
{

    DayOfYear d("January", 31);
    d.print();
    d++;
    d.print();
    --d;
    DayOfYear d2("August", 2);
    d2 = d;
    d2--;
    d2.print();

    return 0;
}