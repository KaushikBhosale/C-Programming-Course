//                       2D ARRAYS AND POINTER ARGUMENT FUNCTION
//                       ***************************************

#include <stdio.h>

void create_2d_array(int rows, int cols,int (*a)[cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the array data at %d,%d : ",i,j);
            scanf("%d", ( *(a+i)+j ) );
        }
        printf("\n");
    }
}

void show_2d_array(int rows, int cols,int (*a)[cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *(*(a+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int array[2][3];

    create_2d_array(2,3,array);

    printf("\nCREATED ARRAY IS :\n");
    show_2d_array(2,3,array);


    return 0;
}
