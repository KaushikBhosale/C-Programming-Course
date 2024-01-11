//                              1D ARRAYS AND POINTER ARGUMENT FUNCTION
//                              ***************************************

// Declaring function with pointer in the parameter:
    // By Passing Arrays Base Address to the Function.


#include <stdio.h>

void create_array(int *, int);
void show_array(int *, int);
void add_array(int *,int *,int *,int);
float average_array(int *,int); // RETURN POINTER ARGUMENT FUNCTION


int main()
{
    int array[5];

    // create_array(array,5);
    // show_array(array,5);
    
    // OR
    int *ptr=array; // ptr = &array[0]

    // create_array(ptr,5);
    // show_array(ptr,5);

    // OR

    // create_array(ptr,5);
    // show_array(array,5);

    // OR

    // create_array(array,5);
    // show_array(ptr,5);

    int test1[5] = {1,1,1,1,1},
        test2[5] = {4,4,4,4,4},
        total[5];

    printf("\n\nAddition of Two Array\n");
    show_array(test1,5);
    show_array(test2,5);
    add_array(test1,test2,total,5);
    printf("\nTotal ");
    show_array(total,5);

    float average_total = average_array(array,5);
    printf("\n\nAverage of array = %.2f", average_total);

    return 0;
}

void create_array(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the index %d : ", i);
        scanf("%d", (p+i));//inputs value at array[0] then in next iteraton
                           //inputs value at array[1] then in next iteration
                           //   ""   continues till the last index of array.
    }
    
}

void show_array(int *p, int size)
{
    printf("\nArray DATA : ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", *(p+i));// prints value at array[0] 
                               // prints value at array[1]
    }
}

void add_array(int *p1,int *p2,int *p3,int size)
{
    for (int i = 0; i < size; i++)
    {
        *(p3+i) = *(p1+i) + *(p2+i);// total[0] = test1[0] + test[0]
                                    // total[1] = test1[1] + test[1]
    }
}

float average_array(int *p,int size)
{
    float avg=0;
    for (int i = 0; i < size; i++)
    {
        avg = avg + (*(p+i));
    }
    avg = avg/size;
    return avg;
}