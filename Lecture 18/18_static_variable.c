//                              STATIC VARIABLES
//                              ****************

// LOCAL AND GLOBAL VARIABLE
// 
// SCOPE : It is a region of the program where a defined variable can exist and beyond which cannot be 
//         accessed.
// LOCAL VARIABLE : Varibles which are inside a function or a block are called a LOCAL VARIABLE.
//                  They can only be accessed by the function they are declared in!
//                  They are inaccesible to the function outside the function they are declared in!
// 
// GLOBAL VARIABLE : These are the variables defined outside the main method.
//                   Global variables are accessible throughout the entire program from any function.
//                   If a local and global variable has the same name, the local variable will take 
//                   preference.

// STATIC VARIABLE 
// 
// Static variable are variable which has a property of preserving their values
// even when they go out of the scope.
// They preserve their value from the previous scope and are not initialized again(cannot reinitialized).
// Static variable remains in memory throughout the span of the program.
// static variable are initialized to 0 if not initialized explicitly.
// In C, Static variable can only initialized using constant literals.


#include <stdio.h>
#include <string.h>

// Local Static Variable
// 
// When a variable with a static keyword is declared inside a function is known as a static local variable
// The scope of the static local variable will be the same as the local variables,
// but its memory will be available throughout the execution of the program.

int myfunc()
{
    static int x; // Local static variable
    // In C, Static variable can only initialized using constant literals.

    printf("\n\nafter call : %d", x);
    x++;
    return x;
}

int main()
{
    static int a;// initialized as 0
    printf("\n static a : %d", a);

    printf("\ncall 1 myfunc %d", myfunc());
    printf("\ncall 2 myfunc %d", myfunc());

    // static int b = myfunc(); // It will throw error initializer element is not constant
    // In C, Static variable can only declared and initialized using constant literals.

    static int b; // b initialized as 0 As b is static variable
    b = myfunc();
    printf("\nthe value of b : %d",b);
    return 0;
}