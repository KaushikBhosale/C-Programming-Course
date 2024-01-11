#include <stdio.h>
                    // SWITCH CASE STATEMENT

    // The control statement that allows us to make a decision effectively from the number of choices
    // is called a switch, or a switch case-default
    // since these three keywords go together to make up the control statement.

//     WHY DO WE NEED a Switch case?

//  The program's complexity increases whenever the number of if statements increases.
//  If we use multiple if-else statements in the program,
//  the code might become difficult to read and comprehend.
//  Sometimes it also even confuses the developer whom himself wrote the program.
//  Using the switch statement is the solution of this problem.

// RULES for Switch Statement -:

// The test expression of Switch must be an int or char.
// The value of the case should be an integer or character.
// Cases should be inside the switch statement.
// Using the break keyword in the switch statement is not necessary.
// The case label values inside the switch should be unique.

// DIFFERENCE between a switch and if:

// Switch statements cannot evaluate float conditions,
// whereas if statements can evaluate float conditions.

// The switch statement cannot evaluate relational operators i.e.,
// they are not allowed in switch statements,
// whereas if statements can evaluate relational operators.

// Switch Cases in the switch can never have variable expressions;
// for example, we cannot write case a +3 

int main()
{

    // int choice;

    // printf("ENTER THE CHOICE = ");
    // scanf("%d", &choice);

    // switch (choice)
    // {
    // case 1:
    //     printf("your choice is 1");
    //     break;

    // case 2:
    //     printf("your choice is 2");
    //     break;

    // case 3:
    //     printf("your choice is 3");
    //     break;

    // default:
    //     printf("ENTER VALID CHOICE");
    //     break;
    // }



// SWITCH CASE USING of character.

    char c;
    printf("\nCHOICES ARE");
    printf("\nA :ADDITION \nS :SUBTRACTION \nM :MULTIPLICATION \nD :DIVISION \nm :MODULUS");

    printf("\nENTER YOUR CHOICE = ");
    scanf("%c", &c);

int a, b, d;

    switch (c)
    {
    case 'A':
        printf("\nWELCOME TO ADDITION");
        printf("\nNUMBER 1 = ");
        scanf("%d", &a);
        printf("\nNUMBER 2 = ");
        scanf("%d", &b);
        d = a+b;
        printf("\n%d + %d = %d",a,b,d);
        break;

    case 'S':
        printf("\nWELCOME TO SUBTRACTION");
        printf("\nNUMBER 1 = ");
        scanf("%d", &a);
        printf("\nNUMBER 2 = ");
        scanf("%d", &b);
        d = a-b;
        printf("\n%d - %d = %d",a,b,d);
        break;

    case 'M':
        printf("\nWELCOME TO MULTIPLICATION");
        printf("\nNUMBER 1 = ");
        scanf("%d", &a);
        printf("\nNUMBER 2 = ");
        scanf("%d", &b);
        d = a*b;
        printf("\n%d * %d = %d",a,b,d);
        break;

    case 'D':
        printf("\nWELCOME TO DIVISION");
        printf("\nNUMBER 1 = ");
        scanf("%d", &a);
        printf("\nNUMBER 2 = ");
        scanf("%d", &b);
        d = a/b;
        printf("\n%d / %d = %d",a,b,d);
        break;

    case 'm':
        printf("\nWELCOME TO MODULUS");
        printf("\nNUMBER 1 = ");
        scanf("%d", &a);
        printf("\nNUMBER 2 = ");
        scanf("%d", &b);
        d = a%b;
        printf("\n%d %% %d = %d",a,b,d);
        break;
    
    default:
        printf("\nEnter the valid choice");
        break;
    }

    printf("\nDONE");
    return 0;
}

// NESTED Switch in C:

// We can also use nested switch statements i.e., switch inside another switch.
// Also, the case constants of the inner and outer switch may have common values without any conflicts.