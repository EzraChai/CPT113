class Stack
{
    struct Node
    {
        int value;
        Node *next;
    };

    Node *top;

public:
    Stack();
    ~Stack();

    void push(int);
    void pop(int &);
};

Stack::Stack()
{
    top = nullptr;
}

Stack::~Stack()
{
    int v;
    while (top)
    {
        pop(v);
    }
}

void Stack::push(int v)
{
    Node *newNode = new Node;
    newNode->value = v;
    newNode->next = top;
    top = newNode;
}

void Stack::pop(int &v)
{
    v = top->value;
    Node *temp = top;
    top = top->next;
    delete temp;
}