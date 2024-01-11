#include <stdio.h>
#include <conio.h>
//   INPUT / OUTPUT FUNCTIONS 

// 1] FORMATTED ==> printf, scanf
// 2] UNFORMATTED INPUT / OUTPUT FUNCTIONS

int main()
{
// 1] FORMATTED ==> printf, scanf

    char name, Name[7];
    // printf("\nEnter the name : ");
    // scanf("%c", &name);
    // printf("\nname : %c", name);

    // printf("\nEnter the Name : ");
    // scanf("%s", &Name);
    // printf("\nName : %s", Name);



// 2] UNFORMATTED INPUT / OUTPUT FUNCTIONS WORKS ONLY ON CHARACTER

    // INPUT       OUTPUT       Inisialises              include in Library
// -----------------------------------------------------------------------------
    // getchar     putchar      single character              stdio.h
// -----------------------------------------------------------------------------
    // getche      putch        single character              conio.h
    // getch                    single character              conio.h 
// -----------------------------------------------------------------------------
    // gets        puts       multicharacter character        stdio.h
    
    printf("\nENTER THE name (getchar) : ");
    name = getchar(); // displays both input/ output
    printf("\nDisplay after Enter Key : ");
    putchar(name);
    
    printf("\n\nENTER THE name (getche) : ");
    name = getche(); // after input it immeadiatly displays output without user press enter
    printf("\nDisplay Without Enter Key : ");
    putch(name);

    printf("\n\nENTER THE name (getch) : ");
    name = getch(); // after typed it immeadiatly displays output without user press enter
    printf("\nOnly Display Without Enter Key : ");
    putch(name);

// NOTE : putchar and putch is same type of function 
//        but only differenece
//        is putchar function is from stdio.h Library
//        and putch function is from is conio.h Library

    // printf("\nEnter the Name : ");
    // gets(Name);
    // printf("\nUsing %%s Name : %s", Name);
    // printf("\n\nusing puts Name : ");
    // puts(Name);


// We can also pass only one argument in character form by a developer only in output functions.

    printf("\n");
    putchar('U');

    printf("\n");
    putch('T');


    printf("\n");
    puts("Lets Construct");

    return 0;
}