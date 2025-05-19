/*
Write two classes called Person and Student. Make the Person class as a friend class for
students. The class Person has name, hometown state, and list of schools the person went to
before. The class Student has the student ID, school and desa name. The program should have
print function to print all the information.
Then, modify the above program so it uses composition
*/
#include <iostream>

class Person
{
private:
    std::string name;
    std::string hometownState;
    std::string listOfSchools[2];

public:
    Person(std::string n, std::string h) : name(n), hometownState(h), listOfSchools() {}

    friend class Student;
};

class Student
{
private:
    std::string studentId;
    std::string school;
    std::string desaName;

public:
    void printInformation(Person const &p)
    {
        std::cout << "Student ID: " << studentId << std::endl;
        std::cout << "School: " << school << std::endl;
        std::cout << "Desa Name: " << desaName << std::endl;
        std::cout << "Name: " << p.name << std::endl;
        std::cout << "Hometown State: " << p.hometownState << std::endl;
    }
};

int main()
{
    Person p("E", "G");
    Student s;
    s.printInformation(p);

    std::cout << "Hello World";
    return 0;
}