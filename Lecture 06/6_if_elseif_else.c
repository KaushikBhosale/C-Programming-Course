#include <stdio.h>
#include <conio.h>

    // 2] if ,else if, else

    // Instead of using multiple if statements, we can also use else if along with if,
    // thus forming an if - else if - else ladder.

int main()
{

    float a;
    printf("\nENTER THE NUMBER = ");
    scanf("%f", &a);

    if (a>0)
    {
        printf("\nENTERED NUMBER %f IS POSITIVE", a);
    }
    else if (a<0)
    {
        printf("\nENTERED NUMBER %f IS NEGATIVE", a);
    }
    else
    printf("\nENTERED NUMBER IS 0 IS NEITHER POSITIVE NOR NEGATIVE");

    printf("\n\nDONE");



    // LOGICAL OPERATORS
    // *******************

    // &&(AND)   BOTH conndition to be true = 1, if not then false = 0

    // ||(OR)   ONE conndition to be true = 1, if BOth conditions are false = 0

    // !(NOT)    REVERSE THE output  TRUE = 0 , FALSE = 1 

    int num;

    printf("\nEnter the Number :");
    scanf("%d", &num);

    if(num>=1 && num<=100){
        printf("\nYOUR ENTERED NUMBER %d IS BETWEEN 1 TO 100 ",num);
    }
    else
        printf("YOUR ENTERED NUMBER %d IS NOT BETWEEN 1 TO 100 ",num);

    if(num>=1 || num<=100){
        printf("\nYOUR ENTERED NUMBER %d IS BETWEEN 1 TO 100 ",num);
    }
    else
        printf("\nYOUR ENTERED NUMBER %d IS NOT BETWEEN 1 TO 100 ",num);
    

    char ch;

    printf("\nEnter the character :");
    scanf("%c", &ch);

    printf("%c ASCI VALUE %d", ch,ch);

    if (ch>=48 && ch<=57 ){
        printf("\n IT IS NUMBER ");
    }

    else{
        printf("\n NOT A NUMBER");
    }

    return 0;
}