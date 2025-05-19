#include "Student.h"
#include <string>

Student::Student()
{
    id = "";
    name = "";
}

Student::Student(std::string i, std::string n)
{
    id = i;
    name = n;
}

Undergraduate::Undergraduate()
{
    id = "";
    name = "";
    CGPA = 0.0;
}

Undergraduate::Undergraduate(std::string i, std::string n, double cg)
{
    id = i;
    name = n;
    CGPA = cg;
}