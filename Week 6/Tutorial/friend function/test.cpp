#include <iostream>

class A
{
private:
    int private_variable;

public:
    A() : private_variable(10)
    {
    }
    A(const A &obj)
    {
        private_variable = obj.private_variable;
    }
    ~A() {}

    friend void printFriend(const A &obj);
};

void printFriend(const A &obj)
{
    std::cout << obj.private_variable << std::endl;
}

int main()
{
    A a;
    A aa(a);
    printFriend(aa);
    return 0;
}