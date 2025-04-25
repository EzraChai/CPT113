#include "Student.h"
#include <string>

void Student::addCourse(std::string courseName, std::string courseCode, int un)
{
    course.setCourse(courseName, courseCode, un);
}

Student::Student(std::string n, std::string s, int et, int id) : Person(n, s, et)
{
    ID = id;
}