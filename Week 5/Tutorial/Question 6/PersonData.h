#ifndef PERSON_DATA_H
#define PERSON_DATA_H

#include <string>
class PersonData
{
private:
    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    int zip;
    std::string phone;

public:
    PersonData() : lastName(""), firstName(""), address(""), city(""), state(""), zip(0), phone("") {}
    PersonData(std::string ln, std::string fn, std::string add, std::string ct, std::string sta, int z, std::string p) : lastName(ln), firstName(fn), address(add), city(ct), state(sta), zip(z) {}
    ~PersonData() {}
};

#endif