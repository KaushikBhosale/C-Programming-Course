//                              POINTER ARITHMETIC
//                              ******************


// Pointers arithmetic is not same as normal arithmetic.
// i.e. if you want to add 1 to any no. then you will get that no. after adding 1 in it.
// But in Pointers it is a bit different as:

// Base Address : The first byte address of any variable is known as base address.

// It means suppose you have int type variable then it’s size in my architecture is 4 byte
// (It may vary in yours) then 4 consecutive blocks will be created in RAM.
// So when we will point it with any pointer variable at that time the address of 1 block
// of 4 will come in that pointer variable.
// It means base address is the first block address of any data type variable.

#include<stdio.h>

int main()
{
    int a = 33, *p;

// We can’t multiply & divide an address with integer value.

// &a * 5;  // Not Possible
//  p / 5;  // Not Possible

// ASSUMING &a = 1000;

// &a + 1;  // It is possible [1000 + 1 = 1004]
//  p + 1;  // It is possible [1000 + 1 = 1004]
// &a - 1;  // It is possible [1000 - 1 = 996]
//  p - 1;  // It is possible [1000 - 1 = 996]

    p = &a;

    printf("\np = &a : %d",p);


// Now you may think why we got 1004 as an output after adding 1 in 1000.
// So as we know a is an integer.
// So it’ll take 4 bytes of memory & we know pointer always takes base address,
// but it access other bytes also by itself only.

// So, when we will add 1000+1 then from 1000 to 1003 all address are allocated to int a.
// So the next block of memory is after 1003 i.e. 1004. So that’s how Pointers arithmetic is done.

                                    // p + 1                =  1000 +   4     = 1004

                                    // p + (sizeof(int) * 1)=  1000 + [(4) * 1] = 1004

    printf("\n\np + 1 : %d",p + 1); // p + 1 
                                    // p + (sizeof(int) * 1)
    printf("\n&a+1 : %d",&a+1);

    printf("\n\np + 2 : %d",p + 2); // p + 2 
                                    // p + (sizeof(int) * 2)
    printf("\n\np + 2 : %d",p - 1); // p - 2 
                                    // p - (sizeof(int) * 1)

    printf("\n\n*(p - 10) : %d",*(p - 10)); // it will not print value as it not stored it will
                                            // print garbage value

    printf("\n\nvalue at *p that a: %d",*p);


// We can’t add, multiply or divide two addresses. (Subtraction is possible)

int a1 = 55, b1 = 88, *p1 = &a1, *q1 = &b1;

// &a1 * &b1;   // Not Possible
// &a1 + &b1;   // Not Possible
//  p1  * q1;   // Not Possible

// p1 - q1      // possible
                // calculates the difference between the two pointer values.

printf("\n\np1 : %d", p1);
printf("\nq1 : %d", q1);
printf("\nDifference between two address p1-q1 : %d", p1-q1);
printf("\nDifference total size from     p1-q1 : %d", (p1-q1) * sizeof(int));



    return 0;
}