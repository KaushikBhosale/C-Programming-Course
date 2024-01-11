#include <stdio.h>

int main()
{
                // DO WHILE(post tested loops)
    
    // A do-while loop is similar to a while loop,
    // except the fact that it is guaranteed to execute at least one time.

    // If the test condition returns true, the flow of control jumps back up to do,
    // and the set of statements in the loop executes again.
    // This process repeats until the given test condition becomes false.

    // do 
    // {
    //     * code block of while loop *
        // updation
    // } while( condition );

    // NOTE : It starts with do keyword
    //        Then it have code block of do while loop which should include updation.
    //        After the block there is while statement including condition terminated with semicolon (;)
    //        do while execute once as it checks condition at exit point.
    //        After the first execution it checks the condition if false it come out off the loop.
    //        But if true it executes till the condition is false.

    int number = 10,i=0;

    do
    {
        printf("\n%d", i);
        i++;
    } while (number<i);
 
    printf("\nDONE");
    return 0;
}