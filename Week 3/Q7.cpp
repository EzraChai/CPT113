/*
Write a program that keeps track of a speakers’ bureau. The program should use a structure to
store the following data about a speaker:
Name
Telephone Number
Speaking Topic
Fee Required
The program should use an array of at least 10 structures. It should let the user enter data into
the array, change the contents of any element, and display all the data stored in the array. The
program should have a menu-driven user interface.
Input Validation: When the data for a new speaker is entered, be sure the user enters data for all
the fields. No negative amounts should be entered for a speaker’s fee
*/

#include <iostream>
using namespace std;

struct Speaker
{
    string Name;
    string TelephoneNumber;
    string SpeakingTopic;
    double FeeRequired;
};

void enterSpeakerData(Speaker &speaker)
{
    cout << "Speaker's Name: ";
    getline(cin, speaker.Name);
    cout << "Speaker's Telephone Number: ";
    getline(cin, speaker.TelephoneNumber);
    cout << "Speaker's Speaking Topic: ";
    getline(cin, speaker.SpeakingTopic);
    cout << "Speaker's Fee Required: ";
    cin >> speaker.FeeRequired;
    while (speaker.FeeRequired < 0)
    {
        cout << "Please enter a valid fee." << endl;
        cout << "Speaker's Fee Required: ";
        cin >> speaker.FeeRequired;
    }
}

int main()
{

    Speaker *speakers = new Speaker[10];

    for (int i = 0; i < 10; i++)
    {
        enterSpeakerData(*(speakers + i));
    }

    for (int i = 0; i < 10; i++)
    {
        cout << (speakers + i)->Name << endl;
        cout << (speakers + i)->TelephoneNumber << endl;
        cout << (speakers + i)->SpeakingTopic << endl;
        cout << (speakers + i)->FeeRequired << endl;
    }

    delete[] speakers;
    speakers = nullptr;
    return 0;
}