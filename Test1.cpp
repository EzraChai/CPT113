#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

int main()
{
    Node n2 = {3, nullptr};
    Node n1 = {2, &n2};
    Node head = {1, &n1};

    Node *n = &head;
    while (n)
    {
        cout << n->val << " -> ";
        n = n->next;
    }
    cout << "NULL";

    return 0;
}
