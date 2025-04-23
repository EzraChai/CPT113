/*
Design a class named TimeClock . The class should be derived from the MilTime class you
designed in the previous question. The class should allow the programmer to pass two times to it:
starting time and ending time. The class should have a member function that returns the amount of
time elapsed between the two times. For example, if the starting time is 900 hours (9:00 am), and
the ending time is 1300 hours (1:00 pm), the elapsed time is 4 hours.
Input Validation: The class should not accept hours greater than 2359 or less than 0.
*/

#include "../Question 3/MilTime.h"
#include <string>
#include <iostream>

class TimeClock : public MilTime
{
private:
    int startingTime;
    int endingTime;

public:
    TimeClock() : MilTime(), startingTime(0), endingTime(0) {}
    TimeClock(int st, int et) : MilTime()
    {
        if (st > 2359 || st < 0 || et > 2359 || et < 0)
        {
            return;
        }
        startingTime = st;
        endingTime = et;
    }

    std::string calculateDifference()
    {
        int endingHour = endingTime / 100;
        int endingMinutes = endingTime % 100;

        int startHour = startingTime / 100;
        int startMinutes = startingTime % 100;

        int hourDifference = endingHour - startHour;
        int minutesDifference = 0;
        if ((endingMinutes - startMinutes) < 0)
        {
            hourDifference--;
            minutesDifference = endingMinutes + 60 - startMinutes;
        }
        else
        {
            minutesDifference = endingMinutes - startMinutes;
        }
        std::string time = std::to_string(hourDifference);
        time.append(" hours ");
        if (minutesDifference > 0)
        {
            std::string timeM = std::to_string(minutesDifference);
            time.append(timeM);
            time.append(" minutes");
        }
        return time;
    }
};

int main()
{

    TimeClock tc(900, 1130);
    std::cout << "Time Ellapsed: " << tc.calculateDifference() << std::endl;
    return 0;
}