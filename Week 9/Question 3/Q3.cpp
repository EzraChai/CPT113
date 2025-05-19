/*
3. Suppose your program uses class template named List. Give an example of how you would use int as the data
type in the definition of a List object. (Assume class a default constructor).
template<class T>
class List
{
    // members are declared here…
};
*/

template <class T>
class List
{
public:
    List() {}
};

int main()
{
    List<int> intList;
    return 0;
}