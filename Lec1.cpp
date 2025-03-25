#include <iostream>
using namespace std;

struct Student
{
    string id;
    string name;
    short int yearInSchool;
    string address;
    double gpa;
};

struct Owner
{
    string name;
    int age;
};

struct Car
{
    string brand;
    Owner carOwner;
};

struct PayRoll
{
    int empNumber;
    string name;
    double hours;
    double payRate;
    double grossPay;
};

int main()
{

    Student stu1;
    stu1.name = "Bill";
    stu1.id = "233423";
    stu1.gpa = 3.92;
    stu1.address = "13, Taman Bunga, Selangor";
    stu1.yearInSchool = 2024;

    cout << stu1.id << endl;
    cout << stu1.name << endl;
    cout << stu1.address << endl;
    cout << stu1.yearInSchool << endl;
    cout << stu1.gpa << endl;

    Student stu2 = {
        "113",
        "John",
        2024,
        "2, Taman Hayati",
        2.83,
    };
    cout << "\n"
         << stu2.id << endl;
    cout << stu2.name << endl;
    cout << stu2.address << endl;
    cout << stu2.yearInSchool << endl;
    cout << stu2.gpa << endl;

    const int NUM_STUDENTS = 10;
    Student stuList[NUM_STUDENTS];
    cout << stuList[2].name;

    Car c1;
    c1.brand = "Toyota";
    c1.carOwner.name = "Ezra";
    c1.carOwner.age = 20;
    cout << "\nCar Brand: " << c1.brand << "\nOwner Name: " << c1.carOwner.name << "\nOwner Age: " << c1.carOwner.age << endl;

    PayRoll payroll1;

    cout << "\n\nEnter the Employee Number: ";
    cin >> payroll1.empNumber;
    cout << "Enter the Employee Name: ";
    cin.ignore();
    cin >> payroll1.name;

    cout << "Employee Number: " << payroll1.empNumber << endl;
    cout << "Name: " << payroll1.name << endl;
    return 0;
}