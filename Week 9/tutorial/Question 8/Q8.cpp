/*
Design your own linked list class to hold a list of integers. The class should have member functions for appending,
inserting, deleting and print nodes, as well as constructor and destructor. In the main, write a program to showcase
all functionalities of your linked list class.
*/
#include <iostream>

class List
{
private:
    struct Node
    {
        int value;
        Node *next;
    };

    Node *head;

public:
    List()
    {
        head = nullptr;
    }
    ~List()
    {
        delete head;
    }

    void appendNode(int val)
    {
        Node *currentNode = nullptr;
        Node *newNode = new Node;
        newNode->value = val;
        newNode->next = nullptr;

        if (!head)
        {
            head = newNode;
        }
        else
        {
            currentNode = head;
            while (currentNode->next)
            {
                currentNode = currentNode->next;
            }
            currentNode->next = newNode;
        }
    }
    void insertNode(int value)
    {
        Node *currentNode = nullptr;
        Node *previousNode = nullptr;

        Node *newNode = new Node;
        newNode->value = value;
        newNode->next = nullptr;
        if (!head)
        {
            head = newNode;
            newNode->next = nullptr;
        }
        else
        {
            currentNode = head;
            while (currentNode != nullptr && currentNode->value < value)
            {
                previousNode = currentNode;
                currentNode = currentNode->next;
            }

            if (previousNode == nullptr)
            {
                head = newNode;
                newNode->next = currentNode;
            }
            else
            {
                previousNode->next = newNode;
                newNode->next = currentNode;
            }
        }
    }
    void deleteNode(int);
    void displayList() const
    {
        if (!head)
        {
            return;
        }
        else
        {
            Node *currentNode = head;
            while (currentNode)
            {
                std::cout << currentNode->value << " ";
                currentNode = currentNode->next;
            }
            std::cout << std::endl;
        }
    }
};

int main()
{
    List list;
    list.appendNode(2);
    list.appendNode(4);
    list.insertNode(3);
    list.insertNode(5);
    list.insertNode(6);
    list.insertNode(1);
    list.displayList();

    return 0;
}