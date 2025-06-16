// 4 - What is the output of the following source - code ? int main()
// {
//     stack<int> intStack;
//     queue<int> intQueue;
//     int score[] = {10, 7, 4, 6, 8};
//     for (int I = 0; I < 5; i++)
//     {
//         intStack.push(score[i]); // 10, 7, 4, 6, 8
//         intQueue.push(score[i]); // 10, 7, 4, 6, 8
//     }
//     intStack.pop(); // 10, 7, 4, 6
//     intQueue.push(intStack.top() - 5); // 10, 7, 4, 6, 8, 1
//     intQueue.push(intStack.top()); // 10, 7, 4, 6, 8, 1, 6
//     intQueue.pop(); // 7, 4, 6, 8, 1, 6
//     intStack.push(intQueue.front() + intStack.top()); // 10, 7, 4, 6, 13
//     while (!intStack.empty())
//     {
//         cout << intStack.top() << " "; // 13 6 4 7 10
//         intStack.pop();
//     }
//     cout << endl;
//     while (!intQueue.empty())
//     {
//         cout << intQueue.front() << " "; // 7 4 6 8 1 6
//         intQueue.pop();
//     }
// }
