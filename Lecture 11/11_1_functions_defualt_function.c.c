

                // FUNCTIONS

    // Function : Self contained block of code block that performs predefined task.

    // USE OF FUNCTIONS

        // To avoid repetetion of code
        // To make prog modular
        // Reusability
        // readable and easy to maintain

    // TYPES OF FUNCTIONS

        // library function (buit in function) (printf,scanf etc.)
        // user defined function (developer defined functions)
                // DEFAULT FUNCTION
                // ARGUMENT/PARAMETERIZED FUNCTION

    // Elements in Functions
    
        // Function Declaration/Prototype
        // Function Defination (function implementation)
        // Call to the Function (using of function)


// *********************************************************************************************
// *********************************************************************************************

                // DEFAULT FUNCTION
//                 ****************

// **************************************************************************************

        // Function Declaration/Prototype

#include <stdio.h>
void basic_calc();// Function Declaration/Prototype
                  // It should be before Main Execution(int main).
                  // Because A function is Declared to tell a compiler about its exixtence.

void rectangle();

// **************************************************************************************


int main()
{
    int a; // here a is the variable in main function
    basic_calc();// Call to the Function (calling of function)
            // Also here is the communication between two functions is known as function communication.
            // In this Example here a communication between main function and declared function.
    rectangle();
    printf("\n%d", a);
    return 0;
}

// **************************************************************************************

        // Function Defination (function implementation) And Local Variable

// SCOPE : It is a region of the program where a defined variable can exist and beyond which cannot be 
//         accessed.

// LOCAL VARIABLE : Varibles which are inside a function or a block are called a LOCAL VARIABLE.
//                  They can only be accessed by the function they are declared in!
//                  They are inaccesible to the function outside the function they are declared in!

void basic_calc()
{// Block of code to get some task done is known as Function Defination (Actual implementation).
    int a,b; // here a and b are the variables of basic_calc function 
    printf("ENTER THE VALUE OF a : ");
    scanf("%d", &a);
    printf("ENTER THE VALUE OF b : ");
    scanf("%d", &b);
    printf("\nADD      %d + %d = %d",a,b,a+b);
    printf("\nSUB      %d - %d = %d",a,b,a-b);
    printf("\nMULTIPLY %d * %d = %d",a,b,a*b);
    printf("\nDIVIDE   %d / %d = %d",a,b,a/b);
    printf("\nMODULUS %d//%d = %d",a,b,a%b);
}
void rectangle()
{
    int a, b, c;
    printf("\nENTER THE SIDE 1 ");
    scanf("%d", &a);
    printf("\nENTER THE SIDE 2 ");
    scanf("%d", &b);
    c = a * b;
    printf("\nAREA OF RECTANGLE = %d sq", c);
}
