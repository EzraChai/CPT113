#include "Person.h"
#include <string>
#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : public Person
{
private:
    std::string department;

public:
    Employee(std::string name, std::string department) : Person(name), department(department) {}
    Employee() = default;
    std::string getDepartment() const
    {
        return department;
    }
    void setDepartment(std::string department)
    {
        this->department = department;
    }

    void printInfo() const override
    {
        std::cout << "Name: " << getName() << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};

#endif