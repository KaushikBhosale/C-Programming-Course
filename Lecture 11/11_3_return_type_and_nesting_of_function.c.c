// *********************************************************************************************

                // FUNCTION WITH RETURN TYPE AND NESTING OF FUNCTION
//                   *********************************************


        // A Function whose data type value is been return is known as function with return type.

        // Nesting of function is a function can be used in another function.

// *********************************************************************************************

                // Function Declaration/Prototype

#include<stdio.h>
int add(); // In declaration use the return type of data
           // The basic data types are (int, float, char ,double)
float average();

// *********************************************************************************************

                // Call to the Function (using of function)

int main()
{
    int f;
    float d;

    f = add();
    printf("\nF = %d",f); // Here the value of c return and so f = c.
    d = average();
    printf("\nAverage of F = %.2f",d); // Here the value of avg return and so d = avg.
}
// *********************************************************************************************

        // Function Defination (function implementation)

int add()
{
    int a=3 , b = 6,c = a + b;
    return c;// Here the value which want to return have to be declare or inisialisied
             // and should match the return type of data
             // Example return c; c is int 
             //         return 9;
             //         return 0;
             //         return 'a'; char
             //         return 5.8; float
}

float average()
{
    float b = 2.0, avg;
    avg = add()/b; // add function is used in average function .
    return avg;    // And returns the value of average.
}
