#include <stdio.h>
#include <conio.h>

// DECISION CONTROL STATEMENTS

// EXECUTION OF CODE ON THE BASIS OF CONDITION

    // 1] if else
    // 2] switch case

// DECISION CONTROL STATEMENTS(if else)

    // 1] if ,else
    // 2] if ,else if, else
    // 3] NESTED if ,else if, else

    // RELATIONAL OPERATOR
    // *******************

    //    ==    Is equal to
    //    !=    Is not equal to
    //    <     Less than
    //    >     Greater than
    //    >=    Greater than equal to
    //    <=    Less than equal to



int main()
{
    // 1] if ,else

    // The if/else statement executes a block of code if a specified condition is true.
    // If the condition is false, another block of code can be executed.
    // if both if/else is false the it will out of that block.


    int age;

    printf("Enter the Age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nYOU ARE ELIGIBLE FOR VOTING");
        printf("\nWELCOME");
    }
    else
        printf("\nYOU ARE NOT ELIGIBLE");
    
    return 0;
}