                                // MEMORY LEAK IN C
                                // ****************

/* WHAT IS MEMORY LEAK IN C

> A memory leak is a poison for software because software shows undefined behavior due to the memory leak.
> A memory leak occurs when we create a memory in a heap and forget to delete it.
> It happens when we do not use dynamic memory properly. If the system has enough memory,
  in that case also this slows down the performance of the system. To avoid this problem,
  memory allocated on the heap should always be freed when not needed.

*/

/* WHAT CAUSES MEMORY LEAK IN C ?

> With greate power comes great responsibility
> Memory leak caused when we don't use use Dynamic memory properly
> When we keep on allocating memory in the heap without freeing,
  the overall memory usage keeps on increasing.
> This situation is the cause of memory leak that the programmer creates a memory block in the memory
  and forgets to delete it.
> To avoid these memory leak situations, memory allocated on the heap should always be freed
  when not needed.
*/

/* HOW TO AVOID MEMORY LEAK IN C ?

To avoid memory leaks, we should always be freed the memory allocated on the heap when no longer needed.
The code will look like this:

#include <stdlib.h>
void myfunc()
{
   int *ptr = (int *) malloc(sizeof(int));
   /* Statements /*
   free(ptr);
   return;
}
*/

/* TWO RULES SHOULD BE OBSERVED FOR ANY C PROGRAM RELATED TO DMA MANAGEMENT ARE :

> Any memory that is dynamically reserved with malloc, calloc, or realloc
  must be deallocated through using free().
> When the program executes its last instruction and has dynamic memory blocks that are not deallocated,
 it is considered incorrect.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 1000)
    {
        printf("\nWelcome to Sigma web developer");
        i2 = malloc(3444 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }

        i++;
        free(i2); // Without this we will encounter a situation of memory leak.
    }

    i2 = NULL;

    printf("\n\nExecution closed");

    return 0;
}