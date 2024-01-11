//                              1D ARRAY STRINGS
//                              ****************

// String is an array of characters. Data of the same type are stored in an array for example,
// Integers can be stored in an integer array, similarly,
// a group of characters can be stored in a character array. Character arrays are also called strings.
// A string is a one-dimensional array of characters that is terminated by a null (‘\0’).

// STRING : ARRAY OF CHARACTERS TERMINATED BY NULL ('\0') CHARACTER.

// The null character ‘\0’ looks like two characters, but it is actually only one character,
// with the \ indicating that what follows it is something special.
// Character array elements are stored in contiguous memory locations.

#include <stdio.h>

int main()
{
    // char word[] = {'a','b','c','d','e','\0'};
    char word[5] = {'a','b','c','d','e'}; // it inisialises by default '\0' at end
    //                                       only seperate elements of array

    // output using LOOP
    printf("\nUsing LOOP word :");
    for (int i = 0; i < 6; i++)
    {
        printf("%c",word[i]);
    }

    // output using %s format specifier
    printf("\nUsing %%s (word) : %s", word);

    // output using puts(char_array) single argument function
    printf("\nUsing puts(word) : ");
    puts(word);

    printf("\nTaking input Using gets word : ");
    // User input using gets(char_array) single argument function
    gets(word);
    printf("\nUser puts(word) : ");
    puts(word);

    // User input can be done using scanf function but blank spaces cannot be inputed from the user.
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the character at (%d) : ", i);
        scanf(" %c", &word[i]);
        // include blank space before %c for proper execution of code.
    }
    printf("\nUser after scanf puts(word) : ");
    puts(word);
    
    // it is better to use gets function.

    // Array of character can also be stored in this way using double quotes " ".

    // char strr[5] = "ABCDE";
    
    //     printf("\nUsing LOOP strr :");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c",strr[i]);
    // }

    // printf("\nUsing %%s (strr) : %s", strr);
    // printf("\nUsing puts(strr) : ");
    // puts(strr);

// Buffer Overflow: The provided code snippet initializes an array strr with a length of 5 characters,
// but the string "ABCDE" actually requires 6 characters including the null-terminator '\0'.
// If your compiler or runtime environment is not catching this buffer overflow,
// it might lead to unexpected behavior.

    // SO
    char strr[6] = "ABCDE"; // By default only the remaining array element is '\0'.

    printf("\nUsing %%s (strr) : %s", strr);
    printf("\nUsing puts(strr) : ");
    puts(strr);

        printf("\nUsing LOOP strr : ");
    for (int i = 0; i < 6; i++)
    {
        printf("%c",strr[i]);
    }

    char name[10];

    printf("\nEnter your Name : ");
    gets(name);
    printf("\nYour Name is : ");
    puts(name);

// NOTE :

// But in the word example its different.
// char word[5] = {'a','b','c','d','e'};
// Because each character element is seperately inisialised and at end default \0.
// So there is no buffer overflow.

    return 0;
}