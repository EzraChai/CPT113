#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void insert(Node **head, int v)
{
    Node *newNode = new Node;
    newNode->value = v;
    newNode->next = nullptr;

    if (*head == nullptr)
    {
        *head = newNode;
        return;
    }

    Node *currentPtr = *head;
    Node *prevPtr = nullptr;

    while (currentPtr != nullptr && currentPtr->value < v)
    {
        prevPtr = currentPtr;
        currentPtr = currentPtr->next;
    }
    if (prevPtr == nullptr)
    {
        newNode->next = currentPtr;
        *head = newNode;
    }
    else
    {
        prevPtr->next = newNode;
        newNode->next = currentPtr;
    }
}

void printList(Node *ptr)
{
    while (ptr != nullptr)
    {
        cout << ptr->value << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    struct Node *p = NULL, *q = NULL;
    insert(&p, 3);
    insert(&p, 2);
    insert(&p, 1);
    cout << "First Linked List:" << endl;
    printList(p); // print the list
    insert(&q, 8);
    insert(&q, 7);
    insert(&q, 6);
    insert(&q, 5);
    insert(&q, 4);
    cout << "Second Linked List:" << endl;
    printList(q); // print the list
    // merge(p, &q);
    cout << "Modified First Linked List:" << endl;
    printList(p); // print the list
    cout << "Modified Second Linked List:" << endl;
    printList(q); // print the list
    return 0;
}