#include "Course.h"
#include <string>

Course::Course()
{
    cName = "";
    cCode = "";
    unit = 0;
    grade = "";
    pointVal = 0.0f;
}

std::string Course::getName()
{
    return cName;
}

std::string Course::getCode()
{
    return cCode;
}

void Course::setGrade(std::string g)
{
    grade = g;
}

std::string Course::getGrade()
{
    return grade;
}

int Course::getUnit()
{
    return unit;
}

float Course::getPoint()
{
    return pointVal;
}

void Course::setCourse(std::string courseName, std::string courseCode, int un)
{
    cName = courseName;
    cCode = courseCode;
    unit = un;
}

int Course::isEmpty()
{
    
}

void Course::mapGrade2Point()
{
    std::string gr = getGrade();
    if (gr == "A")
    {
        pointVal = 4.0;
    }else if (gr == "A-"){
        pointVal = 3.67;
    }
};