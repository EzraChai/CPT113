#include "LinkedList.h"

int main()
{
    LinkedList<int> list;
    list.appendNode(1);
    list.appendNode(3);
    list.insertNode(2);
    list.displayList();

    list.deleteNode(3);
    list.displayList();

    return 0;
}