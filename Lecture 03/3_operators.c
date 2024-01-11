#include <stdio.h>

// OPERATOR are the particular symbols used to perform various operations on operand

int main()
{
    // UNARY OPERATOR = These operator needs single(1) operand (value)
    //  default (+), -,sizeof(a), ++, --, !

    // BINNARY OPERATOR = These operator needs Two(2) operands (values)
    // +, -, *, %, /, &&, ||, <, >, etc.

    // TERNARY OPERATOR = These operator needs Three(3) operands (values)
    // ?:



// ARITHMETICAL OPERATORS
// **********************

// +, -, *, /, %  .
// NOTE for modulus(%) both operands require to be of int data type
// ALSO int and int = int
         // float and int = float/int as per developer requirement
         // float and float = float

    int a = 5 ,  b = 7;
    float c = 4.4, d = 5.9;
    printf("\nADD      a+b = %d",a+b);  // int   and  int = int
    printf("\nSUB      d-c = %f",d-c);  // float and float= float
    printf("\nMULTIPLY a*b = %d",a*b);  // int   and  int = int
    printf("\nDIVIDE   a/c = %f",a/c);  // int and float  = float
    printf("\nMODULUS a//b = %d",a%b);// only int can perform in modulus(%) so int and int = int


    // RELATIONAL OPERATOR
    // *******************

    //    ==    Is equal to
    //    !=    Is not equal to
    //    <     Less than
    //    >     Greater than
    //    >=    Greater than equal to
    //    <=    Less than equal to

    // Now in c programming there is boolean/logica representation   
    //                                    is  True = 1 and false = 0

    printf("\n%d==%d  Is equal to : %d",a,b, a==b);
    printf("\n%d!=%d  Is not equal to : %d",a,b, a!=b);
    printf("\n%d <%d  Less than : %d",a,b, a<b);
    printf("\n%d >%d  Greater than : %d",a,b, a>b);
    printf("\n%d>=%d  Greater than equal to : %d",a,b, a>=b);
    printf("\n%d<=%d  Greater than equal to : %d",a,b, a<=b);



    // LOGICAL OPERATORS
    // *******************

    // &&(AND)   BOTH conndition to be true = 1, if not then false = 0

    // ||(OR)   ONE conndition to be true = 1, if BOth conditions are false = 0

    // !(NOT)    REVERSE THE output  TRUE = 0 , FALSE = 1


    // ASSIGNMENT OPERATOR
    // *******************

    //     =       Assign Operator
    //     +=      Add And Assign
    //     -=      Sub And Assign
    //     *=      Multi And Assign
    //     /=      Divide And Assign



    // =  Assign Operator
    a=3;
    printf("\na=   :%d",a);// 3

    // += Add And Assign
    a+=1;// 3+1 
    printf("\na+=  :%d",a);// 4

    // -= Sub And Assign
    a-=7;// 4-7
    printf("\na-=  :%d",a);// -3

    // *= Multi And Assign
    a*=5;//-3*5
    printf("\na*=  :%d",a);// -15

    // /= Divide And Assign
    a/=5;//-15/5
    printf("\na/=  :%d",a);// -3



    return 0;
}