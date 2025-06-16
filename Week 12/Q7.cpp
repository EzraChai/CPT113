/*
Write a recursive function, “vowels”, that returns the number of vowels in a string. Also,
write a program to test your function.
*/

#include <iostream>

int vowels(std::string, int);

int main()
{
    std::cout << vowels("Hello World", 0) << std::endl;
    return 0;
}

int vowels(std::string text, int position)
{
    if (position > text.length())
    {
        return 0;
    }
    else if (text[position] == 'a' || text[position] == 'e' || text[position] == 'i' || text[position] == 'o' || text[position] == 'u' ||
             text[position] == 'A' || text[position] == 'E' || text[position] == 'I' || text[position] == 'O' || text[position] == 'U')
        return 1 + vowels(text, position + 1);
    else
        return vowels(text, position + 1);
}