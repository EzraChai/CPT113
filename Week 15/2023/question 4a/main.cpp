#include <iostream>

int nTermR(int a, int r, int n)
{
    if (n == 1)
    {
        return a;
    }
    return r * nTermR(a, r, n - 1);
}

int main()
{
    std::cout << nTermR(3, 2, 5) << std::endl;

    return 0;
}