// *********************************************************************************************

                // FUNCTION WITH RETURN TYPE and Arguments
//              *********************************************


// *********************************************************************************************

                // Function Declaration/Prototype

#include<stdio.h>

float average(int a ,int b, int c);
int swap(int,int);

// *********************************************************************************************

                // Call to the Function (using of function)

int main()
{
    float d;
    int t = 4, o = 7,temp;

    d = average(10,30,40);
    printf("\nAverage of d = %.2f",d); // Here the value of avg return and so d = avg.


    printf("\nvalue before swaping %d, %d",t,o);
    t=swap(t,o);
    o=swap(t,o);
    printf("\nvalue after swaping %d, %d",o,t);

}
// *********************************************************************************************

        // Function Defination (function implementation)

float average(int a ,int b, int c)
{
    float d = 3.0, avg;
    avg = (a+b+c)/d; // function is used to calc three numbers average.
    return avg;      // And returns the value of ave.
}
int swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    return a; // return value can be express multiple times but the only first return value is returned
    return b; // And Not possible to return more than 1 value

    // so to return two values call by referal method is used
    // for that pointer method is required 1st to implement.
}












































