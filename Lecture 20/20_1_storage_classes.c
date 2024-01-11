                                // STORAGE CLASSES
                                // ***************

/*DMA :

An Statically Allocated variable or Array has a fixed size in memory.
Dynamic memory allocation is the process of allocation of memory space at the run time.
Memory allocation to a program in a typical architecture can be broken down into 4 segments.

1] CODE (TEXT)
2] STATIC / GLOBAL VARIABLES (DATA SEGMENT AND BLOCK STARTED BY SYMBOL SEGMENT)
3] STACK (Region of memory used for storing function call information and local variables
          in a last-in, first-out (LIFO) fashion.)
4] HEAP (DYNAMIC MEMORY ALLOCATION)

*/


/* WHAT IS STORAGE CLASSES ?

"A storage class defines scope, following Atributes in variable in C Prog.

1] SCOPE ( Where will this variable be available ? ) In main function, user define function,
                                                     or in entire program

2] DEFAULT INITIAL VALUE ( If we dont initialize the variable explicitly ( only declaration of variable )
                           what will be the DEFAULT INITIAL VALUE ? ) GARBAGE VALUE or Any other Value.

3] LIFETIME ( How much the Variable's duration of life is ? )

There are four types of storage classes depending upon the type of variables they store.
The following are the type of storage classes. You can guess their stored variables by their names:

1] Automatic Variables
2] External Variables
3] Static Variables
4] Register Variables

NOTE: Each storage class differs, with respect to scope, default initial value,
      and a lifetime of a variable.

*/

#include <stdio.h>
#include "20_extern.c"//To use extern GLOBAL variable which is declared and initialized in 20_extern.c file.


// auto int a; error: file-scope declaration of 'a' specifies 'auto'
// int a; This is not by default auto variable as it is External Variable (global variable).

// int ex = 100; error: redefinition of 'ex' as ex is defined in 20_extern.c file

int gb; // External variable or global variabel



void myfunc(int x, int y)
{
    gb = x + y + gb;
}


void myfunc1(int x, int y)
{
    // extern int gb; // optional as (gb) declared before the function defination.
    gb = 600;
    ex = 200;
    extern int var;
    var = y + var;
}

int var= 100; // Declared global variable but after creating functions 
              // so to use this variable in those functions we have to use extern function.


int main()
{
/* 1] Automatic Variables : auto STORAGE CLASS

KEYWORD for Automatic Variables is auto.

Scope : Local to the functions body they are defined in ( main function , user defined function )
        in short AUTO variables are similar to  LOCAL variables.

Default Value : Garbage Value.

LifeTime : Till the end of the function they are defined in ( main function , user defined function )

NOTE : A variable defined without any storage class specification is by default an Automatic Variables.
int a; or auto int a; are same.

*/

    auto int a;
    // or int a; // by default auto variable.
    printf("\nValue auto variale a : %d(garbage value)\n", a);
    auto int d = 8; // can be initialized 
    printf("\nValue auto variale d : %d\n", d);

/* 2] External Variables : 

i) External STORAGE CLASS
*************************

They are same as GLOBAL variables.
Scope : Global to the program they are defined.

Default Innitial Value : 0

LifeTime : These variables are declared outside any functions.

They are available throughot the lifetime of the program
A global Variable can changed by any function in the program.
int gb; Written outside any function will tell the compiler that (gb) is a global variable.
It is Recommended to minimmize the use of unnecessary global variables in a program.

ii) Extern Storage Class
************************

extern KEYWORD is used to inform C compiler that a given variable is declared somewhere else.
Using extern will not allocate the space for the variable.
example :                                   |
                                            |
file_1.c                                    | file_2.c
____________________________________________|___________________________________________________
                                            |
#include<stdio.h>                           | #include<stdio.h>
#include<file_2.c>                          |
                                            | int c = 300;
int a = 100;                                | 
                                            | // if this file want to be include in other file then  
int main()                                  | // it should not include main function and 
{                                           | // as it will be redefination error.  
    prinf("\nThe value of a : %d", a);      | // function can defined but the name of the function
                                            | // should not be declare or defined in the file where
// extern int b=3; error cannot initialize  | // it is included.
                   using extern             |
                                            |
    extern int b;                           |
    prinf("\nThe value of b : %d", b);      |
    prinf("\nThe value of c : %d", c);      |
                                            |
    b = 400;                                |
    c = 500;                                |
    prinf("\nThe value of b : %d", b);      |
    prinf("\nThe value of c : %d", c);      |
    return 0;                               |
}                                           | 
                                            |
int b = 200;                                |
____________________________________________|___________________________________________________
output                                      | output
                                            |___________________________________________________
The value of a : 100                        |  
The value of b : 200                        |  
The value of c : 300                        |  
The value of b : 400                        |  
The value of c : 500                        |  
____________________________________________|
*/

// // code of  i) External STORAGE CLASS   ii) Extern Storage Class
// //
// //  i) External STORAGE CLASS
// // 
//     printf("\ngb : %d", gb);     // 0
//     myfunc(5,5);
//     printf("\ngb : %d", gb);     // 10
//     myfunc(2,3);
//     printf("\ngb : %d\n",gb);    // 15
// // 
// //  ii) Extern Storage Class
// // 
//     // int ex = 45; // no error as local variabel precedence
//     // printf("\nThe value of ex : %d", ex);
// //
//     printf("\nThe value of ex : %d", ex);  // 1000 as it is initialized 100 in 20_extern.c file
// //
//     myfunc1(0,10);
//     printf("\nThe value of ex  : %d", ex);  // 200
//     printf("\nThe value of var : %d", var); // 110
//     printf("\nThe value of gb  : %d", gb);  // 600
// // 
//     extern int h; // As (h) Global variable declared after the main function
//     printf("\nthe value of h : %d", h);
// //

/* 3] Static Variables : static STORAGE CLASS

Scope : Local to the block they are defined in ( main function , user defined function )

Default Initial Value : 0

LifeTimee : They are available throughout the lifetime of the program.

A static variable remains under the existence for the use within the function for the entire program run.

static int b; writen inside the function will tell the compiler that b is a static variable.

It is recommended to minimize the use of unneccessary static variable in a program
as it take memory till the end of the program.

*/

/* 4] Register Variables : register STORAGE CLASS

Scope : Local to the function they are declared in 

Default Initial Value : Garbage Value

LifeTime : They are available till the  end of function block,in which the variable is defined.

Register variable request the COMPILER
to store the variable in the CPU REGISTER [part of computer processor]
instead of storing in memory to have faster access
Generally this done for the variables which are being used frequently.

After request the compiler checks is their storage available in CPU REGISTER
if available it stores the variable in CPU REGISTER
but if not then the compiler decides to make auto storage class variable which stores in memory.

NOTE : If We use ragister we cannot know the that the variable is stored in CPU REGISTER or memory.

register KEYWORD is used before datatype to declare.

*/

    register int faster_variable = 9000;
    printf("\n\nRegister variable : %d\nDone", faster_variable);
    return 0;
}

int h;

