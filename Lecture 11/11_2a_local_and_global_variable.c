//                              LOCAL AND GLOBAL VARIABLES
//                              **************************
//
// SCOPE : It is a region of the program where a defined variable can exist and beyond which cannot be 
//         accessed.
// LOCAL VARIABLE : Varibles which are inside a function or a block are called a LOCAL VARIABLE.
//                  They can only be accessed by the function they are declared in!
//                  They are inaccesible to the function outside the function they are declared in!

// GLOBAL VARIABLE : These are the variables defined outside the main method.
//                   Global variables are accessible throughout the entire program from any function.
//                   If a local and global variable has the same name, the local variable will take 
//                   preference.
//                   Also if global variable is not initialized(only declared),
//                   then by default it initialises as 0.

#include <stdio.h>

int gb = 100; // Global VAriables

int myfunc(int a)
{
    int loacl = 55;
    a = a + 1;

    printf("\nmy func of local : %d", loacl); // valid as b is a local variable and accessed in the 
                                        // in a scope where it is declared.
    
    printf("\nin my func Gloabal gb %d", gb); // can accessed in any scope as it is declared globaly.
    gb = gb + 1;

    int gb = 300;
    // If a local and global variable has the same name, the local variable will take preference.
    printf("\nmy func of Local gb %d", gb); 
    
    return a; 

}

int func2(int gb) // FORMAL PARAMETER : These variable are treated as local variables with in a function.
{//                                     This variablees take precedence over a global variable.
    printf("\n\nin my func2 gb %d", gb);
    gb = 5000;
    printf("\nin my func2 gb %d", gb);
    return gb;
}

int main()
{   
    int a = 0;
    printf("\nValue of a : %d", a);
    a = myfunc(a);
    printf("\n\nValue of a : %d", a);
    // printf("\nValue of a : %d", loacl); invalid as b is a local variable

    printf("\nthe value of Gloabal gb %d", gb); // can accessed in any scope as it is declared globaly. 


    int gb = 700;
    // If a local and global variable has the same name, the local variable will take preference.
    printf("\nthe value of Main gb %d", gb);

    printf("\nvalue of a %d",func2(a));
    return 0;
}