/*
Given that there are two classes, Person and Address, as well as a struct
named PersonalInfo to represent personal information including name and
age, the Person class utilizes this struct to represent personal information
and contains a pointer variable to an Address object. The Address class
stores address information, including addrType, city, and country for a
person. The program needs to demonstrate how to create a Person object
and display both personal information and address information using the
displayInfo and displayAddress member functions, respectively.
Overloading constructors are available for each class.
(i). Write the class definition based on the above description.
*/
#include <iostream>
using namespace std;

class Person
{
private:
    PersonalInfo personalInfo;
    Address *addressPointer;

public:
    Person(PersonalInfo, Address *);
    void displayInfo() const;
};

class Address
{
    string addrType;
    string city;
    string country;

public:
    Address(string, string, string);
    void displayAddress() const;
};

struct PersonalInfo
{
    string name;
    int age;
};

Person::Person(PersonalInfo pi, Address *pa)
{
    personalInfo = pi;
    addressPointer = pa;
}

void Person::displayInfo() const
{
    cout << "Age: " << personalInfo.age << endl;
    cout << "Name: " << personalInfo.name << endl;
}

void Address::displayAddress() const
{
    cout << "Address Type: " << addrType << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
}

Address::Address(string at, string ci, string co)
{
    addrType = at;
    city = ci;
    country = co;
}