//                              UNIONS
//                              ******
//
// Just like Structures, the union is a user-defined data type.
// 
// The difference bteween STRUCTURES and UNIONS lies in the fact that in structures,
// each member has its own storage locations,
// whereas members of union uses a single shared memory location.
// 
// This single shared memory location is equal to the size of its largest data member.
// Syntax And Difference between Structure and union
// 
//                                          We use keyword union to define a union.
//                                         |
// struct students                         |   union students 
// {                   // size of member   |   // {                   // size of member
//     char name[15];  //   20             |   //     char name[15];  //   20  <-- Largest Data member
//     int std_id;     //   4              |   //     int std_id;     //   4
//     int marks;      //   4              |   //     int marks;      //   4
// };                                      |   // };
//  size of structure   =   28             |   //     size of union    =   20
//                                         |
// 
// All the members in union share the same memory location.
// The union is a data type that allows different data belong to different data types,
// to be stored in the same memory locations.
// Advantages of using a union is that it provides an efficient way of reusing the memory location,
// as only one of its members can be accessed at a time.
// A union is used in the same way we declare and use a structure.
// 
// DECLARING AND ACCESSING UNION MEMBERS
// 
// Like structures, we acces any member by using the membe acces operator (.) in unions.
// 

#include <stdio.h>
#include <string.h>

typedef struct struct_students
{                  // size of member
    char name[20]; // 20
    int std_id;    // 4
    int marks;     // 4
}sst;

typedef union union_students
{                  // size of member
    char name[20]; // 20
    int std_id;    // 4
    int marks;     // 4
}ust;

int main()
{   
    sst s1 = {"kaushik",1,44};
    printf("\n size of STRUCTURE : %d bytes", sizeof(struct struct_students));
    printf("\n size of STRUCTURE : %d bytes", sizeof(sst));
    printf("\n size   of     s1  : %d bytes\n", sizeof(s1));

    // ust u1 = {"Anmol",9,44}; invalid as union cannot handle all members at once.
    ust u1;
    printf("\n size   of   UNION : %d bytes", sizeof(union union_students));
    printf("\n size   of   UNION : %d bytes", sizeof(ust));
    printf("\n size   of     u1  : %d bytes\n", sizeof(u1));

    // Only one member can be initialized in union
    strcpy(u1.name,"Anmol");
    u1.std_id = 6;
    u1.marks = 69;
    printf("\nName   : %s", u1.name);
    printf("\nstd_id : %d", u1.std_id);
    printf("\nMarks  : %d\n", u1.marks);
    // Only one member can be accessed at a time in union
    // And Altering the value of any member will affect other member's values.

    // SO
    strcpy(u1.name,"Anmol");
    printf("\nName   : %s", u1.name);
    u1.std_id = 6;
    printf("\nstd_id : %d", u1.std_id);
    u1.marks = 69;
    printf("\nMarks  : %d", u1.marks);

    return 0;
}


// WHAT ARE THE THE SIMILARITIES BETWEEN STRUCTURE AND UNION.
// 
// Structure and union are user-defined data types used to store data of different types.
// The members of structure and union can be objects of any type,
// including other structures and unions or arrays.
// A union or a structure can be passed by value to functions and returned by value by functions.
// ‘.’ operator is used for accessing union and structure members.

// WHAT ARE DIFFERENCES BETWEEN STRUCTURES AND UNION.
// 
// The keyword union is used to define a union and a keyword struct is used to define the structure
// Each member within a structure is assigned a unique storage area of location
// whereas memory allocated is shared by individual members of the union.
// Individual members can be accessed at a time in structure
// whereas only one member can be accessed at a time in union
// Altering the value of the member will not affect other members of the structure,
// whereas altering the value of any member will affect other member's values.
// Several members of a structure can be initialized at once,
// whereas only one member can be initialized in union

