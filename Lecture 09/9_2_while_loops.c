
                // WHILE LOOP (pre tested loops)
//                 ****************************

// While loop is also called as a pre-tested loop.
// A while loop allows code to be executed multiple times,
// Depending upon a given condition.
// The while loop is mostly used in the case where the number of iterations is not known.
// If the number of iterations is known, then we use for loop.

    // while (condition)
    // {
    //    * code block of while loop *
    //  updation(i++,i-- etc);
    // }

    // NOTE : Condition must be in while statement
    //        Updation should be inside the code block of while loop

// EXAMPLE OF FOR LOOP

#include <stdio.h>

int main()
{
    int i = 0;
    while (i<54)
    {
        printf("%d\n", i);
        i++;
    }

 
    printf("\nDONE");
    return 0;
}