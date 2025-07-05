#include <iostream>

class Shape
{
private:
    float x;

public:
    Shape()
    {
    }

    Shape(float i)
    {
        x = i;
    }

    float getX()
    {
        return x;
    }

    void setX(float num)
    {
        x = num;
    }
};

const double PI = 3.14159;

class Circle : public Shape
{
    double radius;

public:
    Circle() : Shape() {}
    Circle(float radius) : Shape(radius) {}
    float getArea()
    {
        return PI * getX() * getX();
    }

    float getPerimeter()
    {
        return 2 * PI * getX();
    }
};
class Square : public Shape
{
public:
    // write accessor & mutator
    float getX()
    {
        return Shape::getX();
    }

    float setX(float num)
    {
        Shape::setX(num);
    }
};

struct Player
{
    std::string characterClass;
    int maxHealth;
    std::string ability;
    int maxMana;
};

class CardDecks
{
private:
    struct Card
    {
        int value;
        Card *next;
    };

    Card *headMain;
    Card *headDiscard;

public:
    void add(int);
    int draw();
    void discard(int);
};

void CardDecks::add(int value)
{
    Card *c = new Card;
    c->value = value;
    c->next = nullptr;

    if (!headMain)
    {
        headMain = c;
        return;
    }

    Card *current = headMain;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = c;
}

int CardDecks::draw()
{
    if (!headMain)
    {
        throw "ERROR";
    }

    if (headMain->next == nullptr)
    {
        return headMain->value;
    }

    Card *current = headMain;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    int val = headMain->value;
    delete current;
    return val;
}

void CardDecks::discard(int value)
{
    Card *c = new Card;
    c->value = value;
    c->next = nullptr;

    if (!headDiscard)
    {
        headMain = c;
        return;
    }

    Card *current = headDiscard;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = c;
}

class myClass
{
private:
    std::string name;
    int *value;

public:
    void print()
    {
        std::cout << name << *value << std::endl;
    }
    myClass(std::string n, int v)
    {
        name = n;
        *value = v;
    }

    myClass(const myClass &myC)
    {
        name = myC.name;
        value = new int(*myC.value);
    }
};

int main()
{
    myClass c1("d", 2);
    myClass c2 = c1;
    c2.print();
    int rows = 0, cols = 0;
    std::cin >> rows >> cols;
    Player **ptr;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cin >> ptr[i][j].characterClass;
            std::cin >> ptr[i][j].maxHealth;
            std::cin >> ptr[i][j].ability;
            std::cin >> ptr[i][j].maxMana;
        }
    }

    return 0;
}