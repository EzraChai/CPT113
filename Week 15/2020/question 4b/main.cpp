#include <iostream>
using namespace std;

bool myCode(string str, int a, int b)
{
    if (a >= b)
    {
        return true;
    }

    if (str[a] == str[b])
    {
        return myCode(str, ++a, --b);
    }
    else
    {
        return false;
    }
}

// bool myCode(string str, int a, int b)
// {
//     bool isTrue = false; // Initialize isTrue to false
//     do
//     {
//         if (str[a] == str[b])
//         {                  // Compare characters at index 'a' and 'b'
//             a++;           // Increment 'a'
//             b--;           // Decrement 'b'
//             isTrue = true; // Set isTrue to true
//         }
//         else
//         {
//             isTrue = false; // Set isTrue to false
//             break;          // Exit the do-while loop immediately
//         }
//     } while (a < b); // Continue as long as 'a' is less than 'b'
//     return isTrue;
// }

int main()
{
    int n;
    string word;
    bool isTrue; // Declares a local isTrue variable

    cout << "Enter a word: ";
    cin >> word; // Reads input word

    n = word.length() - 1; // 'n' gets the index of the last character
    int i = 0;             // 'i' gets the index of the first character (0)

    isTrue = myCode(word, i, n); // Calls myCode with the full word (from index 0 to last index)

    if (isTrue == true)
    {
        cout << "\nThe word \"" << word << "\" IS a word we look for.\n";
    }
    else
    {
        cout << "\nThe word \"" << word << "\" IS NOT a word we look for.\n";
    }

    return 0;
}