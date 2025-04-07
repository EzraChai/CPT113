/*
Write a program that calculates pay for either an hourly paid worker or a salaried worker.
Hourly paid workers are paid their hourly pay rate times the number of hours worked. Salaried
workers are paid their regular salary plus any bonus they may have earned. The program should
declare two structures for the following data:
Hourly Paid:
HoursWorked
HourlyRate
Salaried:
Salary
Bonus
The program should also declare a union with two members. Each member should be a
structure variable: one for the hourly paid worker and another for the salaried worker. The
program should ask the user whether he or she is calculating the pay for an hourly paid worker
or a salaried worker. Regardless of which the user selects, the appropriate members of the
union will be used to store the data that will be used to calculate the pay.
Input Validation: Do not accept negative numbers. Do not accept values greater than 80 for
HoursWorked.
*/
#include <iostream>
using namespace std;

struct HourlyPaid
{
    int HoursWorked;
    int HourlyRate;
};
struct Salaried
{
    int Salary;
    int Bonus;
};
struct Union
{
    HourlyPaid hourlyPaid;
    Salaried salaried;
};

int main()
{
    int choice;
    cout << "1. Hourly Paid\n2. Salaried\nPlease enter your choice: ";
    cin >> choice;

    int totalSalary;
    Union u;
    if (choice == 2)
    {
        cout << "Salary: ";
        cin >> u.salaried.Salary;

        cout << "Bonus: ";
        cin >> u.salaried.Bonus;

        totalSalary = u.salaried.Salary + u.salaried.Bonus;
    }
    else if (choice == 1)
    {
        cout << "Hours Worked: ";
        cin >> u.hourlyPaid.HoursWorked;

        cout << "Hourly Rate: ";
        cin >> u.hourlyPaid.HourlyRate;

        totalSalary = u.hourlyPaid.HoursWorked * u.hourlyPaid.HourlyRate;
    }

    cout << "Total Salary: RM" << totalSalary;

    return 0;
}