
class DynamicStack
{
    struct Node
    {
        int value;
        Node *next;
    };

    Node *top;

public:
    DynamicStack()
    {
        top = nullptr;
    }

    ~DynamicStack();

    void push(int);
    void pop(int &);

    bool isEmpty();
};
DynamicStack::~DynamicStack()
{
    Node *nodePtr = nullptr;
    Node *nextNode = nullptr;
    nodePtr = top;

    while (nodePtr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
}

void DynamicStack::push(int num)
{
    Node *newNode = new Node;
    newNode->value = num;

    if (isEmpty())
    {
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void DynamicStack::pop(int &num)
{
    Node *temp = nullptr;
    if (isEmpty())
    {
        return;
    }
    num = top->value;
    temp = top->next;
    delete top;
    top = temp;
}

bool DynamicStack::isEmpty()
{
    if (top = nullptr)
        return true;
    return false;
}

int main()
{
    int val;
    DynamicStack stack;
    stack.push(2);
    stack.push(3);
    stack.pop(val);
    return 0;
}