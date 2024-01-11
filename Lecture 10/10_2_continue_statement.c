
//                          CONTINUE STATEMENT 
//                          ******************

// The continue statement is used inside loops in C Language.
// When a continue statement is encountered inside the loop,
// control jumps to the beginning of the loop for next iteration,
// skipping the execution of statements inside the body of loop after continue statement.
// It is used to bring the control to the next iteration of the loop.
// The continue statement skips some code inside the loop and continues with the next iteration.
// It is mainly used for a condition so that we can skip some lines of code for a particular condition.
// It forces next iteration in loop i.e. as break terminates the loop
// but continue forces the next iteration of the loop.

#include <stdio.h>

int main()
{
    int i =0;
    while (i<=100)
    {

        if (i%5==0 || i%10==0)
        {
            i++;
            continue;
        }
        printf("\n%d",i);
        i++;
    }
    
    return 0;
}

// In the given example the loop condition is i<=100, so loop executes till i==100,
// but it will skip to print value of i if i%5 or 1%10 == 0 [for example 5%5 = 0 and  10%10=0]
// So output will be 1,2,3,4,  6,7,8,9,  11,12,13,14,  16,17,18,19,  21,.....,99