/*
4. As the following Rectangle class is written, all data members are double. Rewrite the class as a template that
will accept any data type for these members. Secondly, what if the getWidth function definition is to be defined
outside the class?
class Rectangle
{
private:
double width,length;
public:
void setData(double w, double l)
{width = w; length = l;}
double getWidth()
{return width;}
double getLength()
{return length;}
double getArea()
{return width*length;}
};
What if the getWidth function definition is to be defined outside the class?
*/

template <class T>
class Rectangle
{
    T width, height;

public:
    void setData(T w, T l)
    {
        width = w;
        length = l;
    }

    T getWidth();

    T getHeight()
    {
        return height;
    }

    T getArea()
    {
        return width * height;
    }
};

template <class T>
T Rectangle<T>::getWidth()
{
    return width;
}