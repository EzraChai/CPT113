#include <iostream>
using namespace std;

template <class T>
class List
{
private:
    struct Node
    {
        T data;
        struct Node *next;
    };
    Node *head;

public:
    void printList();
};

template <class T>
void List<T>::printList()
{
    if (!head)
    {
        cout << "The list is empty." << endl;
    }

    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}