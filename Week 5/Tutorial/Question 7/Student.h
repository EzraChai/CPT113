#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include "Course.h"
#include <string>

class Student : public Person
{
private:
    int ID;
    Course course;

public:
    Student();
    Student(std::string, std::string, int, int);

    void printCourse();
    void addCourse(std::string, std::string, int);
    void addResult();
    int searchCourse(std::string);
    int numCourse();
    void printFullReport();
    float calcGPA();
};

#endif