#include <iostream>

bool isPalindrome(std::string, int, int);
int main()
{
    std::string text = "madam";
    std::cout << isPalindrome(text, 0, text.length() - 1);
    return 0;
}

bool isPalindrome(std::string text, int left, int right)
{
    if (left >= right)
    {
        return true;
    }

    if (text[left] != text[right])
    {
        return false;
    }

    return isPalindrome(text, left + 1, right - 1);
}

void reverseString(std::string &word, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    char temp = word[left];
    word[left] = word[right];
    word[right] = temp;

    reverseString(word, left + 1, right - 1);
}