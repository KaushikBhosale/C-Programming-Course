// *********************************************************************************************

                // ARGUMENT/PARAMETERIZED FUNCTION
//                 *******************************

        // Argument are the values which are passed by a developer or by the user.

        // Function with arguments is know as ARGUMENT/PARAMETERIZED FUNCTION

// *********************************************************************************************

                // Function Declaration/Prototype

#include<stdio.h>
void basic_calc(int, int); // type of data type in argument and number of arguments to be declare.

// *********************************************************************************************

                // Call to the Function (using of function)

int main()
{
    int x = 10,y = 20;
    basic_calc(x,y);// while function calling by x,y actual arguments
                    // And it is also function communiction between main function & declared function.
                    // As x and y are in the main function.

// ACTUAL PARAMETERS : When a Function is called, the values (expresions) that are passed in the call
//                     are called arguments or actual parameters.
                    
    basic_calc(10,20);
    basic_calc(33,44);// CALL BY VALUE

// When we call a function by value, it means that we are passing the value of the arguments which
// copied into theformal parameters of the function.
// Which means that the original value remains unchanged
// and only the parameter inside the function changes.
// Such function calls are called ‘call by value’.

    printf("\nENTER THE VALUE OF a : ");
    scanf("%d", &x);

    printf("\nENTER THE VALUE OF b : ");
    scanf("%d", &y);
    basic_calc(x,y);// call by user entered value from main function
}
// *********************************************************************************************

        // Function Defination (function implementation)

void basic_calc(int a, int b)// formal argument

// Formal argument/parameters : Are the local variable which are assigned values from the arguments
//                              when the function is called
{
    printf("\nADD      a+b = %d",a+b);
    printf("\nSUB      a-b = %d",a-b);
    printf("\nMULTIPLY a*b = %d",a*b);
    printf("\nDIVIDE   a/b = %d",a/b);
    printf("\nMODULUS a//b = %d",b%a);
}
