                        //  ARRAYS

// Array is a collection of data items of the same data type and also known as subscript variable.
// Items are stored at contiguous memory locations in Arrays.

// It can also store the collection of derived data types such as pointers, structures etc.
// The C Language places no limits on the number of dimensions in an array
// i.e. we can create any no. of dimension array E.g. 2d array, 3d array etc.
// Also array is user defined data type.


// Most Commonly used dimensions of Array :

// A one-dimensional array is like a list.
// A two-dimensional array is like a table.

// Some texts refer to 
// one-dimensional arrays as {vectors} and two-dimensional arrays as {matrices}
// Use the general term {Arrays} when the no. of dimensions is unspecified or unimportant.

// PROPERTIES OF AN ARRAY

// Data in an array is stored in contiguous memory locations in RAM.
// Each element of an array is of same size
// i.e. their data types are same so memory consumed by each is also same.

// Example:
// int takes 4 bytes to store 
//  in array it stored at continuous[sequence] memory locations.

//          int subjects[5]={  44,  77,  33,  99,  78}
                  // Index-->   0   1     2    3    4
// Address always gives         ^   ^     ^    ^    ^
// the starting value           |   |     |    |    |
// so it stored in address    100  104, 108, 112, 116

// Any element of the array with given index can be accessed very quickly
// by using its address which can be calculated using the base address and the index.

// Index No. – It is the special type of no. which allows us to access variables of Arrays
// i.e. index no. provides a method to access each element or Address of an array in a program.

// ************************************************************************************************

                    // A one-dimensional array is like a list.
//                    ****************************************

#include <stdio.h>

int main()
{
    int array1[5]={10,20,30,40,50};// <== one d array
    array1[3]=80;

        printf("\narray1 : %d Address : %d",array1[0],&array1[0]);
        printf("\narray1 : %d Address : %d",array1[1],&array1[1]);
        printf("\narray1 : %d Address : %d",array1[2],&array1[2]);
        printf("\narray1 : %d Address : %d",array1[3],&array1[3]);
        printf("\narray1 : %d Address : %d\n",array1[4],&array1[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("\narray1 %d : %d Address : %d",i,array1[i],&array1[i]);
    }

    printf("\n\n");

    int array2[5]; // Array Manupulation using Loop.

    for (int i = 0; i < 5; i++)
    {
        printf("\nENTER THE DATA array2 at index(%d): ", i);
        scanf("%d",&array2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\narray2 data at index (%d) : %d Address : %d",i,array2[i],&array2[i]);
    }
    int c; // Normal Arithmatic operation on Array elements

    printf("\n%d", array1[0]+array2[4]); 
    printf("\n%d", array1[0]-array2[2]);
    printf("\n%d", array1[0]/array2[3]);
    printf("\n%d", array1[0]*array2[1]);


    int add_array[5]; // Addition of 2 Arrays And getting New Array Data.
    printf("\nArray1 + Array2\nArray 3 = ");
    for (int i = 0; i < 5; i++)
    {
        add_array[i] = array1[i] + array2[i];
        printf("%d\t", add_array[i]);
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