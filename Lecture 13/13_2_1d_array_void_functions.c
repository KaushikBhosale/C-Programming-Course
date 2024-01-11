//                              1D ARRAYS AND VOID ARGUMENT FUNCTION
//                              *************************************

#include <stdio.h>
void create_array_of_size_5();
void create_array_of_size_5()
{
    int array[5];
    printf("\nEnter the Array Data\n\n");
    for (int i = 0; i < 5; i++)
    {
    printf("Enter the Array Data at index(%d) : ", i);
        scanf("%d", &array[i]);
    }
    
    printf("Data of Array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
}
int main()
{
    create_array_of_size_5(); // values cannot return in main function
    return 0;
}