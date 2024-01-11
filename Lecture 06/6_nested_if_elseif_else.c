#include <stdio.h>
#include <conio.h>

    // 3] NESTED IF ELSE 

    // A 'nested if' is an if statement that is the object of either if (or) an else.
    // 'if' is placed inside another if (or) else.
    
int main()
{


    int a,b,c;

    printf("ENTER THE SCORE OF KAUSHIK = ");
    scanf("%d", &a);

    printf("ENTER THE SCORE OF ANMOL = ");
    scanf("%d", &b);

    printf("ENTER THE SCORE OF CHINMAY = ");
    scanf("%d", &c);

    if (a>b && a>c){
        printf("\nKAUSHIK SCORE %d AND rank 1",a);
        if (b>c){
            printf("\nANMOL SCORE %d AND rank 2",b);
            printf("\nCHINMAY SCORE %d AND rank 3",c);
        }
        else{
            printf("\nCHINMAY SCORE %d AND rank 2",c);
            printf("\nANMOL SCORE %d AND rank 3",b);
        }
        
    }

    else if (b>a && b>c){
        printf("\nANMOL SCORE %d is rank 1",b);
        if (a>c){
            printf("\nKAUSHIK SCORE %d AND rank 2",a);
            printf("\nCHINMAY SCORE %d AND rank 3",c);
        }
        else{
            printf("\nCHINMAY SCORE %d AND rank 2",c);
            printf("\nKAUSHIK SCORE %d AND rank 3",a);
        }
    }
    else{
        printf("\nCHINMAY SCORE %d rank 1",c);
        if (a>b){
            printf("\nKAUSHIK SCORE %d AND rank 2",a);
            printf("\nANMOL SCORE %d AND rank 3",b);
        }
        else{
            printf("\nANMOL SCORE %d AND rank 2",b);
            printf("\nKAUSHIK SCORE %d AND rank 3",a);
        }
    }
    
    return 0;
}