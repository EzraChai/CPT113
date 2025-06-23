#include <iostream>
#include "Queue.h"
#include "Queue.cpp"

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();

    int num;
    q.dequeue(num);
    q.dequeue(num);

    q.display();

    return 0;
}