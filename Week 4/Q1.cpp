/*
 Build a class object called Student with the following information:
name
ID
desasiswa
year
sem
CGPA

Write appropriate accessor and mutator and display methods/functions. Complete the main
function to test all the members declared in class Student.
*/

#include <string>
#include <iostream>
#include <iomanip>

class Student
{
private:
    std::string name;
    std::string ID;
    std::string desasiswa;
    int year;
    int sem;
    double CGPA;

public:
    // Student() : name(""), ID(""), desasiswa(""), year(0), sem(0), CGPA(0.0) {};
    // Student(std::string name, std::string ID, std::string desasiswa, int year, int sem, double CGPA) : name(name), ID(ID), desasiswa(desasiswa), year(year), sem(sem), CGPA(CGPA) {};
    // ~Student() {};

    void setName(std::string name)
    {
        this->name = name;
    }
    void setID(std::string ID)
    {
        this->ID = ID;
    }
    void setDesasiswa(std::string desasiswa)
    {
        this->desasiswa = desasiswa;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    void setSem(int sem)
    {
        this->sem = sem;
    }
    void setCGPA(double CGPA)
    {
        this->CGPA = CGPA;
    }

    std::string getName()
    {
        return name;
    }

    std::string getID()
    {
        return ID;
    }

    std::string getDesasiswa()
    {
        return desasiswa;
    }

    int getYear()
    {
        return year;
    }

    int getSem()
    {
        return sem;
    }

    double getCGPA()
    {
        return CGPA;
    }

    void printDetails()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Desasiswa: " << desasiswa << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Sem: " << sem << std::endl;
        std::cout << "CGPA: " << std::fixed << std::setprecision(2) << CGPA << std::endl;
    }
};

int main()
{

    Student stu1;
    stu1.setName("Ezra");
    stu1.setID("123");
    stu1.setDesasiswa("Tekun");
    stu1.setYear(1);
    stu1.setSem(2);
    stu1.setCGPA(4.0);
    stu1.printDetails();

    std::cout << std::endl;

    Student stu2;
    stu2.setID("124");
    std::cout << stu2.getID() << std::endl;
    stu2.printDetails();

    return 0;
}