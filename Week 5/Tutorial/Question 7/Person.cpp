#include "Person.h"
#include <string>

Person::Person(std::string n, std::string s, int et)
{
    name = n;
    state = s;
    entryType = et;
}

void Person::setName(std::string n)
{
    name = n;
}

std::string Person::getName()
{
    return name;
}
void Person::setState(std::string s)
{
    state = s;
}

std::string Person::getState()
{
    return state;
}

void Person::setType(int t)
{
    entryType = t;
}

int Person::getType()
{
    return entryType;
}