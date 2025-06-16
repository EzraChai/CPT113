// 1 - Given the following C++ program :
// #include <iostream>
//     using namespace std;
// main()
// {
//     int *p, *q;  // Declare two integer pointers p and q
//     (2) int x, y, z; // Declare three integer variables x, y, and z
//     (3) x = 10, y = 15; // Initialize x to 10, y to 15
//     (4) cout << &p << endl; // Print the address of pointer p
//     (5) cout << &q << endl; // Print the address of pointer q
//     (6) cout << &x << endl; // Print the address of variable x
//     (7) cout << &y << endl; // Print the address of variable y
//     (8) cout << x << endl; // Print the value of x
//     (9) cout << y << endl; // Print the value of y
//     (10) p = &x; // Assign the address of x to pointer p
//     (11) q = &y; // Assign the address of y to pointer q
//     (12) *q = *p; // Assign the value pointed by p to the location pointed by q
//     (13) cout << *p << endl; // Print the value pointed by p
//     (14) cout << *q << endl; // Print the value pointed by q
//     (15) cout << p << " " << q << endl; // Print the addresses stored in pointers p and q
//     (16) *p = 2 + *q; // Assign the value of 2 plus the value pointed by q to the location pointed by p
//     (17) cout << x << endl; // Print the value of x
//     (18) cout << y << endl; // Print the value of y
// }
// a.Explain what each line(1 – 18) do before compiling the code.b.Compile the code and check your answers with the output of the code.

#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    int x, y, z;
    x = 10, y = 15;
    cout << &p << endl;
    cout << &q << endl;
    cout << &x << endl;
    cout << &y << endl;
    cout << x << endl;
    cout << y << endl;
    p = &x;
    q = &y;

    *q = *p;
    cout << *p << endl;
    cout << *q << endl;
    cout << p << " " << q << endl;
    *p = 2 + *q;
    cout << x << endl;
    cout << y << endl;
    return 0;
}