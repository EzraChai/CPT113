/*
Write a program that has a dateTime structure to store the following particulars about date and
time:
Year
Month
Date
Hours
Minutes
Seconds
The program should declare two dateTime variables of the above structure and ask the user to
input data on the date and time of two different instances. The program should pass these
structure variables as arguments to a function. The function should determine the date (and not
time) that comes earlier between the two arguments. If both dates are the same, the function
displays a message “Identical dates” and returns any of the arguments; otherwise it should
return the date that comes earlier.
*/
#include <iostream>
using namespace std;

struct DateTime
{
    int Year;
    int Month;
    int Date;
    int Hours;
    int Minutes;
    int Seconds;
};

DateTime checkDate(DateTime d1, DateTime d2)
{
    if (d1.Year == d2.Year && d1.Month == d2.Month && d1.Date == d2.Date)
    {
        cout << "Identical Dates";
        return d1;
    }
    if (d1.Year > d2.Year)
    {
        return d2;
    }
    else if (d1.Year < d2.Year)
    {
        return d1;
    }
    else
    {
        if (d1.Month > d2.Month)
        {
            return d2;
        }
        else if (d1.Month < d2.Month)
        {
            return d1;
        }
        else
        {
            if (d1.Date > d2.Date)
            {
                return d2;
            }
            else if (d1.Date < d2.Date)
            {
                return d1;
            }
        }
    }
}

int main()
{
    DateTime d1;
    DateTime d2;

    cin >> d1.Year >> d1.Month >> d1.Date >> d1.Hours >> d1.Minutes >> d1.Seconds;
    cout << endl;
    cin >> d2.Year >> d2.Month >> d2.Date >> d2.Hours >> d2.Minutes >> d2.Seconds;
    cout << endl;

    DateTime d3 = checkDate(d1, d2);
    cout << d3.Hours << ":" << d3.Minutes << ":" << d3.Seconds << " " << d3.Date << "/" << d3.Month << "/" << d3.Year;

    return 0;
}