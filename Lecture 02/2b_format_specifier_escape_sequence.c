#include <stdio.h>
#include <conio.h>

// FORMAT SPECIFIER AND ESCAPE SEQUENCE

int main()
{   // FORMAT SPECIFIER
    // IT IS A WAY TO TELL THE COMPUTER WHAT TYPE OF DATA IS IN IN A VARIABLE
    // DURING TAKING INPUT, DISPLAYING OUTPUT TO THE USER
    
    // FORMAT SPECIFIER     TYPE

    //      %c              char
    //      %d %4d          int
    //      %f %0.4f        float
    //      %lf             double
    //      %Lf             long
    //      %s              string

    int a =1;
    printf("\na= %d",a);
    float f = 2.0;
    printf("\nf= %f",f);
    double d = 33333.77877;
    printf("\nd= %lf",d);
    long L = 2345677700;
    printf("\nL= %Lf",L);
    char c = 'A';
    printf("\nc= %c",c);
    printf("\nASCI VALUE %c = %d",c,c);
    char ch[] = "Kaushik";
    printf("\nc= %s",ch);


    // ESCAPE SEQUENCE 

    // AN ESCAPE SEQENCE IN C PRG IS A SEQ OF CHARACTERS
    // IT DOESNT REPRESENT ITSELF WHEN USED INSIDE STRING LITERALOR CHARACTER
    // IT IS COMPOSED OF TWO OR MORE CHARACTERS STARTING WITH BACKLASH \.
    // FOR EX \n = NEW LINE.

    printf("\n new line ");
    printf("\n\thorizantal tab");
    printf("\nBackspace: 3\b2\b1\bBlastoff!"); // Output :Backspace: Blastoff!
    printf("\n123456789  Coding And Develop projects\rLETS START");
    //LETS START Coding And Develop projects

    printf("\n\\backlash");
    printf("\n\'single quote"); // single quote ' may not require escape sequence character
    printf("\n\"double quote");
    printf("\n\?question mark"); // question mark ? may not require escape sequence character
    printf("\nNULL =\0HELLO WORLD"); // Output :NULL =
    printf("\n\123 = OCTAL NUMBER");
    printf("\n\x48\x65\x6C\x6C\x6F = USING HEXADECIMAL NUMBER");
    printf("\nBEEP ALARM \a\a\a");// not supported to this Machine/laptop
                                  // system-specific configurations or limitations
 
    return 0;
}