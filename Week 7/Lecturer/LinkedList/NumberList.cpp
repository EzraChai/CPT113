#include <iostream>

class NumberList
{
private:
    struct ListNode
    {
        double value;
        struct ListNode *next;
    };

    ListNode *head;

public:
    NumberList()
    {
        head = nullptr;
    }

    ~NumberList() {}

    void append(int value)
    {
        ListNode *newNode;
        newNode = new ListNode;
        newNode->value = value;
        newNode->next = nullptr;

        if (!head)
        {
            head = newNode;
        }
        else
        {
            ListNode *currentNode = head;
            while (currentNode->next)
            {
                currentNode = currentNode->next;
            }

            currentNode->next = newNode;
        }
    }

    void insertion(int value)
    {
        ListNode *newNode;
        ListNode *currentNode;
        ListNode *previousNode = nullptr;

        newNode = new ListNode;
        newNode->value = value;

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

    void remove()
    {
        if (!head)
        {
            return;
        }
        ListNode *currentNode = head;
        while (currentNode->next->next)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = nullptr;
    }

    void print()
    {
        if (!head)
        {
            return;
        }

        ListNode *currentNode = head;
        while (currentNode)
        {
            std::cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
    }
};

int main()
{

    NumberList nl;
    nl.append(2);
    nl.append(3);
    nl.append(4);
    nl.remove();
    nl.print();

    return 0;
}