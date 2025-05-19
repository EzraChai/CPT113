#ifndef CUSTOMER_DATA_H
#define CUSTOMER_DATA_H
#include "PersonData.h"
#include <string>

class CustomerData : public PersonData
{
private:
    std::string customerNumber;
    bool mailingList;

public:
    CustomerData() : customerNumber(0), mailingList(false) {}
    CustomerData(std::string ln, std::string fn, std::string add, std::string ct, std::string sta, int z, std::string p, std::string cn, bool ml) : PersonData(ln, fn, add, ct, sta, z, p), customerNumber(cn), mailingList(ml) {}
    ~CustomerData() {}
};

#endif