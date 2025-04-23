#ifndef COURSE_H
#define COURSE_H
#include <string>

class Course
{
private:
    std::string cName;
    std::string cCode;
    int unit;
    std::string grade;
    float pointVal;

public:
    Course();
    std::string getName();
    std::string getCode();
    void setGrade(std::string);
    std::string getGrade();
    int getUnit();
    float getPoint();
    void setCourse(std::string, std::string, int);
    int isEmpty();
    void mapGrade2Point();
};

#endif