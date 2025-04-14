#include "Person.h"
#include "Employee.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<Person *> people;

    Person p("Ezra");
    // std::cout << p.getName() << std::endl;

    Employee e1("Ezra", "Publicity");
    // e1.printInfo();

    people.push_back(&p);
    people.push_back(&e1);

    for (auto person : people)
    {
        person->printInfo();
    }

    return 0;
}