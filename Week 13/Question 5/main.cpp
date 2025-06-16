/*
5- Given the UML class diagram of the stackType
a. Write the class stackType definition.
b. Write all the functions definition in the class stackType
c. Write main () function to test the push(), pop() and top() functions.
stackType<Type>
-maxStackSize: int
-stackTop: int
-*list: Type
+operator=(const stackType<Type>&): const stackType<Type>&
+initializeStack(): void
+isEmptyStack() const: bool
+isFullStack() const: bool
+push(const Type&): void
+top() const: Type
+pop(): void
-copyStack(const stackType<Type>&): void
+stackType(int = 50)
+stackType(const stackType<Type>&)
+~stackType()
*/
#include <iostream>
#include "stackType.h"

int main()
{

    stackType<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    for (int i = 0; i < 3; i++)
    {
        std::cout << st.top() << " ";
        st.pop();
    }
    std::cout << std::endl;

    return 0;
}