//                1D ARRAY WITH POINTER ARITHMETIC
//                ********************************


// Array always consumes memory location in contiguous fashion/manner.

// int array[4] = {22,77,27,66};

//                 index     0        1       2      3
//          Memmory block  [_22_]  [_77_]  [_27_]  [_66_]
//               Address    1000    1004    1008    1012

// Suppose address of A[0] is 1000 then the address of next variable in Array will be 1004 (if int type)
// because we know pointer always takes the base address and when it is incremented or decremented
// then it contain the address of next block but not of very next byte.

// Pointer when incremented always point to next block of its own type.
// When we add or increment in pointer than literal addition doesn’t take place instead of that
// it start pointing next block.

#include<stdio.h>

int main()
{

int array[5] = {1,2,3,4,5};

int *p;

p = array;

// It means, Either we write &array or &array[0] or array.
// They all means that the first element of array or index 0 is being used or pointed by pointer.

// So to access the other Array variables Address we can simply do increment or decrements
// in pointer variable an can access other Array variables too.

// Like :     &array[0] = array = array + 0 = p = p + 0;
//                                1000 + (4*0) = 1000
//            &array[1] = p + 1;  1000 + (4*1) = 1004
//            &array[2] = p + 2;  1000 + (4*2) = 1008

    printf("\n\t\tADDRESS\n\t\t********\n");
    printf("\n&array[0] = %d,",&array[0]);
    printf("\narray     = %d,", array);
    printf("\narray + 0 = %d,", array + 0);
    printf("\n     p    = %d,", p);
    printf("\n   p + 0  = %d", p + 0);

    printf("\n\n&array[0]+1 = %d",&array[0]+1);
    printf("\narray + 1   = %d",array+1);
    printf("\n   p + 1    = %d",p+1);

    // array++ or array-- it is invalid it will throw error array is constant
    // p++ is valid. p is a pointer.
    // printf("\n   p++      = %d",p++); 
    // printf("\n   p--      = %d",p--); 
    // valid also it updates the address as ++ is pre/post increment/decrement

    // Also 
    // printf("\n   *(p++)      = %d",*(p++));

    printf("\n\n\t\tVALUES\n\t\t******\n");

    printf("\n*(&array[0]) = %d,",*(&array[0]));
    printf("\n*(array    ) = %d,",*( array));
    printf("\n*(array + 0) = %d,",*( array + 0));
    printf("\n*(     p   ) = %d,",*( p));
    printf("\n*(   p + 0 ) = %d", *(p + 0));

    printf("\n\n*(&array[0]+1) = %d",*(&array[0]+1));
    printf("\n   *(p + 1)    = %d",*(p+1));
    printf("\n*(array + 1)   = %d",*(array+1));

    return 0;
}