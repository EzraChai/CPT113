class DoublyLinkedList
{
private:
    struct ListNode
    {
        int value;
        struct ListNode *next;
        struct ListNode *previous;
    };

    ListNode *head;
    ListNode *tail;

public:
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void append(int value)
    {
        ListNode *nodePtr = nullptr;
        ListNode *newNode = new ListNode;
        newNode->value = value;

        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            nodePtr = head;
            while (nodePtr->next != nullptr)
            {
                nodePtr = nodePtr->next;
            }

            nodePtr = tail;
            nodePtr->next = newNode;
            tail = newNode;
            newNode->previous = nodePtr;
        }
    }

    void insertNode(int value)
    {
        ListNode *newNode;
        newNode->value = value;
        ListNode *nodePtr;

        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            nodePtr = head;
            while (nodePtr != nullptr && nodePtr->value < value)
            {
                nodePtr = nodePtr->next;
            }

            if (nodePtr == head)
            {
                head = newNode;
                newNode->next = nodePtr;
                nodePtr->previous = newNode;
            }
            else if (nodePtr == nullptr)
            {
                newNode->previous = tail;
                tail->next = newNode;
                tail = newNode;
            }
            else
            {
                // newNode->next = nodePtr->next;
                // newNode->previous = nodePtr;

                nodePtr->previous->next = newNode;
                newNode->previous = nodePtr->previous;
                nodePtr->previous = newNode;
                newNode->next = nodePtr;
            }
        }
    }
};