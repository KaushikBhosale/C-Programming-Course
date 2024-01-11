//                             MEMORY LAYOUT
//                             *************

/*  WHAT AND WHY DYNAMIC MEMORY ALLOCATION ?

An Statically Allocated variable or Array has a fixed size in memory.
We have learnt to create bid enough arrays to fit in ours inputs but this doesn't seem like an optimal
way to allocate memory.
Memory is a very useful resource.
Clearly we need a way to request memory on runtime.

DYNAMIC MEMORY ALLOCATION is a way in which the size of data structure can be changed during the runtime. 
*************************


WHAT IS DYNAMIC MEMORY ALLOCATION ?

Dynamic memory allocation is the process of allocation of memory space at the run time.
We use the concept of dynamic memory allocation to reduce the wastage of memory,
and it is the optimal way of memory allocation.
Also the memory is reusability & the allocated memory can be freed when not required.
To grasp the concept completely, we will see the memory layout of C programming.

*/

//******************************************************************************************************
/*         STATIC MEMORY ALLOCATION               VS          DYNAMIC MEMORY ALLOCATION                *
********************************************************************************************************
                                                   |                                                   |
1] Allocation is done before the program Execution | 1] Allocation is done during the program Execution|
   ex: int array[7];                               |                                                   |
                                                   |                                                   |
2] There is no memory reusability & the memory     | 2] There is memory reusability & the allocated    |
   allocated cannot be freed                       |    memory can be freed when not required.         |
                                                   |                                                   |
3] Less Efficient                                  | 3] More eEfficient                                |
                                                   |                                                   |
********************************************************************************************************
*/

/*  MEMORY ALLOCATION IN C :

Memory allocation to a program in a typical architecture can be broken down into 4 segments.

1] CODE (TEXT)
2] STATIC / GLOBAL VARIABLES (DATA SEGMENT AND BLOCK STARTED BY SYMBOL SEGMENT)
3] STACK (Region of memory used for storing function call information and local variables
          in a last-in, first-out (LIFO) fashion.)
4] HEAP (DYNAMIC MEMORY ALLOCATION)
*/

/* MEMORY LAYOUT 1] CODE, 2] STATICT VARIABLE
   *************

1] CODE

Code composes of all the text segment of our program.
All the instruction(in short the entire written code)

2] STATIC / GLOBAL VARIABLES

By variables, we mean both global and static variables.
Global variables can be used anywhere in the program,
while static has its limitations inside the function.
The variable segment is further divided into two segments,
depending on the data they can store.

i) DATA SEGMENT stores initialized data              
   i.e.,data whose value is already given.              
   For ex: int i = 0;

ii) BLOCK STARTED BY SYMBOL (BSS) SEGMENT stores uninitialized data. (OLD ASSEMBLY LANGUAGE OPEARATOR)
    i.e., data whose variable is initialized only.
    For ex: int i;
*/

/* 3] STACK
      *****

The stack is a LIFO data structure.
It's size increases when the program moves forward. We will cover the stack in detail in this tutorial.
Let us start with the actual description with the help of a diagram. 
            
            |   |
            |   |
            |   |
            |___|

          Empty Stack
          ***********

Initially, the stack looks like a bucket in which
the last entry to be inserted will be the first one to get out.
That is why it is known as LIFO data structure i.e., last in first out.

Initially some memory will be reserved for main() in the stack.
This is also called as the stack frame of main().

Suppose that we push a function A [main ()]  into the stack.

            |   |
            |   |
            |   |
            |_A_|

          Initial Stack
          *************

Function A will start executing. Now the function A is calling another Function B during its execution.
The Function B will be pushed into the stack, and the program will start executing B.

            |   |
            |   |
            | B |
            |_A_|

            Stack
            *****

Now, if B is calling another function C,
then the program will push C into the stack and will start its execution.

            |   |
            | C |
            | B |
            |_A_|

            Stack
            *****

Now, after C has been executed completely, the program will pop C from the stack
as it was the last one in and start executing B.

            |   |
            |   |
            | B |
            |_A_|

            Stack
            *****

When B has been executed completely,
it will be popped out, and A will start executing until the stack becomes empty. 

            |   |
            |   |
            |   |
            |_A_|

            Stack
        *************

            |   |
            |   |
            |   |
            |___|

Empty Stack After A execution completed
***************************************


Stack Overflow:
***************

Compiler aloocates some space for the stack part of the memory (Purely depend on computer architecture)
When this space gets exhausted due to bad reasons or some logical error,
the phenomenon is known as Stack Overflow.
Typical Example includes Recursion function with wrong/no Bse condition.


                                                                       f
            |   |       |   |     |   |     |   |      | f |         | f |
            |   |       |   |     |   |     | f |      | f |         | f |
            |   |       |   |     | f |     | f |      | f |         | f |
            |_ _|       |_A_|     |_A_|     |_A_|      |_A_|         |_A_| 
                         
        Empty Stack     Stack     Stack     Stack      Stack     Stack Overflow
            *****       *****     *****     *****      *****     **************

*/

/* 4] HEAP (DYNAMIC MEMORY ALLOCATION)
      ********************************
Heap is a tree-based data structure. It’s size increases when we allocate memory dynamically.

To use the heap data structure, we have to create a pointer in our main function
that will point to some memory block in a heap.

The disadvantage of using heap is that the memory will not get freed automatically
when the pointer gets overwritten.

USE OF HEAP :
*************

There are a lot of limitations of stack (static memory allocation)
Some of the examples include variable sized array, freeing meemory no longer required.
Heap can be used flexibly by the programmer as per his needs. 

HOW TO USE HEAP :
***************

We can create a pointer in our main function and point to a memory block in the heap.
The address is stored by a local variable in the main function.
The memory consumed will not get freed automatically in case we overwrite the pointer.

*/

#include<stdio.h>
int main()
{
    printf("HELLO WORLD");
    return 0;
}

// SIZE COMMAND IN TERMINAL 
// 
// gcc filename.c
// size .\a.exe
// 
// OR
// 
// gcc filename.c ; size .\a.exe
// 
// With the use of size command in TERMINAL it provides size in bytes 
// of text segment, Data segment, BSS segment , TOTAL MEMORY TAKEN
// 
//    text    data     bss     dec     hex filename
//   14756    1552     120   16428    402c .\a.exe
// 
