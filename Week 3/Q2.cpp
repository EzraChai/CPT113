/*
The output should look something like this:

Enter the sales for day MONDAY: 100
Enter the sales for day TUESDAY: 200
Enter the sales for day WEDNESDAY: 300
Enter the sales for day THURSDAY: 400
Enter the sales for day FRIDAY: 500
The total sales are $1500.00

Modify the above program so the output can display the day instead of just the enumerated
number.
*/
#include <iostream>
#include <iomanip>
using namespace std;
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

string convEnumToDay(Day d)
{
    switch (d)
    {
    case MONDAY:
        return "Monday";
    case TUESDAY:
        return "Tuesday";
    case WEDNESDAY:
        return "Wednesday";
    case THURSDAY:
        return "Thursday";
    case FRIDAY:
        return "Friday";
    }
    return "";
}

int main()
{
    const int NUM_DAYS = 5; // The number of days
    double sales[NUM_DAYS]; // To hold sales for each day
    double total = 0.0;     // Accumulator
    Day workDay;            // Loop counter

    // Get the sales for each day.
    for (workDay = MONDAY; workDay <= FRIDAY;
         workDay = static_cast<Day>(workDay + 1))
    {
        cout << "Enter the sales for day " << convEnumToDay(workDay) << ": ";
        cin >> sales[workDay];
    }

    // Calcualte the total sales.
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
        total += sales[workDay];

    // Display the total.
    cout << "The total sales are $" << fixed << setprecision(2) << total << endl;
    return 0;
}
