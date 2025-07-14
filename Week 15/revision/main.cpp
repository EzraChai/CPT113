#include <iostream>
#include "Stack.cpp"
#include "LinkedList.cpp"

using namespace std;

class A
{
    int v;

public:
    A() : v(0) {}
    A(int value) : v(value) {}
    void print()
    {
        cout << v << endl;
    }
};

class B : public A
{
public:
    B() : A() {}
    B(int value) : A(value) {}
};

class C
{
private:
    B b;
    int value;

public:
    C() : b(0) {}
    C(int value) : b(value) {}
    void print()
    {
        b.print();
    }
    friend void printValue(const C &);
};

void printValue(const C &c)
{
    cout << c.value << endl;
}

class Diet
{
    int calories;

public:
    Diet() : calories(0) {}
    Diet(int c) : calories(c) {}
    bool operator==(const Diet &d) const
    {
        return this->calories == d.calories;
    }

    Diet operator+(const Diet &d)
    {
        return Diet(this->calories + d.calories);
    }

    void print()
    {
        cout << "Total Calories: " << calories << endl;
    }
};

class orderList
{
private:
    struct Order
    {
        int val;
        string item;
        Order *next;
    };
    Order *head;

public:
    orderList() : head(nullptr) {}
    ~orderList()
    {
        Order *currentPtr = head;
        while (currentPtr != nullptr)
        {
            Order *tempPtr = currentPtr;
            currentPtr = currentPtr->next;
            delete tempPtr;
        }
    }
    void addOrder(int, string);
    void printOrders()
    {
        Order *currentPtr = head;
        while (currentPtr != nullptr)
        {
            cout << "Value: " << currentPtr->val << ", Item: " << currentPtr->item << endl;
            currentPtr = currentPtr->next;
        }
    }
};

int c(int n, int r)
{

    if (r == 0 || n == r)
    {
        return 1;
    }
    if (r == 1)
    {
        return n;
    }

    return c(n - 1, r - 1) + c(n - 1, r);
}

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return gcd(y, x % y);
}

bool isPalindrome(string word, int left, int right)
{
    if (left >= right)
    {
        return true;
    }

    if (word[left] != word[right])
    {
        return false;
    }
    else
    {
        return isPalindrome(word, ++left, --right);
    }
}

int wordCount(string word, char c, int current = 0)
{
    if (current > word.length() - 1)
    {
        return 0;
    }
    if (word[current] == c)
    {
        return 1 + wordCount(word, c, ++current);
    }
    else
    {
        return 0 + wordCount(word, c, ++current);
    }
}

int main()
{

    int firstvalue = 10, secondvalue = 20, thirdvalue = 30, fourthvalue = 40;
    int *p1, *p2, *p3, *p4;
    p1 = &firstvalue;
    p2 = &secondvalue;
    p3 = &thirdvalue;
    p4 = &fourthvalue;
    *p1 = 50;
    *p2 = *p1;
    p1 = p2;
    *p1 = 60;
    *p3 = 70;
    cout << "firstvalue is " << firstvalue << "\n";   // 50
    cout << "secondvalue is " << secondvalue << "\n"; // 60
    cout << "thirdvalue is " << thirdvalue << "\n";   // 70
    cout << "value of * p2 is " << *p2 << "\n";       // 60
    cout << "value of * p4 is " << *p4 << "\n";       // 40

    string word = "madam";
    cout << "Word Count: " << wordCount(word, 'm') << endl;
    cout << "Palindrome: " << isPalindrome(word, 0, word.length() - 1) << endl;
    cout << c(5, 3) << endl;
    const int ROW = 4;
    const int COLUMN = 5;
    int **arr = new int *[COLUMN];

    for (int i = 0; i < COLUMN; i++)
    {
        arr[i] = new int[ROW];
    }

    /*
    Produce the content for each element of the array by adding the
    row number and column number. For example, element (1,2) = 1+2
    = 3.
    */
    for (int i = 0; i < COLUMN; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            arr[i][j] = i + j;
        }
    }

    for (int i = 0; i < COLUMN; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < COLUMN; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    B b(2);
    b.print();

    C c(3);
    c.print();
    // C c[200];

    printValue(c);

    Diet d1(2);
    Diet d2(3);
    Diet d3 = d1 + d2;
    d3.print();
    Diet d4(2);
    cout << (d4 == d1) << endl;

    cout << gcd(4, 8) << endl;
    LinkedList l1;
    l1.insertNode(1);
    l1.insertNode(2);
    l1.insertNode(5);
    l1.insertNode(4);
    l1.printNode();
    l1.deleteNode(2);
    l1.printNode();

    Stack s1;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    int v;
    s1.pop(v);
    cout << v << endl;
    s1.pop(v);
    cout << v << endl;

    int number1 = 88, number2 = 22;

    int *pNumber1 = &number1;
    *pNumber1 = 99;
    cout << *pNumber1 << endl; // (i) 99
    cout << &number1 << endl;  // (ii) address of number1
    cout << pNumber1 << endl;  // (iii) address of number1
    cout << &pNumber1 << endl; // (iv) address of pNumber1

    pNumber1 = &number2; // pNumber1 now points to number2

    // reference variable
    // refNumber1 is a reference to number1
    int &refNumber1 = number1;
    refNumber1 = 11;
    cout << refNumber1 << endl;  // (v) 11
    cout << &number1 << endl;    // (vi) address of number1
    cout << &refNumber1 << endl; // (vii) address of number1
    // refNumber1 = &number2;    // (viii)
    refNumber1 = number2;
    number2++;
    cout << refNumber1 << endl; // (ix) 22
    cout << number1 << endl;    // (x) 22
    cout << number2 << endl;    // (xi) 23

    orderList orders;
    orders.addOrder(1, "Apple");
    orders.addOrder(3, "Banana");
    orders.addOrder(2, "Cherry");
    orders.addOrder(5, "Date");
    orders.addOrder(4, "Elderberry");
    orders.printOrders();
}

template <class T>
class Rectangle
{
private:
    T width, length;

public:
    void setData(T w, T l)
    {
        width = w;
        length = l;
    }
    T getWidth();

    T getLength()
    {
        return length;
    }
    T getArea()
    {
        return width * length;
    }
};

template <class T>
T Rectangle<T>::getWidth()
{
    return width;
}

void orderList::addOrder(int v, string i)
{
    Order *newOrder = new Order;
    newOrder->val = v;
    newOrder->item = i;
    newOrder->next = nullptr;

    if (!head)
    {
        head = newOrder;
        return;
    }
    Order *currentPtr = head;
    Order *prevPtr = nullptr;
    while (currentPtr != nullptr && currentPtr->val < v)
    {
        prevPtr = currentPtr;
        currentPtr = currentPtr->next;
    }
    if (prevPtr == nullptr)
    {
        head = newOrder;
        newOrder->next = currentPtr;
    }
    else
    {
        prevPtr->next = newOrder;
        newOrder->next = currentPtr;
    }
}
