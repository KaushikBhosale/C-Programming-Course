// STATIC GLOBAL VARIABLE
//
// It is similar to global variable.
// The only difference is if we declare the variable with a static keyword outside the function,
// then it is known as a static global variable.
// This variable will be accessible throughout the program

#include <stdio.h>
int gb; // global variable.
static int stgb; // static global variable

void myfunc()
{
    gb = 1;
    stgb++;
    printf("\n\ngb in myfunc function : %d", gb);
    printf("\nstgb in myfunc function : %d", stgb);
}
int main()
{
    printf("\ngb in main function : %d", gb);
    printf("\nstgb in main function : %d", stgb);

    myfunc();
    printf("\ngb in main function : %d", gb);
    printf("\nstgb in main function : %d", stgb);

    gb = 4;
    printf("\n\ngb in main function : %d", gb);
    myfunc();
    printf("\ngb in main function : %d", gb);
    printf("\nstgb in main function : %d", stgb);

    return 0;
}


// PROPERTIES OF A STATIC VARIABLE.

// Static variable memory is allocated within a static variable.
// A static variable will retain the value even after they exit the scope.
// Static variable memory is available throughout the program.
// If we do not assign any value to the static variable, then the default value will be 0.