//                              1D ARRAYS AND VOID ARGUMENT FUNCTION
//                              ************************************

// BY DECLARING ARRAY AS A PARAMETRE IN THE FUNCTION.

#include <stdio.h>
void create_array(int [], int);// (int []) <-- Array Parametre Function
void show_array(int [], int);
void array_addition(int [],int [],int [],int);

int main()
{
    int array1[5];
    create_array(array1,5);
    show_array(array1,5);

/*
 If you change the value of the array in the FUNCTION,
 it gets REFLECTED in the MAIN FUNCTION.
In short values are assigned to all array index in void function at the array[ind] address
 So all the values Are return at specific index. 
*/

    printf("\n\narray1[0] = %d", array1[0]);

    int array2[5]={10,10,10,10,10}, array3[5];

    array_addition(array1,array2,array3,5);
    printf("\nData of Array 3\n");
    show_array(array3,5);

    return 0;
}


void create_array(int a[], int size)
{
    printf("\nEnter the Array Data\n\n");
    for (int i = 0; i < size; i++)
    {
    printf("Enter the Array Data at index(%d) : ", i);
        scanf("%d", &a[i]);
    }
}
void show_array(int a[], int size)
{
    printf("\n\nData of Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
void array_addition(int x[],int y[],int z[],int size)
{
    for (int i = 0; i < size; i++)
    {
        z[i]=x[i]+y[i];
    }  
}