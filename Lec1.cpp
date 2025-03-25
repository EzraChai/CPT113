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

enum BRAND
{
    TOYOTA,
    PROTON,
    LEXUS,
    MERCEDES
};

struct Car
{
    BRAND brand;
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

void showData(const Student &stu)
{
    cout << "ID: " << stu.id << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Year in School: " << stu.yearInSchool << endl;
    cout << "Address: " << stu.address << endl;
    cout << "GPA: " << stu.gpa << endl;
}

int main()
{

    Student stu1;
    stu1.name = "Bill";
    stu1.id = "233423";
    stu1.gpa = 3.92;
    stu1.address = "13, Taman Bunga, Selangor";
    stu1.yearInSchool = 2024;

    showData(stu1);

    Student stu2 = {
        "113",
        "John",
        2024,
        "2, Taman Hayati",
        2.83,
    };

    cout << endl;
    showData(stu2);

    Student *stuPtr = new Student();
    stuPtr->id = "131";
    stuPtr->address = "1, Taman Melawati";
    (*stuPtr).name = "Chan";
    stuPtr->yearInSchool = 2025;
    showData(*stuPtr);

    const int NUM_STUDENTS = 10;
    Student stuList[NUM_STUDENTS];
    cout << stuList[2].name;

    enum DAY
    {
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    };
    enum BRAND brandCar = MERCEDES;

    Car c1;
    c1.brand = brandCar;
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

    delete stuPtr;
    stuPtr = nullptr;
    return 0;
}