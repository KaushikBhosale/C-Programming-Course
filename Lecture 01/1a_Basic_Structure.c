#include <stdio.h> 
//  PREPROCCESIVE DIRECTORY 
// Instruction that tells the compiler to include the standard input/output library (stdio.h)

int main() // This is the main function declaration.It is the starting point of the program
// Here int is the return type of function 
// And the return type is according to the functions activity 
// i.e. if it is giving an integer variable as a result then return type should be int.
{

// And contains a set of instructions enclosed within curly braces ({}).

printf("HELLO WORLD");//THIS IS STATEMENT NOTE ALL THE STATEMENTS ARE TERMINATED WITH A SEMI-COLON ( ; )

// printf is the function call instruction from the standard library used to print the output
// to print the string "Hello, World!" to the console

printf("\nTO GET\n1. filename.i\n2. filename.s\n3. filename.o");
printf("\nGive command in Terminal\n>> gcc -Wall -save-temps filename.c -o filename\n");

return 0;
//  This is a return statement instruction.
//  It specifies that the main function should return the value 0 to the operating system,
//  indicating successful program execution.

}
