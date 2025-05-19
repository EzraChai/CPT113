/*
Build a struct called Student with the following information:
Name
ID
Desasiswa
Year
Semester
CGPA
a) Create a struct and accept input from user so that it can print back to the terminal.
b) Define an array stuList that has 5 elements. Each element representing a student info.
Each element must be read from file input given and the program must be able to display
data stored in each element to the terminal.
c) Modify your answer in (b) to accept the input from terminal
d) Modify your answer in (c) above using pointer of structure
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    string Name;
    int ID;
    string Desasiswa;
    int Year;
    int Semester;
    double CGPA;
};

int main()
{
    Student stuList[5];

    for (int i = 1; i <= 5; i++)
    {
        Student stu;
        cout << "Student " << i << endl;
        cout << "Student ID: ";
        cin >> stu.ID;
        cout << "Name: ";
        cin >> stu.Name;
        cout << "Desasiswa: ";
        cin >> stu.Desasiswa;
        cout << "Year:  ";
        cin >> stu.Year;
        cout << "CGPA:  ";
        cin >> stu.CGPA;
        cout << endl;
    }

    for (Student stu : stuList)
    {
        cout << "Student ID: " << stu.ID << endl;
        cout << "Name: " << stu.Name << endl;
        cout << "Desasiswa: " << stu.Desasiswa << endl;
        cout << "Year: " << stu.Year << endl;
        cout << "Semester: " << stu.Semester << endl;
        cout << "CGPA: " << stu.CGPA << endl;
        cout << endl;
    }

    return 0;
}
