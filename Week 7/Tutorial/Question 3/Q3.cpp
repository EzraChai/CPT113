/*
3. Construct a class named Health which consists of two data members: passportNum with type int
and a pointer named ptr with type float. Create a dynamic array using pointer ptr to store body tem-
perature and age. You should define appropriate methods (including copy constructors, overloading of as-
signment operator, destructors to properly handle dynamic arrays) to complete the class definition. Then write
main() function to test your program.
*/
#include <iostream>

class Health
{
private:
    int passportNum;
    float *ptr;

public:
    Health() : passportNum(0), ptr(nullptr) {}
    Health(int num)
    {
        passportNum = num;
        ptr = new float[2];
    }
    Health(Health &obj)
    {
        this->passportNum = obj.passportNum;
        this->ptr = new float[2];
        for (int i = 0; i < 2; i++)
        {
            ptr[i] = obj.ptr[i];
        }
    }
    ~Health()
    {
        delete[] ptr;
    }

    void setTempAndAge(float temp, int age)
    {
        ptr[0] = temp;
        ptr[1] = age;
    }

    const Health operator=(const Health &obj)
    {
        if (this != &obj)
        {
            this->passportNum = obj.passportNum;
            delete[] this->ptr;
            this->ptr = new float[2];
            for (int i = 0; i < 2; i++)
            {
                this->ptr[i] = obj.ptr[i];
            }
        }

        return *this;
    }

    void print()
    {

        std::cout << "Passport Number: " << passportNum << std::endl;
        std::cout << "Temperature: " << ptr[0] << std::endl;
        std::cout << "Age: " << ptr[1] << std::endl;
    }
};

int main()
{
    Health h(123);
    h.setTempAndAge(12.0, 2);
    Health h2(h);
    h2.print();
    Health h3 = h2;
    h3.print();

    return 0;
}