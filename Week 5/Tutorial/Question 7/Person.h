#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    std::string fullName;
    std::string state;
    int entryType;

public:
    Person(std::string, std::string, int);
    void setName(std::string);
    std::string getName() const;
    void setState(std::string);
    std::string getState();
    void setType(int);
    int getType();
};

#endif