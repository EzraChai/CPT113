#ifndef STACKTYPE_H
#define STACKTYPE_H

template <class T>
class stackType
{
private:
    int maxTypeSize;
    int stackTop;
    T *list;
    void copyStack(const stackType<T> &);

public:
    stackType<T> &operator=(const stackType<T> &);
    void initializeStack();
    bool isEmptyStack() const;
    bool isFullStack() const;
    T top() const;
    void push(const T &);
    void pop();
    stackType(int = 50);
    stackType(const stackType<T> &);
    ~stackType();
};

template <class T>
stackType<T> &stackType<T>::operator=(const stackType<T> &otherStack)
{
    for (int i = 0; i < maxTypeSize; i++)
    {
        list[i] = otherStack.list[i];
    }
    maxTypeSize = otherStack.maxTypeSize;
    stackTop = otherStack.stackTop;
    return this;
}

template <class T>
stackType<T>::stackType(int num)
{
    initializeStack();

    list = new int[num];
    maxTypeSize = num;
}

template <class T>
void stackType<T>::initializeStack()
{
    maxTypeSize = 0;
    stackTop = -1;
    list = nullptr;
}

template <class T>
stackType<T>::stackType(const stackType<T> &otherStack)
{
    copyStack(otherStack);
}

template <class T>
stackType<T>::~stackType()
{
    delete[] list;
}

template <class T>
bool stackType<T>::isEmptyStack() const
{
    if (stackTop == -1)
    {
        return true;
    }
    return false;
}

template <class T>
bool stackType<T>::isFullStack() const
{
    if (stackTop == maxTypeSize - 1)
    {
        return true;
    }
    return false;
}

template <class T>
T stackType<T>::top() const
{
    return list[stackTop];
}

template <class T>
void stackType<T>::push(const T &data)
{
    if (isFullStack())
    {
        throw "Stack is full";
    }
    list[stackTop + 1] = data;
    stackTop++;
}

template <class T>
void stackType<T>::pop()
{
    stackTop--;
}

#endif