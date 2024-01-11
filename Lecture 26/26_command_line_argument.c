                            // COMMAND LINE ARGUMENT IN C
                            // **************************

/* WHAT ARECOMMAND LINE ARGUMENT IN C

> Comand line argument is an important topic in C programming 
> Sometime we need to pass arguments from the command line to the program a set of inputs
> Comand line argument are used to supply parameters to the program when it is invoked
> It is most used when you need to control your program from console/terminal
> These arguments are passed to the main() method 

> A command-line utility is a way of giving operating system instructions using lines of texts.
  Command-line programs operate via command line or PowerShell.
  It will interact with a command-line script.

*/

/* 



*/

/* argc:

> If we divide the keyword into two parts, the first will be 'agr', a short form for arguments.
  The second one will be 'c,' which stands for count.
> Some argc as a whole stands for argument count,
  which means that it stores the total number of arguments passed to the utility.
> The first argument count is reserved for the executable program's name,
  and the next ones are for the arguments passed to the program

*/

/* argv:

Same as in argc, the arg stands for argument, but he ‘v’ stands for vector.
Vector can be said as a one-dimensional array in this case because argv stores the pointer to the arguments
passed to the program in an array of strings.

Note: argv does not store the actual argument, but the pointer to that argument.

Examples:

Suppose that we have a .exe executable, named xyz.
We are passing two arguments to xyz, i.e., a and b.

            xyz.exe a b

Now the value of argc will be three as there are two arguments.
And argv will store pointers xyz, a, and b.

To create a command-line utility, we must pass int argc and char const *argv[] to the program as arguments.
Then we can make any kind of programs that take arguments from the terminal to display the result
instead of accessing the compiler every time.

We can create many applications using command-line utility such as a calculator,
as one of the simplest example

*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value og argc is %d",argc);

    for (int i = 0; i < argc; i++)
    {
        printf("\nThis is argument no : %d has value of %s",i,argv[i]);
    }
    
    return 0;
}
