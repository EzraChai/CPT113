#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"
#include <string>
#include <iostream>
#include <iomanip>

class MilTime : public Time
{
private:
    int milHours;
    int milSeconds;

public:
    MilTime() : Time(), milHours(0), milSeconds(0) {};
    MilTime(int miH, int miS)
    {
        setMilTime(miH, miS);
    };

    void setMilTime(int miH, int miS)
    {
        if (miH > 2359 || miH < 0 || miS < 0 || miS > 59)
        {
            milSeconds = 0;
            milHours = 0;
            setTime(0, 0, 0);
            return;
        }
        milHours = miH;
        milSeconds = miS;
        setTime(miH / 100, miH % 100, milSeconds);
    }

    int getHour() const { return milHours; }
    int getStandHr()
    {
        int standardHour = Time::getHour() % 12;
        if (standardHour == 0)
            return Time::getHour();
        return standardHour;
    }

    void displayMilitaryTime() const
    {
        std::cout << "Military Time: "
                  << std::setw(2) << std::setfill('0') << milHours / 100 << ":"
                  << std::setw(2) << milHours % 100 << ":"
                  << std::setw(2) << milSeconds << std::endl;
    }

    void displayStandardTime()
    {
        std::cout << "Standard Time: "
                  << std::setw(2) << std::setfill('0') << getStandHr() << ":"
                  << std::setw(2) << getMinute() << ":"
                  << std::setw(2) << getSecond() << (getHour() >= 12 ? " PM" : " AM") << std::endl;
    }
};

#endif