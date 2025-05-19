#include <iostream>

class Number
{
public:
    int n;

    Number(int set_n)
    {
        n = set_n;
    }

    Number operator+(const Number &numA)
    {
        return Number(this->n + numA.n);
    }
    Number operator*(const Number &numA)
    {
        return Number(this->n * numA.n);
    }
};

int main()
{

    Number a(1);
    Number b(2);

    Number c = a * b;

    std::cout << c.n << std::endl;

    return 0;
}