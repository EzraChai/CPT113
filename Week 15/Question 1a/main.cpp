#include <iostream>
using namespace std;

class myClass
{
public:
    void setX(int a);
    void printX() const;
    static void printCount();
    static void incrementCount();
    myClass(int);

private:
    int x;
    static int count;
};

int myClass::count = 0;

myClass::myClass(int a)
{
    x = a;
    count++;
}

void myClass::incrementCount()
{
    count++;
}

void myClass::printCount()
{
    cout << count << endl;
}

void myClass::setX(int a)
{
    x = a;
}

void myClass::printX() const
{
    cout << x << endl;
}

int main()
{
    myClass myObject1(5);

    return 0;
}