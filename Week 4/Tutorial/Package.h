#ifndef PACKAGE_H
#define PACKAGE_H
#include "Customer.h"
#include <string>

class Package : public Customer
{
private:
    std::string id;
    double weight;
    bool urgent;
};

#endif