// A class template for holding a circular linked list.
#ifndef CIRCLIST_H
#define CIRCLIST_H
#include <iostream> // For cout
using namespace std;
template <class T>
class CircList
{
private:
    // Declare a structure for the list
    struct ListNode
    {
        T value;        // The value in this node
        ListNode *next; // To point to the next node
    };
    ListNode *last; // Pointer for last node in the circular linked list
public:
    // Constructor
    CircList()
    {
        last = nullptr;
    }
    // Destructor
    ~CircList();
    // Linked list operations
    void appendNode(T);
    void deleteNode(T);
    void displayList() const;
};
//**************************************************
// appendNode appends a node containing the value *
// pased into newValue, to the end of the list. *
//**************************************************
template <class T>
void CircList<T>::appendNode(T newValue)
{
    // Incomplete function
}
//**************************************************
// displayList shows the value *
// stored in each node of the linked list *
// pointed to by first. *
//**************************************************
template <class T>
void CircList<T>::displayList() const
{
    ListNode *nodePtr; // To move through the list
    // Position nodePtr at the first of the list.
    nodePtr = last->next;
    // While nodePtr points to a node, traverse
    // the list.
    do
    {
        // Display the value in this node.
        cout << nodePtr->value << endl;
        // Move to the next node.
        nodePtr = nodePtr->next;
    } while (nodePtr != last->next);
}
//*****************************************************
// The deleteNode function searches for a node *
// with searchValue as its value. The node, if found, *
// is deleted from the list and from memory. *
//*****************************************************
template <class T>
void CircList<T>::deleteNode(T searchValue)
{
    // Incomplete code
}
//**************************************************
// Destructor *
// This function deletes every node in the list. *
//**************************************************
template <class T>
CircList<T>::~CircList()
{
    ListNode *nodePtr;  // To traverse the list
    ListNode *nextNode; // To point to the next node
    // Position nodePtr at the first of the list.
    nodePtr = last->next;
    // If there is only one node in the list
    if (nodePtr == last)
        delete nodePtr;
    else
    {
        // While nodePtr is not at the end of the list...
        do
        {
            // Save a pointer to the next node.
            nextNode = nodePtr->next;
            // Delete the current node.
            delete nodePtr;
            // Position nodePtr at the next node.
            nodePtr = nextNode;
        } while (nodePtr != last);
        delete last;
    }
}
#endif