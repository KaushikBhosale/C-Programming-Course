                            // VOID POINTER
                            // ************

/* WHAT IS VOID POINTER ?

A void pointer is a pointer that has no data type associated with it.
A void pointer can be easily typecasted to any pointer type.
In simple language it is a general purpose pointer variable.

int x = 10;
char y = 'a';

void *ptr;
ptr = &a;
ptr = &y;

*/

/* USE OF VOID POINTER / GENERAL PURPOSE OF VOID POINTER

In DMA functions like  malloc, calloc, realloc return(void *) type
This allows these Dynamic memory functions to be used to allocate memory of any datatype.
This is because these pointers can be typecasted to any pointer type.

*/

/* MORE ON POINTERS

It is not possible to dereference.
Pointer arithmetic is not allowed in C standards with void pointer.
Hence it is not recommended to use pointer arithmetic with void pointers.

*/

#include<stdio.h>

int main()
{
    int a = 107;
    float b = 5.9;
    char c = 'A';

    void* ptr;
    printf("The sizeof(ptr) : %d", sizeof(ptr)); // why 4 bytes

    ptr = &a;

    // printf("\nThe value of *ptr = a = %d", *ptr); // It is not possible to dereference.
    printf("\nThe typecasted of *((int*) ptr) = a = %d", *((int*) ptr));
    printf("\nThe Address of  a = %d",  ptr);

    ptr = &b;
    printf("\nThe typecasted of *((int*) ptr) = b = %.2f", *((float*) ptr));
    printf("\nThe Address of  b = %d",  ptr);

    ptr = &c;
    printf("\nThe typecasted of *((int*) ptr) = c = %c", *((char*) ptr));
    printf("\nThe Address of  c = %d",  ptr);


// *************************************************************************************************
// *************************************************************************************************

                                    // NULL POINTER
                                    // ************

/* WHAT IS  NULL POINTER ?

A NULL pointer is a pointer that points to NULL (nothing).

A NULL pointer is a pointer that does not point to any memory location.
It generally points to NULL or 0th memory location,
so in simple words, no memory is allocated to a NULL pointer

Dereferencing a NULL pointer is undefined behaviour in C,
and conforming implementation is allowed to assume that any pointer that is dereferenced is not NULL.

NULL pointer is specific pointer which is mentioned in C standard and it has specific purposes

NULL pointer gives a functionality to C programmer to check whether a pointer is legimate or not.

A NULL pointer should not be dereferenced.
A check must be run by the C programmer to know whether aa pointer is NULL before dereferencing it

*/

/* Advantages:

We can initialize the pointer variable without allocating any specific address to it.

We can use it to check whether a pointer is legitimate or not.
We can check that by making the pointer a NULL pointer, after which it can not be dereferenced.

It is used for comparison with other pointers to check whether they are pointing to some memory address
or not. 

We use it for error handling in the case of C programming.

We can pass a NULL pointer at places where we do not want to pass a pointer with a valid memory address

*/

/* MORE ON NULL POINTER

NULL macro is defined as((void *)0) in header files of most of the C compiler implementations.

NULL pointer vs Uninitialized pointer :
-An Uninitialized pointer contains an undefined value.
-A NULL pointer stores a defined value, which is the one decided by the environment
to not be a valid memory address fro any object.

NULL pointer vs VOID pointer :
NULL pointer is a value where as void pointer is a type.

*/


    a = 100;
    int* p;
    p = &a;

    printf("\nThe address of a: %d", p);
    printf("\nThe value of a: %d", *p);

    p = NULL;
    printf("\nThe NULL p : %d", p); // 0 indicates NO memory address stored of any other variable
    // printf("\nThe Value *p : %d", *p); // program crash or undefined behaviour

    // So to avoid program crash or undefined behaviour
    (p != NULL)?
    printf("\nThe address of a: %d", *p):
    printf("\nPointer is a NULL pointer and cannot be dereferenced");
    
    p = &a;
    (p != NULL)?
    printf("\nThe address of a: %d", *p):
    printf("\nPointer is a NULL pointer and cannot be dereferenced");

    return 0;
}



