                                // FUNCTION POINTER
                                // ****************

/* WHAT IS FUNCTION POINTER

We can have a pointers pointing to functions as well
Function pointers are used to implement callback functions
Function pointer point too code not to data
Compiler takes one or more source files and c0nverts them to machine code

*/

/* Function Pointer Syntax

The syntax for declaring a function pointer might seem difficult initially, but its quite straightforward once we understand what's going on. To declare the function pointer, use the following syntax:

#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    function_return_type(*Name_of_pointer)(function arguments list) = &sum; // function pointer
                                OR
    function_return_type(*Name_of_pointer)(function arguments list) = sum; // function pointer

    return 0;
}
*/


#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning%d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2)); // Testing the function
    int (*fPtr) (int, int); // Declaring a function pointer
     
    // fPtr = &greet;
    // NOTE : It should match the return type and parameters of function pointer to the function

    fPtr = &sum; // Creating a function pointer
    int d = (*fPtr)(4, 6); // Dereferencing a function pointer
    printf("The value of d is %d\n", d);

// Some Important points regarding function pointer:
//
// We can declare a function pointer and assign a function to it in a single statement like this:
    // void (*function_ptr)(int) = &fun;
//
// We can remove the ampersand(&) from this statement because a function name alone represents the function address.
    // void (*function_ptr)(int) = fun;

    return 0;
}
