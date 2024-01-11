//                        DYNAMIC MEMORY ALLOCATION FOR STRUCTURES
//                        ****************************************


#include <stdio.h>
#include <stdlib.h> // To use functions for DMA

struct Student {
    int id;
    char name[50];
    float grade;
};

int main() {

//     // malloc
// //
//     struct Student *studentPtr; // Declare a pointer to a struct Student
// //
//     studentPtr = (struct Student *)malloc(sizeof(struct Student)); // Allocate memory
// //
//     (studentPtr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
// //
//     // Input data into the dynamically allocated structure
//     printf("Enter student ID: ");
//     scanf("%d", &(studentPtr->id));
// //
//     getchar();
//     printf("Enter student name: ");
//     gets(studentPtr->name);
// //
//     printf("Enter student grade: ");
//     scanf("%f", &(studentPtr->grade));
// //
//     // Display the entered data
//     printf("\nStudent ID: %d\n", studentPtr->id);
//     printf("Student Name: %s\n", studentPtr->name);
//     printf("Student Grade: %.2f\n", studentPtr->grade);    
// //
//     // Free the dynamically allocated memory
//     free(studentPtr);
// //

// ***************************************************************************************************
// ***************************************************************************************************

 // calloc
    struct Student *studentPtr; // Declare a pointer to a struct Student
 //
    studentPtr = (struct Student *)calloc(3, sizeof(struct Student)); // Allocate memory
    
    (studentPtr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
 //
 //
    for (int i = 0; i < 3; i++)
    {
    printf("Enter student ID: ");
    scanf("%d", &(studentPtr[i].id));
 //
    getchar();
    printf("Enter student name: ");
    gets(studentPtr[i].name);
    
    printf("Enter student grade: ");
    scanf("%f", &(studentPtr[i].grade));
    }
   // Input data into the dynamically allocated structure
 //
 //
    for (int i = 0; i < 3; i++)
    {
 // Display the entered data
    printf("\nStudent ID: %d\n", studentPtr[i].id);
    printf("Student Name: %s\n", studentPtr[i].name);
    printf("Student Grade: %.2f\n", studentPtr[i].grade);
    }


// ***************************************************************************************************
// ***************************************************************************************************

 // realloc
 //
    studentPtr = (struct Student *)realloc(studentPtr,2 * sizeof(struct Student)); // Allocate memory
    
    (studentPtr == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
 //
 //
    for (int i = 0; i < 2; i++)
    {
    printf("Enter student ID: ");
    scanf("%d", &(studentPtr[i].id));
 //
    getchar();
    printf("Enter student name: ");
    gets(studentPtr[i].name);
    
    printf("Enter student grade: ");
    scanf("%f", &(studentPtr[i].grade));
    }
   // Input data into the dynamically allocated structure
 //
 //
    for (int i = 0; i < 2; i++)
    {
 // Display the entered data
    printf("\nStudent ID: %d\n", studentPtr[i].id);
    printf("Student Name: %s\n", studentPtr[i].name);
    printf("Student Grade: %.2f\n", studentPtr[i].grade);
    }
    
    
   // Free the dynamically allocated memory
    free(studentPtr);
   //
    return 0;
}
