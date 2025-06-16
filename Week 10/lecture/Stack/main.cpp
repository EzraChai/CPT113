/*
Stack - Last in first out
can be implemented by array or linked list
Stack ADT (Abstract Data Type)

useful for
- executing a program
- polynomials
*/

/**
 * Static Stack
 */
class Stack
{
    int *stackArray;
    int stackSize;
    int top;

public:
    Stack(int);
    Stack(const Stack &);
    ~Stack();
    void push(int);
    void pop(int &);
    bool isFull() const;
    bool isEmpty() const;
};

Stack::Stack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

Stack::~Stack()
{
    delete[] stackArray;
}

Stack::Stack(const Stack &obj)
{
    if (obj.stackSize > 0)
    {
        stackArray = new int[obj.stackSize];
    }
    else
    {
        stackArray = nullptr;
    }
    stackSize = obj.stackSize;

    for (int i = 0; i < stackSize; i++)
    {
        stackArray[i] = obj.stackArray[i];
    }
    top = obj.top;
}

void Stack::push(int num)
{
    if (isFull())
    {
        return;
    }

    top++;
    stackArray[top] = num;
}

void Stack::pop(int &num)
{
    if (isEmpty())
    {
        return;
    }

    num = stackArray[top];
    top--;
}

bool Stack::isFull() const
{
    bool status;

    if (top == stackSize - 1)
        status = true;
    else
        status = false;

    return status;
}

bool Stack::isEmpty() const
{
    bool status;
    if (top == -1)
        status = true;
    else
        status = false;

    return status;
}

int main()
{
    int catchVar;
    Stack stack(5);
    stack.push(5);
    stack.push(10);
    stack.push(15);
    stack.push(20);
    stack.push(25);
    stack.pop(catchVar);
    stack.pop(catchVar);
    stack.pop(catchVar);
    stack.pop(catchVar);
    stack.pop(catchVar);

    return 0;
}