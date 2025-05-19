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
    void setName(std::string n)
    {
        name = n;
    }
    std::string getName()
    {
        return name;
    }
    std::string getHometownState()
    {
        return hometownState;
    }
};

class Student
{
private:
    std::string studentId;
    std::string school;
    std::string desaName;
    Person p;

public:
    Student(std::string s, std::string sc, std::string d, std::string n, std::string h) : p(n, h), studentId(s), school(sc), desaName(d) {}
    void printInformation()
    {
        std::cout << "Student ID: " << studentId << std::endl;
        std::cout << "School: " << school << std::endl;
        std::cout << "Desa Name: " << desaName << std::endl;
        std::cout << "Name: " << p.getName() << std::endl;
        std::cout << "Hometown State: " << p.getHometownState() << std::endl;
    }
};

int main()
{
    Student s("233", "USM", "Tekun", "R", "T");
    s.printInformation();
    return 0;
}