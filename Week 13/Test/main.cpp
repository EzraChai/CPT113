#include <iostream>

template <class T>
class LinkedList
{
private:
    struct Node
    {
        T data;
        Node *next;
    };

    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void appendNode(T data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        Node *currentNode = nullptr;
        if (!head)
        {
            head = newNode;
            return;
        }
        currentNode = head;
        while (currentNode->next != nullptr)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }

    void insertNode(T data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *currentPtr = head;
        Node *prevPtr = nullptr;
        while (currentPtr != nullptr && currentPtr->data < data)
        {
            prevPtr = currentPtr;
            currentPtr = currentPtr->next;
        }

        if (prevPtr == nullptr)
        {
            head = newNode;
            newNode->next = currentPtr;
        }
        else if (currentPtr == nullptr)
        {
            currentPtr->next = newNode;
        }
        else
        {
            newNode->next = currentPtr;
            prevPtr->next = newNode;
        }
    }

    void removeNode(T data)
    {
        if (!head)
        {
            return;
        }

        Node *currentPtr = nullptr;
        Node *prevPtr = nullptr;

        if (head->data == data)
        {
            currentPtr = head->next;
            delete head;
            head = currentPtr;
            return;
        }

        currentPtr = head;

        while (currentPtr != nullptr && currentPtr->data != data)
        {
            prevPtr = currentPtr;
            currentPtr = currentPtr->next;
        }

        if (currentPtr->data == data)
        {
            prevPtr->next = currentPtr->next;
            delete currentPtr;
        }
    }

    void traverseNode()
    {
        if (!head)
        {
            return;
        }
        Node *currentNode = head;
        while (currentNode != nullptr)
        {
            std::cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }

        std::cout << std::endl;
    }

    void removeLastNode()
    {
        if (!head)
        {
            return;
        }

        if (head->next == nullptr)
        {
            delete head;
            head = nullptr;
            return;
        }

        Node *currentNode = head;
        while (currentNode->next->next != nullptr)
        {
            currentNode = currentNode->next;
        }
        delete currentNode->next;
        currentNode->next = nullptr;
    }
};

int countLetter(std::string word, char letter, int index = 0)
{
    if (index == word.length())
    {
        return 0;
    }

    if (word[index] == letter)
    {
        return 1 + countLetter(word, letter, ++index);
    }
    else
    {
        return 0 + countLetter(word, letter, ++index);
    }
}

void reverseWord(std::string &word, int firstIndex, int lastIndex)
{
    if (firstIndex >= lastIndex)
    {
        return;
    }                               
    char temp = word[firstIndex];
    word[firstIndex] = word[lastIndex];
    word[lastIndex] = temp;

    reverseWord(word, firstIndex + 1, lastIndex - 1);
}

int wordLength(std::string word, int index = 0)
{
    if (word.length() == index)
    {
        return 0;
    }
    return 1 + wordLength(word, ++index);
}

void reverseString(std::string word)
{
    if (word.size() == 0)
    {
        return;
    }
    reverseString(word.substr(1));
    std::cout << word[0];
}

int main()
{
    std::cout << "Total Length: " << wordLength("Hello") << std::endl;
    std::string word = "Hello";
    reverseWord(word, 0, word.length() - 1);
    std::cout << word << std::endl;
    int count = countLetter("Hello", 'l');
    std::cout << "Word Count: " << count << std::endl;
    LinkedList<int>
        list;
    list.appendNode(1);
    list.appendNode(2);
    list.appendNode(3);
    list.appendNode(5);
    list.insertNode(4);
    list.insertNode(0);
    list.removeLastNode();
    list.removeNode(3);
    list.traverseNode();
    return 0;
}