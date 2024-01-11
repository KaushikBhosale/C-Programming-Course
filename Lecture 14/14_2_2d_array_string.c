                            // 2D ARRAY STRINGS
                            // ****************

#include <stdio.h>

int main()
{
    char fruit_list[4][15] = {"jamun","grapes","apple","orange"};
    
    for (int i = 0; i < 4; i++)
    {
        puts(fruit_list[i]);
    }
    
    char emp_names[2][10];

    puts("Enter the employee names :");
    for (int i = 0; i < 2; i++)
    {
        gets(emp_names[i]);
    }

    puts("List of employee names:");
    for (int i = 0; i < 2; i++)
    {
        puts(emp_names[i]);
    }

    char single_char[2][10];

    puts("Input of single character:\n");
    for (int i = 0; i < 2; i++) {
        printf("ENTER ROW %d\n",i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the character at index (%d,%d) :",i,j);
            scanf(" %c", &single_char[i][j]);
            // include blank space before %c for proper execution of the code
        }
        single_char[i][9] = '\0'; // Null-terminate the array
        printf("\n");
    }

    printf("\nFormatted output:\n");
    for (int i = 0; i < 2; i++)
    {
        printf("ROW %d :",i);

        for (int j = 0; j < 10; j++) {
            printf("  %c", single_char[i][j]);
        }
        printf("\n");
    }

    return 0;
}