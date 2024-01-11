//                                      STRUCTURES
//                                      **********
// 
// STRUCTURES are the user defined datatype in C.
// Using structures allows us to combine data of different types of data together.
// It is used to create a complex datatype which contains diverse information
// like diferent types of information(integer,floating,character).
// 
// Suppose we want to store information of 10000 employees working at xyz company.
// 
// 1] Emp_id
// 2] Name
// 3] Address
// 4] Email id
// 
// Now if create using array 
// Emp_id[10000]
// Name[10000]
// Address[10000]
// Email id[10000]
// 
// So we require 40000 varibles that will take long time to store also large memmory to complex code.
// Clearly we need some user defined data type which contains only information.
// 
// SYNTAX structure to be created before main function using struct keyword,
// there are two types of structures.
// 
// struct structure_name              |          struct structure_name
// {                                  |          {                    
//      "Structure_member_name"       |               "Structure_member_name"
// }                                  |          };                   
// structure_variables;               |          // Variable can be created in functions
//                                    |
// int main()                         |                    int main()
// {                                  |                    {
//    structure_variable = { }        |                        structurename structure_variable = { }
// }                                  |                    }
//                                    |                   
//                                    |                   


#include <stdio.h>
#include <string.h>

struct students
{                  // size of member
    char name[20]; // 20
    int std_id;    // 4
    int marks;     // 4
};
// STRUCTURE SIZE : The size of structure is total of all individual members size.
                    // 20 + 4 + 4 = 28.
// 
// The size of a struct in C is determined by the sizes of its individual members
// and any padding added for memory alignment.
// So the size can be greater than total of all individual members size.

