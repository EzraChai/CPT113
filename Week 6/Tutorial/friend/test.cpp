#include <iostream>

class A
{
private:
    int private_variable;

public:
    A() : private_variable(10) {}

    friend class B;
};

class B
{
private:
    int private_variables2;

public:
    void display(const A &obj)
    {
        std::cout << obj.private_variable;
    }
};

int main()
{
    A a;
    B b;
    b.display(a);
}