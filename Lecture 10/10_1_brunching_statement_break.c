                    // BRUNCHING STATEMENTS
//                      *****************

        // THE STATEMENTS WHICH ALLOW THE FLOW OF EXECUTION TO JUMP TO
        // A DIFFERENT PART OF THE PROGRAM.
        // THE COMMON BRANCHING STATEMENTS ARE :
        // BREAK;
        // CONTINUE;
        // EXIT(0);
        // RETURN 0;


            // Break Statement : break; (stop come out of loop/switch case)
//             ****************

// Break statement is used to break the loop or switch case statements execution 
// and brings the control to the next block of code after loop or switch case.
// Break statements are used to bring the program control out of the loop.
// The break statement can be is used 
    // inside loops
    // switch case expression.

#include <stdio.h>

int main()
{
    int i=0;

    while (i<=10)
    {
        printf("\n%d", i);
        
        if (i==5)
        {
            break;
        }
        i++;      
    }

    printf("\n I AM OUTOF THE LOOP");
    
    return 0;
}

// In the given example condition is i<=10 so loop will execute till the i == 10 and the it will stop,
// but when the the value of i becomes 5 the loop is stoped because of break statement.