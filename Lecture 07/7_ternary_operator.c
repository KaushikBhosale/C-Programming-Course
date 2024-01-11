#include <stdio.h>
#include <conio.h>
    // TERNARY/CONDITIONAL OPERATOR
    //  (?:)
    // A shorthand way or writing an if-else statement.

// syntax
//                    if true       if false
//              condition ? exp(execute);  :  exp(execute);
                 // statement         statements
int main()
{
// EXAMPLE Positive Negative using Ternary

    float a;
    printf("\nENTER THE NUMBER = ");
    scanf("%f", &a);

    (a>0)?printf("\nNUMBER IS POSITIVE"):(a<0)?printf("\nNUMBER IS NEGATIVE"):printf("\nNUMBER IS 0");

    return 0;
}