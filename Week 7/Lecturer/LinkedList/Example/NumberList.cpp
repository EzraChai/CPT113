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

    void print()
    {
        if (!head)
        {
            return;
        }

        ListNode *currentNode = head;
        while (currentNode->next)
        {
            std::cout << currentNode->value << " -> ";
            currentNode = currentNode->next;
        }
        std::cout << currentNode->value << std::endl;
    }
};

int main()
{

    NumberList nl;
    nl.append(2);
    nl.append(3);
    nl.print();

    return 0;
}