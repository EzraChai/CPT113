/*
There is a class Person, storing information available for a person which includes their full name,
their state, and their entry qualification level (to university). There is also a class Student which is
publicly inherited from class Person, which consists of Student ID, and is composed of the class
Course. Each student is allowed to register up to 5 courses only.
All method definitions must be non-inlined function.
You are also given the following brief description to some methods.


Student members:
printCourse(): will check if the student has courses in their list and if it is not empty, display the
details of the student’s course.
addCourse(string, string, int): accept course name, course code and unit to be added into the
student’s course list.
addResult(): will check if the course code is available in the student list, add student grade, then
update grade point value (pointVal variable).
searchCourse(string): will accept course code and search if the code is available in the list of
course belonging to a student. Return 1 if the course code is found.
numCourse(): will return the number of courses that a student currently has.
printFullReport(): print out the details of the student from person details, student and course
list
calcGPA(): will calculate the GPA of the courses in the list.


Course members:
setCourse(string,string,int): accept 3 values for course name, course code and unit of that
course.
isEmpty(): checking if any course has been added into the student’s course. Will return 1 if there
is no course and will return 0 if there is already course assigned to a student.
mapGrade2Point(): map the grade assigned to a course to their respective grade point value for
example grade A will obtained 4.00 point value, grade A- will receive 3.67 point value.


Show how should the composition of class Course be declared under the Student class. Refer the
UML diagram given.
Write a method called isEmpty() that belongs to the Course class. If any additional methods are
required (apart from the ones declared in the UML), their definitions need to be written as well.
Write a method called addCourse() that belongs to Student class. If any additional methods are
required (apart from the ones declared in the UML), their definitions need to be written as well.
 */

#include <iostream>
#include "Student.h"

int main()
{

    Student st1("Ezra", "Johor", 1, 232010);
    return 0;
}