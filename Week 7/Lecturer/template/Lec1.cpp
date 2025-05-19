#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
class grade
{
private:
    T score;

public:
    grade(T);
    void setGrade(T);
    T getGrade();
};

template <class T>
T square(T number)
{
    return number * number;
}

template <class T>
void swapVars(T &var1, T &var2)
{
    T temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

template <class T1, class T2>
int largestSize(T1 &var1, T2 &var2)
{
    if (sizeof(var1) > sizeof(var2))
    {
        return sizeof(var1);
    }
    return sizeof(var2);
}

int main()
{
    int userInt;
    double userDouble;

    cout << setprecision(5);
    cout << "Enter an integer and a floating point value: ";
    cin >> userInt >> userDouble;
    cout << "Here are their squares: " << square(userInt) << " " << square(userDouble) << endl;

    int swapNum = 12;
    swapVars(userInt, swapNum);

    cout << swapNum << endl;
    cout << largestSize(swapNum, userDouble);
    return 0;
}