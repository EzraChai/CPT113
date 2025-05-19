/*
Write a program that uses a structure named MovieData to store the following information
about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members, and pass
each one, in turn, to a function that displays the information about the movie in a clearly
formatted manner.
Reminder: Do not use array of instance /variable structure
*/
#include <iostream>
using namespace std;

struct MovieData
{
    string Title;
    string Director;
    int YearReleased;
    int RunningTime;
};

void displayMovieData(MovieData mv)
{
    cout << "Title: " << mv.Title << endl;
    cout << "Director: " << mv.Director << endl;
    cout << "Year Released: " << mv.YearReleased << endl;
    cout << "Running Time (minutes): " << mv.RunningTime << endl;
}

int main()
{

    MovieData mov1;
    MovieData mov2;

    mov1.Title = "A Minecraft Movie";
    mov1.Director = "Jared Hass";
    mov1.YearReleased = 2025;
    mov1.RunningTime = 101;

    mov2.Title = "Lilo & Stitch";
    mov2.Director = "Dean Fleischer Camp";
    mov2.YearReleased = 2025;
    mov2.RunningTime = 108;

    displayMovieData(mov1);
    cout << endl;
    displayMovieData(mov2);
}
