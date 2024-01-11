                                    // POINTERS
//                                     ********
//
// Before discussing about pointers let me tell you when we define and initialize a variable
// at that time we come to know about these things :
//
// Memory block i.e. variable get some space in RAM and we can think of that as a block.
// Name of memory block or Variable’s name
// Content of that block i.e. value in that variable
// Address of memory block i.e. unique address which allows us to access that variable.
//
// We can print address of any variable by using printf function as :
// printf(“%d”,&variable_name)
//
//
//
// 
// Pointer is variable that strores addres of another variable. 
// It can be of type int, char, array, function, or any other pointer.
// Its size depends on architecture.
// Pointers in C Language can be declared using *(asterisk symbol).
// 

#include <stdio.h>

int main()
{
    int a,b;

    // As only variable is declared but not inisialised it will give the garbage value.
    // but as varible is declared it means a name is given to the addres.
    // To get addres (&) operator is used.

    printf("\nvalue of a = %d",a);// garbage vale
    printf("\naddress of a = %d",&a);// Address of a
    printf("\nvalue of b = %d",b);// garbage vale
    printf("\naddress of b = %d",&b);// Address of b

    a=3,b=4;

    // Now a and b are inisialises so it will give a value output.
    // Values are stored in addres which are named by declaration.

    printf("\nvalue of a = %d",a);// value
    printf("\naddress of a = %d",&a);// Address of a
    printf("\nvalue of b = %d",b);// value
    printf("\naddress of b = %d",&b);// Address of b

    int x = 100;

    printf("\nVALUE OF x after assigning = %d", x);
    printf("\nAddress of x = &x  = %d", &x);
    
    // Pointer is variable that strores addres of another variable. 
    // It can be of type int, char, array, function, or any other pointer.
    // Its size depends on architecture.
    // Pointers in C Language can be declared using *(asterisk symbol).
    // To store address of another variablee this is how the a pointer variable is created.
    int *p; 

    // p = 789; error as p can only store address of another varible.

    printf("\n\nVALUE OF p befor assigning(garbage value) = %d", p);
    printf("\nVALUE OF *p befor assigning(garbage value) = %d", *p);
    printf("\nAddress of p = %d", &p);

    // Here in variable p address of x varible is stored as p is a pointer variable.
    p = &x;

    printf("\n\nValue of p = [Address of x] &x  = %p", p);// Address of x

    // * is the dereference operator(also called as indirection operator) used to get value
    // at the given addres.

    // *p = [(*) = value] at [(p) = stored address(&x)]
    //    = value at address of x
    //    = 100
    printf("\nValue of *p = value of x = %d", *p); // value of x = 100

    printf("\nAddress of p = %d", &p);// Address of p

    int **q;

    printf("\n\nVALUE OF q befor assigning(garbage value) = %d", q);
    printf("\nVALUE OF *q befor assigning(garbage value) = %d", *q);

    // printf("\nVALUE OF **q befor assigning(garbage value) = %d", **q); // crash
    // As both levels of pointers are uninitialized,
    // this will also lead to undefined behavior and could cause a crash.

    // Here in variable q, address of x varible is stored, as q is a pointer variable.
    q = &p;

    printf("\n\nValue of q = [Address of p] &p  = %d", q); // Addess of p
    printf("\nAddress of q = %d", &q);// address of q

    // *q = [(*) = value] at [(q) = stored address (&p)]
    //    = value of p = address of x
    //    = &x
    printf("\nValue of *q = %d", *q); // adress of x
    
    // **q = [(*) = value] at [(*) = value] at [(q) = stored address (&p)]
    //     = [(*) = value] at value of p = address of x
    //     = [(*) = value] at &x
    //     = 100
    printf("\nValue of **q = %d", **q);// value of x

    // Null Pointer :

    // A pointer that is not assigned any value but NULL is known as NULL pointer.
    // In computer programming NULL pointer is a pointer that does not point to any object,
    // variable or function.
    // We can use it to initialize a pointer variable,
    // when that pointer variable isn’t assigned any valid memory address yet.
    
    int **ptr = NULL;
    printf("\nNULL %d",ptr);
    return 0;
}