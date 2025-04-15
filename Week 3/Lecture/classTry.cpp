#include <iostream>
using namespace std;

class Student
{
private:
    string name, desasiswa;
    int ID, year, sem;
    float CGPA;

public:
    void setStudent(string name, string newDesasiswa, int newID, int newYear, int newSem, float newCGPA)
    {
        // name = newName;
        this->name = name;
        desasiswa = newDesasiswa;
        ID = newID;
        year = newYear;
        sem = newSem;
        CGPA = newCGPA;
    }
    void getStudent() const
    {
        cout << name << " " << desasiswa << " " << ID << " " << year << " " << sem << " " << CGPA << endl;
    }
};

int main()
{
    Student s1;
    s1.setStudent("Ezra", "Tekun", 23302910, 2024, 2, 3.82);
    s1.getStudent();

    return 0;
}