/*
    Queue
        First In First Out

    Printing task for a printer
    Sending and receiving packets over a network
    BFS algo
*/

class Queue
{
private:
    int *queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;

public:
    Queue(int);
    Queue(const Queue &);
    void enqueue(int);
    void dequeue(int &);
    bool isEmpty() const;
    bool isFull() const;
    void clear();
};
Queue::Queue(int num)
{
    queueArray = new int[num];
    queueSize = num;
    front = -1;
    rear = -1;
    numItems = 0;
}

Queue::~Queue()
{
    delete[] queueArray;
}

Queue::Queue(const Queue &obj)
{
    queueArray = new int[obj.queueSize];
    queueSize = obj.queueSize;
    rear = obj.rear;
    numItems = obj.numItems;

    for (int i = 0; i < queueSize; i++)
    {
        queueArray[i] = obj.queueArray[i];
    }
}

void Queue::enqueue(int num)
{
    if (isFull())
    {
        return;
    }
    rear = (rear + 1) % queueSize;
    queueArray[rear] = num;
    numItems++;
}

void Queue ::dequeue(int &num)
{
    if (isEmpty())
    {
        return;
    }
    front = (front + 1) % queueSize;
    num = queueArray[front];
    numItems--;
}

bool Queue::isEmpty() const
{
    if (numItems == 0)
    {
        return true;
    }
    return false;
}

void Queue::clear()
{
    front = queueSize - 1;
    rear = queueSize - 1;
    numItems = 0;
}

bool Queue::isFull() const
{
    if (numItems < queueSize)
    {
        return false;
    }
    return true;
}