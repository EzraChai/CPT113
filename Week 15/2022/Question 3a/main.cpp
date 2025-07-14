/*
int *secret;
secret = new int[10];
secret[0] = 10;
for (int j = 1; j < 10; j++)
secret[j] = secret[j -1] + 5;
for(int j = 0; j < 10; j++)
cout << secret[j] << " ";
cout << endl;
*/

/*
10 15 20 25 30 35 40 45 50 55
*/
#include <iostream>
using namespace std;

int main()
{
    int *secret;
    secret = new int[10];
    secret[0] = 10;
    for (int j = 1; j < 10; j++)
        secret[j] = secret[j - 1] + 5;
    for (int j = 0; j < 10; j++)
        cout << secret[j] << " ";
    cout << endl;
}