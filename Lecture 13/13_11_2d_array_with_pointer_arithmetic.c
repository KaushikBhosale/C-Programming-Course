//                       2D ARRAYS WITH POINTER ARITHEMETIC
//                       **********************************

// Array always consumes memory location in contiguous fashion/manner.

//                     C1 C2 C3
// int array[2][3] = {{22,77,27},    <-- R1
//                    {66,88,33}};   <-- R2
//  
//                            C1     C2      C3

//                 index     0,0     0,1     0,2  
//          Memmory block  [_22_]  [_77_]  [_27_]       <-- R1
//               Address    1000    1004    1008

//                 index     1,0     1,1     1,2  
//          Memmory block  [_22_]  [_77_]  [_27_]       <-- R2
//               Address    1012    1016    1020   

// Suppose address of A[0] is 1000 then the address of next variable in Array will be 1004 (if int type)
// because we know pointer always takes the base address and when it is incremented or decremented
// then it contain the address of next block but not of very next byte.

// Pointer when incremented always point to next block of its own type.
// When we add or increment in pointer than literal addition doesn’t take place instead of that
// it start pointing next block.

#include <stdio.h>
int main()
{
    int array[2][3] = {{1,2,3},{4,5,6}};
    int (*ptr)[3] = array;

// In this example, we have a 2D array a with 2 rows and 3 columns.
// We declare a pointer ptr of type int (*)[3], which points to the first row of the array.

// This is how we can use a pointer variable to a 2D array,
// So to navigate and access elements within the array.

// It means, Either we write &array or &array[0][0] or *array or ptr or *ptr.
// They all means that the first element of array or index 0 is being used or pointed by pointer.

    printf("\narray = %d",array);
    printf("\n*array = %d",*array);
    printf("\n&array[0][0] = %d",&array[0][0]);
    printf("\n(ptr) = %d",(ptr));
    printf("\n(*ptr) = %d",(*ptr));

/* NOTE : */ 
    printf("\narray = %d",array); // array[0] by default array[0][0] Address = 1000
    printf("\narray = %d",array + 0); // array[0] + 0 * (row) = array[0] by default array[0][0]
                            // Address =     1000 + 0 * (4*3) = 1000

    printf("\narray = %d",array + 1); // array[0] + 1 * (row) = array[1] by default array[1][0]
                            // Address =     1000 + 1 * (4*3) = 1012

// So to access the other Array variables Address we can simply do increment or decrements
// in pointer variable an can access other Array variables too.

    // printf("\n*array = %d",*array);
        // OR
    printf("\narray = %d",*(array + 0)); // array[0] + 0 = array[0][0] <-- NOTE This is not by default
                                         // Because it Points to 1st row 1st Element address.

    //                             ( ROW ) (COLUMN)         ADDRESS
// Like :     &array[0][0] = *(array + 0) +   0;      array[0][0] + 0 = 1000 + (0 * 4) 
//                   or    = *(ptr   + 0) +   0;                      = 1000
// R1 -->
//            &array[0][1] = *(array + 0) +   1;      array[0][0] + 1 = 1000 + (1 * 4)
//                   or    = *(ptr   + 0) +   1;                      = 1004
// ---------------------------------------------------------------------------------------
//            &array[1][0] = *(array + 1) +   0;      array[1][0] + 1 = 1012 + (0 * 4)    
//                   or    = *(ptr   + 1) +   0;                      = 1012
// R2 -->
//            &array[1][1] = *(array + 1) +   1;      array[1][0] + 1 = 1012 + (1 * 4)
//                   or    = *(ptr   + 1) +   1;                      = 1016

                    // POINT TO ADDRESS          (ROW)   (COLUMN)
    printf("\nElement at &arr[0][0]: %d",   *(ptr + 0) +   0    );
    printf("\nElement at &arr[0][1]: %d",   *(ptr + 0) +   1    );
    printf("\nElement at &arr[0][2]: %d",   *(ptr + 0) +   2    );

    printf("\nElement at &arr[1][0]: %d",   *(ptr + 1) +   0    );
    printf("\nElement at &arr[1][1]: %d",   *(ptr + 1) +   1    );
    printf("\nElement at &arr[1][2]: %d",   *(ptr + 1) +   2    );


// Now to access the other Array variables Value we can simply do increment or decrements
// in pointer variable an can access other Array variables too.

    // POINT TO VALUE            ( ROW  )    (COLUMN)
// Like :     &array[0][0] = *(*(array + 0) +   0);
//                   or    = *(*(ptr   + 0) +   0);
//                                                        <-- R1
//            &array[0][1] = *(*(array + 0) +   1);
//                   or    = *(*(ptr   + 0) +   1);
// ------------------------------------------------------------------
//            &array[1][0] = *(*(array + 1) +   0);
//                   or    = *(*(ptr   + 1) +   0;
//                                                        <-- R2
//            &array[1][1] = *(*(array + 1) +   1);
//                   or    = *(*(ptr   + 1) +   1);


                    // POINT TO VALUES          (ROW)   (COLUMN)
    printf("\nElement at arr[0][0]: %d", *(*(ptr + 0) +   0    ));
    printf("\nElement at arr[0][1]: %d", *(*(ptr + 0) +   1    ));
    printf("\nElement at arr[0][2]: %d", *(*(ptr + 0) +   2    ));
   
    printf("\nElement at arr[1][0]: %d", *(*(ptr + 1) +   0    ));
    printf("\nElement at arr[1][1]: %d", *(*(ptr + 1) +   1    ));
    printf("\nElement at arr[1][2]: %d", *(*(ptr + 1) +   2    ));
    // printf("\nElement at arr[1][2]: %d", **(ptr + 1) +   2    );


    printf("\n\nPOINTING ADDRESS PRINTING USING LOOP :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", *(ptr + i) + j);
        }
        printf("\n");
        
    }
    
    printf("\nPOINTING VALUE PRINTING USING LOOP :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", *(*(ptr + i) + j));
            // printf("\t%d", **(ptr + i) + j);
        }
        printf("\n");
     
    }

// ***************************************************************************************************

// NOTE : Declaring a POINTER VARIABLE TO POINT ADDRESS/VALUE IS NOT COMPULSORY
//        It depend on the Kind of working condions.
//        We can Point using array variable name too.

    int matrix[2][3] = {{100,222,333},{444,555,666}};

    printf("\n\nPOINTING ADDRESS PRINTING OF MATRIX USING LOOP :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", *(matrix + i) + j);
        }
        printf("\n");

    }
    
    printf("\nPOINTING VALUE OF MATRIX PRINTING USING LOOP :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t%d", **(matrix + i) + j);
        }
        printf("\n");

    }


    return 0;
}