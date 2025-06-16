class DynamicQueue
{
private:
    struct Node
    {
        int value;
        Node *next;
    };
    Node *front;
    Node *rear;
    int numItems;

public:
    DynamicQueue();
    ~DynamicQueue();
    bool isEmpty();
    void clear();
    void enqueue(int num);
    void dequeue(int &num);
};

DynamicQueue::DynamicQueue()
{
    front = nullptr;
    rear = nullptr;
    numItems = 0;
}

DynamicQueue::~DynamicQueue()
{
    clear();
}

void DynamicQueue::enqueue(int num)
{
    Node *newNode = new Node;
    newNode->value = num;

    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    numItems++;
}

bool DynamicQueue::isEmpty()
{
    if (numItems == 0)
    {
        return true;
    }
    return false;
}

void DynamicQueue::dequeue(int &num)
{
    Node *temp = nullptr;

    if (isEmpty())
    {
        return;
    }
    num = front->value;
    temp = front;
    front = front->next;
    delete temp;
    numItems--;
}

void DynamicQueue::clear()
{
    int value;
    while (!isEmpty())
    {
        dequeue(value);
    }
}