int main()
{
    struct students s1 = {"kaushik",1,50};
    // struct students s1;

// ACCESSING STRUCTURE MEMBERS
// 
// Array Elements are accessed using subscript variable.
// In similar fasion, structure members are accessed using dot (.) operator.
// (.) is called as structure member operator.
// To access the member of the structure, we use this operator between "structure_variable" &
// "Structure_member_name".

    // s1.std_id = 1;
    // // s1.name = "kaushik"; invalid because it cannot inisialise after the declaration.
    // strcpy(s1.name,"kaushik      ");
    // s1.marks = 50;

    printf("\nStudent id\tName  \t\tMarks\n");
    printf("\n\t%d\t%s\t\t%d",s1.std_id,s1.name,s1.marks);

    struct students s2,s3,s4;

    s2.std_id = 2;
    strcpy(s2.name,"Chinmay      ");
    s2.marks = 70;

    s3.std_id = 3;
    strcpy(s3.name,"Anmol        ");
    s3.marks = 88;
    
    printf("\n\t%d\t%s\t%d",s2.std_id,s2.name,s2.marks);
    printf("\n\t%d\t%s\t%d",s3.std_id,s3.name,s3.marks);

    // printf("\nEnter The Id of thye Student : ");
    // scanf("%d", &s4.std_id);

    // getchar();// Consume the newline character left in the input buffer
    // printf("\nEnter The name of thye Student : ");
    // gets(s4.name);

    // printf("\nEnter The marks of thye Student : ");
    // scanf("%d", &s4.marks);

    // printf("\n\t%d\t%s\t%d",s4.std_id,s4.name,s4.marks);

// **************************************************************************************************

    printf("\nstructure variable as an stud[]\n");
//            *******************************

    struct students stud[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nEnter the ID of student : ");
    //     scanf("%d", &stud[i].std_id);

    //     getchar();
    //     printf("\nEnter the Name of student : ");
    //     gets(stud[i].name);

    //     printf("\nEnter The marks of thye Student : ");
    //     scanf("%d", &stud[i].marks);
    // }
    
    // printf("\nStudent id\tName  \t\tMarks\n");

    // for (int i = 0; i < 5; i++)
    // {
    // printf("\n\t%d\t%s\t\t%d",stud[i].std_id,stud[i].name,stud[i].marks);
    // }

// ******************************************************************************************************
//
// STRUCTURE SIZE
// **************
//
// struct students
// {                  // size of member
//     char name[15]; // 20
//     int std_id;    // 4
//     int marks;     // 4
// };
// STRUCTURE SIZE : The size of structure is total of all individual members size.
                    // 20 + 4 + 4 = 28.
// 
// The size of a struct in C is determined by the sizes of its individual members
// and any padding added for memory alignment.
// So the size can be greater than total of all individual members size.


    printf("\nSize struct student(structure manstd_idd block size) : %d", sizeof(struct students));

    printf("\nSize s1       : %d", sizeof(s1));
    printf("\nSize s1.name  : %d", sizeof(s1.name));
    printf("\nSize s1.id    : %d", sizeof(s1.std_id));
    printf("\nSize s1.marks : %d\n", sizeof(s1.marks));

    printf("\nSize stud            : %d", sizeof(stud));
    printf("\nSize stud[1]         : %d", sizeof(stud[1]));
    printf("\nSize stud[1].name    : %d", sizeof(stud[1].name));
    printf("\nSize stud[1].std_id  : %d", sizeof(stud[1].std_id));
    printf("\nSize stud[1].marks   : %d", sizeof(stud[1].marks));

// ***************************************************************************************************

    printf("\nSTRUCTURE ADDRESS\n");
//            *****************

    printf("\nADRESSS &s1       : %d", &(s1));
    printf("\nADRESSS &s1.name  : %d", &(s1.name));
    printf("\nADRESSS &s1.id    : %d", &(s1.std_id));
    printf("\nADRESSS &s1.marks : %d\n", &(s1.marks));

    printf("\nADRESSS &stud            : %d", &(stud));

    // printf("\nADRESSS &stud[1]         : %d", &(stud[1]));
    // printf("\nADRESSS &stud[1].name    : %d", &(stud[1].name));
    // printf("\nADRESSS &stud[1].std_id  : %d", &(stud[1].std_id));
    // printf("\nADRESSS &stud[1].marks   : %d", &(stud[1].marks));

    for (int i = 0; i < 5; i++)
    {
        printf("\nADRESSS &stud[%d]         : %d",i, &(stud[i]));
        printf("\nADRESSS &stud[%d].name    : %d",i, &(stud[i].name));
        printf("\nADRESSS &stud[%d].std_id  : %d",i, &(stud[i].std_id));
        printf("\nADRESSS &stud[%d].marks   : %d",i, &(stud[i].marks));    
    }

// ****************************************************************************************
    struct students s5;
    struct students *pstruct = &s5;

    // (*pstruct).std_id = 23

// ARROW OPERATOR
// This Arrow operator (->) is used to access members of a structure when you have a pointer to that structure.
// It's used to dereference the pointer and then access the specified member of the structure.

    pstruct->std_id = 23; // Better way
    strcpy(pstruct->name,"ujjaiy");
    pstruct->marks = 77;

    printf("\n\t%d\t%s\t\t%d", pstruct->std_id,pstruct->name,pstruct->marks);

    pstruct = &s1;

    printf("\nENTER THE id : ");
    scanf("%d", &pstruct->std_id);

    getchar();
    printf("\nENTER THE name : ");    
    gets(pstruct->name);
    printf("\nENTER THE marks : ");    
    scanf("%d", &pstruct->marks);


    printf("\n\t%d\t%s\t\t%d", pstruct->std_id,pstruct->name,pstruct->marks);
    printf("\n\t%d\t%s\t\t%d",s1.std_id,s1.name,s1.marks);

    return 0;
}

// ADDITIONAL FEATURES OF STRUCTURES :-
// 
    // We can assign the values of a structure variable to another structure variable of the same type
    // using the assignment operator.
//
    // Structure can be nested within another structure.
//
    // We can pass the structure variable to a function. We can pass the individual structure elements
    // or the entire structure variable into the function as an argument.
//
    // We can have a pointer pointing to a struct just like the way we can have a pointer pointing to an int,
    // or a pointer pointing to a char.

// WHERE ARE STRUCTURES USEFUL ?
//
    // Structures can be used for a variety of purposes like:
//
    // Structures are used to store a large amount of data.
    // They are used to send data to the printer.
    // For placing the cursor at an appropriate position on screen, we can use structure.
    // It can be used in drawing and floppy formatting.
    // We use structures in finding out the list of equipment attached to the computer
 
// SUMMARY :-
    // In this tutorial, we have learned about structures in C.
    // Structures are usually used when we want to store dissimilar data together.
    // Its members can be accessed through a structure variable using a dot (.) operator.
    // We can declare many structure variables for same structure
    // and memory will be allocated for each separately.
