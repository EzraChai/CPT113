/*
The data stored in the stack is the URL string. Analyze the class
requirements and then write a dynamic stack using class StackURL
with suitable constructor and destructor and required member function
declaration only.
*/
#include <iostream>
using namespace std;

class StackURL
{
private:
    struct URLNode
    {
        string url;
        URLNode *next;
    };

    URLNode *top;

public:
    StackURL();
    ~StackURL();
    void push(string url);
    void pop(string &url);
    bool isEmpty();
};

void StackURL::pop(string &url)
{
    URLNode *temp = top;
    url = temp->url;
    top = top->next;
    delete temp;
}