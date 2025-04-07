/*
Write a program that uses a structure to store the following weather data for a particular
month:
Total Rainfall
High Temperature
Low Temperature
Average Temperature
The program should have an array of 12 structures to hold weather data for an entire year.
when the program runs, it should ask the user to enter data for each month. (The average
temperature should be calculated.) Once the data are entered for all the months, the program
should calculate and display the average monthly rainfall, the total rainfall for the year, the
highest and lowest temperatures for the year (and the months they occurred in), and the
average of all the monthly average temperatures.
Input Validation: Only accept temperatures within the range between –100 and +140
degrees Fahrenheit.
*/

#include <iostream>
using namespace std;

struct WeatherData
{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

string displayMonth(int m)
{
    switch (m)
    {
    case 0:
        return "January";
    case 1:
        return "February";
    case 2:
        return "March";
    case 3:
        return "April";
    case 4:
        return "May";
    case 5:
        return "June";
    case 6:
        return "July";
    case 7:
        return "August";
    case 8:
        return "September";
    case 9:
        return "October";
    case 10:
        return "November";
    case 11:
        return "December";
    }
    return "";
}

main()
{
    WeatherData months[12];
    double totalRainfallForTheYear;
    double lowestTemp;
    int lowestTempMonth;
    double highestTemp;
    int highestTempMonth;

    for (int i = 0; i < 12; i++)
    {

        cout << "What is the total Rainfall for month " << displayMonth(i) << "? ";
        cin >> months[i].totalRainfall;
        totalRainfallForTheYear += months[i].totalRainfall;

        cout
            << "What is the highest temperature for month " << displayMonth(i) << "? ";
        cin >> months[i].highTemperature;
        while (months[i].highTemperature < -100 || months[i].highTemperature > 140)
        {
            cout << "Please insert a valid temperature";
            cout << "What is the highest temperature for month " << displayMonth(i) << "? ";
            cin >> months[i].highTemperature;
        }

        if (highestTemp < months[i].highTemperature)
        {
            highestTemp = months[i].highTemperature;
            highestTempMonth = i;
        }

        cout << "What is the lowest temperature for month " << displayMonth(i) << "? ";
        cin >> months[i].lowTemperature;
        while (months[i].lowTemperature < -100 || months[i].lowTemperature > 140)
        {
            cout << "Please insert a valid temperature";
            cout << "What is the lowest temperature for month " << displayMonth(i) << "? ";
            cin >> months[i].lowTemperature;
        }

        if (lowestTemp < months[i].lowTemperature)
        {
            lowestTemp = months[i].lowTemperature;
            lowestTempMonth = i;
        }
    }

    double average = totalRainfallForTheYear / 12;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Highest Temperature: " << highestTemp << "( " << displayMonth(highestTempMonth) << ")" << endl;
    cout << "Lowest Temperature: " << lowestTemp << "( " << displayMonth(lowestTempMonth) << ")" << endl;
    
    return 0;
}