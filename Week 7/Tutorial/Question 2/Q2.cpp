/* This program demonstrates how assignment operators work with/without dynamic array
Instructions:
1. Uncomment Method 1, then compile and run the program. Observe the output and relate
it with the code. Discuss it.
2. Comment out Method 1. Then uncomment Method 2.
3. Compile and run the program. Observe the output and relate it with the code. Discuss
it.
*/
#include <iostream>
using namespace std;
class cwork
{
private:
    int matric;
    int *p;

public:
    void createDynamicArray(int size)
    {
        p = new int[size];
    }
    void setData(int m, int t1, int t2)
    {
        matric = m;
        p[0] = t1;
        p[1] = t2;
    }
    cwork()
    {
        matric = 0;
        p = NULL;
    }
    ~cwork() {}
    // Method 1
    //  overloading of assignment operator
    // void operator=(const cwork &cw)
    // {
    //     matric = cw.matric;
    //     p = cw.p;
    // }
    // Method 2
    const cwork operator=(const cwork &rightObject)
    {
        if (this != &rightObject) // avoid self-assignment
        {
            delete[] p;
            matric = rightObject.matric;
            p = new int[2];
            for (int i = 0; i < 2; i++)
                p[i] = rightObject.p[i];
        }
        // return the object assigned
        return *this;
    }

    void display()
    {
        cout << "\t" << matric << ": ";
        cout << "\t" << "Test 1 & Test 2:" << p[0] << "\t " << p[1] << endl;
    }
    void del()
    {
        delete[] p;
    }
};
int main()
{
    cwork student1, student2;
    student1.createDynamicArray(2);
    student1.setData(27913, 75, 80);
    cout << "Display data in object student1: \n";
    student1.display();
    // copy data from object student1 into object student2
    student2 = student1;
    student1.del(); // object student1 delete dynamic array
    cout << "Display data in object student2: \n";
    student2.display();
}