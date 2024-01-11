                                // DANGLING POINTER
                                // ****************

/* DANGLING POINTER

A pointer pointing to a freed memory location or the location whose content has been deleted is called 
Dangling Pointer

Dangling pointers arise during object destruction, when an object with an incoming reference is deleted 
or deallocated, without modifying the value of the pointer, so that the pointer still points to the memory
location of the deallocated memory.The system may reallocate the previously deleted memory; 
the unpredicted result may occur as the memory may now contain different data.

There are some causes of dangling pointers. The causes are explained below with examples.

1] De-allocation of a memory
2] Returning Local Variable in Function 
3] Variable going out of scope 

*/

/* Is Dangling Pointer is good thing to have ? ---->  NO
   *****************************************

How to Avoid the Dangling Pointer Errors?

>> The dangling pointer introduces nasty bugs in our C programming and these bugs frequently become security
   holes at a time.
>> These dandling pointer errors can be avoided by initializing the pointer value to the NULL.
>> If we assign the NULL value to the pointer, then the pointer will not point to the memory location that 
   has been freed.
>> By assigning the NULL value to the pointer means that the pointer is not pointing to any
   memory location.


*/

// ********************************************************************************************

#include <stdio.h>
#include <stdlib.h>

// Returning Local Variable in Function

// int *ptr2()   
// {
//     int a = 66;
//     return &a;
// }
int main ()
{
    // int *ptr = f1();
    // printf("%d",*ptr);

// ********************************************************************************************

// De-allocation of a memory

    int *ptr1 = (int *) malloc(7 * sizeof(int));
    ptr1[0] = 55;
    ptr1[1] = 5;
    ptr1[2] = 65;
    ptr1[3] = 75;

    printf("\n%d\n",sizeof(ptr1));

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",ptr1[i]);
    }
    free(ptr1);
    printf("ptr1 is free and a dangling pointer");
    ptr1 = NULL; // ptr1 no longer pointing that is NULL POINTER

// ********************************************************************************************

// Variable going out of scope 

    int *ptr3;
    {
        int a =5;
        ptr3 = &a;
    }

    // Now ptr3 is a Dangling Pointer as a is outoff scope.
    printf("\n\n%d\n", ptr3);
    printf("%d\n", *ptr3);
    // printf("%d\n", a);

    free(ptr3); // Now ptr3 is a Dangling Pointer
    ptr3 = NULL; // ptr1 no longer pointing that is NULL POINTER
    return 0;
}