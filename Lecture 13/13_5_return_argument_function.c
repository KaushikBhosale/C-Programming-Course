//                              1D ARRAYS AND RETURN ARGUMENT FUNCTION
//                              ***************************************

#include <stdio.h>

void show_array(int [], int);
float average_array(int [], int);
int add(int,int);


int main()
{
    int array1[5] = {1,2,3,4,6}, array2[5]={10,10,10,10,10}, a,b , array3;

    show_array(array1,5);
    show_array(array2,5);

    printf("\n\nResult \nData of Array : ");
    for (int i = 0; i < 5; i++)
    {
        a = array1[i];
        b = array2[i];
        array3=add(a,b);
        printf("%d\t", array3);
    }

    float avg_array1 = average_array(array1, 5);
        printf("\nAverage = %.2f\t", avg_array1);

    return 0;
}


void show_array(int a[], int size)
{
    printf("\n\nData of Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
float average_array(int a[], int size)
{
    float avg=0;

    for (int i = 0; i < size; i++)
    {
        avg = avg + a[i];
    }

    avg = avg/size;

    return avg;
}
int add(int x,int y)
{
    int c;
    c = x + y;
    return c;
}