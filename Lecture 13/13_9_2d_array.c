                    // A Two-Dimensional array is like a MATRIX.
//                    ******************************************

// The two-dimensional array can be defined as an array of arrays.
// The 2D array is organized as matrices which can be represented as the collection of rows and columns.
// However, 2D arrays are created to implement a relational database lookalike data structure.

// syntax
    //    datatype variable_name[ rows ][ column ] = {{values},{values}};

    //     Example  int   array_name[3][5] = {{1,2,3,4,5},{6,7,8,9,10}};

//     Note Whenever row size and column size mention then values must should not excess.
//     From above example rows = 3, column = 5
//     Therefore only 15 or less than 15 elements can be stored.
//
//     Example  int array_name[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,22,34,4,55}}; valid
//
//     int   array_name[3][5] = {1,2,3,4,5,6,7,8,9,10,11,22,34,4,55}; valid but not a Right way
// 
//     Only declaration int matrix[3][5];
//
//      Invalid declaration
//
//      int d_array[3][]; invalid must mention column size.
//      int d_array[][4]; invalid if only column size to be mention
//                        then array should both declared and inisialised in one line.
//                        Example int d_array[][4] = {1,2,3,4,5,6,7};
// 



#include <stdio.h>

int main()
{   //    int d_array[3][]; invalid
    //     int d_array[][4]; invalid

    // int d_array[][2] = {1,2,3,4,5}; // valid
    // int matrix[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; // valid

    int matrix[3][5] = {{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15}};


    // Print  each element in matrix format
    for (int i = 0; i < 3; i++) // outer loop is for next rows
    {
        for (int j = 0; j < 5; j++) // inner loop is for to print/scan row
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Address of of eeach element
    for (int i = 0; i < 3; i++) // outer loop is for next rows
    {
        for (int j = 0; j < 5; j++) // inner loop is for to print/scan row
        {
            printf("%d\t", &matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    // TAKING VALUES FROM THE USER

    matrix[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the array data at index (%d,%d) : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\nUSER MATRIX\n\n\nRows/Columns\tcol 1\t\tcol 2\t\tcol 3\t\tcol 4\t\tcol 5\n");
    printf("---------------------------------------------------------------------------------------");

    for (int i = 0; i < 3; i++)
    {
        printf("\nrow %d",i);
        for (int j = 0; j < 5; j++)
        {
            printf("\t\t%d", matrix[i][j]);
        }
    printf("\n---------------------------------------------------------------------------------------");
    }


    
    return 0;
}

//                         DISADVANTAGES OF AN ARRAY
//                         ************************

// Poor time complexity of insertion and deletion.

// Wastage of memmorysince arrayare fixed in size.

// If there is enough space present in the memory but not in a contiguous form ,
// you will not be able to initialize your array.

// It is not possible to increase the size of the array, once you have declared the Array.