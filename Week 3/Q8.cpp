/*
Write a program that simulates inventory bins in a warehouse. Each bin holds a number of the
same type of parts. The program should use a structure that keeps the following data:
Description of the part kept in the bin
Number of parts in the bin
The program should have an array of 10 bins, initialized with the following data:
Part Description Number of Parts in the Bin
Valve 10
Bearing 5
Bushing 15
Coupling 21
Flange 7
Gear 5
Gear Housing 5
Vacuum Gripper 25
Cable 18
Rod 12
4
The program should have the following functions:
AddParts—increases a specific bin’s part count by a specified number.
RemoveParts—decreases a specific bin’s part count by a specified number.
When the program runs, it should repeat a loop that performs the following steps:
The user should see a list of what each bin holds and how many parts are in each bin. The user
can choose to either quit the program or select a bin. When a bin is selected, the user
can either add parts to it or remove parts from it. The loop then repeats, showing the updated
bin data on the screen.
Input Validation: No bin can hold more than 30 parts, so don’t let the user add more than a bin
can hold. Also, don’t accept negative values for the number of parts being added or removed.
*/
#include <iostream>
#include <iomanip>
using namespace std;

struct Bin
{
    string description;
    int numberOfParts;
};

void AddParts(Bin[10], string, int);
void RemoveParts(Bin[10], string, int);

int main()
{
    Bin bins[10] = {
        {"Valve", 10},
        {"Bearing", 5},
        {"Bushing", 15},
        {"Coupling", 21},
        {"Flange", 7},
        {"Gear", 5},
        {"Gear Housing", 5},
        {"Vacuum Gripper", 15},
        {"Cable", 18},
        {"Rod", 4}};

    while (true)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << setw(15) << bins[i].description << setw(15) << bins[i].numberOfParts << endl;
        }
        int choice = 0;
        cout << endl;
        cout << "1. Add Parts\n";
        cout << "2. Remove Parts\n";
        cout << "3. Quit Program\n";
        cout << "Please enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "\n\nAdd Parts" << endl;
            cout << "===============" << endl;
            cout << "Parts Name: ";
            cin.ignore();
            string partName;
            getline(cin, partName);
            cout << "Number of parts to add: ";
            int num;
            cin >> num;
            AddParts(bins, partName, num);
            cout << "\n\n";
        }
        else if (choice == 2)
        {
            cout << "\n\nRemove Parts" << endl;
            cout << "===============" << endl;

            cout << "Parts Name: ";
            cin.ignore();
            string partName;
            getline(cin, partName);
            cout << "Number of parts to remove: ";
            int num;
            cin >> num;
            RemoveParts(bins, partName, num);
            cout << "\n\n";
        }
        else if (choice == 3)
        {
            return 0;
        }
    }
}

void AddParts(Bin bins[10], string description, int num)
{
    if (num < 0)
    {
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        if (bins[i].description == description && bins[i].numberOfParts <= 30)
        {
            bins[i].numberOfParts += num;
        }
    }
}

void RemoveParts(Bin bins[10], string description, int num)
{
    if (num < 0)
    {
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        if (bins[i].description == description && bins[i].numberOfParts <= 30 && bins[i].numberOfParts > num)
        {
            bins[i].numberOfParts -= num;
        }
    }
}