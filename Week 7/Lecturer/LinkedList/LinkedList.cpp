// #include <iostream>

// struct Node
// {
//     int value;
//     Node *next;
// };

// void append(Node *head, int value)
// {
//     Node currentNode = *head;
//     while (currentNode.next != nullptr)
//     {
//         currentNode = currentNode.next;
//     }
//     Node newNode;
//     newNode.value = value;
//     newNode.next = nullptr;
//     currentNode.next = &newNode;
// }

// void print(Node *head)
// {
//     Node currentNode = *head;
//     while (currentNode.next != nullptr)
//     {
//         std::cout << currentNode.value << " <- ";
//         currentNode = currentNode.next;
//     }
// }

// int main()
// {

//     Node *head;
//     head->value = 1;

//     append(head, 2);
//     print(head);

//     return 0;
// }