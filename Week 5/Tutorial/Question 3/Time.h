#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0) {}
    ~Time() {}

    void setTime(int hour, int minute, int second)
    {
        this->hour = hour;
        this->second = second;
        this->minute = minute;
    }
    int getHour() { return hour; }
    int getMinute() { return minute; }
    int getSecond() { return second; }
};

#endif