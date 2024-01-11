
//                           VARIABLES, DATA TYPE AND CONSTANT
//                          **********************************

#include <stdio.h>

int main()
{ //DATA types ==> int=1, float = 4.9, char = 'A',double = 4.9999999(more precision than float)
    int a=10;               //here VARIABLES ( a, b, result, name, Name, c ) 
    float b=40.77,result;   // with VALUES are with different DATA TYPES (declaration and innitialisation)
    double d = 9.1;
    
    char name = 'K'; // NOTE char can store only 1 character

    // To store more characters
    char Name[] = "Kaushik Ajit Bhosale";// the (Name) variable is an array of characters (char[])
            //  use double quotes to store the string "Kaushik Ajit Bhosale" 
    
    const int c = 10; // constant which valus cannot be changed but variable value can be changed
    result = a + b + c;

    // NOTE SOME IMP FORMAT SPECIFIERS ARE USED TO PRINT DIFFERENT DATA
    // %d  for int
    // %f  for float (%.7f 7 decimal precision )
    // %lf for double (%.15lf 15 decimal precision)
    // %c  for char (name)
    // %s  for string

    printf("\n  int   a   = %d",a);
    printf("\nfloat   b   = %.1f",b);
    printf("\ndouble  d   = %.15lf",d);
    printf("\nchar name   = %c",name);
    printf("\nASCII 'K'   = %d",name);
    printf("\nchar Name[] = %s",Name);
    printf("\nMEMMORRY ADDRESS OF AN ARRAY char Name[] = %d",Name);
    printf("\n\nAddition %d + %f + %d = %.10f\n\n", a,b,c,result);


// scanf FUNCTION 
// **************
    int e,f;
    printf("\n Enter the value of e = : ",e);
    scanf("%d", &e);  // scanf function used to take input from the user 
                      // using various format specifier
                      // & is the address of the variable

    printf("\n Enter the value of e = : ",f);
    scanf("%d", &f);
    int add = e+f;
    printf("\nAddition of %d+%d=%d",e,f,add);

    return 0;
}


