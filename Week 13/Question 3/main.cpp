// 3 - Explain how this function deleteNode works ?
// void linkedListType::deleteNode(const int &deleteItem)
// {
//     nodeType *current;
//     nodeType *trailCurrent;
//     bool found;
//     if (first == NULL)
//         cout << "Cannot delete from an empty list.\n";
//     else
//     {
//         if (first->info == deleteItem)
//         {
//             current = first;
//             first = first->link;
//             count--;
//             if (first == NULL)
//                 last = NULL;
//             delete current;
//         }
//         else
//         {
//             found = false;
//             trailCurrent = first;
//             current = first->link;
//             while (current != NULL && !found)
//             {
//                 if (current->info != deleteItem)
//                 {
//                     trailCurrent = current;
//                     current = current->link;
//                 }
//                 else
//                     found = true;
//             }
//             if (found)
//             {
//                 trailCurrent->link = current->link;
//                 count--;
//                 if (last == current)
//                     last = trailCurrent;
//                 delete current;
//             }
//             else
//                 cout <<”Item to be deleted is not in the list.”<< endl;
//         } // end else
//     } // end else
// } // end deleteNode

// first check the 'first' pointer is null or not
// if is NULL, print an error message
// Next if the value that points by the first value is same as the delete item that wanted to delete
//      delete the first element
// else traverse the loop,
// if the element was found while traversing, assign the value as true
// if the variable found is true, delete the element, else print an error message.