#include <iostream>

void towerOfHanoi(int n, int A, int B, int C)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, A, C, B);
        std::cout << "From " << A << " to " << C << std::endl;
        towerOfHanoi(n - 1, B, A, C);
    }
}

int Afunc(int m, int n)
{
    if (m == 0)
        return (2 * n);
    else if (m >= 1 && n == 0)
        return 0;
    else if (m >= 1 && n == 1)
        return 2;
    else
        return Afunc(m - 1, Afunc(m, n - 1));
}

int main()
{
    int A = 1;
    int B = 2;
    int C = 3;
    towerOfHanoi(3, A, B, C);
    std::cout << Afunc(4, 3);
    return 0;
}

/*


Step 1: towerOfHanoi(3, 1, 2, 3)
    Call towerOfHanoi(2, 1, 3, 2) ⬅️ Move 2 disks from 1 to 2 using 3
    Print From 1 to 3
    Call towerOfHanoi(2, 2, 1, 3) ⬅️ Move 2 disks from 2 to 3 using 1

Step 2: towerOfHanoi(2, 1, 3, 2)
    Call towerOfHanoi(1, 1, 2, 3) ⬅️ Move 1 disk from 1 to 3 using 2
    Print From 1 to 2

Step 3: towerOfHanoi(1, 1, 2, 3)
    Call towerOfHanoi(0, 1, 3, 2) ⬅️ No action
    Print From 1 to 3
    Call towerOfHanoi(0, 2, 1, 3) ⬅️ No action

✔️ Output: From 1 to 3
Back to Step 2:

✔️ Output: From 1 to 2
Step 4: towerOfHanoi(1, 3, 1, 2)
    Call towerOfHanoi(0, 3, 2, 1) ⬅️ No action
    Print From 3 to 2
    Call towerOfHanoi(0, 1, 3, 2) ⬅️ No action

✔️ Output: From 3 to 2
Back to Step 1:

✔️ Output: From 1 to 3
Step 5: towerOfHanoi(2, 2, 1, 3)
    Call towerOfHanoi(1, 2, 3, 1) ⬅️ Move 1 disk from 2 to 1
    Print From 2 to 3
    Call towerOfHanoi(1, 1, 2, 3) ⬅️ Move 1 disk from 1 to 3

Step 6: towerOfHanoi(1, 2, 3, 1)
    Call towerOfHanoi(0, 2, 1, 3) ⬅️ No action
    Print From 2 to 1
    Call towerOfHanoi(0, 3, 2, 1) ⬅️ No action

✔️ Output: From 2 to 1

✔️ Output: From 2 to 3
Step 7: towerOfHanoi(1, 1, 2, 3)
    Call towerOfHanoi(0, 1, 3, 2) ⬅️ No action
    Print From 1 to 3
    Call towerOfHanoi(0, 2, 1, 3) ⬅️ No action

✔️ Output: From 1 to 3

*/