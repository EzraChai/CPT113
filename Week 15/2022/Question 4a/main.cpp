
// int seqSearch(const int list[], int listLength, int searchItem)
// {
//     int loc = 0;
//     bool found = false;
//     while (loc < listLength && !found)
//         if (list[loc] == searchItem)
//             found = true;
//         else
//             loc++;
//     if (found)
//         return loc;
//     else
//         return -1;
// }
#include <iostream>

int recSearch(const int list[], int pointer, int listLength, int searchItem)
{
    if (pointer > listLength)
    {
        return -listLength - 2;
    }

    if (list[pointer] == searchItem)
    {
        return 0;
    }
    else
    {
        return 1 + recSearch(list, ++pointer, listLength, searchItem);
    }
}

int main()
{
    const int listLength = 10;
    int list[listLength] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << recSearch(list, 0, listLength, 10) << std::endl;

    return 0;
}