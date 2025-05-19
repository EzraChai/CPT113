#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person
{
private:
    std::string name;

public:
    Person(std::string name) : name(name) {}
    Person() = default;
    std::string getName() const
    {
        return name;
    }
    virtual void printInfo() const
    {
        std::cout << "Name: " << name << std::endl;
    }
};

#endif
