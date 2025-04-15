#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

class Student
{
protected:
    std::string name;
    std::string id;

public:
    Student();
    Student(std::string, std::string);
};

class Undergraduate : public Student
{
private:
    double CGPA;

public:
    Undergraduate();
    Undergraduate(std::string, std::string, double);
    void getInfo()
    {
        std::cout << "ID: " << id << " Name: " << name << " CGPA: " << CGPA << std::endl;
    }
};
#endif