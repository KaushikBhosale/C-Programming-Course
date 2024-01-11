                            // CALL BACK FUNCTION USING FUNCTION
                            // *********************************

/* FUNCTION POINTER

We can have pointer pointing to function as well 
Function pointer point too code not to data
Function pointer are usefull to implement callback function
Unlike normal pointer, we do not allocate de-allocate memory usinf function pointer.

*/

/* CALL BACK FUNCTION

Function pointer are used to pass a function to a function
This passed function can be then be called again ( hence the name CALL BACK FUNCTION )
This provides a programmer to write less code to do more stuff.

*/

/*



*/

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void goodMorning(int (*fptr)(int,int))
{
    printf("\nHello Good Morning : %d", fptr(10,7));
}

void goodEvening(int (*fptr)(int,int))
{
    printf("\nHello Good Morning : %d", fptr(3,7));
}

int main()
{
    int  (*ptr)(int,int);

    ptr = sum; // Function Pointer

    goodMorning(ptr); //  CALL BACK FUNCTION
    goodEvening(ptr); //  CALL BACK FUNCTION

    return 0;
}