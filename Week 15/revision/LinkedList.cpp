#include <iostream>

class LinkedList
{
    struct Node
    {
        int value;
        Node *next;
    };

    Node *head;

public:
    LinkedList();
    ~LinkedList();
    void printNode();
    void appendNode(int v);
    void insertNode(int v);
    void deleteNode(int v);
    void remove();
};

LinkedList::LinkedList()
{
    head = nullptr;
}

LinkedList::~LinkedList()
{
    Node *currentPtr = head;
    Node *nextPtr = nullptr;
    while (currentPtr != nullptr)
    {
        nextPtr = currentPtr->next;
        delete currentPtr;
        currentPtr = nextPtr;
    }
}

void LinkedList::deleteNode(int v)
{
    if (!head)
    {
        return;
    }
    Node *currentPtr = head;

    if (head->value == v)
    {
        currentPtr = head->next;
        delete head;
        head = currentPtr;
    }

    Node *prevPtr = nullptr;

    while (currentPtr != nullptr && currentPtr->value != v)
    {
        prevPtr = currentPtr;
        currentPtr = currentPtr->next;
    }
    if (currentPtr)
    {
        prevPtr->next = currentPtr->next;
        delete currentPtr;
    }
}

void LinkedList::appendNode(int v)
{
    Node *newNode = new Node;
    newNode->next = nullptr;
    newNode->value = v;

    if (!head)
    {
        head = newNode;
        return;
    }

    Node *currentPtr = head;
    while (currentPtr->next != nullptr)
    {
        currentPtr = currentPtr->next;
    }

    currentPtr->next = newNode;
}

void LinkedList::remove()
{
    if (!head)
    {
        return;
    }

    Node *currentPtr = head;
    while (currentPtr->next->next == nullptr)
    {
        currentPtr = currentPtr->next;
    }

    delete currentPtr->next;
    currentPtr->next = nullptr;
}

void LinkedList::printNode()
{
    if (!head)
    {
        return;
    }
    Node *currentNode = head;

    while (currentNode->next)
    {
        std::cout << currentNode->value << std::endl;
        currentNode = currentNode->next;
    }
}

void LinkedList::insertNode(int v)
{
    Node *newNode = new Node;
    newNode->value = v;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
    }

    Node *currentPtr = head;
    Node *prevPtr = nullptr;
    while (currentPtr != nullptr && currentPtr->value < v)
    {
        prevPtr = currentPtr;
        currentPtr = currentPtr->next;
    }

    if (prevPtr == nullptr)
    {
        newNode->next = currentPtr;
        head = newNode;
    }
    else
    {
        prevPtr->next = newNode;
        newNode->next = currentPtr;
    }

    // Node *newNode = new Node;
    // newNode->next = nullptr;
    // newNode->value = v;

    // if (!head)
    // {
    //     head = newNode;
    //     return;
    // }

    // Node *currentPtr = head;
    // Node *prevPtr = nullptr;
    // while (currentPtr != nullptr && currentPtr->value < v)
    // {
    //     prevPtr = currentPtr;
    //     currentPtr = currentPtr->next;
    // }

    // if (prevPtr == nullptr)
    // {
    //     head = newNode;
    //     newNode->next = currentPtr;
    // }
    // else
    // {
    //     prevPtr->next = newNode;
    //     newNode->next = currentPtr;
    // }
}
