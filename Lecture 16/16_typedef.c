//                                      TYPE DEF
//                                      ********
//
// WHAT IS typedef in C ?
// A typedef is a keyword that is used to assign alternative names to existing datatypes.
// We use typedef with user defined datatypes, when names of the datatypes become slightly complicated
// to use in programs.
// Typedefs can be used to :
// Provide the clarity in the code
// it makes easier to change the underlying data types that you use
// Typedefs makes the code more clear and easier to modify.
// 
//  Following is the syntax for using typedef,
// 
// typedef <previous_name> <alias_name>

#include<stdio.h>
#include<string.h>

typedef struct students
{
    char name[15];
    int std_id, marks;
}std; // NOTE : std is not Variable it is structure student datatype short name given using typedef.

int main()
{
    typedef int n; // Now we have given a different name for integer datatype
                   // we can use either int or n datatype for integer datatype.

    n a = 5,b = 7,c = 6;
    printf("\na = %d, b = %d, c = %d,a + b = %d",a,b,c,a+b);

    // Similarly we can use different name for every datatype.

// There are various applications of typedef. The following are the applications of the typedef.

// Typedef can be used with an array mostly with multi-dimensional array.
// It will increases the readability.
// As we know, the typedef can be implemented for defining a user-defined data type with a specific name
// and type. We can also use a typedef with structures of C language.
// 
// typedef struct students
// {
//     char name[15];
//     int std_id, marks;
// }std;
// 
// Old method to Declare Variable of structure
    // struct students s1;

// With the help of typedef we can Declare Variable of structure 
    std s1;
    strcpy(s1.name,"kaushik");
    s1.std_id = 1;
    s1.marks =60;

    printf("\n\nstudent id : %d\n    Name   : %s\n   Marks   : %d\n",s1.std_id,s1.name,s1.marks);

// Also Lets see for pointer :
// 
    // int* p1,p2;
    // p1 = &a;
    // p2 = &b; Here p2 is integer variable this will throw an error as it can only store values
    //          but p1 is pointer variable
    //          So we can create a Pointer datatype with the help of typedef by which
    //          we can declare multiple pointer variable without *.


    typedef int* intptr;
    intptr p1,p2;
    p1 = &a;
    p2 = &b;

    printf("\nAddress of a = %d",p1);
    printf("\nAddress of b = %d",p2);

    typedef int array5[5];
    array5 five_num = {99,33,44,77,78};
    for (n i = 0; i < 5; i++)
    {
        printf("\nnum = %d", five_num[i]);
    }

    typedef char charray[];
    charray freinds = {'k','c','u','a','k'};
    for (n i = 0; i < 5; i++)
    {
        printf("\nchar = %c", freinds[i]);
    }
    printf("\nfreind : %s", freinds);

    charray x = "kaushik";
    printf("\nfreind : %s", x);

    return 0;
}

// ADVANTAGES OF typedef
// 
// Typedef increases the readability of the code.
// If we are using structure and function pointer in our code, it will increase the readability of code.
// With the help of typedef, we can use the same name for the different types in different scopes.
// In the case of structure, if we use the typedef then we do not require to write struct keyword
// at the time of variable declaration.
// Typedef increases the portability of the code.