#include "Queue.h"
#include <iostream>

Queue::Queue()
{
    ptrArr = new int[5];
    currentIndex = -1;
}

Queue::~Queue()
{
    delete[] ptrArr;
}

bool Queue::isEmpty()
{
    if (currentIndex == 0)
    {
        return true;
    }
    return false;
}

bool Queue::isFull()
{
    if (currentIndex == 5)
    {
        return true;
    }

    return false;
}

void Queue::enqueue(int num)
{
    if (isFull())
    {
        throw "Queue is full.";
    }
    currentIndex++;
    ptrArr[currentIndex] = num;
}

void Queue::dequeue(int &num)
{
    if (isEmpty())
    {
        throw "Queue is empty.";
    }
    num = ptrArr[0];
    for (int i = 1; i <= currentIndex; i++)
    {
        ptrArr[i - 1] = ptrArr[i];
    }
    ptrArr[currentIndex] = 0;
    currentIndex--;
}

void Queue::display()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << ptrArr[i] << " ";
    }
    std::cout << std::endl;
}