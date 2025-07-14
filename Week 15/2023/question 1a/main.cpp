#include <iostream>
using namespace std;

class myClass
{
private:
    string name;
    int *value;

public:
    myClass(string n, int *p);
    myClass(const myClass &mc);
};

myClass::myClass(string n, int *p) : name(n), value(p) {}

myClass::myClass(const myClass &mc)
{
    name = mc.name;
    value = new int(*(mc.value));
}

int main()
{
    int num = 2;
    int *p = &num;
    myClass mc("Hi", p);
    myClass mc2(mc);
    return 0;
}