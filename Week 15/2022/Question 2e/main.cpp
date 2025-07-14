#include <iostream>
using namespace std;

class Engine
{
public:
    Engine(int);
    int getCylinder() const;

private:
    int cylinders_;
};

class Vehicle
{
public:
    Vehicle(string);

protected:
    string brand_;
};

class Car : public Vehicle
{
public:
    Car(string, int);
    friend void processData(const Car &car);

private:
    Engine engine_;
};

void processData(const Car &car)
{
    cout << "Brand: " << car.brand_ << endl;
    cout << "Engine: " << car.engine_.getCylinder() << endl;
}