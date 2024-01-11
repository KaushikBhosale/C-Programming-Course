
                            // LOOPS

// LOOPS are used when a task needs to be repeated a number of times or till the condition false.
// Usee of loops code re_usability and saves time.

    // Pre-tested loop : Condition check at Entry point.
    // Post-tested loop : Condition check at Exit point.

    // Pre-tested loop

        // for loop (pre tested loops)
        // while loop (pre tested loops)

    // Post-tested loop

        // do while(post tested loops)

// ***********************************************************************************************
// ***********************************************************************************************


            // FOR LOOP (pre tested loops)
//             **************************

    // The "For" Loop is used to repeat a specific code until a specific condition is satisfied.
    // The for-loop statement is very specialized.
    // We use for a loop when we know the number of iterations we want,
    // whereas when we do not know about the number of iterations, we use while loop.

    // for ( initialize(example i=0)  ; condition(example i<5) ; updation(i++,i-- etc))
    // {
    //    * code block of for loop *
    // }

    // note : Initialisation must be before the for statement or in the for statements
    //        Initialisation is unlimited.
    //        Condition should be in the for statement.condition is unlimited.
    //        BUT Final condition is treated to come out of the loop.
    //        Updation must be in for statement or in the for loop code block.


//     WHY WE PREFER FOR LOOPS?

// It is clear to a developer exactly how many times the loop will execute.
// So, if the developer has to dry run the code, it will become easier.
// Also, the Syntax of the for loop is almost the same as other programming languages like C++ and Java.

// EXAMPLE OF FOR LOOP

#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i <= 10; i++)
    { 
        printf("%d\t ",i);
    }

    printf("\nDONE");
    return 0;
}