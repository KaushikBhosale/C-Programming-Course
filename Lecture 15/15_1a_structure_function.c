//                                      STRUCTURES FUNCTIONS
//                                      ********************

#include <stdio.h>
#include <string.h>

struct students
{
    char name[15];
    int std_id, marks;
};
//   Just like we mention data type here mention struct structure_name as it is user defined data type.
void create_students_details(int size,struct students details[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the ID of next Student no : ");
        scanf("%d", &details[i].std_id);

        getchar();
        printf("\nEnter the name of next Student : ");
        gets(details[i].name);

        printf("\nEnter the marks of the next Student : ");
        scanf("%d", &details[i].marks);
    }
}

void show_students_details(int size,struct students details[size])
{
    printf("\nStudent id\tName  \t\tMarks\n");
    for (int i = 0; i < size; i++)
    {
        printf("\n\t%d\t%s\t\t%d",details[i].std_id,details[i].name,details[i].marks);
    }
    
}

int main()
{
    struct students class_1_students[3];
    create_students_details(3,class_1_students);
    show_students_details(3,class_1_students);


    return 0;
}
