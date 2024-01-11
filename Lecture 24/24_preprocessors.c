                                // PRE-PROCESSORS IN C PROGRAMMING
                                // *******************************

/* Quick Recap PRE-PROCESSORS IN C PROGRAMMING

> Compiler converts textual form of a C program into an Executable.
> There are four phases for a C program to become an Executable

  PRE-PROCESSORSING >>>>>>> COMPILATION >>>>>>> ASSEMBLY >>>>>>> LINKING 
   ************               *******            *****             ***

PRE-PROCESSORSING (#) :

> Removal of comment
> Expansion of MACROS
> Expansion of include flies

COMPILATION :

> Assembly level instruction are generated.

ASSEMBLY :

> Assembly level instruction are converyed to machine code (binary language (01))
> .o or .exe file is created
> But function calls are not resolved.

LINKING :

> function calls are resolved ( Links the function implementation )

*/

/* C PRE-PROCESSORS ( WHAT IS C PRE-PROCESSORS )

> C pre-processor comes under action before the actual compilation process
> C PRE-PROCESSORS is not a part of compiler
> It is a text substitution tool
> All PRE-PROCESSORS commands begin with a hash symbol(#).


*/

/* PRE-PROCESSORS COMMANDS

> #define  -- This will substitute a pre-processor macro.

> #include -- This directive will insert a particular header from another file.

> #undef   -- Using #undef, we can undefine a pre-processor macro.                       

> #ifdef   -- It will return true if this macro is defined.

> #ifndef  -- The #ifndef directive checks whether a macro is not defined.

> #if      -- It will test if a compile time condition is true.

> #else    -- It will execute if (if block is false)

> #elif    -- Using #elif, we can define #else and #if in one statement

> #endif   -- It will end pre-processor conditional

> #error   -- Using #error, we can print the error message on stderr.

> #pragma  -- It will issue the special commands to the compiler, using a standardized method.

*/

                                //  #include AND #define PRE-PROCESSORS IN C
                                //  ****************************************

/* #include DERECTIVE

> The #include directive causes the pre-processor to fetch the contents of another file 
  into the source code. It will add the content at the point where the #include directive is found.
> The #include directive is typically used to include the C header files for the C functions 
  that are held outside of the current source file.
> A header file is a file which contains the extension ".h".
  This extension has C macro definitions and C function declarations
  to be shared between several source files. Header files are of two types:

  1. files that the programmer writes
  2. files that come with the compiler.

We request to use a header file in our program by including it with the 
C preprocessing directive #include, like as we have seen the stdio.h header file,
which comes along with the compiler

TWO COMMON #include FORMATS

1. #include <Header_File.h> // The angle brackets says to look in the STANDARD SYSTEM DIRECTORIES.
2. #include "Header_File.h" // The quotation marks says to look in the CURENT DIRECTORIES.

*/


/* #define DERECTIVE

> The #define pre-processor directive is used to define pre-processor variable,
  constant or macro. Macro operate much like functions. 
> The #define can use any basic data type.
> This pre-processor directive can be used to replace a word with a number globally.
  It acts as if an editor did a global search-and-replace edit of the file.

USING #Ddefine FOR DEBUGGING

> We can use the #define directive for the debugging purpose.
> We can have print statements that will be only active while debugging
> We can protect them in in a "ifdef" block as follows:

*/

/* MACROS USING #define

 We can also create macros using #define 
 MACROS operate muck like functions, but because they are expanded in place and are generally faster.

*/

/* PRE-DEFINED MACROS

1. __DATE__ : The current as character literal in "MM DD YYYY" format.
2. __TIME__ : This contais the currentb time as character literal in "HH:MM:SS" format.
3. __FILE__ : The current file name as a String Literal.
4. __LINE__ : The current line number as a decimal constant.
5. __STDC__ : Defined as 1(one) when the compiler compiles with the ANSI standard.

*/


#include <stdio.h>
#include <stdlib.h>  // include
#define PI 3.14  // define
#define SQUARE(r) r * r // MACRO



int main()
{

    float  var = PI;

    printf("\nThe value of var %.2f", var);
    printf("\nThe Area of Circle (radius = 4)  = %.2f", var * SQUARE(4));

    printf("\nFile name is : %s",__FILE__);
    printf("\nTodays DATE is : %s",__DATE__);
    printf("\nTime Now is DATE is : %s",__TIME__);
    printf("\nLine Number is : %d",__LINE__);
    printf("\nANSI is : %d",__STDC__);

#undef PI
    // printf("\nAfter undef PI \nThe value of PI %.2f", PI); // Error as PI is undefined


# define PI 3.14  // PI is defined 

#ifdef PI 
    printf("\nPI is defined");
#else
    printf("\nPI is not defined");
#endif


#ifndef A     // A is defined 
    printf("\nA not is defined");
#else 
    printf("\nA is defined");
#endif

  return 0;

}



