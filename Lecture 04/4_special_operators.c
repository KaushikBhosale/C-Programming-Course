#include <stdio.h>

int main()
{
    int a, b;
    float c;
    
// SPECIAL OPERATOR
// ****************

    // 1) INCREAMENT OPERATOR (++)

        printf("\n\nINCREAMENT OPERATOR\n");
        a = 0;
        printf("\nTHE VALUE OF a = %d",a); // a = 0

        a++; // a = 1
        printf("\nTHE VALUE OF a++ = %d",a);

        ++a; // a = 2
        printf("\nTHE VALUE OF ++a = %d",a);

        // i) PRE_INCREAMENT OPERATOR

        a = 0;b = 0 ;
        b = ++a; // a = 1 , b = 1
        printf("\n\nPRE_INCREAMENT\n");
        printf("\nTHE VALUE OF a = %d",a);
        printf("\nTHE VALUE OF b = ++a = %d",b);

        // ii) POST_INCREAMENT OPERATOR

        a = 0, b = 1;
        b = a++; // a = 1 , b = 0

        printf("\n\nPOST_INCREAMENT\n");
        printf("\nTHE VALUE OF a = %d",a);
        printf("\nTHE VALUE OF b = a++ = %d",b);


    // 2) DECREAMENT OPERATOR (--)

        printf("\n\nDECREAMENT OPERATOR\n");
        a = 0;
        printf("\nTHE VALUE OF a = %d",a); // a = 0

        a--; // a = -1
        printf("\nTHE VALUE OF a = %d",a);

        --a; // a = -2
        printf("\nTHE VALUE OF a = %d",a);

        // i) PRE_DECREAMENT OPERATOR

        a = 0;b = 0 ;
        b = --a; // a = -1 , b = -1
        printf("\n\nPRE_DECREAMENT\n");
        printf("\nTHE VALUE OF a = %d",a);
        printf("\nTHE VALUE OF b = --a = %d",b);

        // ii) POST_DECREAMENT OPERATOR

        a = 0, b = 1;
        b = a--; // a = -1 , b = 0

        printf("\n\nPOST_DECREAMENT\n");
        printf("\nTHE VALUE OF a = %d",a);
        printf("\nTHE VALUE OF b = a-- = %d",b);



// MISCELLANEOUS OPERATORS
// **********************
    
    //      sizeof    Returns the size of the variable (sizeof(a))
    printf("\nsize of variable int   a = %d byte", sizeof(a));
    printf("\nsize of variable float c = %d byte", sizeof(c));
    printf("\nsize of data type double = %d byte", sizeof(double));
    printf("\nsize of data type   char = %d byte", sizeof(char));

    //          &     Retrurns the actual address of the variable (&a)
    //          *     Pointer To a Variable  (*a)
    //          ?:    Conditional Expression




    return 0;
}