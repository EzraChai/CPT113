template <class T>
class LinkedList
{
private:
    struct ListNode
    {
        T value;
        struct ListNode listNode;
    };
    ListNode *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    ~LinkedList()
    {
        ListNode *currentNode = head;
        while (currentNode != nullptr)
        {
            ListNode *nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
    }

    void appendNode(T value);
    void displayList();
};