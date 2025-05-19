/*
Create a class named Instructor. It contains a first_name, last_name, and an office_number,
and its only constructor requires all three as arguments. Create a class named Classroom. It
contains a building_number and a room_number, and its only constructor requires both as
arguments.
Each of these classes contains a function that displays an object’s values. Draw the UML
diagram of the Instructor class and Classroom class.
*/
#include <string>

class Instructor
{
private:
    std::string first_name;
    std::string last_name;
    int office_number;

public:
    Instructor(std::string firstName, std::string lastName, int officeNumber) : first_name(firstName), last_name(lastName), office_number(officeNumber) {};
    void display();
};

class Classroom
{
private:
    int building_number;
    int room_number;

public:
    Classroom(int buildingNumber, int roomNumber) : building_number(buildingNumber), room_number(roomNumber) {}
    void display();
};