#ifndef QUEUE_H
#define QUEUE_H

class Queue
{
private:
    int *ptrArr;
    int currentIndex;

public:
    Queue();
    ~Queue();
    bool isFull();
    bool isEmpty();
    void enqueue(int);
    void dequeue(int &);
    void display();
};

#endif