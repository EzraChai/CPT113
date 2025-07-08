#include <iostream>
using namespace std;

class Instructor
{
private:
    string lastName;
    string firstName;
    string officeNumber;

public:
    Instructor();
    Instructor(string, string, string);
    void set(string, string, string);
    void print();
};

void Instructor::print()
{
    cout << firstName << " " << lastName << endl;
    cout << "Office Number: " << officeNumber << endl;
}

Instructor::Instructor() : lastName(""), firstName(""), officeNumber("") {}

Instructor::Instructor(string ln, string fn, string on) : lastName(ln), firstName(fn), officeNumber(on) {}

class TextBook
{
private:
    string title;
    string author;
    string publisher;

public:
    TextBook();
    TextBook(string, string, string);
    void set(string, string, string);
    void print() const;
};

void TextBook::print() const
{
    std::cout << "Title: " << title << endl;
    std::cout << "Author: " << author << endl;
    std::cout << "Publisher: " << publisher << endl;
}

class Course
{
private:
    string courseName;
    Instructor instructor;
    TextBook textbook;

public:
    Course(string course, string instrLastName, string instrFirstName, string istrOffice, string textTitle, string author, string publisher);
    void print();
};

Course::Course(string course, string instrLastName, string instrFirstName, string istrOffice, string textTitle, string author, string publisher)
    : courseName(course), instructor(instrLastName, instrFirstName, istrOffice), textbook(textTitle, author, publisher)
{
}

void Course::print()
{
    cout << "Course Name: " << courseName << endl;
    instructor.print();
    textbook.print();
}
