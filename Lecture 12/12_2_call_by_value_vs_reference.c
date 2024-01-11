//                            CALL BY VALUE
//                            *************
//                                VS
//                          CALL BY REFERENCE
//                          *****************

// When we call a function by value, it means that we are passing the value of the arguments which
// copied into theformal parameters of the function.
// Which means that the original value remains unchanged
// and only the parameter inside the function changes.
// Such function calls are called ‘call by value’.

// Similarly, we have also learned that variables are stored somewhere in memory.
// So instead of passing the value of a variable,
// can we pass the location an address of the variable to a function.
// Such function calls are called ‘call by reference’.

// This call by reference functions needs the knowledge of a concept called ‘pointers’.
// It is the use of pointers that makes the C programming an excellent language.


#include <stdio.h>
void swap(int *, int *);
// we use pointer variable as to return a value at specific address 
// which is passed using call by reference

int main()
{

    int g=3,h=4;
    printf("\nvalue before swap of g,h  (%d,%d)",g,h);

    
    swap(&g,&h);// CALL BY REFERENCE (This Call by reference as we pass the address.)

// The call by reference method of passing arguments to a C functions copies the address of the arguments
// into the formal parameters.
// Address of the actual arguments are copied and then assigned to the corresponding formal arguments.

    printf("\nvalue after swap of g,h  (%d,%d)",g,h);
    
    return 0;
}

void swap(int *a,int *b)
// we use pointer variable as to return a value at specific address 
// which is passed using call by reference.
{
    int c;
     c = *a;
    *a = *b;
    *b =  c; 
}

// Usually, we use call by value function call.
// This means that in general, we cannot alter the actual arguments.
// But if desired, we can use call by reference for that purpose.
// We can make a function return more than one value at a time by using call by reference
// which is not possible ordinarily(most of the times).

// Conclusions
// From the above discussion, we can draw the following conclusions:

// If we want the value of an actual argument to not get changed in the function being called,
// pass the actual argument by value.

// If we want the value of an actual argument should get changed in the function being called,
// then pass the actual argument by reference.

// If a function is to be made to return more than one value at a time
// then use call by reference method for that purpose