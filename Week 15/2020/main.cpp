#include <iostream>

class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double);
    void setLength(double);

    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

int main()
{
    Rectangle kitchen;
    Rectangle bedroom1;
    Rectangle bedroom2;
    Rectangle livingRoom;

    double totalAreaOfAHouse = kitchen.getArea() + bedroom1.getArea() + bedroom2.getArea() + livingRoom.getArea();
    double totalCost = totalAreaOfAHouse * 100;
    std::cout << totalCost << std::endl;
    return 0;
}