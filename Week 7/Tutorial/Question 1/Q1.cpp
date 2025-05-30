#include <iostream>
using namespace std;
class ShalloC
{
private:
    int *x;

public:
    ShalloC(int m)
    {
        x = new int;
        *x = m;
    }
    // CopyConstructor
    ShalloC(const ShalloC &obj)
    {
        x = new int;
        *x = obj.GetX();
    }
    int GetX() const
    {
        return *x;
    }
    void SetX(int m)
    {
        *x = m;
    }
    void PrintX()
    {
        cout << "Int X=" << *x << endl;
    }
    ~ShalloC()
    {
        delete x;
    }
};
int main()
{
    ShalloC ob1(10);
    ShalloC ob2 = ob1;
    ob1.PrintX();
    ob2.PrintX();
    ob1.SetX(12);
    ob1.PrintX();
    ob2.PrintX();
}