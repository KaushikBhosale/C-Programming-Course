                                // WILD POINTER
                                // ************

/* WILD POINTER

>> Uninitialized Pointers are known as WILD POINTER. (int *ptr;  // ptr is a WILD POINTER)
>> These pointers points to a arbitary locations in memory and may cause a program to crash or
   to behave badly
>> Dereferencing WILD POINTERS can cause a nasty bug. 
>> It is suggested to always initialize unused pointers to NULL. So that the pointer becomes NULL POINTER.

*/


#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a = 5;
    int *ptr; // wild pointer
    // *ptr = 44; // Not a good thing program can crash or cause a nasty bug
    ptr = &a; // ptr is no longer wild pointer

    printf("\nthe value of a = %d\n", *ptr);

    free(ptr); // ptr is pointing to no one Dangling pointer

    ptr = NULL; // NULL POINTER


    return 0;
}