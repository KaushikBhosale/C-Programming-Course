//                              2D ARRAYS WITH FUNCTION
//                              ***********************

#include <stdio.h>
void matrix_void();

// void create_matrix(int,int,int [][2]);// must inisialise column value while declaring function
//                                          Also the passed argument column size must match.
//                                          it will work only for column size 2.

// So
void create_matrix(int rows,int columns,int matrix[rows][columns])
{
    printf("\nEnter the matrix Data \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the matrix Data at index (%d,%d) : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void show_matrix(int rows,int columns,int matrix[rows][columns])
{
    printf("\nRows/Columns\t");
    for (int i = 0; i < columns; i++)
    {
        printf("col %d\t", i);
    }
    
    printf("\n---------------------------------------------------------------------------------------");

    for (int i = 0; i < rows; i++)
    {
        printf("\nrow %d\t",i);
        for (int j = 0; j < columns; j++)
        {
            printf("\t%d", matrix[i][j]);
        }
    printf("\n---------------------------------------------------------------------------------------");
    }
}

void add_matrix(int rows,int columns,int matrix1[rows][columns],int matrix2[rows][columns],int result_matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main()
{
    // matrix_void();

    int mat32[3][2];
    // create_matrix(3,2,mat32);
    // printf("\n\nmat32 matrix is");
    // show_matrix(3,2,mat32);

    int arr1[3][2] = {{1,2},
                      {3,4},
                      {5,6}};
    int arr2[3][2] = {{1,2},
                      {3,4},
                      {5,6}};
    int res[3][2];
    
    printf("\n\narr1 matrix is");
    show_matrix(3,2,arr1);

    printf("\n\narr2 matrix is");
    show_matrix(3,2,arr2);

    add_matrix(3,2,arr1,arr2,res);
    
    printf("\n\nRESULT OD arr1 + arr2");
    show_matrix(3,2,res);
    return 0;
}


void matrix_void()
{
    int rows, columns;

    printf("\nEnter number of Rows : ");
    scanf("%d", &rows);
    printf("\nEnter number of Columns : ");
    scanf("%d", &columns);
    int matrix1[rows][columns], matrix2[rows][columns];

    printf("\nEnter the matrix 1 Data \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the matrix Data at index (%d,%d) : ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n\nEnter the matrix 2 Data \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the matrix Data at index (%d,%d) : ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\n\nUSER MATRIX 1\nRows/Columns\t");
    for (int i = 0; i < columns; i++)
    {
        printf("col %d\t", i);
    }
    
    printf("\n---------------------------------------------------------------------------------------");

    for (int i = 0; i < rows; i++)
    {
        printf("\nrow %d\t",i);
        for (int j = 0; j < columns; j++)
        {
            printf("\t%d", matrix1[i][j]);
        }
    printf("\n---------------------------------------------------------------------------------------");
    }

    printf("\n\nUSER MATRIX 2\nRows/Columns\t");
    for (int i = 0; i < columns; i++)
    {
        printf("col %d\t", i);
    }
    
    printf("\n---------------------------------------------------------------------------------------");

    for (int i = 0; i < rows; i++)
    {
        printf("\nrow %d\t",i);
        for (int j = 0; j < columns; j++)
        {
            printf("\t%d", matrix2[i][j]);
        }
    printf("\n---------------------------------------------------------------------------------------");
    }

    int result_matrix[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }
    
    printf("\n\nRESULT OF MATRIX (1 AND 2)\nRows/Columns\t");
    for (int i = 0; i < columns; i++)
    {
        printf("col %d\t", i);
    }
    
    printf("\n---------------------------------------------------------------------------------------");

    for (int i = 0; i < rows; i++)
    {
        printf("\nrow %d\t",i);
        for (int j = 0; j < columns; j++)
        {
            printf("\t%d", result_matrix[i][j]);
        }
    printf("\n---------------------------------------------------------------------------------------");
    }

}




