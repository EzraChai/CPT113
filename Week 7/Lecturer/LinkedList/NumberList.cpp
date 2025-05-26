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

    ~NumberList()
    {
        ListNode *currentNode = head;
        while (currentNode != nullptr)
        {
            ListNode *nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
    }

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
        while (currentNode != nullptr)
        {
            std::cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        std::cout << std::endl;
    }

    void insertionOrdered(int num)
    {
        ListNode *newNode;
        ListNode *currentNode;
        ListNode *previousNode = nullptr;
        newNode = new ListNode;
        newNode->value = num;

        if (!head)
        {
            head = newNode;
            newNode->next = nullptr;
        }
        else
        {
            currentNode = head;
            previousNode = nullptr;
            while (currentNode != nullptr && currentNode->value < num)
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

    void deletion(int num)
    {
        ListNode *currentNode;
        ListNode *previousNode;

        if (!head)
        {
            return;
        }

        if (head->value == num)
        {
            currentNode = head->next;
            delete head;
            head = currentNode;
        }
        else
        {
            currentNode = head;
            while (currentNode != nullptr && currentNode->value != num)
            {
                previousNode = currentNode;
                currentNode = currentNode->next;
            }
            if (currentNode)
            {
                previousNode->next = currentNode->next;
                delete currentNode;
            }
        }
    }
};

int main()
{

    NumberList nl;
    nl.append(2);
    nl.append(4);
    nl.insertionOrdered(3);
    nl.append(5);
    nl.append(6);
    nl.print();

    nl.deletion(5);
    // nl.remove();
    nl.print();

    return 0;
}