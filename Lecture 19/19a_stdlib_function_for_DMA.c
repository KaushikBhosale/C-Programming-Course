//                             STDLIB FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION
//                             **********************************************

/* DMA :

An Statically Allocated variable or Array has a fixed size in memory.
Dynamic memory allocation is the process of allocation of memory space at the run time.
Memory allocation to a program in a typical architecture can be broken down into 4 segments.

1] CODE (TEXT)
2] STATIC / GLOBAL VARIABLES (DATA SEGMENT AND BLOCK STARTED BY SYMBOL SEGMENT)
3] STACK (Region of memory used for storing function call information and local variables
          in a last-in, first-out (LIFO) fashion.)
4] HEAP (DYNAMIC MEMORY ALLOCATION)

*/

/* FUNCTIONS FOR DMA
   ****************

In DMA , the memory is allocated at runtime from the HEAP segment.
For the [DMA] allocation of memory using the heap, we have four functions from stdlib.h library:
                                                                         ********
1] malloc();
2] calloc(); 
3] realloc(); 
4] free();

*/

//                             DYNAMIC MEMORY ALLOCATION FOR ARRAY
//                             ***********************************
#include <stdio.h>
#include <stdlib.h> // To use functions for DMA

int main()
{

// To use the heap data structure, we have to create a pointer in our main function
// that will point to some memory block in a heap.
    int *ptr;

/* 1] MALLOC [Memory Allocation]

malloc stands for memory allocation.
It reserves a block of memory with the given amount of bytes.
The return value is a void pointer to the allocated space.
Therefore the void pointer needs to be casted to the appropriate type as per the requirements.
However, if the space is insufficient, allocation of the ,memory fails and returns a NULL pointer.
All the values at allocated memory are initialized to garbage value.

// SYNTAX :                                 
        ptr = (data_type_of_ptr *) malloc(size_in_bytes);

Supose we require a toatal size of (no of blocks size) then,
We can use sizeof(data_type) operator which gives the size in bytes & multiply by no of blocks size
Because the size datatype completly depends on computer architecture.

        ptr = (data_type_of_ptr *) malloc(no_of_blocks * sizeof(data_type));

With this Now ptr is Dynamically Allocated Array ptr[no_of_blocks] with initializing garbage values.

However, if the space is insufficient, allocation of the ,memory fails and returns a NULL pointer.
SO TO CHECK THE SIZE ALLOCATED OR NOT :

(ptr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

*/

    // ptr = (int *) malloc(12); // Allocated 12 bytes of size
    ptr = (int *) malloc(3 * sizeof(int));// Allocated 12 bytes of size

    // TO CHECK THE SIZE ALLOCATED OR NOT :
    (ptr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

//   Now ptr is Dynamically Allocated Array like ptr[3] in which all values initialized as garbage value
//   ptr[0] = ptr[1] = ptr[2] = 27445874632543(garbage value) 
// 
//   for (int i = 0; i < 3; i++)
//   {
//       printf("\nThe value ptr[%d] = %d",i,ptr[i]);
//   }

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the value at ptr[%d] : ",i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nThe value ptr[%d] = %d",i,ptr[i]);
    }
    
    

/* 2] CALLOC [Contiguos Memory Allocation]

calloc stands for Contiguos Memory Allocation.
It reserves n block of memory with the given amount of bytes.
The return value is a void pointer to the allocated space.
Therefore the void pointer needs to be casted to the appropriate type as per the requirements.
However, if the space is insufficient, allocation of the ,memory fails and returns a NULL pointer.
All the values at allocated memory are initialized to 0.

// SYNTAX :                                                 size_in_bytes
        ptr = (data_type_of_ptr *) calloc(no_of_blocks , sizeof(data_type));

With this Now ptr is Dynamically Allocated Array in which all values initialized as 0
*/

    // ptr = (int *) calloc(3,4); // Allocated 3 blocks of int
    ptr = (int *) calloc(2 , sizeof(int));

    // TO CHECK THE SIZE ALLOCATED OR NOT :
    (ptr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

//   Now ptr is Dynamically Allocated Array like ptr[2] in which all values initialized as 0
//   ptr[0] = ptr[1] = ptr[2] = 0 
// 
//   for (int i = 0; i < 3; i++)
//   {
//       printf("\nThe value ptr[%d] = %d",i,ptr[i]);
//   }

    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter the value at ptr[%d] : ",i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nThe value ptr[%d] = %d",i,ptr[i]);
    }

/* 3] REALLOC [Realloaction of Memory]

realloc stands for Contiguos Memory Allocation.
If the Dynamically Allocated Memory is insufficient or want to chage the previous DMA size then,
we can change the size of previously allocated memory using realloc() function.

// SYNTAX :                                             new_size_in_bytes
        ptr = (data_type_of_ptr *) realloc(ptr , new_no_of_block * sizeof(data_type));

NOTE :

1] Previous ptr[i] values are not deleted, but we can initialize new values if required.
*/
    
    ptr = (int *) realloc(ptr , 5 * sizeof(int)); // ptr[2] is reallocated to ptr[5]
                                                  // Note previous values are not deleted
    // TO CHECK THE SIZE ALLOCATED OR NOT :
    (ptr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

    // To get new values without deleting previous values
    for (int i = 2; i < 5; i++)
    {
        printf("\nEnter the value at ptr[%d] : ",i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe value ptr[%d] = %d",i,ptr[i]);
    }

    // But if we want entire array of new values
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the value at ptr[%d] : ",i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe value ptr[%d] = %d",i,ptr[i]);
    }

/* 4] FREE [Free the allocated memory]

free() is used to Free the allocated memory.
If the Dynamically Allocated Memory is not required anymore, we can free it using free function.
This will free the memory being used by the program in the heap.

SYNTAX:
        free(ptr);

Please note that the behavior of accessing the memory after freeing it is undefined,
so the result can vary. In some cases, you might see the same value as before freeing,
while in other cases, you might encounter unexpected behavior, a crash, or garbage values.
It's important to avoid accessing or modifying memory after it has been freed
to ensure the stability and correctness of your program.

*/
    

    free(ptr);
    printf("\nptr is free");
    

// Please note that the behavior of accessing the memory after freeing it is undefined,
// so the result can vary. In some cases, you might see the same value as before freeing,
// while in other cases, you might encounter unexpected behavior, a crash, or garbage values.
// It's important to avoid accessing or modifying memory after it has been freed
// to ensure the stability and correctness of your program.
// To check uncomment the above program and run.
// 
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nThe value ptr[%d] = %d",i,ptr[i]);
    // }
    
    return 0;
}

