#include<stdio.h>
    //      TYPE CASTING 

    // Typecasting is a way to convert one data type into another one.
    // It is also known as data conversion or type conversion.

    // syntax: (type)value;

        // C Language Provides two methods of type casting :

            // Implicit type casting
            // Explicit type casting


int main()
{
            // Implicit type 
            
    // Implicit type casting means conversion of data types from one to another
    // without losing its original meaning or sense.

    // In this type casting program automatically converts the variable from one data type to other.
    // It follows strict rules in converting data type of variables
    // as it always converts lower data types to higher ones.

        int a = 3;
        float b = 54;
        float c = 54/10;

        printf("\nthe value of a is %d", a);
        printf("\nthe value of b is %.2f", b);// output 54.00 implicit type casting
        printf("\nthe value of c is %.2f", c);// output 10.00 implicit type casting


            // Explicit type casting

    // Explicit type casting means conversion of data type from one to another forcefully by programmer.
    // It is user defined conversion.

        c = (float)54/10; // explicit type casting
        char ch = 'A'; 
        printf("\nthe value of int b is %d", (int)b); // explicit type casting 
        printf("\nthe value of c is %.2f", c);// output 10.4 
        printf("\nCharacter is %d",(int) ch); // output 65 explicit type casting

    return 0;
} 
