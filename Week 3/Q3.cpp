/*
Given the following parallel array, reconstruct the program to use stuct:
Name: San Mukoda Tamaru Sonoko
Skill: Heal Gourmet Sword Imagine
Write appropriate set and get functions. Complete the main function to allow user to enter
different values.
*/

#include <iostream>
using namespace std;

struct Info
{
    string Name;
    string Skill;
};

void setInfo(Info &p)
{
    cout << "Name? ";
    getline(cin, p.Name);
    cout << "Skill? ";
    getline(cin, p.Skill);
}

void getInfo(Info p)
{
    cout << "Name: " << p.Name << endl;
    cout << "Skill: " << p.Skill << endl;
}

int main()
{
    Info p1[5];
    for (Info &p : p1)
    {
        setInfo(p);
    }
    cout << endl;
    for (Info p : p1)
    {
        getInfo(p);
    }
    return 0;
}